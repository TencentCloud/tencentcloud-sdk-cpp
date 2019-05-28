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

#include <tencentcloud/dcdb/v20180411/model/CreateDCDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

CreateDCDBInstanceRequest::CreateDCDBInstanceRequest() :
    m_zonesHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false),
    m_shardNodeCountHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_countHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false)
{
}

string CreateDCDBInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zonesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_shardMemoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardMemory, allocator);
    }

    if (m_shardStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardStorage, allocator);
    }

    if (m_shardNodeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeCount, allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateDCDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void CreateDCDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateDCDBInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardMemory() const
{
    return m_shardMemory;
}

void CreateDCDBInstanceRequest::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardStorage() const
{
    return m_shardStorage;
}

void CreateDCDBInstanceRequest::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardNodeCount() const
{
    return m_shardNodeCount;
}

void CreateDCDBInstanceRequest::SetShardNodeCount(const int64_t& _shardNodeCount)
{
    m_shardNodeCount = _shardNodeCount;
    m_shardNodeCountHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardNodeCountHasBeenSet() const
{
    return m_shardNodeCountHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetShardCount() const
{
    return m_shardCount;
}

void CreateDCDBInstanceRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetCount() const
{
    return m_count;
}

void CreateDCDBInstanceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t CreateDCDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDCDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDCDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDCDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateDCDBInstanceRequest::GetDbVersionId() const
{
    return m_dbVersionId;
}

void CreateDCDBInstanceRequest::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

bool CreateDCDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDCDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateDCDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateDCDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateDCDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}


