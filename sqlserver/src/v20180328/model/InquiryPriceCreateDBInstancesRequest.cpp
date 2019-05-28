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

#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateDBInstancesRequest::InquiryPriceCreateDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_dBVersionHasBeenSet(false)
{
}

string InquiryPriceCreateDBInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void InquiryPriceCreateDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void InquiryPriceCreateDBInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void InquiryPriceCreateDBInstancesRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InquiryPriceCreateDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void InquiryPriceCreateDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquiryPriceCreateDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void InquiryPriceCreateDBInstancesRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}


