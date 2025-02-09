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

#include <tencentcloud/lighthouse/v20200324/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_privateAddressesHasBeenSet(false),
    m_publicAddressesHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_latestOperationRequestIdHasBeenSet(false),
    m_latestOperationStartedTimeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceRestrictStateHasBeenSet(false),
    m_supportIpv6DetailHasBeenSet(false),
    m_publicIpv6AddressesHasBeenSet(false),
    m_initInvocationIdHasBeenSet(false),
    m_instanceViolationDetailHasBeenSet(false)
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

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BlueprintId") && !value["BlueprintId"].IsNull())
    {
        if (!value["BlueprintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.BlueprintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintId = string(value["BlueprintId"].GetString());
        m_blueprintIdHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("PrivateAddresses") && !value["PrivateAddresses"].IsNull())
    {
        if (!value["PrivateAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.PrivateAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateAddresses.push_back((*itr).GetString());
        }
        m_privateAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicAddresses") && !value["PublicAddresses"].IsNull())
    {
        if (!value["PublicAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.PublicAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicAddresses.push_back((*itr).GetString());
        }
        m_publicAddressesHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LoginSettings` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationRequestId") && !value["LatestOperationRequestId"].IsNull())
    {
        if (!value["LatestOperationRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperationRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationRequestId = string(value["LatestOperationRequestId"].GetString());
        m_latestOperationRequestIdHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationStartedTime") && !value["LatestOperationStartedTime"].IsNull())
    {
        if (!value["LatestOperationStartedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LatestOperationStartedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationStartedTime = string(value["LatestOperationStartedTime"].GetString());
        m_latestOperationStartedTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
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

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("PlatformType") && !value["PlatformType"].IsNull())
    {
        if (!value["PlatformType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PlatformType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = string(value["PlatformType"].GetString());
        m_platformTypeHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
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

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("InstanceRestrictState") && !value["InstanceRestrictState"].IsNull())
    {
        if (!value["InstanceRestrictState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceRestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRestrictState = string(value["InstanceRestrictState"].GetString());
        m_instanceRestrictStateHasBeenSet = true;
    }

    if (value.HasMember("SupportIpv6Detail") && !value["SupportIpv6Detail"].IsNull())
    {
        if (!value["SupportIpv6Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SupportIpv6Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_supportIpv6Detail.Deserialize(value["SupportIpv6Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_supportIpv6DetailHasBeenSet = true;
    }

    if (value.HasMember("PublicIpv6Addresses") && !value["PublicIpv6Addresses"].IsNull())
    {
        if (!value["PublicIpv6Addresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.PublicIpv6Addresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpv6Addresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpv6Addresses.push_back((*itr).GetString());
        }
        m_publicIpv6AddressesHasBeenSet = true;
    }

    if (value.HasMember("InitInvocationId") && !value["InitInvocationId"].IsNull())
    {
        if (!value["InitInvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InitInvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initInvocationId = string(value["InitInvocationId"].GetString());
        m_initInvocationIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceViolationDetail") && !value["InstanceViolationDetail"].IsNull())
    {
        if (!value["InstanceViolationDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceViolationDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceViolationDetail.Deserialize(value["InstanceViolationDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceViolationDetailHasBeenSet = true;
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

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateAddresses.begin(); itr != m_privateAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicAddresses.begin(); itr != m_publicAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStartedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOperationStartedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestOperationStartedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformType.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceRestrictStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRestrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_supportIpv6DetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportIpv6Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_supportIpv6Detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publicIpv6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpv6Addresses.begin(); itr != m_publicIpv6Addresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_initInvocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitInvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initInvocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceViolationDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceViolationDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceViolationDetail.ToJsonObject(value[key.c_str()], allocator);
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

string Instance::GetBundleId() const
{
    return m_bundleId;
}

void Instance::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool Instance::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string Instance::GetBlueprintId() const
{
    return m_blueprintId;
}

void Instance::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool Instance::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
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

vector<string> Instance::GetPrivateAddresses() const
{
    return m_privateAddresses;
}

void Instance::SetPrivateAddresses(const vector<string>& _privateAddresses)
{
    m_privateAddresses = _privateAddresses;
    m_privateAddressesHasBeenSet = true;
}

bool Instance::PrivateAddressesHasBeenSet() const
{
    return m_privateAddressesHasBeenSet;
}

vector<string> Instance::GetPublicAddresses() const
{
    return m_publicAddresses;
}

void Instance::SetPublicAddresses(const vector<string>& _publicAddresses)
{
    m_publicAddresses = _publicAddresses;
    m_publicAddressesHasBeenSet = true;
}

bool Instance::PublicAddressesHasBeenSet() const
{
    return m_publicAddressesHasBeenSet;
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

string Instance::GetLatestOperationStartedTime() const
{
    return m_latestOperationStartedTime;
}

void Instance::SetLatestOperationStartedTime(const string& _latestOperationStartedTime)
{
    m_latestOperationStartedTime = _latestOperationStartedTime;
    m_latestOperationStartedTimeHasBeenSet = true;
}

bool Instance::LatestOperationStartedTimeHasBeenSet() const
{
    return m_latestOperationStartedTimeHasBeenSet;
}

string Instance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Instance::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Instance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
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

string Instance::GetPlatformType() const
{
    return m_platformType;
}

void Instance::SetPlatformType(const string& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool Instance::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string Instance::GetPlatform() const
{
    return m_platform;
}

void Instance::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Instance::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
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

string Instance::GetInstanceRestrictState() const
{
    return m_instanceRestrictState;
}

void Instance::SetInstanceRestrictState(const string& _instanceRestrictState)
{
    m_instanceRestrictState = _instanceRestrictState;
    m_instanceRestrictStateHasBeenSet = true;
}

bool Instance::InstanceRestrictStateHasBeenSet() const
{
    return m_instanceRestrictStateHasBeenSet;
}

SupportIpv6Detail Instance::GetSupportIpv6Detail() const
{
    return m_supportIpv6Detail;
}

void Instance::SetSupportIpv6Detail(const SupportIpv6Detail& _supportIpv6Detail)
{
    m_supportIpv6Detail = _supportIpv6Detail;
    m_supportIpv6DetailHasBeenSet = true;
}

bool Instance::SupportIpv6DetailHasBeenSet() const
{
    return m_supportIpv6DetailHasBeenSet;
}

vector<string> Instance::GetPublicIpv6Addresses() const
{
    return m_publicIpv6Addresses;
}

void Instance::SetPublicIpv6Addresses(const vector<string>& _publicIpv6Addresses)
{
    m_publicIpv6Addresses = _publicIpv6Addresses;
    m_publicIpv6AddressesHasBeenSet = true;
}

bool Instance::PublicIpv6AddressesHasBeenSet() const
{
    return m_publicIpv6AddressesHasBeenSet;
}

string Instance::GetInitInvocationId() const
{
    return m_initInvocationId;
}

void Instance::SetInitInvocationId(const string& _initInvocationId)
{
    m_initInvocationId = _initInvocationId;
    m_initInvocationIdHasBeenSet = true;
}

bool Instance::InitInvocationIdHasBeenSet() const
{
    return m_initInvocationIdHasBeenSet;
}

InstanceViolationDetail Instance::GetInstanceViolationDetail() const
{
    return m_instanceViolationDetail;
}

void Instance::SetInstanceViolationDetail(const InstanceViolationDetail& _instanceViolationDetail)
{
    m_instanceViolationDetail = _instanceViolationDetail;
    m_instanceViolationDetailHasBeenSet = true;
}

bool Instance::InstanceViolationDetailHasBeenSet() const
{
    return m_instanceViolationDetailHasBeenSet;
}

