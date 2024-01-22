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

#include <tencentcloud/tke/v20220501/model/SuperNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

SuperNodeInfo::SuperNodeInfo() :
    m_nameHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_usedCPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_usedMemoryHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_activeAtHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_maxCPUScheduledPodHasBeenSet(false),
    m_instanceAttributeHasBeenSet(false)
{
}

CoreInternalOutcome SuperNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.CPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetDouble();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("UsedCPU") && !value["UsedCPU"].IsNull())
    {
        if (!value["UsedCPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.UsedCPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedCPU = value["UsedCPU"].GetDouble();
        m_usedCPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("UsedMemory") && !value["UsedMemory"].IsNull())
    {
        if (!value["UsedMemory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.UsedMemory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedMemory = value["UsedMemory"].GetDouble();
        m_usedMemoryHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ActiveAt") && !value["ActiveAt"].IsNull())
    {
        if (!value["ActiveAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.ActiveAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeAt = string(value["ActiveAt"].GetString());
        m_activeAtHasBeenSet = true;
    }

    if (value.HasMember("ExpireAt") && !value["ExpireAt"].IsNull())
    {
        if (!value["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(value["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (value.HasMember("MaxCPUScheduledPod") && !value["MaxCPUScheduledPod"].IsNull())
    {
        if (!value["MaxCPUScheduledPod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.MaxCPUScheduledPod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCPUScheduledPod = value["MaxCPUScheduledPod"].GetInt64();
        m_maxCPUScheduledPodHasBeenSet = true;
    }

    if (value.HasMember("InstanceAttribute") && !value["InstanceAttribute"].IsNull())
    {
        if (!value["InstanceAttribute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeInfo.InstanceAttribute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAttribute = string(value["InstanceAttribute"].GetString());
        m_instanceAttributeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuperNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_usedCPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_usedMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedMemory, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_activeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCPUScheduledPodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCPUScheduledPod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCPUScheduledPod, allocator);
    }

    if (m_instanceAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceAttribute.c_str(), allocator).Move(), allocator);
    }

}


string SuperNodeInfo::GetName() const
{
    return m_name;
}

void SuperNodeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SuperNodeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SuperNodeInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void SuperNodeInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool SuperNodeInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string SuperNodeInfo::GetResourceType() const
{
    return m_resourceType;
}

void SuperNodeInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool SuperNodeInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

double SuperNodeInfo::GetCPU() const
{
    return m_cPU;
}

void SuperNodeInfo::SetCPU(const double& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool SuperNodeInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

double SuperNodeInfo::GetUsedCPU() const
{
    return m_usedCPU;
}

void SuperNodeInfo::SetUsedCPU(const double& _usedCPU)
{
    m_usedCPU = _usedCPU;
    m_usedCPUHasBeenSet = true;
}

bool SuperNodeInfo::UsedCPUHasBeenSet() const
{
    return m_usedCPUHasBeenSet;
}

double SuperNodeInfo::GetMemory() const
{
    return m_memory;
}

void SuperNodeInfo::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SuperNodeInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

double SuperNodeInfo::GetUsedMemory() const
{
    return m_usedMemory;
}

void SuperNodeInfo::SetUsedMemory(const double& _usedMemory)
{
    m_usedMemory = _usedMemory;
    m_usedMemoryHasBeenSet = true;
}

bool SuperNodeInfo::UsedMemoryHasBeenSet() const
{
    return m_usedMemoryHasBeenSet;
}

string SuperNodeInfo::GetZone() const
{
    return m_zone;
}

void SuperNodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SuperNodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string SuperNodeInfo::GetVpcId() const
{
    return m_vpcId;
}

void SuperNodeInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SuperNodeInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SuperNodeInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SuperNodeInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SuperNodeInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SuperNodeInfo::GetActiveAt() const
{
    return m_activeAt;
}

void SuperNodeInfo::SetActiveAt(const string& _activeAt)
{
    m_activeAt = _activeAt;
    m_activeAtHasBeenSet = true;
}

bool SuperNodeInfo::ActiveAtHasBeenSet() const
{
    return m_activeAtHasBeenSet;
}

string SuperNodeInfo::GetExpireAt() const
{
    return m_expireAt;
}

void SuperNodeInfo::SetExpireAt(const string& _expireAt)
{
    m_expireAt = _expireAt;
    m_expireAtHasBeenSet = true;
}

bool SuperNodeInfo::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

int64_t SuperNodeInfo::GetMaxCPUScheduledPod() const
{
    return m_maxCPUScheduledPod;
}

void SuperNodeInfo::SetMaxCPUScheduledPod(const int64_t& _maxCPUScheduledPod)
{
    m_maxCPUScheduledPod = _maxCPUScheduledPod;
    m_maxCPUScheduledPodHasBeenSet = true;
}

bool SuperNodeInfo::MaxCPUScheduledPodHasBeenSet() const
{
    return m_maxCPUScheduledPodHasBeenSet;
}

string SuperNodeInfo::GetInstanceAttribute() const
{
    return m_instanceAttribute;
}

void SuperNodeInfo::SetInstanceAttribute(const string& _instanceAttribute)
{
    m_instanceAttribute = _instanceAttribute;
    m_instanceAttributeHasBeenSet = true;
}

bool SuperNodeInfo::InstanceAttributeHasBeenSet() const
{
    return m_instanceAttributeHasBeenSet;
}

