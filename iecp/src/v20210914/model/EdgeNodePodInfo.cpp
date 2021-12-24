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

#include <tencentcloud/iecp/v20210914/model/EdgeNodePodInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodePodInfo::EdgeNodePodInfo() :
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memoryRequestHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_clusterIDHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodePodInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("MemoryRequest") && !value["MemoryRequest"].IsNull())
    {
        if (!value["MemoryRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.MemoryRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRequest = string(value["MemoryRequest"].GetString());
        m_memoryRequestHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("WorkloadType") && !value["WorkloadType"].IsNull())
    {
        if (!value["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(value["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.RestartCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetUint64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodePodInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodePodInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

}


string EdgeNodePodInfo::GetName() const
{
    return m_name;
}

void EdgeNodePodInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EdgeNodePodInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EdgeNodePodInfo::GetStatus() const
{
    return m_status;
}

void EdgeNodePodInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeNodePodInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdgeNodePodInfo::GetNodeIp() const
{
    return m_nodeIp;
}

void EdgeNodePodInfo::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool EdgeNodePodInfo::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string EdgeNodePodInfo::GetIp() const
{
    return m_ip;
}

void EdgeNodePodInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool EdgeNodePodInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string EdgeNodePodInfo::GetCpuRequest() const
{
    return m_cpuRequest;
}

void EdgeNodePodInfo::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool EdgeNodePodInfo::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string EdgeNodePodInfo::GetMemoryRequest() const
{
    return m_memoryRequest;
}

void EdgeNodePodInfo::SetMemoryRequest(const string& _memoryRequest)
{
    m_memoryRequest = _memoryRequest;
    m_memoryRequestHasBeenSet = true;
}

bool EdgeNodePodInfo::MemoryRequestHasBeenSet() const
{
    return m_memoryRequestHasBeenSet;
}

string EdgeNodePodInfo::GetNamespace() const
{
    return m_namespace;
}

void EdgeNodePodInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool EdgeNodePodInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string EdgeNodePodInfo::GetWorkloadType() const
{
    return m_workloadType;
}

void EdgeNodePodInfo::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool EdgeNodePodInfo::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string EdgeNodePodInfo::GetWorkloadName() const
{
    return m_workloadName;
}

void EdgeNodePodInfo::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool EdgeNodePodInfo::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string EdgeNodePodInfo::GetStartTime() const
{
    return m_startTime;
}

void EdgeNodePodInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EdgeNodePodInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t EdgeNodePodInfo::GetRestartCount() const
{
    return m_restartCount;
}

void EdgeNodePodInfo::SetRestartCount(const uint64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool EdgeNodePodInfo::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string EdgeNodePodInfo::GetClusterID() const
{
    return m_clusterID;
}

void EdgeNodePodInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool EdgeNodePodInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

