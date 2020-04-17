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

#include <tencentcloud/cvm/v20170312/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

Instance::Instance() :
    m_placementHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stopChargingModeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_latestOperationRequestIdHasBeenSet(false),
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_iPv6AddressesHasBeenSet(false),
    m_camRoleNameHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.DataDisks` is not array type"));

        const Value &tmpValue = value["DataDisks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.PrivateIpAddresses` is not array type"));

        const Value &tmpValue = value["PrivateIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.PublicIpAddresses` is not array type"));

        const Value &tmpValue = value["PublicIpAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateCloud") && !value["VirtualPrivateCloud"].IsNull())
    {
        if (!value["VirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.VirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_virtualPrivateCloud.Deserialize(value["VirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_virtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.SecurityGroupIds` is not array type"));

        const Value &tmpValue = value["SecurityGroupIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("StopChargingMode") && !value["StopChargingMode"].IsNull())
    {
        if (!value["StopChargingMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.StopChargingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopChargingMode = string(value["StopChargingMode"].GetString());
        m_stopChargingModeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationRequestId") && !value["LatestOperationRequestId"].IsNull())
    {
        if (!value["LatestOperationRequestId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperationRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationRequestId = string(value["LatestOperationRequestId"].GetString());
        m_latestOperationRequestIdHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupId") && !value["DisasterRecoverGroupId"].IsNull())
    {
        if (!value["DisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.DisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupId = string(value["DisasterRecoverGroupId"].GetString());
        m_disasterRecoverGroupIdHasBeenSet = true;
    }

    if (value.HasMember("IPv6Addresses") && !value["IPv6Addresses"].IsNull())
    {
        if (!value["IPv6Addresses"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.IPv6Addresses` is not array type"));

        const Value &tmpValue = value["IPv6Addresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPv6Addresses.push_back((*itr).GetString());
        }
        m_iPv6AddressesHasBeenSet = true;
    }

    if (value.HasMember("CamRoleName") && !value["CamRoleName"].IsNull())
    {
        if (!value["CamRoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.CamRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_camRoleName = string(value["CamRoleName"].GetString());
        m_camRoleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_virtualPrivateCloudHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stopChargingModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StopChargingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stopChargingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationRequestIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperationRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperationRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6AddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IPv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_iPv6Addresses.begin(); itr != m_iPv6Addresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_camRoleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

}


Placement Instance::GetPlacement() const
{
    return m_placement;
}

void Instance::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool Instance::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
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

int64_t Instance::GetCPU() const
{
    return m_cPU;
}

void Instance::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Instance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

int64_t Instance::GetMemory() const
{
    return m_memory;
}

void Instance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Instance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string Instance::GetRestrictState() const
{
    return m_restrictState;
}

void Instance::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool Instance::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Instance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Instance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

SystemDisk Instance::GetSystemDisk() const
{
    return m_systemDisk;
}

void Instance::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Instance::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> Instance::GetDataDisks() const
{
    return m_dataDisks;
}

void Instance::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool Instance::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

vector<string> Instance::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void Instance::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool Instance::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

vector<string> Instance::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void Instance::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool Instance::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

InternetAccessible Instance::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void Instance::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool Instance::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

VirtualPrivateCloud Instance::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void Instance::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool Instance::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

string Instance::GetImageId() const
{
    return m_imageId;
}

void Instance::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool Instance::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string Instance::GetRenewFlag() const
{
    return m_renewFlag;
}

void Instance::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Instance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
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

string Instance::GetExpiredTime() const
{
    return m_expiredTime;
}

void Instance::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Instance::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string Instance::GetOsName() const
{
    return m_osName;
}

void Instance::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Instance::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

vector<string> Instance::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void Instance::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool Instance::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

LoginSettings Instance::GetLoginSettings() const
{
    return m_loginSettings;
}

void Instance::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool Instance::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
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

vector<Tag> Instance::GetTags() const
{
    return m_tags;
}

void Instance::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Instance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Instance::GetStopChargingMode() const
{
    return m_stopChargingMode;
}

void Instance::SetStopChargingMode(const string& _stopChargingMode)
{
    m_stopChargingMode = _stopChargingMode;
    m_stopChargingModeHasBeenSet = true;
}

bool Instance::StopChargingModeHasBeenSet() const
{
    return m_stopChargingModeHasBeenSet;
}

string Instance::GetUuid() const
{
    return m_uuid;
}

void Instance::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Instance::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Instance::GetLatestOperation() const
{
    return m_latestOperation;
}

void Instance::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool Instance::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string Instance::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void Instance::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool Instance::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

string Instance::GetLatestOperationRequestId() const
{
    return m_latestOperationRequestId;
}

void Instance::SetLatestOperationRequestId(const string& _latestOperationRequestId)
{
    m_latestOperationRequestId = _latestOperationRequestId;
    m_latestOperationRequestIdHasBeenSet = true;
}

bool Instance::LatestOperationRequestIdHasBeenSet() const
{
    return m_latestOperationRequestIdHasBeenSet;
}

string Instance::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void Instance::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool Instance::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

vector<string> Instance::GetIPv6Addresses() const
{
    return m_iPv6Addresses;
}

void Instance::SetIPv6Addresses(const vector<string>& _iPv6Addresses)
{
    m_iPv6Addresses = _iPv6Addresses;
    m_iPv6AddressesHasBeenSet = true;
}

bool Instance::IPv6AddressesHasBeenSet() const
{
    return m_iPv6AddressesHasBeenSet;
}

string Instance::GetCamRoleName() const
{
    return m_camRoleName;
}

void Instance::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool Instance::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

