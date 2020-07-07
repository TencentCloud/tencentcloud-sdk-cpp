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

#include <tencentcloud/cvm/v20170312/model/InstanceTypeQuotaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
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
    m_soldOutReasonHasBeenSet(false),
    m_instanceBandwidthHasBeenSet(false),
    m_instancePpsHasBeenSet(false),
    m_storageBlockAmountHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_fpgaHasBeenSet(false),
    m_remarkHasBeenSet(false)
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

    if (value.HasMember("InstanceBandwidth") && !value["InstanceBandwidth"].IsNull())
    {
        if (!value["InstanceBandwidth"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.InstanceBandwidth` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceBandwidth = value["InstanceBandwidth"].GetDouble();
        m_instanceBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InstancePps") && !value["InstancePps"].IsNull())
    {
        if (!value["InstancePps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.InstancePps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instancePps = value["InstancePps"].GetInt64();
        m_instancePpsHasBeenSet = true;
    }

    if (value.HasMember("StorageBlockAmount") && !value["StorageBlockAmount"].IsNull())
    {
        if (!value["StorageBlockAmount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.StorageBlockAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageBlockAmount = value["StorageBlockAmount"].GetInt64();
        m_storageBlockAmountHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Gpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetInt64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("Fpga") && !value["Fpga"].IsNull())
    {
        if (!value["Fpga"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Fpga` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpga = value["Fpga"].GetInt64();
        m_fpgaHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTypeQuotaItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
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

    if (m_instanceBandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceBandwidth, allocator);
    }

    if (m_instancePpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstancePps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instancePps, allocator);
    }

    if (m_storageBlockAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageBlockAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageBlockAmount, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_fpgaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fpga";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpga, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
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

double InstanceTypeQuotaItem::GetInstanceBandwidth() const
{
    return m_instanceBandwidth;
}

void InstanceTypeQuotaItem::SetInstanceBandwidth(const double& _instanceBandwidth)
{
    m_instanceBandwidth = _instanceBandwidth;
    m_instanceBandwidthHasBeenSet = true;
}

bool InstanceTypeQuotaItem::InstanceBandwidthHasBeenSet() const
{
    return m_instanceBandwidthHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetInstancePps() const
{
    return m_instancePps;
}

void InstanceTypeQuotaItem::SetInstancePps(const int64_t& _instancePps)
{
    m_instancePps = _instancePps;
    m_instancePpsHasBeenSet = true;
}

bool InstanceTypeQuotaItem::InstancePpsHasBeenSet() const
{
    return m_instancePpsHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetStorageBlockAmount() const
{
    return m_storageBlockAmount;
}

void InstanceTypeQuotaItem::SetStorageBlockAmount(const int64_t& _storageBlockAmount)
{
    m_storageBlockAmount = _storageBlockAmount;
    m_storageBlockAmountHasBeenSet = true;
}

bool InstanceTypeQuotaItem::StorageBlockAmountHasBeenSet() const
{
    return m_storageBlockAmountHasBeenSet;
}

string InstanceTypeQuotaItem::GetCpuType() const
{
    return m_cpuType;
}

void InstanceTypeQuotaItem::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool InstanceTypeQuotaItem::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetGpu() const
{
    return m_gpu;
}

void InstanceTypeQuotaItem::SetGpu(const int64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool InstanceTypeQuotaItem::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

int64_t InstanceTypeQuotaItem::GetFpga() const
{
    return m_fpga;
}

void InstanceTypeQuotaItem::SetFpga(const int64_t& _fpga)
{
    m_fpga = _fpga;
    m_fpgaHasBeenSet = true;
}

bool InstanceTypeQuotaItem::FpgaHasBeenSet() const
{
    return m_fpgaHasBeenSet;
}

string InstanceTypeQuotaItem::GetRemark() const
{
    return m_remark;
}

void InstanceTypeQuotaItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InstanceTypeQuotaItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

