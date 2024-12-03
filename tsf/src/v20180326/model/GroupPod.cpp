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

#include <tencentcloud/tsf/v20180326/model/GroupPod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupPod::GroupPod() :
    m_podNameHasBeenSet(false),
    m_podIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_readyCountHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_serviceInstanceStatusHasBeenSet(false),
    m_instanceAvailableStatusHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_nodeInstanceIdHasBeenSet(false),
    m_specTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome GroupPod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("ReadyCount") && !value["ReadyCount"].IsNull())
    {
        if (!value["ReadyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.ReadyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyCount = value["ReadyCount"].GetInt64();
        m_readyCountHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ServiceInstanceStatus") && !value["ServiceInstanceStatus"].IsNull())
    {
        if (!value["ServiceInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.ServiceInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceInstanceStatus = string(value["ServiceInstanceStatus"].GetString());
        m_serviceInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceAvailableStatus") && !value["InstanceAvailableStatus"].IsNull())
    {
        if (!value["InstanceAvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.InstanceAvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAvailableStatus = string(value["InstanceAvailableStatus"].GetString());
        m_instanceAvailableStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeInstanceId") && !value["NodeInstanceId"].IsNull())
    {
        if (!value["NodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.NodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInstanceId = string(value["NodeInstanceId"].GetString());
        m_nodeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SpecTotalCount") && !value["SpecTotalCount"].IsNull())
    {
        if (!value["SpecTotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPod.SpecTotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specTotalCount = string(value["SpecTotalCount"].GetString());
        m_specTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupPod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
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

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_readyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyCount, allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAvailableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceAvailableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_specTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specTotalCount.c_str(), allocator).Move(), allocator);
    }

}


string GroupPod::GetPodName() const
{
    return m_podName;
}

void GroupPod::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool GroupPod::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string GroupPod::GetPodId() const
{
    return m_podId;
}

void GroupPod::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool GroupPod::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

string GroupPod::GetStatus() const
{
    return m_status;
}

void GroupPod::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GroupPod::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GroupPod::GetReason() const
{
    return m_reason;
}

void GroupPod::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool GroupPod::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string GroupPod::GetNodeIp() const
{
    return m_nodeIp;
}

void GroupPod::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool GroupPod::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string GroupPod::GetIp() const
{
    return m_ip;
}

void GroupPod::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool GroupPod::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t GroupPod::GetRestartCount() const
{
    return m_restartCount;
}

void GroupPod::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool GroupPod::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

int64_t GroupPod::GetReadyCount() const
{
    return m_readyCount;
}

void GroupPod::SetReadyCount(const int64_t& _readyCount)
{
    m_readyCount = _readyCount;
    m_readyCountHasBeenSet = true;
}

bool GroupPod::ReadyCountHasBeenSet() const
{
    return m_readyCountHasBeenSet;
}

string GroupPod::GetRuntime() const
{
    return m_runtime;
}

void GroupPod::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool GroupPod::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string GroupPod::GetCreatedAt() const
{
    return m_createdAt;
}

void GroupPod::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool GroupPod::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string GroupPod::GetServiceInstanceStatus() const
{
    return m_serviceInstanceStatus;
}

void GroupPod::SetServiceInstanceStatus(const string& _serviceInstanceStatus)
{
    m_serviceInstanceStatus = _serviceInstanceStatus;
    m_serviceInstanceStatusHasBeenSet = true;
}

bool GroupPod::ServiceInstanceStatusHasBeenSet() const
{
    return m_serviceInstanceStatusHasBeenSet;
}

string GroupPod::GetInstanceAvailableStatus() const
{
    return m_instanceAvailableStatus;
}

void GroupPod::SetInstanceAvailableStatus(const string& _instanceAvailableStatus)
{
    m_instanceAvailableStatus = _instanceAvailableStatus;
    m_instanceAvailableStatusHasBeenSet = true;
}

bool GroupPod::InstanceAvailableStatusHasBeenSet() const
{
    return m_instanceAvailableStatusHasBeenSet;
}

string GroupPod::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void GroupPod::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool GroupPod::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string GroupPod::GetNodeInstanceId() const
{
    return m_nodeInstanceId;
}

void GroupPod::SetNodeInstanceId(const string& _nodeInstanceId)
{
    m_nodeInstanceId = _nodeInstanceId;
    m_nodeInstanceIdHasBeenSet = true;
}

bool GroupPod::NodeInstanceIdHasBeenSet() const
{
    return m_nodeInstanceIdHasBeenSet;
}

string GroupPod::GetSpecTotalCount() const
{
    return m_specTotalCount;
}

void GroupPod::SetSpecTotalCount(const string& _specTotalCount)
{
    m_specTotalCount = _specTotalCount;
    m_specTotalCountHasBeenSet = true;
}

bool GroupPod::SpecTotalCountHasBeenSet() const
{
    return m_specTotalCountHasBeenSet;
}

