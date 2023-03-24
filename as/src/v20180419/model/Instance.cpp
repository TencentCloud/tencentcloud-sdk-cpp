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

#include <tencentcloud/as/v20180419/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_autoScalingGroupIdHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_lifeCycleStateHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_protectedFromScaleInHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_creationTypeHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_warmupStatusHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false)
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

    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationName") && !value["LaunchConfigurationName"].IsNull())
    {
        if (!value["LaunchConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LaunchConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationName = string(value["LaunchConfigurationName"].GetString());
        m_launchConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleState") && !value["LifeCycleState"].IsNull())
    {
        if (!value["LifeCycleState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LifeCycleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleState = string(value["LifeCycleState"].GetString());
        m_lifeCycleStateHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.HealthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = string(value["HealthStatus"].GetString());
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectedFromScaleIn") && !value["ProtectedFromScaleIn"].IsNull())
    {
        if (!value["ProtectedFromScaleIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ProtectedFromScaleIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protectedFromScaleIn = value["ProtectedFromScaleIn"].GetBool();
        m_protectedFromScaleInHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreationType") && !value["CreationType"].IsNull())
    {
        if (!value["CreationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationType = string(value["CreationType"].GetString());
        m_creationTypeHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("VersionNumber") && !value["VersionNumber"].IsNull())
    {
        if (!value["VersionNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.VersionNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumber = value["VersionNumber"].GetInt64();
        m_versionNumberHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupName") && !value["AutoScalingGroupName"].IsNull())
    {
        if (!value["AutoScalingGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AutoScalingGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupName = string(value["AutoScalingGroupName"].GetString());
        m_autoScalingGroupNameHasBeenSet = true;
    }

    if (value.HasMember("WarmupStatus") && !value["WarmupStatus"].IsNull())
    {
        if (!value["WarmupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.WarmupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warmupStatus = string(value["WarmupStatus"].GetString());
        m_warmupStatusHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupIds") && !value["DisasterRecoverGroupIds"].IsNull())
    {
        if (!value["DisasterRecoverGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.DisasterRecoverGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DisasterRecoverGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_disasterRecoverGroupIds.push_back((*itr).GetString());
        }
        m_disasterRecoverGroupIdsHasBeenSet = true;
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

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeCycleState.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedFromScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedFromScaleIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedFromScaleIn, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationType.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionNumber, allocator);
    }

    if (m_autoScalingGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_warmupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warmupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

string Instance::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void Instance::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool Instance::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string Instance::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void Instance::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool Instance::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string Instance::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void Instance::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool Instance::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

string Instance::GetLifeCycleState() const
{
    return m_lifeCycleState;
}

void Instance::SetLifeCycleState(const string& _lifeCycleState)
{
    m_lifeCycleState = _lifeCycleState;
    m_lifeCycleStateHasBeenSet = true;
}

bool Instance::LifeCycleStateHasBeenSet() const
{
    return m_lifeCycleStateHasBeenSet;
}

string Instance::GetHealthStatus() const
{
    return m_healthStatus;
}

void Instance::SetHealthStatus(const string& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool Instance::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

bool Instance::GetProtectedFromScaleIn() const
{
    return m_protectedFromScaleIn;
}

void Instance::SetProtectedFromScaleIn(const bool& _protectedFromScaleIn)
{
    m_protectedFromScaleIn = _protectedFromScaleIn;
    m_protectedFromScaleInHasBeenSet = true;
}

bool Instance::ProtectedFromScaleInHasBeenSet() const
{
    return m_protectedFromScaleInHasBeenSet;
}

string Instance::GetZone() const
{
    return m_zone;
}

void Instance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Instance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Instance::GetCreationType() const
{
    return m_creationType;
}

void Instance::SetCreationType(const string& _creationType)
{
    m_creationType = _creationType;
    m_creationTypeHasBeenSet = true;
}

bool Instance::CreationTypeHasBeenSet() const
{
    return m_creationTypeHasBeenSet;
}

string Instance::GetAddTime() const
{
    return m_addTime;
}

void Instance::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Instance::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string Instance::GetInstanceType() const
{
    return m_instanceType;
}

void Instance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Instance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t Instance::GetVersionNumber() const
{
    return m_versionNumber;
}

void Instance::SetVersionNumber(const int64_t& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool Instance::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

string Instance::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void Instance::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool Instance::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

string Instance::GetWarmupStatus() const
{
    return m_warmupStatus;
}

void Instance::SetWarmupStatus(const string& _warmupStatus)
{
    m_warmupStatus = _warmupStatus;
    m_warmupStatusHasBeenSet = true;
}

bool Instance::WarmupStatusHasBeenSet() const
{
    return m_warmupStatusHasBeenSet;
}

vector<string> Instance::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void Instance::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool Instance::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

