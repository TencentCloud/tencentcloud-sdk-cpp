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

#include <tencentcloud/batch/v20170312/model/InstanceTypeQuotaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

InstanceTypeQuotaItem::InstanceTypeQuotaItem() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_networkCardHasBeenSet(false),
    m_externalsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_localDiskTypeListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_soldOutReasonHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeQuotaItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkCard") && !value["NetworkCard"].IsNull())
    {
        if (!value["NetworkCard"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.NetworkCard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCard = value["NetworkCard"].GetInt64();
        m_networkCardHasBeenSet = true;
    }

    if (value.HasMember("Externals") && !value["Externals"].IsNull())
    {
        if (!value["Externals"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Externals` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externals.Deserialize(value["Externals"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalsHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskTypeList") && !value["LocalDiskTypeList"].IsNull())
    {
        if (!value["LocalDiskTypeList"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.LocalDiskTypeList` is not array type"));

        const Value &tmpValue = value["LocalDiskTypeList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LocalDiskType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_localDiskTypeList.push_back(item);
        }
        m_localDiskTypeListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (value.HasMember("SoldOutReason") && !value["SoldOutReason"].IsNull())
    {
        if (!value["SoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.SoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_soldOutReason = string(value["SoldOutReason"].GetString());
        m_soldOutReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeQuotaItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCard, allocator);
    }

    if (m_externalsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Externals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_externals.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_localDiskTypeListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocalDiskTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_localDiskTypeList.begin(); itr != m_localDiskTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_soldOutReasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_soldOutReason.c_str(), allocator).Move(), allocator);
    }

}


string InstanceTypeQuotaItem::GetZone() const
{
    return m_zone;
}

void InstanceTypeQuotaItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceTypeQuotaItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceTypeQuotaItem::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceTypeQuotaItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceTypeQuotaItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceTypeQuotaItem::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InstanceTypeQuotaItem::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InstanceTypeQuotaItem::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetNetworkCard() const
{
    return m_networkCard;
}

void InstanceTypeQuotaItem::SetNetworkCard(const int64_t& _networkCard)
{
    m_networkCard = _networkCard;
    m_networkCardHasBeenSet = true;
}

bool InstanceTypeQuotaItem::NetworkCardHasBeenSet() const
{
    return m_networkCardHasBeenSet;
}

Externals InstanceTypeQuotaItem::GetExternals() const
{
    return m_externals;
}

void InstanceTypeQuotaItem::SetExternals(const Externals& _externals)
{
    m_externals = _externals;
    m_externalsHasBeenSet = true;
}

bool InstanceTypeQuotaItem::ExternalsHasBeenSet() const
{
    return m_externalsHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetCpu() const
{
    return m_cpu;
}

void InstanceTypeQuotaItem::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceTypeQuotaItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetMemory() const
{
    return m_memory;
}

void InstanceTypeQuotaItem::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceTypeQuotaItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string InstanceTypeQuotaItem::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void InstanceTypeQuotaItem::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool InstanceTypeQuotaItem::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string InstanceTypeQuotaItem::GetTypeName() const
{
    return m_typeName;
}

void InstanceTypeQuotaItem::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool InstanceTypeQuotaItem::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

vector<LocalDiskType> InstanceTypeQuotaItem::GetLocalDiskTypeList() const
{
    return m_localDiskTypeList;
}

void InstanceTypeQuotaItem::SetLocalDiskTypeList(const vector<LocalDiskType>& _localDiskTypeList)
{
    m_localDiskTypeList = _localDiskTypeList;
    m_localDiskTypeListHasBeenSet = true;
}

bool InstanceTypeQuotaItem::LocalDiskTypeListHasBeenSet() const
{
    return m_localDiskTypeListHasBeenSet;
}

string InstanceTypeQuotaItem::GetStatus() const
{
    return m_status;
}

void InstanceTypeQuotaItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceTypeQuotaItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ItemPrice InstanceTypeQuotaItem::GetPrice() const
{
    return m_price;
}

void InstanceTypeQuotaItem::SetPrice(const ItemPrice& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool InstanceTypeQuotaItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string InstanceTypeQuotaItem::GetSoldOutReason() const
{
    return m_soldOutReason;
}

void InstanceTypeQuotaItem::SetSoldOutReason(const string& _soldOutReason)
{
    m_soldOutReason = _soldOutReason;
    m_soldOutReasonHasBeenSet = true;
}

bool InstanceTypeQuotaItem::SoldOutReasonHasBeenSet() const
{
    return m_soldOutReasonHasBeenSet;
}

