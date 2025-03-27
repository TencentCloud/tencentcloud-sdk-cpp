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

#include <tencentcloud/sqlserver/v20180328/model/CreateBasicDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CreateBasicDBInstancesRequest::CreateBasicDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_securityGroupListHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_weeklyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_spanHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_collationHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_diskEncryptFlagHasBeenSet(false)
{
}

string CreateBasicDBInstancesRequest::ToJsonString() const
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

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
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

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
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

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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


string CreateBasicDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void CreateBasicDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t CreateBasicDBInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void CreateBasicDBInstancesRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CreateBasicDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void CreateBasicDBInstancesRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateBasicDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void CreateBasicDBInstancesRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateBasicDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateBasicDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetMachineType() const
{
    return m_machineType;
}

void CreateBasicDBInstancesRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateBasicDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t CreateBasicDBInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateBasicDBInstancesRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateBasicDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateBasicDBInstancesRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CreateBasicDBInstancesRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

int64_t CreateBasicDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void CreateBasicDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateBasicDBInstancesRequest::GetSecurityGroupList() const
{
    return m_securityGroupList;
}

void CreateBasicDBInstancesRequest::SetSecurityGroupList(const vector<string>& _securityGroupList)
{
    m_securityGroupList = _securityGroupList;
    m_securityGroupListHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::SecurityGroupListHasBeenSet() const
{
    return m_securityGroupListHasBeenSet;
}

int64_t CreateBasicDBInstancesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateBasicDBInstancesRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateBasicDBInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateBasicDBInstancesRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateBasicDBInstancesRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateBasicDBInstancesRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

vector<int64_t> CreateBasicDBInstancesRequest::GetWeekly() const
{
    return m_weekly;
}

void CreateBasicDBInstancesRequest::SetWeekly(const vector<int64_t>& _weekly)
{
    m_weekly = _weekly;
    m_weeklyHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateBasicDBInstancesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateBasicDBInstancesRequest::GetSpan() const
{
    return m_span;
}

void CreateBasicDBInstancesRequest::SetSpan(const int64_t& _span)
{
    m_span = _span;
    m_spanHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::SpanHasBeenSet() const
{
    return m_spanHasBeenSet;
}

vector<ResourceTag> CreateBasicDBInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateBasicDBInstancesRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetCollation() const
{
    return m_collation;
}

void CreateBasicDBInstancesRequest::SetCollation(const string& _collation)
{
    m_collation = _collation;
    m_collationHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::CollationHasBeenSet() const
{
    return m_collationHasBeenSet;
}

string CreateBasicDBInstancesRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreateBasicDBInstancesRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

int64_t CreateBasicDBInstancesRequest::GetDiskEncryptFlag() const
{
    return m_diskEncryptFlag;
}

void CreateBasicDBInstancesRequest::SetDiskEncryptFlag(const int64_t& _diskEncryptFlag)
{
    m_diskEncryptFlag = _diskEncryptFlag;
    m_diskEncryptFlagHasBeenSet = true;
}

bool CreateBasicDBInstancesRequest::DiskEncryptFlagHasBeenSet() const
{
    return m_diskEncryptFlagHasBeenSet;
}


