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

#include <tencentcloud/tke/v20180525/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_drainStatusHasBeenSet(false),
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lanIPHasBeenSet(false),
    m_nodePoolIdHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("DrainStatus") && !value["DrainStatus"].IsNull())
    {
        if (!value["DrainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DrainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drainStatus = string(value["DrainStatus"].GetString());
        m_drainStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceAdvancedSettings") && !value["InstanceAdvancedSettings"].IsNull())
    {
        if (!value["InstanceAdvancedSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceAdvancedSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettings.Deserialize(value["InstanceAdvancedSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("LanIP") && !value["LanIP"].IsNull())
    {
        if (!value["LanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIP = string(value["LanIP"].GetString());
        m_lanIPHasBeenSet = true;
    }

    if (value.HasMember("NodePoolId") && !value["NodePoolId"].IsNull())
    {
        if (!value["NodePoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NodePoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodePoolId = string(value["NodePoolId"].GetString());
        m_nodePoolIdHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_drainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodePoolId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceRole() const
{
    return m_instanceRole;
}

void Instance::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool Instance::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string Instance::GetFailedReason() const
{
    return m_failedReason;
}

void Instance::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool Instance::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string Instance::GetInstanceState() const
{
    return m_instanceState;
}

void Instance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Instance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string Instance::GetDrainStatus() const
{
    return m_drainStatus;
}

void Instance::SetDrainStatus(const string& _drainStatus)
{
    m_drainStatus = _drainStatus;
    m_drainStatusHasBeenSet = true;
}

bool Instance::DrainStatusHasBeenSet() const
{
    return m_drainStatusHasBeenSet;
}

InstanceAdvancedSettings Instance::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void Instance::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool Instance::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

string Instance::GetCreatedTime() const
{
    return m_createdTime;
}

void Instance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Instance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Instance::GetLanIP() const
{
    return m_lanIP;
}

void Instance::SetLanIP(const string& _lanIP)
{
    m_lanIP = _lanIP;
    m_lanIPHasBeenSet = true;
}

bool Instance::LanIPHasBeenSet() const
{
    return m_lanIPHasBeenSet;
}

string Instance::GetNodePoolId() const
{
    return m_nodePoolId;
}

void Instance::SetNodePoolId(const string& _nodePoolId)
{
    m_nodePoolId = _nodePoolId;
    m_nodePoolIdHasBeenSet = true;
}

bool Instance::NodePoolIdHasBeenSet() const
{
    return m_nodePoolIdHasBeenSet;
}

string Instance::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void Instance::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool Instance::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

