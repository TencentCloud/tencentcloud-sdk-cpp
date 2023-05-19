/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tcss/v20201101/model/ServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ServiceInfo::ServiceInfo() :
    m_serviceIDHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_listenHasBeenSet(false),
    m_configHasBeenSet(false),
    m_processCntHasBeenSet(false),
    m_accessLogHasBeenSet(false),
    m_errorLogHasBeenSet(false),
    m_dataPathHasBeenSet(false),
    m_webRootHasBeenSet(false),
    m_pidsHasBeenSet(false),
    m_mainTypeHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false)
{
}

CoreInternalOutcome ServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("Listen") && !value["Listen"].IsNull())
    {
        if (!value["Listen"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Listen` is not array type"));

        const rapidjson::Value &tmpValue = value["Listen"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_listen.push_back((*itr).GetString());
        }
        m_listenHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("ProcessCnt") && !value["ProcessCnt"].IsNull())
    {
        if (!value["ProcessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ProcessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCnt = value["ProcessCnt"].GetUint64();
        m_processCntHasBeenSet = true;
    }

    if (value.HasMember("AccessLog") && !value["AccessLog"].IsNull())
    {
        if (!value["AccessLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.AccessLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessLog = string(value["AccessLog"].GetString());
        m_accessLogHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("DataPath") && !value["DataPath"].IsNull())
    {
        if (!value["DataPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.DataPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataPath = string(value["DataPath"].GetString());
        m_dataPathHasBeenSet = true;
    }

    if (value.HasMember("WebRoot") && !value["WebRoot"].IsNull())
    {
        if (!value["WebRoot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.WebRoot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webRoot = string(value["WebRoot"].GetString());
        m_webRootHasBeenSet = true;
    }

    if (value.HasMember("Pids") && !value["Pids"].IsNull())
    {
        if (!value["Pids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Pids` is not array type"));

        const rapidjson::Value &tmpValue = value["Pids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_pids.push_back((*itr).GetUint64());
        }
        m_pidsHasBeenSet = true;
    }

    if (value.HasMember("MainType") && !value["MainType"].IsNull())
    {
        if (!value["MainType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.MainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainType = string(value["MainType"].GetString());
        m_mainTypeHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Parameter") && !value["Parameter"].IsNull())
    {
        if (!value["Parameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Parameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameter = string(value["Parameter"].GetString());
        m_parameterHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_listenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_listen.begin(); itr != m_listen.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_processCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCnt, allocator);
    }

    if (m_accessLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessLog.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLog.c_str(), allocator).Move(), allocator);
    }

    if (m_dataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataPath.c_str(), allocator).Move(), allocator);
    }

    if (m_webRootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebRoot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webRoot.c_str(), allocator).Move(), allocator);
    }

    if (m_pidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pids.begin(); itr != m_pids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_mainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainType.c_str(), allocator).Move(), allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameter.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

}


string ServiceInfo::GetServiceID() const
{
    return m_serviceID;
}

void ServiceInfo::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool ServiceInfo::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

string ServiceInfo::GetHostID() const
{
    return m_hostID;
}

void ServiceInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool ServiceInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string ServiceInfo::GetHostIP() const
{
    return m_hostIP;
}

void ServiceInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ServiceInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ServiceInfo::GetContainerName() const
{
    return m_containerName;
}

void ServiceInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ServiceInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string ServiceInfo::GetType() const
{
    return m_type;
}

void ServiceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ServiceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ServiceInfo::GetVersion() const
{
    return m_version;
}

void ServiceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ServiceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ServiceInfo::GetRunAs() const
{
    return m_runAs;
}

void ServiceInfo::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ServiceInfo::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

vector<string> ServiceInfo::GetListen() const
{
    return m_listen;
}

void ServiceInfo::SetListen(const vector<string>& _listen)
{
    m_listen = _listen;
    m_listenHasBeenSet = true;
}

bool ServiceInfo::ListenHasBeenSet() const
{
    return m_listenHasBeenSet;
}

string ServiceInfo::GetConfig() const
{
    return m_config;
}

void ServiceInfo::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ServiceInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

uint64_t ServiceInfo::GetProcessCnt() const
{
    return m_processCnt;
}

void ServiceInfo::SetProcessCnt(const uint64_t& _processCnt)
{
    m_processCnt = _processCnt;
    m_processCntHasBeenSet = true;
}

bool ServiceInfo::ProcessCntHasBeenSet() const
{
    return m_processCntHasBeenSet;
}

string ServiceInfo::GetAccessLog() const
{
    return m_accessLog;
}

void ServiceInfo::SetAccessLog(const string& _accessLog)
{
    m_accessLog = _accessLog;
    m_accessLogHasBeenSet = true;
}

bool ServiceInfo::AccessLogHasBeenSet() const
{
    return m_accessLogHasBeenSet;
}

string ServiceInfo::GetErrorLog() const
{
    return m_errorLog;
}

void ServiceInfo::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool ServiceInfo::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

string ServiceInfo::GetDataPath() const
{
    return m_dataPath;
}

void ServiceInfo::SetDataPath(const string& _dataPath)
{
    m_dataPath = _dataPath;
    m_dataPathHasBeenSet = true;
}

bool ServiceInfo::DataPathHasBeenSet() const
{
    return m_dataPathHasBeenSet;
}

string ServiceInfo::GetWebRoot() const
{
    return m_webRoot;
}

void ServiceInfo::SetWebRoot(const string& _webRoot)
{
    m_webRoot = _webRoot;
    m_webRootHasBeenSet = true;
}

bool ServiceInfo::WebRootHasBeenSet() const
{
    return m_webRootHasBeenSet;
}

vector<uint64_t> ServiceInfo::GetPids() const
{
    return m_pids;
}

void ServiceInfo::SetPids(const vector<uint64_t>& _pids)
{
    m_pids = _pids;
    m_pidsHasBeenSet = true;
}

bool ServiceInfo::PidsHasBeenSet() const
{
    return m_pidsHasBeenSet;
}

string ServiceInfo::GetMainType() const
{
    return m_mainType;
}

void ServiceInfo::SetMainType(const string& _mainType)
{
    m_mainType = _mainType;
    m_mainTypeHasBeenSet = true;
}

bool ServiceInfo::MainTypeHasBeenSet() const
{
    return m_mainTypeHasBeenSet;
}

string ServiceInfo::GetExe() const
{
    return m_exe;
}

void ServiceInfo::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool ServiceInfo::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string ServiceInfo::GetParameter() const
{
    return m_parameter;
}

void ServiceInfo::SetParameter(const string& _parameter)
{
    m_parameter = _parameter;
    m_parameterHasBeenSet = true;
}

bool ServiceInfo::ParameterHasBeenSet() const
{
    return m_parameterHasBeenSet;
}

string ServiceInfo::GetContainerId() const
{
    return m_containerId;
}

void ServiceInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ServiceInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string ServiceInfo::GetHostName() const
{
    return m_hostName;
}

void ServiceInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ServiceInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ServiceInfo::GetPublicIp() const
{
    return m_publicIp;
}

void ServiceInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ServiceInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string ServiceInfo::GetNodeID() const
{
    return m_nodeID;
}

void ServiceInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool ServiceInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string ServiceInfo::GetPodIP() const
{
    return m_podIP;
}

void ServiceInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool ServiceInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string ServiceInfo::GetPodName() const
{
    return m_podName;
}

void ServiceInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ServiceInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ServiceInfo::GetNodeType() const
{
    return m_nodeType;
}

void ServiceInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ServiceInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ServiceInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void ServiceInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool ServiceInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

