#include "clSocketToBeaconThread.h"

clSocketToBeaconThread::clSocketToBeaconThread(int paID, clIceClientLogging *paIceClientLogging, QString paSensor_01_name, QString paSensor_02_name, QObject * parent) : QThread(parent)
{
    try
    {		
		this->meSocketDescriptor = paID;

		meIceClientLogging = paIceClientLogging;
		meSensor_01_name = paSensor_01_name;
		meSensor_02_name = paSensor_02_name;
		
		
		meSocket = new QTcpSocket(this);
		connect(meSocket, SIGNAL(readyRead()), this, SLOT(readyReadSocket()));
		connect(meSocket, SIGNAL(disconnected()), this, SLOT(disconnectedSocket()));
		
		qDebug() << meSocketDescriptor << " Starting thread";

		if(!meSocket->setSocketDescriptor(this->meSocketDescriptor))
		{
			emit error(meSocket->error());
			return;
		}
		qDebug() << meSocketDescriptor << " Client connected";
    }
    catch(const std::exception& ex)
    {
            printf(ex.what());       
    }	
    catch(...)
    {
        printf("clSocketBoxThread::clLogServer(QString paConfigFile) -> error ...");
    }
}

clSocketToBeaconThread::~clSocketToBeaconThread ()
{
	
}


void clSocketToBeaconThread::run()
{
	

    // make this thread a loop
	//while (meSocket->isOpen())
	//{
		
	//}
    exec();
}

void clSocketToBeaconThread::readyReadSocket()
{

		try
		{
			cout << "clSocketToBeaconThread::readyReadSocket->START" << endl;
			QByteArray loData = meSocket->readAll();

			qDebug() << meSocketDescriptor << " Data in: " << endl << convertDataFromSocket(loData) << endl;

			QDomDocument loDomDocument;
			if (!loDomDocument.setContent( convertDataFromSocket(loData).replace("\"","")))
			{
				qDebug() << "Content not set ..." << endl;
				return;
			}
			
			qDebug() << "Incomming data " << endl;
			
			QDomElement loDocElem = loDomDocument.documentElement();
			QDomNode loRootNode = loDocElem.firstChild();
			QDomNode loTablesNode = loDocElem.firstChild();

			//example of xml communication
			//<root><sensor_01 name="" lenght=""><sensor_02 name="" lenght="">
			//<from>lmqskdjmlkfq</from><range>123.25</range><dBm>91.12</dBm>
			while( !loRootNode.isNull())
			{
				QDomElement loRootElemChild = loRootNode.toElement();				
				QDomNode loTablesNode = loRootElemChild.firstChild();
				
				if(loTablesNode.nodeName() == "sensor")
				{

					QDomElement loDocElemChild = loTablesNode.toElement(); // try to convert the node to an element.
					if( !loDocElemChild.isNull() )// the node was really an element.
					{						
						if (loDocElemChild.hasAttribute(QString("name")))
						{
							if (QString(loDocElemChild.attribute("name")).compare(meSensor_01_name) == 0)
							{
								//QString loValue = loDocElemChild.attribute(paAttribute);
								//paValue = &loValue;
								beacon_name_primary = loDocElemChild.attribute("name");
							
								if (loDocElemChild.hasAttribute(QString("lenght")))
								{
									//QString loValue = loDocElemChild.attribute(paAttribute);
									//paValue = &loValue;
									beacon_lenght_primary = loDocElemChild.attribute("lenght").toFloat();
								}
							}
						}
					}
				}
				
				if(loTablesNode.nodeName() == "sensor")
				{

					QDomElement loDocElemChild = loTablesNode.toElement(); // try to convert the node to an element.
					if( !loDocElemChild.isNull() )// the node was really an element.
					{						
						if (loDocElemChild.hasAttribute(QString("name")))
						{
							if (QString(loDocElemChild.attribute("name")).compare(meSensor_02_name) == 0)
							{
								//QString loValue = loDocElemChild.attribute(paAttribute);
								//paValue = &loValue;
								beacon_name_secondary = loDocElemChild.attribute("name");
						
								if (loDocElemChild.hasAttribute(QString("lenght")))
								{
									//QString loValue = loDocElemChild.attribute(paAttribute);
									//paValue = &loValue;
									beacon_lenght_secondary = loDocElemChild.attribute("lenght").toFloat();
								}
							}
						}
					}
				}
				loRootNode = loRootNode.nextSibling();
			}

			
			
	        meIceClientLogging->insertItem("10",QString(QHostInfo::localHostName()),"VirtualAirPlot",QString("Incomming sensor_01 [%1,%2]").arg(QString::number(beacon_lenght_primary)).arg(QString::number(beacon_lenght_secondary)));
			emit dataReaded (beacon_lenght_primary, beacon_name_primary, beacon_lenght_secondary, beacon_name_secondary);
			/*
			meBeacon_lenght_primary = &beacon_lenght_primary;
			meBeacon_lenght_secondary = &beacon_lenght_secondary;
			meBeacon_name_primary = &beacon_name_primary;
			meBeacon_name_secondary = &beacon_name_secondary;
			*/


		}
		catch(...)
		{
			printf("clSocketBoxThread::readyReadSocket() -> error ...");
		}

}
QString clSocketToBeaconThread::convertDataFromSocket(QByteArray paByteArray)
{
	char fixed[10000];
	int index = 0;
	QByteArray::iterator iter = paByteArray.begin();
	while(iter != paByteArray.end())
	{
		QChar c = *iter;
		if (c != '\0' && c != '\n' && c !='"') fixed[index++] = c.toLatin1();
		iter++;
	}
	fixed[index] = '\0';
	
	QStringList loStringList = QString(fixed).split("</object>",QString::SkipEmptyParts);
	
	
	return QString(loStringList.at(0) + QString("</object>"));
}
void clSocketToBeaconThread::disconnectedSocket()
{
    qDebug() << meSocketDescriptor << " Disconnected";
    meSocket->deleteLater();
    exit(0);
}

