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

#include <tencentcloud/tcss/v20201101/model/SuperNodePodListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SuperNodePodListItem::SuperNodePodListItem() :
    m_podNameHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_deploymentIDHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_relateContainerCountHasBeenSet(false),
    m_runningTimeHasBeenSet(false),
    m_podUidHasBeenSet(false),
    m_chargeCoresCntHasBeenSet(false),
    m_defendStatusHasBeenSet(false)
{
}

CoreInternalOutcome SuperNodePodListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.CpuRequest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = value["CpuRequest"].GetInt64();
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.CpuLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = value["CpuLimit"].GetInt64();
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.MemRequest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = value["MemRequest"].GetInt64();
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.MemLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = value["MemLimit"].GetInt64();
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("DeploymentName") && !value["DeploymentName"].IsNull())
    {
        if (!value["DeploymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.DeploymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentName = string(value["DeploymentName"].GetString());
        m_deploymentNameHasBeenSet = true;
    }

    if (value.HasMember("DeploymentID") && !value["DeploymentID"].IsNull())
    {
        if (!value["DeploymentID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.DeploymentID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentID = string(value["DeploymentID"].GetString());
        m_deploymentIDHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RelateContainerCount") && !value["RelateContainerCount"].IsNull())
    {
        if (!value["RelateContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.RelateContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relateContainerCount = value["RelateContainerCount"].GetUint64();
        m_relateContainerCountHasBeenSet = true;
    }

    if (value.HasMember("RunningTime") && !value["RunningTime"].IsNull())
    {
        if (!value["RunningTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.RunningTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runningTime = string(value["RunningTime"].GetString());
        m_runningTimeHasBeenSet = true;
    }

    if (value.HasMember("PodUid") && !value["PodUid"].IsNull())
    {
        if (!value["PodUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.PodUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podUid = string(value["PodUid"].GetString());
        m_podUidHasBeenSet = true;
    }

    if (value.HasMember("ChargeCoresCnt") && !value["ChargeCoresCnt"].IsNull())
    {
        if (!value["ChargeCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.ChargeCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCoresCnt = value["ChargeCoresCnt"].GetUint64();
        m_chargeCoresCntHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodePodListItem.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuperNodePodListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuRequest, allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuLimit, allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memRequest, allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memLimit, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentID.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_relateContainerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateContainerCount, allocator);
    }

    if (m_runningTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runningTime.c_str(), allocator).Move(), allocator);
    }

    if (m_podUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podUid.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCoresCnt, allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

}


string SuperNodePodListItem::GetPodName() const
{
    return m_podName;
}

void SuperNodePodListItem::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool SuperNodePodListItem::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string SuperNodePodListItem::GetPodIP() const
{
    return m_podIP;
}

void SuperNodePodListItem::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool SuperNodePodListItem::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string SuperNodePodListItem::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void SuperNodePodListItem::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool SuperNodePodListItem::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string SuperNodePodListItem::GetStatus() const
{
    return m_status;
}

void SuperNodePodListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SuperNodePodListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SuperNodePodListItem::GetCpuRequest() const
{
    return m_cpuRequest;
}

void SuperNodePodListItem::SetCpuRequest(const int64_t& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool SuperNodePodListItem::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

int64_t SuperNodePodListItem::GetCpuLimit() const
{
    return m_cpuLimit;
}

void SuperNodePodListItem::SetCpuLimit(const int64_t& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool SuperNodePodListItem::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

int64_t SuperNodePodListItem::GetMemRequest() const
{
    return m_memRequest;
}

void SuperNodePodListItem::SetMemRequest(const int64_t& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool SuperNodePodListItem::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

int64_t SuperNodePodListItem::GetMemLimit() const
{
    return m_memLimit;
}

void SuperNodePodListItem::SetMemLimit(const int64_t& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool SuperNodePodListItem::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string SuperNodePodListItem::GetNamespace() const
{
    return m_namespace;
}

void SuperNodePodListItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SuperNodePodListItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SuperNodePodListItem::GetDeploymentName() const
{
    return m_deploymentName;
}

void SuperNodePodListItem::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool SuperNodePodListItem::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string SuperNodePodListItem::GetDeploymentID() const
{
    return m_deploymentID;
}

void SuperNodePodListItem::SetDeploymentID(const string& _deploymentID)
{
    m_deploymentID = _deploymentID;
    m_deploymentIDHasBeenSet = true;
}

bool SuperNodePodListItem::DeploymentIDHasBeenSet() const
{
    return m_deploymentIDHasBeenSet;
}

string SuperNodePodListItem::GetStartTime() const
{
    return m_startTime;
}

void SuperNodePodListItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SuperNodePodListItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SuperNodePodListItem::GetCreateTime() const
{
    return m_createTime;
}

void SuperNodePodListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SuperNodePodListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SuperNodePodListItem::GetRelateContainerCount() const
{
    return m_relateContainerCount;
}

void SuperNodePodListItem::SetRelateContainerCount(const uint64_t& _relateContainerCount)
{
    m_relateContainerCount = _relateContainerCount;
    m_relateContainerCountHasBeenSet = true;
}

bool SuperNodePodListItem::RelateContainerCountHasBeenSet() const
{
    return m_relateContainerCountHasBeenSet;
}

string SuperNodePodListItem::GetRunningTime() const
{
    return m_runningTime;
}

void SuperNodePodListItem::SetRunningTime(const string& _runningTime)
{
    m_runningTime = _runningTime;
    m_runningTimeHasBeenSet = true;
}

bool SuperNodePodListItem::RunningTimeHasBeenSet() const
{
    return m_runningTimeHasBeenSet;
}

string SuperNodePodListItem::GetPodUid() const
{
    return m_podUid;
}

void SuperNodePodListItem::SetPodUid(const string& _podUid)
{
    m_podUid = _podUid;
    m_podUidHasBeenSet = true;
}

bool SuperNodePodListItem::PodUidHasBeenSet() const
{
    return m_podUidHasBeenSet;
}

uint64_t SuperNodePodListItem::GetChargeCoresCnt() const
{
    return m_chargeCoresCnt;
}

void SuperNodePodListItem::SetChargeCoresCnt(const uint64_t& _chargeCoresCnt)
{
    m_chargeCoresCnt = _chargeCoresCnt;
    m_chargeCoresCntHasBeenSet = true;
}

bool SuperNodePodListItem::ChargeCoresCntHasBeenSet() const
{
    return m_chargeCoresCntHasBeenSet;
}

string SuperNodePodListItem::GetDefendStatus() const
{
    return m_defendStatus;
}

void SuperNodePodListItem::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool SuperNodePodListItem::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

