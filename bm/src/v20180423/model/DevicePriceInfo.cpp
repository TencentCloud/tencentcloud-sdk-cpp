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

#include <tencentcloud/bm/v20180423/model/DevicePriceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DevicePriceInfo::DevicePriceInfo() :
    m_instanceIdHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_isElasticHasBeenSet(false),
    m_cpmPayModeHasBeenSet(false),
    m_cpuDescriptionHasBeenSet(false),
    m_memDescriptionHasBeenSet(false),
    m_diskDescriptionHasBeenSet(false),
    m_nicDescriptionHasBeenSet(false),
    m_gpuDescriptionHasBeenSet(false),
    m_raidDescriptionHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_normalPriceHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_goodsCountHasBeenSet(false)
{
}

CoreInternalOutcome DevicePriceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceClassCode") && !value["DeviceClassCode"].IsNull())
    {
        if (!value["DeviceClassCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.DeviceClassCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClassCode = string(value["DeviceClassCode"].GetString());
        m_deviceClassCodeHasBeenSet = true;
    }

    if (value.HasMember("IsElastic") && !value["IsElastic"].IsNull())
    {
        if (!value["IsElastic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.IsElastic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isElastic = value["IsElastic"].GetUint64();
        m_isElasticHasBeenSet = true;
    }

    if (value.HasMember("CpmPayMode") && !value["CpmPayMode"].IsNull())
    {
        if (!value["CpmPayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.CpmPayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmPayMode = value["CpmPayMode"].GetUint64();
        m_cpmPayModeHasBeenSet = true;
    }

    if (value.HasMember("CpuDescription") && !value["CpuDescription"].IsNull())
    {
        if (!value["CpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.CpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuDescription = string(value["CpuDescription"].GetString());
        m_cpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("MemDescription") && !value["MemDescription"].IsNull())
    {
        if (!value["MemDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.MemDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memDescription = string(value["MemDescription"].GetString());
        m_memDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DiskDescription") && !value["DiskDescription"].IsNull())
    {
        if (!value["DiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.DiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDescription = string(value["DiskDescription"].GetString());
        m_diskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("NicDescription") && !value["NicDescription"].IsNull())
    {
        if (!value["NicDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.NicDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nicDescription = string(value["NicDescription"].GetString());
        m_nicDescriptionHasBeenSet = true;
    }

    if (value.HasMember("GpuDescription") && !value["GpuDescription"].IsNull())
    {
        if (!value["GpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.GpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuDescription = string(value["GpuDescription"].GetString());
        m_gpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RaidDescription") && !value["RaidDescription"].IsNull())
    {
        if (!value["RaidDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.RaidDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raidDescription = string(value["RaidDescription"].GetString());
        m_raidDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.Price` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetUint64();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("NormalPrice") && !value["NormalPrice"].IsNull())
    {
        if (!value["NormalPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.NormalPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalPrice = value["NormalPrice"].GetUint64();
        m_normalPriceHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.TotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetUint64();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.RealTotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetUint64();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.TimeSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetUint64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("GoodsCount") && !value["GoodsCount"].IsNull())
    {
        if (!value["GoodsCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePriceInfo.GoodsCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCount = value["GoodsCount"].GetUint64();
        m_goodsCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePriceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isElasticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsElastic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isElastic, allocator);
    }

    if (m_cpmPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmPayMode, allocator);
    }

    if (m_cpuDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_memDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_diskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_nicDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NicDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nicDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_raidDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raidDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_normalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalPrice, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsCount, allocator);
    }

}


string DevicePriceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DevicePriceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DevicePriceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DevicePriceInfo::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DevicePriceInfo::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DevicePriceInfo::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

uint64_t DevicePriceInfo::GetIsElastic() const
{
    return m_isElastic;
}

void DevicePriceInfo::SetIsElastic(const uint64_t& _isElastic)
{
    m_isElastic = _isElastic;
    m_isElasticHasBeenSet = true;
}

bool DevicePriceInfo::IsElasticHasBeenSet() const
{
    return m_isElasticHasBeenSet;
}

uint64_t DevicePriceInfo::GetCpmPayMode() const
{
    return m_cpmPayMode;
}

void DevicePriceInfo::SetCpmPayMode(const uint64_t& _cpmPayMode)
{
    m_cpmPayMode = _cpmPayMode;
    m_cpmPayModeHasBeenSet = true;
}

bool DevicePriceInfo::CpmPayModeHasBeenSet() const
{
    return m_cpmPayModeHasBeenSet;
}

string DevicePriceInfo::GetCpuDescription() const
{
    return m_cpuDescription;
}

void DevicePriceInfo::SetCpuDescription(const string& _cpuDescription)
{
    m_cpuDescription = _cpuDescription;
    m_cpuDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::CpuDescriptionHasBeenSet() const
{
    return m_cpuDescriptionHasBeenSet;
}

string DevicePriceInfo::GetMemDescription() const
{
    return m_memDescription;
}

void DevicePriceInfo::SetMemDescription(const string& _memDescription)
{
    m_memDescription = _memDescription;
    m_memDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::MemDescriptionHasBeenSet() const
{
    return m_memDescriptionHasBeenSet;
}

string DevicePriceInfo::GetDiskDescription() const
{
    return m_diskDescription;
}

void DevicePriceInfo::SetDiskDescription(const string& _diskDescription)
{
    m_diskDescription = _diskDescription;
    m_diskDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::DiskDescriptionHasBeenSet() const
{
    return m_diskDescriptionHasBeenSet;
}

string DevicePriceInfo::GetNicDescription() const
{
    return m_nicDescription;
}

void DevicePriceInfo::SetNicDescription(const string& _nicDescription)
{
    m_nicDescription = _nicDescription;
    m_nicDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::NicDescriptionHasBeenSet() const
{
    return m_nicDescriptionHasBeenSet;
}

string DevicePriceInfo::GetGpuDescription() const
{
    return m_gpuDescription;
}

void DevicePriceInfo::SetGpuDescription(const string& _gpuDescription)
{
    m_gpuDescription = _gpuDescription;
    m_gpuDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::GpuDescriptionHasBeenSet() const
{
    return m_gpuDescriptionHasBeenSet;
}

string DevicePriceInfo::GetRaidDescription() const
{
    return m_raidDescription;
}

void DevicePriceInfo::SetRaidDescription(const string& _raidDescription)
{
    m_raidDescription = _raidDescription;
    m_raidDescriptionHasBeenSet = true;
}

bool DevicePriceInfo::RaidDescriptionHasBeenSet() const
{
    return m_raidDescriptionHasBeenSet;
}

uint64_t DevicePriceInfo::GetPrice() const
{
    return m_price;
}

void DevicePriceInfo::SetPrice(const uint64_t& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool DevicePriceInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

uint64_t DevicePriceInfo::GetNormalPrice() const
{
    return m_normalPrice;
}

void DevicePriceInfo::SetNormalPrice(const uint64_t& _normalPrice)
{
    m_normalPrice = _normalPrice;
    m_normalPriceHasBeenSet = true;
}

bool DevicePriceInfo::NormalPriceHasBeenSet() const
{
    return m_normalPriceHasBeenSet;
}

uint64_t DevicePriceInfo::GetTotalCost() const
{
    return m_totalCost;
}

void DevicePriceInfo::SetTotalCost(const uint64_t& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool DevicePriceInfo::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

uint64_t DevicePriceInfo::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void DevicePriceInfo::SetRealTotalCost(const uint64_t& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool DevicePriceInfo::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

uint64_t DevicePriceInfo::GetTimeSpan() const
{
    return m_timeSpan;
}

void DevicePriceInfo::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool DevicePriceInfo::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string DevicePriceInfo::GetTimeUnit() const
{
    return m_timeUnit;
}

void DevicePriceInfo::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool DevicePriceInfo::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t DevicePriceInfo::GetGoodsCount() const
{
    return m_goodsCount;
}

void DevicePriceInfo::SetGoodsCount(const uint64_t& _goodsCount)
{
    m_goodsCount = _goodsCount;
    m_goodsCountHasBeenSet = true;
}

bool DevicePriceInfo::GoodsCountHasBeenSet() const
{
    return m_goodsCountHasBeenSet;
}

