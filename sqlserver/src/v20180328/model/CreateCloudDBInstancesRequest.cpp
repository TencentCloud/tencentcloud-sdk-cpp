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

#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreateCloudDBInstancesRequest::CreateCloudDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_securityGroupListHasBeenSet(false),
    m_weeklyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_spanHasBeenSet(false),
    m_multiZonesHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_collationHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_multiNodesHasBeenSet(false),
    m_drZonesHasBeenSet(false),
    m_diskEncryptFlagHasBeenSet(false)
{
}

string CreateCloudDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_weeklyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekly.begin(); itr != m_weekly.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_spanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Span";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_span, allocator);
    }

    if (m_multiZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiZones, allocator);
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

    if (m_multiNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiNodes, allocator);
    }

    if (m_drZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drZones.begin(); itr != m_drZones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string CreateCloudDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateCloudDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void CreateCloudDBInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void CreateCloudDBInstancesRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t CreateCloudDBInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void CreateCloudDBInstancesRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetMachineType() const
{
    return m_machineType;
}

void CreateCloudDBInstancesRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateCloudDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCloudDBInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateCloudDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateCloudDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateCloudDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateCloudDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateCloudDBInstancesRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateCloudDBInstancesRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateCloudDBInstancesRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CreateCloudDBInstancesRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateCloudDBInstancesRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

vector<string> CreateCloudDBInstancesRequest::GetSecurityGroupList() const
{
    return m_securityGroupList;
}

void CreateCloudDBInstancesRequest::SetSecurityGroupList(const vector<string>& _securityGroupList)
{
    m_securityGroupList = _securityGroupList;
    m_securityGroupListHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::SecurityGroupListHasBeenSet() const
{
    return m_securityGroupListHasBeenSet;
}

vector<int64_t> CreateCloudDBInstancesRequest::GetWeekly() const
{
    return m_weekly;
}

void CreateCloudDBInstancesRequest::SetWeekly(const vector<int64_t>& _weekly)
{
    m_weekly = _weekly;
    m_weeklyHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateCloudDBInstancesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetSpan() const
{
    return m_span;
}

void CreateCloudDBInstancesRequest::SetSpan(const int64_t& _span)
{
    m_span = _span;
    m_spanHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::SpanHasBeenSet() const
{
    return m_spanHasBeenSet;
}

bool CreateCloudDBInstancesRequest::GetMultiZones() const
{
    return m_multiZones;
}

void CreateCloudDBInstancesRequest::SetMultiZones(const bool& _multiZones)
{
    m_multiZones = _multiZones;
    m_multiZonesHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::MultiZonesHasBeenSet() const
{
    return m_multiZonesHasBeenSet;
}

vector<ResourceTag> CreateCloudDBInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateCloudDBInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetCollation() const
{
    return m_collation;
}

void CreateCloudDBInstancesRequest::SetCollation(const string& _collation)
{
    m_collation = _collation;
    m_collationHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::CollationHasBeenSet() const
{
    return m_collationHasBeenSet;
}

string CreateCloudDBInstancesRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreateCloudDBInstancesRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

bool CreateCloudDBInstancesRequest::GetMultiNodes() const
{
    return m_multiNodes;
}

void CreateCloudDBInstancesRequest::SetMultiNodes(const bool& _multiNodes)
{
    m_multiNodes = _multiNodes;
    m_multiNodesHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::MultiNodesHasBeenSet() const
{
    return m_multiNodesHasBeenSet;
}

vector<string> CreateCloudDBInstancesRequest::GetDrZones() const
{
    return m_drZones;
}

void CreateCloudDBInstancesRequest::SetDrZones(const vector<string>& _drZones)
{
    m_drZones = _drZones;
    m_drZonesHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::DrZonesHasBeenSet() const
{
    return m_drZonesHasBeenSet;
}

int64_t CreateCloudDBInstancesRequest::GetDiskEncryptFlag() const
{
    return m_diskEncryptFlag;
}

void CreateCloudDBInstancesRequest::SetDiskEncryptFlag(const int64_t& _diskEncryptFlag)
{
    m_diskEncryptFlag = _diskEncryptFlag;
    m_diskEncryptFlagHasBeenSet = true;
}

bool CreateCloudDBInstancesRequest::DiskEncryptFlagHasBeenSet() const
{
    return m_diskEncryptFlagHasBeenSet;
}


