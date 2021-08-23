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

#include <tencentcloud/bm/v20180423/model/DeviceClass.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceClass::DeviceClass() :
    m_deviceClassCodeHasBeenSet(false),
    m_cpuDescriptionHasBeenSet(false),
    m_memDescriptionHasBeenSet(false),
    m_diskDescriptionHasBeenSet(false),
    m_haveRaidCardHasBeenSet(false),
    m_nicDescriptionHasBeenSet(false),
    m_gpuDescriptionHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_realPriceHasBeenSet(false),
    m_normalPriceHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome DeviceClass::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceClassCode") && !value["DeviceClassCode"].IsNull())
    {
        if (!value["DeviceClassCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.DeviceClassCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClassCode = string(value["DeviceClassCode"].GetString());
        m_deviceClassCodeHasBeenSet = true;
    }

    if (value.HasMember("CpuDescription") && !value["CpuDescription"].IsNull())
    {
        if (!value["CpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.CpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuDescription = string(value["CpuDescription"].GetString());
        m_cpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("MemDescription") && !value["MemDescription"].IsNull())
    {
        if (!value["MemDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.MemDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memDescription = string(value["MemDescription"].GetString());
        m_memDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DiskDescription") && !value["DiskDescription"].IsNull())
    {
        if (!value["DiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.DiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDescription = string(value["DiskDescription"].GetString());
        m_diskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("HaveRaidCard") && !value["HaveRaidCard"].IsNull())
    {
        if (!value["HaveRaidCard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.HaveRaidCard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_haveRaidCard = value["HaveRaidCard"].GetUint64();
        m_haveRaidCardHasBeenSet = true;
    }

    if (value.HasMember("NicDescription") && !value["NicDescription"].IsNull())
    {
        if (!value["NicDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.NicDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nicDescription = string(value["NicDescription"].GetString());
        m_nicDescriptionHasBeenSet = true;
    }

    if (value.HasMember("GpuDescription") && !value["GpuDescription"].IsNull())
    {
        if (!value["GpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.GpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuDescription = string(value["GpuDescription"].GetString());
        m_gpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.UnitPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetUint64();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("RealPrice") && !value["RealPrice"].IsNull())
    {
        if (!value["RealPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.RealPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realPrice = value["RealPrice"].GetUint64();
        m_realPriceHasBeenSet = true;
    }

    if (value.HasMember("NormalPrice") && !value["NormalPrice"].IsNull())
    {
        if (!value["NormalPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.NormalPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_normalPrice = value["NormalPrice"].GetUint64();
        m_normalPriceHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.Series` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_series = value["Series"].GetUint64();
        m_seriesHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceClass.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceClass::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
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

    if (m_haveRaidCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaveRaidCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_haveRaidCard, allocator);
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

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_realPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realPrice, allocator);
    }

    if (m_normalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalPrice, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_series, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

}


string DeviceClass::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DeviceClass::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DeviceClass::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

string DeviceClass::GetCpuDescription() const
{
    return m_cpuDescription;
}

void DeviceClass::SetCpuDescription(const string& _cpuDescription)
{
    m_cpuDescription = _cpuDescription;
    m_cpuDescriptionHasBeenSet = true;
}

bool DeviceClass::CpuDescriptionHasBeenSet() const
{
    return m_cpuDescriptionHasBeenSet;
}

string DeviceClass::GetMemDescription() const
{
    return m_memDescription;
}

void DeviceClass::SetMemDescription(const string& _memDescription)
{
    m_memDescription = _memDescription;
    m_memDescriptionHasBeenSet = true;
}

bool DeviceClass::MemDescriptionHasBeenSet() const
{
    return m_memDescriptionHasBeenSet;
}

string DeviceClass::GetDiskDescription() const
{
    return m_diskDescription;
}

void DeviceClass::SetDiskDescription(const string& _diskDescription)
{
    m_diskDescription = _diskDescription;
    m_diskDescriptionHasBeenSet = true;
}

bool DeviceClass::DiskDescriptionHasBeenSet() const
{
    return m_diskDescriptionHasBeenSet;
}

uint64_t DeviceClass::GetHaveRaidCard() const
{
    return m_haveRaidCard;
}

void DeviceClass::SetHaveRaidCard(const uint64_t& _haveRaidCard)
{
    m_haveRaidCard = _haveRaidCard;
    m_haveRaidCardHasBeenSet = true;
}

bool DeviceClass::HaveRaidCardHasBeenSet() const
{
    return m_haveRaidCardHasBeenSet;
}

string DeviceClass::GetNicDescription() const
{
    return m_nicDescription;
}

void DeviceClass::SetNicDescription(const string& _nicDescription)
{
    m_nicDescription = _nicDescription;
    m_nicDescriptionHasBeenSet = true;
}

bool DeviceClass::NicDescriptionHasBeenSet() const
{
    return m_nicDescriptionHasBeenSet;
}

string DeviceClass::GetGpuDescription() const
{
    return m_gpuDescription;
}

void DeviceClass::SetGpuDescription(const string& _gpuDescription)
{
    m_gpuDescription = _gpuDescription;
    m_gpuDescriptionHasBeenSet = true;
}

bool DeviceClass::GpuDescriptionHasBeenSet() const
{
    return m_gpuDescriptionHasBeenSet;
}

double DeviceClass::GetDiscount() const
{
    return m_discount;
}

void DeviceClass::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool DeviceClass::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

uint64_t DeviceClass::GetUnitPrice() const
{
    return m_unitPrice;
}

void DeviceClass::SetUnitPrice(const uint64_t& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool DeviceClass::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

uint64_t DeviceClass::GetRealPrice() const
{
    return m_realPrice;
}

void DeviceClass::SetRealPrice(const uint64_t& _realPrice)
{
    m_realPrice = _realPrice;
    m_realPriceHasBeenSet = true;
}

bool DeviceClass::RealPriceHasBeenSet() const
{
    return m_realPriceHasBeenSet;
}

uint64_t DeviceClass::GetNormalPrice() const
{
    return m_normalPrice;
}

void DeviceClass::SetNormalPrice(const uint64_t& _normalPrice)
{
    m_normalPrice = _normalPrice;
    m_normalPriceHasBeenSet = true;
}

bool DeviceClass::NormalPriceHasBeenSet() const
{
    return m_normalPriceHasBeenSet;
}

string DeviceClass::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceClass::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceClass::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t DeviceClass::GetSeries() const
{
    return m_series;
}

void DeviceClass::SetSeries(const uint64_t& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool DeviceClass::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

uint64_t DeviceClass::GetCpu() const
{
    return m_cpu;
}

void DeviceClass::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DeviceClass::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t DeviceClass::GetMem() const
{
    return m_mem;
}

void DeviceClass::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool DeviceClass::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

