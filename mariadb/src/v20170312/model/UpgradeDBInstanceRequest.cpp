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

#include <tencentcloud/mariadb/v20170312/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

UpgradeDBInstanceRequest::UpgradeDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_zonesHasBeenSet(false)
{
}

string UpgradeDBInstanceRequest::ToJsonString() const
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

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void UpgradeDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void UpgradeDBInstanceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

bool UpgradeDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void UpgradeDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> UpgradeDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void UpgradeDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

vector<string> UpgradeDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void UpgradeDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}


