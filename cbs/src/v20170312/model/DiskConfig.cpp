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

#include <tencentcloud/cbs/v20170312/model/DiskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DiskConfig::DiskConfig() :
    m_availableHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_stepSizeHasBeenSet(false),
    m_extraPerformanceRangeHasBeenSet(false),
    m_deviceClassHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_minDiskSizeHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_priceHasBeenSet(false)
{
}

CoreInternalOutcome DiskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("DiskChargeType") && !value["DiskChargeType"].IsNull())
    {
        if (!value["DiskChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskChargeType = string(value["DiskChargeType"].GetString());
        m_diskChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("StepSize") && !value["StepSize"].IsNull())
    {
        if (!value["StepSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.StepSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepSize = value["StepSize"].GetUint64();
        m_stepSizeHasBeenSet = true;
    }

    if (value.HasMember("ExtraPerformanceRange") && !value["ExtraPerformanceRange"].IsNull())
    {
        if (!value["ExtraPerformanceRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiskConfig.ExtraPerformanceRange` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraPerformanceRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extraPerformanceRange.push_back((*itr).GetInt64());
        }
        m_extraPerformanceRangeHasBeenSet = true;
    }

    if (value.HasMember("DeviceClass") && !value["DeviceClass"].IsNull())
    {
        if (!value["DeviceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DeviceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClass = string(value["DeviceClass"].GetString());
        m_deviceClassHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("MinDiskSize") && !value["MinDiskSize"].IsNull())
    {
        if (!value["MinDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.MinDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minDiskSize = value["MinDiskSize"].GetUint64();
        m_minDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.MaxDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetUint64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_stepSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepSize, allocator);
    }

    if (m_extraPerformanceRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraPerformanceRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraPerformanceRange.begin(); itr != m_extraPerformanceRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_deviceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_minDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDiskSize, allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool DiskConfig::GetAvailable() const
{
    return m_available;
}

void DiskConfig::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool DiskConfig::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string DiskConfig::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void DiskConfig::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool DiskConfig::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

string DiskConfig::GetZone() const
{
    return m_zone;
}

void DiskConfig::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DiskConfig::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DiskConfig::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void DiskConfig::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool DiskConfig::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string DiskConfig::GetDiskType() const
{
    return m_diskType;
}

void DiskConfig::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DiskConfig::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t DiskConfig::GetStepSize() const
{
    return m_stepSize;
}

void DiskConfig::SetStepSize(const uint64_t& _stepSize)
{
    m_stepSize = _stepSize;
    m_stepSizeHasBeenSet = true;
}

bool DiskConfig::StepSizeHasBeenSet() const
{
    return m_stepSizeHasBeenSet;
}

vector<int64_t> DiskConfig::GetExtraPerformanceRange() const
{
    return m_extraPerformanceRange;
}

void DiskConfig::SetExtraPerformanceRange(const vector<int64_t>& _extraPerformanceRange)
{
    m_extraPerformanceRange = _extraPerformanceRange;
    m_extraPerformanceRangeHasBeenSet = true;
}

bool DiskConfig::ExtraPerformanceRangeHasBeenSet() const
{
    return m_extraPerformanceRangeHasBeenSet;
}

string DiskConfig::GetDeviceClass() const
{
    return m_deviceClass;
}

void DiskConfig::SetDeviceClass(const string& _deviceClass)
{
    m_deviceClass = _deviceClass;
    m_deviceClassHasBeenSet = true;
}

bool DiskConfig::DeviceClassHasBeenSet() const
{
    return m_deviceClassHasBeenSet;
}

string DiskConfig::GetDiskUsage() const
{
    return m_diskUsage;
}

void DiskConfig::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool DiskConfig::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

uint64_t DiskConfig::GetMinDiskSize() const
{
    return m_minDiskSize;
}

void DiskConfig::SetMinDiskSize(const uint64_t& _minDiskSize)
{
    m_minDiskSize = _minDiskSize;
    m_minDiskSizeHasBeenSet = true;
}

bool DiskConfig::MinDiskSizeHasBeenSet() const
{
    return m_minDiskSizeHasBeenSet;
}

uint64_t DiskConfig::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void DiskConfig::SetMaxDiskSize(const uint64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool DiskConfig::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

Price DiskConfig::GetPrice() const
{
    return m_price;
}

void DiskConfig::SetPrice(const Price& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool DiskConfig::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

