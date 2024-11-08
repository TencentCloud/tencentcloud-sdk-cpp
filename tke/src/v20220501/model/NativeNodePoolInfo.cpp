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

#include <tencentcloud/tke/v20220501/model/NativeNodePoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

NativeNodePoolInfo::NativeNodePoolInfo() :
    m_scalingHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_upgradeSettingsHasBeenSet(false),
    m_autoRepairHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_keyIdsHasBeenSet(false),
    m_managementHasBeenSet(false),
    m_healthCheckPolicyNameHasBeenSet(false),
    m_hostNamePatternHasBeenSet(false),
    m_kubeletArgsHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_runtimeRootDirHasBeenSet(false),
    m_enableAutoscalingHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_readyReplicasHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome NativeNodePoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scaling") && !value["Scaling"].IsNull())
    {
        if (!value["Scaling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.Scaling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scaling.Deserialize(value["Scaling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scalingHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("UpgradeSettings") && !value["UpgradeSettings"].IsNull())
    {
        if (!value["UpgradeSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.UpgradeSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upgradeSettings.Deserialize(value["UpgradeSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upgradeSettingsHasBeenSet = true;
    }

    if (value.HasMember("AutoRepair") && !value["AutoRepair"].IsNull())
    {
        if (!value["AutoRepair"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.AutoRepair` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRepair = value["AutoRepair"].GetBool();
        m_autoRepairHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.KeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }

    if (value.HasMember("Management") && !value["Management"].IsNull())
    {
        if (!value["Management"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.Management` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_management.Deserialize(value["Management"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_managementHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPolicyName") && !value["HealthCheckPolicyName"].IsNull())
    {
        if (!value["HealthCheckPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.HealthCheckPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPolicyName = string(value["HealthCheckPolicyName"].GetString());
        m_healthCheckPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("HostNamePattern") && !value["HostNamePattern"].IsNull())
    {
        if (!value["HostNamePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.HostNamePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostNamePattern = string(value["HostNamePattern"].GetString());
        m_hostNamePatternHasBeenSet = true;
    }

    if (value.HasMember("KubeletArgs") && !value["KubeletArgs"].IsNull())
    {
        if (!value["KubeletArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.KubeletArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeletArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kubeletArgs.push_back((*itr).GetString());
        }
        m_kubeletArgsHasBeenSet = true;
    }

    if (value.HasMember("Lifecycle") && !value["Lifecycle"].IsNull())
    {
        if (!value["Lifecycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.Lifecycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycle.Deserialize(value["Lifecycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleHasBeenSet = true;
    }

    if (value.HasMember("RuntimeRootDir") && !value["RuntimeRootDir"].IsNull())
    {
        if (!value["RuntimeRootDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.RuntimeRootDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeRootDir = string(value["RuntimeRootDir"].GetString());
        m_runtimeRootDirHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoscaling") && !value["EnableAutoscaling"].IsNull())
    {
        if (!value["EnableAutoscaling"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.EnableAutoscaling` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoscaling = value["EnableAutoscaling"].GetBool();
        m_enableAutoscalingHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.InstanceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceTypes.push_back((*itr).GetString());
        }
        m_instanceTypesHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("ReadyReplicas") && !value["ReadyReplicas"].IsNull())
    {
        if (!value["ReadyReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.ReadyReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyReplicas = value["ReadyReplicas"].GetInt64();
        m_readyReplicasHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodePoolInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NativeNodePoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scalingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scaling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upgradeSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upgradeSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRepair, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_managementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Management";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_management.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthCheckPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNamePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNamePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostNamePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeletArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeletArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kubeletArgs.begin(); itr != m_kubeletArgs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lifecycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lifecycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_runtimeRootDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeRootDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeRootDir.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoscalingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoscaling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoscaling, allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_readyReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyReplicas, allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


MachineSetScaling NativeNodePoolInfo::GetScaling() const
{
    return m_scaling;
}

void NativeNodePoolInfo::SetScaling(const MachineSetScaling& _scaling)
{
    m_scaling = _scaling;
    m_scalingHasBeenSet = true;
}

bool NativeNodePoolInfo::ScalingHasBeenSet() const
{
    return m_scalingHasBeenSet;
}

vector<string> NativeNodePoolInfo::GetSubnetIds() const
{
    return m_subnetIds;
}

void NativeNodePoolInfo::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool NativeNodePoolInfo::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<string> NativeNodePoolInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void NativeNodePoolInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool NativeNodePoolInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

MachineUpgradeSettings NativeNodePoolInfo::GetUpgradeSettings() const
{
    return m_upgradeSettings;
}

void NativeNodePoolInfo::SetUpgradeSettings(const MachineUpgradeSettings& _upgradeSettings)
{
    m_upgradeSettings = _upgradeSettings;
    m_upgradeSettingsHasBeenSet = true;
}

bool NativeNodePoolInfo::UpgradeSettingsHasBeenSet() const
{
    return m_upgradeSettingsHasBeenSet;
}

bool NativeNodePoolInfo::GetAutoRepair() const
{
    return m_autoRepair;
}

void NativeNodePoolInfo::SetAutoRepair(const bool& _autoRepair)
{
    m_autoRepair = _autoRepair;
    m_autoRepairHasBeenSet = true;
}

bool NativeNodePoolInfo::AutoRepairHasBeenSet() const
{
    return m_autoRepairHasBeenSet;
}

string NativeNodePoolInfo::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void NativeNodePoolInfo::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool NativeNodePoolInfo::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid NativeNodePoolInfo::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void NativeNodePoolInfo::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool NativeNodePoolInfo::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

Disk NativeNodePoolInfo::GetSystemDisk() const
{
    return m_systemDisk;
}

void NativeNodePoolInfo::SetSystemDisk(const Disk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool NativeNodePoolInfo::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<string> NativeNodePoolInfo::GetKeyIds() const
{
    return m_keyIds;
}

void NativeNodePoolInfo::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool NativeNodePoolInfo::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

ManagementConfig NativeNodePoolInfo::GetManagement() const
{
    return m_management;
}

void NativeNodePoolInfo::SetManagement(const ManagementConfig& _management)
{
    m_management = _management;
    m_managementHasBeenSet = true;
}

bool NativeNodePoolInfo::ManagementHasBeenSet() const
{
    return m_managementHasBeenSet;
}

string NativeNodePoolInfo::GetHealthCheckPolicyName() const
{
    return m_healthCheckPolicyName;
}

void NativeNodePoolInfo::SetHealthCheckPolicyName(const string& _healthCheckPolicyName)
{
    m_healthCheckPolicyName = _healthCheckPolicyName;
    m_healthCheckPolicyNameHasBeenSet = true;
}

bool NativeNodePoolInfo::HealthCheckPolicyNameHasBeenSet() const
{
    return m_healthCheckPolicyNameHasBeenSet;
}

string NativeNodePoolInfo::GetHostNamePattern() const
{
    return m_hostNamePattern;
}

void NativeNodePoolInfo::SetHostNamePattern(const string& _hostNamePattern)
{
    m_hostNamePattern = _hostNamePattern;
    m_hostNamePatternHasBeenSet = true;
}

bool NativeNodePoolInfo::HostNamePatternHasBeenSet() const
{
    return m_hostNamePatternHasBeenSet;
}

vector<string> NativeNodePoolInfo::GetKubeletArgs() const
{
    return m_kubeletArgs;
}

void NativeNodePoolInfo::SetKubeletArgs(const vector<string>& _kubeletArgs)
{
    m_kubeletArgs = _kubeletArgs;
    m_kubeletArgsHasBeenSet = true;
}

bool NativeNodePoolInfo::KubeletArgsHasBeenSet() const
{
    return m_kubeletArgsHasBeenSet;
}

LifecycleConfig NativeNodePoolInfo::GetLifecycle() const
{
    return m_lifecycle;
}

void NativeNodePoolInfo::SetLifecycle(const LifecycleConfig& _lifecycle)
{
    m_lifecycle = _lifecycle;
    m_lifecycleHasBeenSet = true;
}

bool NativeNodePoolInfo::LifecycleHasBeenSet() const
{
    return m_lifecycleHasBeenSet;
}

string NativeNodePoolInfo::GetRuntimeRootDir() const
{
    return m_runtimeRootDir;
}

void NativeNodePoolInfo::SetRuntimeRootDir(const string& _runtimeRootDir)
{
    m_runtimeRootDir = _runtimeRootDir;
    m_runtimeRootDirHasBeenSet = true;
}

bool NativeNodePoolInfo::RuntimeRootDirHasBeenSet() const
{
    return m_runtimeRootDirHasBeenSet;
}

bool NativeNodePoolInfo::GetEnableAutoscaling() const
{
    return m_enableAutoscaling;
}

void NativeNodePoolInfo::SetEnableAutoscaling(const bool& _enableAutoscaling)
{
    m_enableAutoscaling = _enableAutoscaling;
    m_enableAutoscalingHasBeenSet = true;
}

bool NativeNodePoolInfo::EnableAutoscalingHasBeenSet() const
{
    return m_enableAutoscalingHasBeenSet;
}

vector<string> NativeNodePoolInfo::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void NativeNodePoolInfo::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool NativeNodePoolInfo::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

int64_t NativeNodePoolInfo::GetReplicas() const
{
    return m_replicas;
}

void NativeNodePoolInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool NativeNodePoolInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t NativeNodePoolInfo::GetReadyReplicas() const
{
    return m_readyReplicas;
}

void NativeNodePoolInfo::SetReadyReplicas(const int64_t& _readyReplicas)
{
    m_readyReplicas = _readyReplicas;
    m_readyReplicasHasBeenSet = true;
}

bool NativeNodePoolInfo::ReadyReplicasHasBeenSet() const
{
    return m_readyReplicasHasBeenSet;
}

InternetAccessible NativeNodePoolInfo::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void NativeNodePoolInfo::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool NativeNodePoolInfo::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

vector<DataDisk> NativeNodePoolInfo::GetDataDisks() const
{
    return m_dataDisks;
}

void NativeNodePoolInfo::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool NativeNodePoolInfo::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

string NativeNodePoolInfo::GetMachineType() const
{
    return m_machineType;
}

void NativeNodePoolInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool NativeNodePoolInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

