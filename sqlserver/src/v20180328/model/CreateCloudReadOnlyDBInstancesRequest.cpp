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

#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreateCloudReadOnlyDBInstancesRequest::CreateCloudReadOnlyDBInstancesRequest() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_readOnlyGroupTypeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_readOnlyGroupForcedUpgradeHasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_readOnlyGroupIsOfflineDelayHasBeenSet(false),
    m_readOnlyGroupMaxDelayTimeHasBeenSet(false),
    m_readOnlyGroupMinInGroupHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_securityGroupListHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_collationHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_diskEncryptFlagHasBeenSet(false)
{
}

string CreateCloudReadOnlyDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyGroupType, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupForcedUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupForcedUpgrade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyGroupForcedUpgrade, allocator);
    }

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupIsOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupIsOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyGroupIsOfflineDelay, allocator);
    }

    if (m_readOnlyGroupMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyGroupMaxDelayTime, allocator);
    }

    if (m_readOnlyGroupMinInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupMinInGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyGroupMinInGroup, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_securityGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupList.begin(); itr != m_securityGroupList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_collationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collation.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_diskEncryptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskEncryptFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskEncryptFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudReadOnlyDBInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCloudReadOnlyDBInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateCloudReadOnlyDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupType() const
{
    return m_readOnlyGroupType;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupType(const int64_t& _readOnlyGroupType)
{
    m_readOnlyGroupType = _readOnlyGroupType;
    m_readOnlyGroupTypeHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupTypeHasBeenSet() const
{
    return m_readOnlyGroupTypeHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void CreateCloudReadOnlyDBInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void CreateCloudReadOnlyDBInstancesRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t CreateCloudReadOnlyDBInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void CreateCloudReadOnlyDBInstancesRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetMachineType() const
{
    return m_machineType;
}

void CreateCloudReadOnlyDBInstancesRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupForcedUpgrade() const
{
    return m_readOnlyGroupForcedUpgrade;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade)
{
    m_readOnlyGroupForcedUpgrade = _readOnlyGroupForcedUpgrade;
    m_readOnlyGroupForcedUpgradeHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupForcedUpgradeHasBeenSet() const
{
    return m_readOnlyGroupForcedUpgradeHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupName(const string& _readOnlyGroupName)
{
    m_readOnlyGroupName = _readOnlyGroupName;
    m_readOnlyGroupNameHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupIsOfflineDelay() const
{
    return m_readOnlyGroupIsOfflineDelay;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupIsOfflineDelay(const int64_t& _readOnlyGroupIsOfflineDelay)
{
    m_readOnlyGroupIsOfflineDelay = _readOnlyGroupIsOfflineDelay;
    m_readOnlyGroupIsOfflineDelayHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupIsOfflineDelayHasBeenSet() const
{
    return m_readOnlyGroupIsOfflineDelayHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupMaxDelayTime() const
{
    return m_readOnlyGroupMaxDelayTime;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupMaxDelayTime(const int64_t& _readOnlyGroupMaxDelayTime)
{
    m_readOnlyGroupMaxDelayTime = _readOnlyGroupMaxDelayTime;
    m_readOnlyGroupMaxDelayTimeHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupMaxDelayTimeHasBeenSet() const
{
    return m_readOnlyGroupMaxDelayTimeHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetReadOnlyGroupMinInGroup() const
{
    return m_readOnlyGroupMinInGroup;
}

void CreateCloudReadOnlyDBInstancesRequest::SetReadOnlyGroupMinInGroup(const int64_t& _readOnlyGroupMinInGroup)
{
    m_readOnlyGroupMinInGroup = _readOnlyGroupMinInGroup;
    m_readOnlyGroupMinInGroupHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ReadOnlyGroupMinInGroupHasBeenSet() const
{
    return m_readOnlyGroupMinInGroupHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateCloudReadOnlyDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateCloudReadOnlyDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateCloudReadOnlyDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateCloudReadOnlyDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateCloudReadOnlyDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateCloudReadOnlyDBInstancesRequest::GetSecurityGroupList() const
{
    return m_securityGroupList;
}

void CreateCloudReadOnlyDBInstancesRequest::SetSecurityGroupList(const vector<string>& _securityGroupList)
{
    m_securityGroupList = _securityGroupList;
    m_securityGroupListHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::SecurityGroupListHasBeenSet() const
{
    return m_securityGroupListHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateCloudReadOnlyDBInstancesRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateCloudReadOnlyDBInstancesRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateCloudReadOnlyDBInstancesRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

vector<ResourceTag> CreateCloudReadOnlyDBInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateCloudReadOnlyDBInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetCollation() const
{
    return m_collation;
}

void CreateCloudReadOnlyDBInstancesRequest::SetCollation(const string& _collation)
{
    m_collation = _collation;
    m_collationHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::CollationHasBeenSet() const
{
    return m_collationHasBeenSet;
}

string CreateCloudReadOnlyDBInstancesRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreateCloudReadOnlyDBInstancesRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

int64_t CreateCloudReadOnlyDBInstancesRequest::GetDiskEncryptFlag() const
{
    return m_diskEncryptFlag;
}

void CreateCloudReadOnlyDBInstancesRequest::SetDiskEncryptFlag(const int64_t& _diskEncryptFlag)
{
    m_diskEncryptFlag = _diskEncryptFlag;
    m_diskEncryptFlagHasBeenSet = true;
}

bool CreateCloudReadOnlyDBInstancesRequest::DiskEncryptFlagHasBeenSet() const
{
    return m_diskEncryptFlagHasBeenSet;
}


