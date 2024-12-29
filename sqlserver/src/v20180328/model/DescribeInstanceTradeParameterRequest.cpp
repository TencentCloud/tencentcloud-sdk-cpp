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

#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTradeParameterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeInstanceTradeParameterRequest::DescribeInstanceTradeParameterRequest() :
    m_zoneHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_securityGroupListHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_weeklyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_spanHasBeenSet(false),
    m_multiZonesHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_collationHasBeenSet(false),
    m_multiNodesHasBeenSet(false),
    m_drZonesHasBeenSet(false)
{
}

string DescribeInstanceTradeParameterRequest::ToJsonString() const
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_collationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collation.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceTradeParameterRequest::GetZone() const
{
    return m_zone;
}

void DescribeInstanceTradeParameterRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t DescribeInstanceTradeParameterRequest::GetCpu() const
{
    return m_cpu;
}

void DescribeInstanceTradeParameterRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetMemory() const
{
    return m_memory;
}

void DescribeInstanceTradeParameterRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetStorage() const
{
    return m_storage;
}

void DescribeInstanceTradeParameterRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeInstanceTradeParameterRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetMachineType() const
{
    return m_machineType;
}

void DescribeInstanceTradeParameterRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void DescribeInstanceTradeParameterRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstanceTradeParameterRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void DescribeInstanceTradeParameterRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void DescribeInstanceTradeParameterRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeInstanceTradeParameterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeInstanceTradeParameterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetPeriod() const
{
    return m_period;
}

void DescribeInstanceTradeParameterRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> DescribeInstanceTradeParameterRequest::GetSecurityGroupList() const
{
    return m_securityGroupList;
}

void DescribeInstanceTradeParameterRequest::SetSecurityGroupList(const vector<string>& _securityGroupList)
{
    m_securityGroupList = _securityGroupList;
    m_securityGroupListHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::SecurityGroupListHasBeenSet() const
{
    return m_securityGroupListHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DescribeInstanceTradeParameterRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

vector<int64_t> DescribeInstanceTradeParameterRequest::GetWeekly() const
{
    return m_weekly;
}

void DescribeInstanceTradeParameterRequest::SetWeekly(const vector<int64_t>& _weekly)
{
    m_weekly = _weekly;
    m_weeklyHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInstanceTradeParameterRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeInstanceTradeParameterRequest::GetSpan() const
{
    return m_span;
}

void DescribeInstanceTradeParameterRequest::SetSpan(const int64_t& _span)
{
    m_span = _span;
    m_spanHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::SpanHasBeenSet() const
{
    return m_spanHasBeenSet;
}

bool DescribeInstanceTradeParameterRequest::GetMultiZones() const
{
    return m_multiZones;
}

void DescribeInstanceTradeParameterRequest::SetMultiZones(const bool& _multiZones)
{
    m_multiZones = _multiZones;
    m_multiZonesHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::MultiZonesHasBeenSet() const
{
    return m_multiZonesHasBeenSet;
}

vector<ResourceTag> DescribeInstanceTradeParameterRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void DescribeInstanceTradeParameterRequest::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetTimeZone() const
{
    return m_timeZone;
}

void DescribeInstanceTradeParameterRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string DescribeInstanceTradeParameterRequest::GetCollation() const
{
    return m_collation;
}

void DescribeInstanceTradeParameterRequest::SetCollation(const string& _collation)
{
    m_collation = _collation;
    m_collationHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::CollationHasBeenSet() const
{
    return m_collationHasBeenSet;
}

bool DescribeInstanceTradeParameterRequest::GetMultiNodes() const
{
    return m_multiNodes;
}

void DescribeInstanceTradeParameterRequest::SetMultiNodes(const bool& _multiNodes)
{
    m_multiNodes = _multiNodes;
    m_multiNodesHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::MultiNodesHasBeenSet() const
{
    return m_multiNodesHasBeenSet;
}

vector<string> DescribeInstanceTradeParameterRequest::GetDrZones() const
{
    return m_drZones;
}

void DescribeInstanceTradeParameterRequest::SetDrZones(const vector<string>& _drZones)
{
    m_drZones = _drZones;
    m_drZonesHasBeenSet = true;
}

bool DescribeInstanceTradeParameterRequest::DrZonesHasBeenSet() const
{
    return m_drZonesHasBeenSet;
}


