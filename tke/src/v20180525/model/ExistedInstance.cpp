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

#include <tencentcloud/tke/v20180525/model/ExistedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ExistedInstance::ExistedInstance() :
    m_usableHasBeenSet(false),
    m_unusableReasonHasBeenSet(false),
    m_alreadyInClusterHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_iPv6AddressesHasBeenSet(false)
{
}

CoreInternalOutcome ExistedInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Usable") && !value["Usable"].IsNull())
    {
        if (!value["Usable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.Usable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_usable = value["Usable"].GetBool();
        m_usableHasBeenSet = true;
    }

    if (value.HasMember("UnusableReason") && !value["UnusableReason"].IsNull())
    {
        if (!value["UnusableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.UnusableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unusableReason = string(value["UnusableReason"].GetString());
        m_unusableReasonHasBeenSet = true;
    }

    if (value.HasMember("AlreadyInCluster") && !value["AlreadyInCluster"].IsNull())
    {
        if (!value["AlreadyInCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.AlreadyInCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alreadyInCluster = string(value["AlreadyInCluster"].GetString());
        m_alreadyInClusterHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("IPv6Addresses") && !value["IPv6Addresses"].IsNull())
    {
        if (!value["IPv6Addresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExistedInstance.IPv6Addresses` is not array type"));

        const rapidjson::Value &tmpValue = value["IPv6Addresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPv6Addresses.push_back((*itr).GetString());
        }
        m_iPv6AddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExistedInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usable, allocator);
    }

    if (m_unusableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unusableReason.c_str(), allocator).Move(), allocator);
    }

    if (m_alreadyInClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlreadyInCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alreadyInCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
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

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPv6Addresses.begin(); itr != m_iPv6Addresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool ExistedInstance::GetUsable() const
{
    return m_usable;
}

void ExistedInstance::SetUsable(const bool& _usable)
{
    m_usable = _usable;
    m_usableHasBeenSet = true;
}

bool ExistedInstance::UsableHasBeenSet() const
{
    return m_usableHasBeenSet;
}

string ExistedInstance::GetUnusableReason() const
{
    return m_unusableReason;
}

void ExistedInstance::SetUnusableReason(const string& _unusableReason)
{
    m_unusableReason = _unusableReason;
    m_unusableReasonHasBeenSet = true;
}

bool ExistedInstance::UnusableReasonHasBeenSet() const
{
    return m_unusableReasonHasBeenSet;
}

string ExistedInstance::GetAlreadyInCluster() const
{
    return m_alreadyInCluster;
}

void ExistedInstance::SetAlreadyInCluster(const string& _alreadyInCluster)
{
    m_alreadyInCluster = _alreadyInCluster;
    m_alreadyInClusterHasBeenSet = true;
}

bool ExistedInstance::AlreadyInClusterHasBeenSet() const
{
    return m_alreadyInClusterHasBeenSet;
}

string ExistedInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ExistedInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExistedInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExistedInstance::GetInstanceName() const
{
    return m_instanceName;
}

void ExistedInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ExistedInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> ExistedInstance::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void ExistedInstance::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool ExistedInstance::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

vector<string> ExistedInstance::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void ExistedInstance::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool ExistedInstance::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string ExistedInstance::GetCreatedTime() const
{
    return m_createdTime;
}

void ExistedInstance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ExistedInstance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t ExistedInstance::GetCPU() const
{
    return m_cPU;
}

void ExistedInstance::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ExistedInstance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t ExistedInstance::GetMemory() const
{
    return m_memory;
}

void ExistedInstance::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ExistedInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ExistedInstance::GetOsName() const
{
    return m_osName;
}

void ExistedInstance::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ExistedInstance::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string ExistedInstance::GetInstanceType() const
{
    return m_instanceType;
}

void ExistedInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ExistedInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ExistedInstance::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void ExistedInstance::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool ExistedInstance::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

string ExistedInstance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void ExistedInstance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool ExistedInstance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

vector<string> ExistedInstance::GetIPv6Addresses() const
{
    return m_iPv6Addresses;
}

void ExistedInstance::SetIPv6Addresses(const vector<string>& _iPv6Addresses)
{
    m_iPv6Addresses = _iPv6Addresses;
    m_iPv6AddressesHasBeenSet = true;
}

bool ExistedInstance::IPv6AddressesHasBeenSet() const
{
    return m_iPv6AddressesHasBeenSet;
}

