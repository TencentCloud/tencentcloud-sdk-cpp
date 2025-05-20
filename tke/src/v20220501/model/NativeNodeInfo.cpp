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

#include <tencentcloud/tke/v20220501/model/NativeNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

NativeNodeInfo::NativeNodeInfo() :
    m_machineNameHasBeenSet(false),
    m_machineStateHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_loginStatusHasBeenSet(false),
    m_isProtectedFromScaleInHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_gPUHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_keyIdsHasBeenSet(false),
    m_gPUParamsHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_securityGroupIDsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_osImageHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome NativeNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineState") && !value["MachineState"].IsNull())
    {
        if (!value["MachineState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.MachineState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineState = string(value["MachineState"].GetString());
        m_machineStateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("LoginStatus") && !value["LoginStatus"].IsNull())
    {
        if (!value["LoginStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.LoginStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginStatus = string(value["LoginStatus"].GetString());
        m_loginStatusHasBeenSet = true;
    }

    if (value.HasMember("IsProtectedFromScaleIn") && !value["IsProtectedFromScaleIn"].IsNull())
    {
        if (!value["IsProtectedFromScaleIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.IsProtectedFromScaleIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProtectedFromScaleIn = value["IsProtectedFromScaleIn"].GetBool();
        m_isProtectedFromScaleInHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("GPU") && !value["GPU"].IsNull())
    {
        if (!value["GPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.GPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gPU = value["GPU"].GetUint64();
        m_gPUHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.KeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }

    if (value.HasMember("GPUParams") && !value["GPUParams"].IsNull())
    {
        if (!value["GPUParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.GPUParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gPUParams.Deserialize(value["GPUParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gPUParamsHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.DataDisks` is not array type"));

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

    if (value.HasMember("SecurityGroupIDs") && !value["SecurityGroupIDs"].IsNull())
    {
        if (!value["SecurityGroupIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.SecurityGroupIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIDs.push_back((*itr).GetString());
        }
        m_securityGroupIDsHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("OsImage") && !value["OsImage"].IsNull())
    {
        if (!value["OsImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.OsImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osImage = string(value["OsImage"].GetString());
        m_osImageHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeNodeInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NativeNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_loginStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isProtectedFromScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProtectedFromScaleIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProtectedFromScaleIn, allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_gPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPU, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
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

    if (m_gPUParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUParams.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_securityGroupIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIDs.begin(); itr != m_securityGroupIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_osImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osImage.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string NativeNodeInfo::GetMachineName() const
{
    return m_machineName;
}

void NativeNodeInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool NativeNodeInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string NativeNodeInfo::GetMachineState() const
{
    return m_machineState;
}

void NativeNodeInfo::SetMachineState(const string& _machineState)
{
    m_machineState = _machineState;
    m_machineStateHasBeenSet = true;
}

bool NativeNodeInfo::MachineStateHasBeenSet() const
{
    return m_machineStateHasBeenSet;
}

string NativeNodeInfo::GetZone() const
{
    return m_zone;
}

void NativeNodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NativeNodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NativeNodeInfo::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void NativeNodeInfo::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool NativeNodeInfo::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string NativeNodeInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void NativeNodeInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool NativeNodeInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string NativeNodeInfo::GetLoginStatus() const
{
    return m_loginStatus;
}

void NativeNodeInfo::SetLoginStatus(const string& _loginStatus)
{
    m_loginStatus = _loginStatus;
    m_loginStatusHasBeenSet = true;
}

bool NativeNodeInfo::LoginStatusHasBeenSet() const
{
    return m_loginStatusHasBeenSet;
}

bool NativeNodeInfo::GetIsProtectedFromScaleIn() const
{
    return m_isProtectedFromScaleIn;
}

void NativeNodeInfo::SetIsProtectedFromScaleIn(const bool& _isProtectedFromScaleIn)
{
    m_isProtectedFromScaleIn = _isProtectedFromScaleIn;
    m_isProtectedFromScaleInHasBeenSet = true;
}

bool NativeNodeInfo::IsProtectedFromScaleInHasBeenSet() const
{
    return m_isProtectedFromScaleInHasBeenSet;
}

string NativeNodeInfo::GetDisplayName() const
{
    return m_displayName;
}

void NativeNodeInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool NativeNodeInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

uint64_t NativeNodeInfo::GetCPU() const
{
    return m_cPU;
}

void NativeNodeInfo::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool NativeNodeInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t NativeNodeInfo::GetGPU() const
{
    return m_gPU;
}

void NativeNodeInfo::SetGPU(const uint64_t& _gPU)
{
    m_gPU = _gPU;
    m_gPUHasBeenSet = true;
}

bool NativeNodeInfo::GPUHasBeenSet() const
{
    return m_gPUHasBeenSet;
}

string NativeNodeInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void NativeNodeInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool NativeNodeInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string NativeNodeInfo::GetPayMode() const
{
    return m_payMode;
}

void NativeNodeInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool NativeNodeInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t NativeNodeInfo::GetMemory() const
{
    return m_memory;
}

void NativeNodeInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool NativeNodeInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

Disk NativeNodeInfo::GetSystemDisk() const
{
    return m_systemDisk;
}

void NativeNodeInfo::SetSystemDisk(const Disk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool NativeNodeInfo::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

InternetAccessible NativeNodeInfo::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void NativeNodeInfo::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool NativeNodeInfo::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string NativeNodeInfo::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void NativeNodeInfo::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool NativeNodeInfo::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string NativeNodeInfo::GetLanIp() const
{
    return m_lanIp;
}

void NativeNodeInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool NativeNodeInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string NativeNodeInfo::GetInstanceType() const
{
    return m_instanceType;
}

void NativeNodeInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NativeNodeInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string NativeNodeInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void NativeNodeInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool NativeNodeInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string NativeNodeInfo::GetWanIp() const
{
    return m_wanIp;
}

void NativeNodeInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool NativeNodeInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

vector<string> NativeNodeInfo::GetKeyIds() const
{
    return m_keyIds;
}

void NativeNodeInfo::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool NativeNodeInfo::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

GPUParams NativeNodeInfo::GetGPUParams() const
{
    return m_gPUParams;
}

void NativeNodeInfo::SetGPUParams(const GPUParams& _gPUParams)
{
    m_gPUParams = _gPUParams;
    m_gPUParamsHasBeenSet = true;
}

bool NativeNodeInfo::GPUParamsHasBeenSet() const
{
    return m_gPUParamsHasBeenSet;
}

vector<DataDisk> NativeNodeInfo::GetDataDisks() const
{
    return m_dataDisks;
}

void NativeNodeInfo::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool NativeNodeInfo::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

vector<string> NativeNodeInfo::GetSecurityGroupIDs() const
{
    return m_securityGroupIDs;
}

void NativeNodeInfo::SetSecurityGroupIDs(const vector<string>& _securityGroupIDs)
{
    m_securityGroupIDs = _securityGroupIDs;
    m_securityGroupIDsHasBeenSet = true;
}

bool NativeNodeInfo::SecurityGroupIDsHasBeenSet() const
{
    return m_securityGroupIDsHasBeenSet;
}

string NativeNodeInfo::GetVpcId() const
{
    return m_vpcId;
}

void NativeNodeInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NativeNodeInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NativeNodeInfo::GetSubnetId() const
{
    return m_subnetId;
}

void NativeNodeInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NativeNodeInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NativeNodeInfo::GetOsImage() const
{
    return m_osImage;
}

void NativeNodeInfo::SetOsImage(const string& _osImage)
{
    m_osImage = _osImage;
    m_osImageHasBeenSet = true;
}

bool NativeNodeInfo::OsImageHasBeenSet() const
{
    return m_osImageHasBeenSet;
}

string NativeNodeInfo::GetMachineType() const
{
    return m_machineType;
}

void NativeNodeInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool NativeNodeInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string NativeNodeInfo::GetInstanceId() const
{
    return m_instanceId;
}

void NativeNodeInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NativeNodeInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

