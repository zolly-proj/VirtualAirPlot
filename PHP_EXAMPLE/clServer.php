<?php
ini_set('include_path',
ini_get('include_path') . PATH_SEPARATOR . 'D:/ice-3.7.10/ice-3.7.10/php/lib');
require_once 'Ice.php';
require_once ('ICE_ServerApplication.php');
require_once ('ICE_LogApplication.php');

class clServer
{
	public $serverName = "192.168.1.147";
	public $portNumber = "5050";
	public $have_ssl = false;
	
	public $portLogNumber = "5001";
	
	public $logNumber = "2510";

	public $communicator = null;
	public $p = null;
	public $UVServerApp = null;
	
	public $comLog = null;
	public $pLog = null;
	public $ServerLog = null;

	function clServer_Create_Connection()
	{
		try
		{
			$this->communicator = Ice\initialize();
			$this->comLog = Ice\initialize();
			
			$this->p = $this->communicator->stringToProxy("ServerAppServer:tcp -h " . $this->serverName . " -p " . $this->portNumber . ":udp -h " . $this->serverName . " -p " . $this->portNumber);
			$this->pLog = $this->comLog->stringToProxy("LogAppServer:tcp -h " . $this->serverName . " -p " . $this->portLogNumber . ":udp -h " . $this->serverName . " -p " . $this->portLogNumber);
			
			$this->UVServerApp = UVServerAppServer\ServerAppServerPrxHelper::uncheckedCast($this->p);
			$this->ServerLog = UVLogAppServer\LogAppServerPrxHelper::uncheckedCast($this->pLog);
			
			return true;
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return false;
		}
		
	}
	function clServer_Close_Connection()
	{
		if($this->communicator)
		{
			$this->communicator->destroy(); // Clean up
		}
		if($this->comLog)
		{
			$this->comLog->destroy(); // Clean up
		}		
	}
	function clServer_get_id_by_props($table,$props,$values,$typevalues,$logexps)
	{

			$loReturnIds = array();
			$loReturnMessage = "";
			try
			{
				$loResult = $this->UVServerApp->getFromTableDatbaseByProperty($table,"0","0",$props,$values,$typevalues,$logexps,$loReturnIds,$loReturnMessage);
				
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_get_id_by_prop -> " . $loReturnMessage);
				//echo $loResult;
				//echo '<script type="text/javascript"> window.onload = function () { alert("' . $loReturnIds . 'd"); } </script>'; 
				if ($loResult)
				{
					if (sizeof($loReturnIds) > 0)
						return $loReturnIds[0];
					else 
						return null;
				}
				else
				{
					return null;
				}
			}
			catch(Ice\LocalException $ex)
			{
				echo "<pre>\n";
				print_r($ex);
				echo "</pre>\n";
				return null;
			}
	}
	function clServer_get_ids_by_props($table,$props,$values,$typevalues,$logexps,&$paReturnIds)
	{

			$loReturnIds = array();
			$loReturnMessage = "";
			try
			{
				if ($this->UVServerApp->getFromTableDatbaseByProperty($table,"0","0",$props,$values,$typevalues,$logexps,$paReturnIds,$loReturnMessage))
				{
					$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_get_ids_by_props -> " . $loReturnMessage);
					if (sizeof($paReturnIds) > 0)
					{
						
						return true;
					}
					else 
						return false;
				}
				else
				{
					$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_get_ids_by_props -> " . $loReturnMessage);
					return false;
				}
			}
			catch(Ice\LocalException $ex)
			{
				echo "<pre>\n";
				print_r($ex);
				echo "</pre>\n";
				return false;
			}		
		
	}
	
	function clServer_getFromTableDatabaseById($table,$id,$props,&$values)
	{
		$loReturnMessage = "";										
		try
		{

			if(!$this->UVServerApp->getFromTableDatabaseById($table,$id,$props,$values,$loReturnMessage))
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getFromTableDatabaseById -> " . $loReturnMessage);										
				return null;
			}
			else
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getFromTableDatabaseById -> " . $loReturnMessage);										
				return $values;
			}
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return null;
		}	
	}
	function clServer_getAllPropertiesFromTable($table,&$props,&$alias,&$type,&$extra,&$reference)
	{
		$loReturnMessage = "";										
		try
		{

			if(!$this->UVServerApp->getAllPropertiesFromTable($table,$props,$alias,$type,$extra,$reference,$loReturnMessage))
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getAllPropertiesFromTable -> " . $loReturnMessage);										
				return false;
			}
			else
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getAllPropertiesFromTable -> " . $loReturnMessage);										
				return true;
			}
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return false;
		}	
	}	
	function clServer_insertIntoTableDatabase($table,&$props,&$values,&$typevalues)
	{
		$loReturnMessage = "";										
		try
		{

			if(!$this->UVServerApp->insertIntoTableDatabase($table,$props,$values,$typevalues,$loReturnMessage))
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_insertIntoTableDatabase -> " . $loReturnMessage);										
				return false;
			}
			else
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_insertIntoTableDatabase -> " . $loReturnMessage);										
				return true;
			}
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return false;
		}	
	}
	function clServer_updateIntoTableDatabase($table,$id,&$props,&$values,&$typevalues)
	{
		$loReturnMessage = "";										
		try
		{

			if(!$this->UVServerApp->updateIntoTableDatabase($table,$id,$props,$values,$typevalues,$loReturnMessage))
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_updateIntoTableDatabase -> " . $loReturnMessage);										
				return false;
			}
			else
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_updateIntoTableDatabase -> " . $loReturnMessage);										
				return true;
			}
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return false;
		}	
	}

	function clServer_getFromTableDatabaseGeneral($table, $from, $to, &$ids, &$names)
	{
		$loReturnMessage = "";										
		try
		{
			if(!$this->UVServerApp->getFromTableDatabaseGeneral($table,$from,$to,$ids,$names,$loReturnMessage))
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getFromTableDatabaseGeneral -> " . $loReturnMessage);										
				return false;
			}
			else
			{
				$this->ServerLog->insertItem($this->logNumber,"PHP","PHP","clServer_getFromTableDatabaseGeneral -> " . $loReturnMessage);										
				return true;
			}
		}
		catch(Ice\LocalException $ex)
		{
			echo "<pre>\n";
			print_r($ex);
			echo "</pre>\n";
			return false;
		}		
	}





	
}	 
?>