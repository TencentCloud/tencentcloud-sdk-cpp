/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lighthouse/v20200324/model/BlueprintBundle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

BlueprintBundle::BlueprintBundle() :
    m_bundleIdHasBeenSet(false),
    m_supportLinuxUnixPlatformHasBeenSet(false),
    m_supportWindowsPlatformHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_bundleSalesStateHasBeenSet(false),
    m_bundleTypeHasBeenSet(false),
    m_bundleTypeDescriptionHasBeenSet(false),
    m_bundleTypePriorityHasBeenSet(false),
    m_bundleDisplayLabelHasBeenSet(false),
    m_supportSlotHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_systemDiskTypeHasBeenSet(false),
    m_systemDiskSizeHasBeenSet(false),
    m_monthlyTrafficHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_trafficUnlimitedHasBeenSet(false)
{
}

CoreInternalOutcome BlueprintBundle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("SupportLinuxUnixPlatform") && !value["SupportLinuxUnixPlatform"].IsNull())
    {
        if (!value["SupportLinuxUnixPlatform"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.SupportLinuxUnixPlatform` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportLinuxUnixPlatform = value["SupportLinuxUnixPlatform"].GetBool();
        m_supportLinuxUnixPlatformHasBeenSet = true;
    }

    if (value.HasMember("SupportWindowsPlatform") && !value["SupportWindowsPlatform"].IsNull())
    {
        if (!value["SupportWindowsPlatform"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.SupportWindowsPlatform` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportWindowsPlatform = value["SupportWindowsPlatform"].GetBool();
        m_supportWindowsPlatformHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (value.HasMember("BundleSalesState") && !value["BundleSalesState"].IsNull())
    {
        if (!value["BundleSalesState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleSalesState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleSalesState = string(value["BundleSalesState"].GetString());
        m_bundleSalesStateHasBeenSet = true;
    }

    if (value.HasMember("BundleType") && !value["BundleType"].IsNull())
    {
        if (!value["BundleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleType = string(value["BundleType"].GetString());
        m_bundleTypeHasBeenSet = true;
    }

    if (value.HasMember("BundleTypeDescription") && !value["BundleTypeDescription"].IsNull())
    {
        if (!value["BundleTypeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleTypeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleTypeDescription = string(value["BundleTypeDescription"].GetString());
        m_bundleTypeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("BundleTypePriority") && !value["BundleTypePriority"].IsNull())
    {
        if (!value["BundleTypePriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleTypePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bundleTypePriority = value["BundleTypePriority"].GetInt64();
        m_bundleTypePriorityHasBeenSet = true;
    }

    if (value.HasMember("BundleDisplayLabel") && !value["BundleDisplayLabel"].IsNull())
    {
        if (!value["BundleDisplayLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.BundleDisplayLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleDisplayLabel = string(value["BundleDisplayLabel"].GetString());
        m_bundleDisplayLabelHasBeenSet = true;
    }

    if (value.HasMember("SupportSlot") && !value["SupportSlot"].IsNull())
    {
        if (!value["SupportSlot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.SupportSlot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportSlot = value["SupportSlot"].GetInt64();
        m_supportSlotHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskType") && !value["SystemDiskType"].IsNull())
    {
        if (!value["SystemDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.SystemDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskType = string(value["SystemDiskType"].GetString());
        m_systemDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.SystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetInt64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MonthlyTraffic") && !value["MonthlyTraffic"].IsNull())
    {
        if (!value["MonthlyTraffic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.MonthlyTraffic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthlyTraffic = value["MonthlyTraffic"].GetInt64();
        m_monthlyTrafficHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("TrafficUnlimited") && !value["TrafficUnlimited"].IsNull())
    {
        if (!value["TrafficUnlimited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintBundle.TrafficUnlimited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trafficUnlimited = value["TrafficUnlimited"].GetBool();
        m_trafficUnlimitedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlueprintBundle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_supportLinuxUnixPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportLinuxUnixPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportLinuxUnixPlatform, allocator);
    }

    if (m_supportWindowsPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportWindowsPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportWindowsPlatform, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bundleSalesStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleSalesState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleSalesState.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleType.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleTypeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleTypeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleTypeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleTypePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleTypePriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bundleTypePriority, allocator);
    }

    if (m_bundleDisplayLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleDisplayLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleDisplayLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_supportSlotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportSlot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportSlot, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_systemDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskSize, allocator);
    }

    if (m_monthlyTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthlyTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthlyTraffic, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficUnlimitedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficUnlimited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficUnlimited, allocator);
    }

}


string BlueprintBundle::GetBundleId() const
{
    return m_bundleId;
}

void BlueprintBundle::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool BlueprintBundle::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

bool BlueprintBundle::GetSupportLinuxUnixPlatform() const
{
    return m_supportLinuxUnixPlatform;
}

void BlueprintBundle::SetSupportLinuxUnixPlatform(const bool& _supportLinuxUnixPlatform)
{
    m_supportLinuxUnixPlatform = _supportLinuxUnixPlatform;
    m_supportLinuxUnixPlatformHasBeenSet = true;
}

bool BlueprintBundle::SupportLinuxUnixPlatformHasBeenSet() const
{
    return m_supportLinuxUnixPlatformHasBeenSet;
}

bool BlueprintBundle::GetSupportWindowsPlatform() const
{
    return m_supportWindowsPlatform;
}

void BlueprintBundle::SetSupportWindowsPlatform(const bool& _supportWindowsPlatform)
{
    m_supportWindowsPlatform = _supportWindowsPlatform;
    m_supportWindowsPlatformHasBeenSet = true;
}

bool BlueprintBundle::SupportWindowsPlatformHasBeenSet() const
{
    return m_supportWindowsPlatformHasBeenSet;
}

Price BlueprintBundle::GetPrice() const
{
    return m_price;
}

void BlueprintBundle::SetPrice(const Price& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool BlueprintBundle::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string BlueprintBundle::GetBundleSalesState() const
{
    return m_bundleSalesState;
}

void BlueprintBundle::SetBundleSalesState(const string& _bundleSalesState)
{
    m_bundleSalesState = _bundleSalesState;
    m_bundleSalesStateHasBeenSet = true;
}

bool BlueprintBundle::BundleSalesStateHasBeenSet() const
{
    return m_bundleSalesStateHasBeenSet;
}

string BlueprintBundle::GetBundleType() const
{
    return m_bundleType;
}

void BlueprintBundle::SetBundleType(const string& _bundleType)
{
    m_bundleType = _bundleType;
    m_bundleTypeHasBeenSet = true;
}

bool BlueprintBundle::BundleTypeHasBeenSet() const
{
    return m_bundleTypeHasBeenSet;
}

string BlueprintBundle::GetBundleTypeDescription() const
{
    return m_bundleTypeDescription;
}

void BlueprintBundle::SetBundleTypeDescription(const string& _bundleTypeDescription)
{
    m_bundleTypeDescription = _bundleTypeDescription;
    m_bundleTypeDescriptionHasBeenSet = true;
}

bool BlueprintBundle::BundleTypeDescriptionHasBeenSet() const
{
    return m_bundleTypeDescriptionHasBeenSet;
}

int64_t BlueprintBundle::GetBundleTypePriority() const
{
    return m_bundleTypePriority;
}

void BlueprintBundle::SetBundleTypePriority(const int64_t& _bundleTypePriority)
{
    m_bundleTypePriority = _bundleTypePriority;
    m_bundleTypePriorityHasBeenSet = true;
}

bool BlueprintBundle::BundleTypePriorityHasBeenSet() const
{
    return m_bundleTypePriorityHasBeenSet;
}

string BlueprintBundle::GetBundleDisplayLabel() const
{
    return m_bundleDisplayLabel;
}

void BlueprintBundle::SetBundleDisplayLabel(const string& _bundleDisplayLabel)
{
    m_bundleDisplayLabel = _bundleDisplayLabel;
    m_bundleDisplayLabelHasBeenSet = true;
}

bool BlueprintBundle::BundleDisplayLabelHasBeenSet() const
{
    return m_bundleDisplayLabelHasBeenSet;
}

int64_t BlueprintBundle::GetSupportSlot() const
{
    return m_supportSlot;
}

void BlueprintBundle::SetSupportSlot(const int64_t& _supportSlot)
{
    m_supportSlot = _supportSlot;
    m_supportSlotHasBeenSet = true;
}

bool BlueprintBundle::SupportSlotHasBeenSet() const
{
    return m_supportSlotHasBeenSet;
}

int64_t BlueprintBundle::GetMemory() const
{
    return m_memory;
}

void BlueprintBundle::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool BlueprintBundle::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string BlueprintBundle::GetSystemDiskType() const
{
    return m_systemDiskType;
}

void BlueprintBundle::SetSystemDiskType(const string& _systemDiskType)
{
    m_systemDiskType = _systemDiskType;
    m_systemDiskTypeHasBeenSet = true;
}

bool BlueprintBundle::SystemDiskTypeHasBeenSet() const
{
    return m_systemDiskTypeHasBeenSet;
}

int64_t BlueprintBundle::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void BlueprintBundle::SetSystemDiskSize(const int64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool BlueprintBundle::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

int64_t BlueprintBundle::GetMonthlyTraffic() const
{
    return m_monthlyTraffic;
}

void BlueprintBundle::SetMonthlyTraffic(const int64_t& _monthlyTraffic)
{
    m_monthlyTraffic = _monthlyTraffic;
    m_monthlyTrafficHasBeenSet = true;
}

bool BlueprintBundle::MonthlyTrafficHasBeenSet() const
{
    return m_monthlyTrafficHasBeenSet;
}

int64_t BlueprintBundle::GetCPU() const
{
    return m_cPU;
}

void BlueprintBundle::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool BlueprintBundle::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t BlueprintBundle::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void BlueprintBundle::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool BlueprintBundle::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string BlueprintBundle::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void BlueprintBundle::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool BlueprintBundle::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

bool BlueprintBundle::GetTrafficUnlimited() const
{
    return m_trafficUnlimited;
}

void BlueprintBundle::SetTrafficUnlimited(const bool& _trafficUnlimited)
{
    m_trafficUnlimited = _trafficUnlimited;
    m_trafficUnlimitedHasBeenSet = true;
}

bool BlueprintBundle::TrafficUnlimitedHasBeenSet() const
{
    return m_trafficUnlimitedHasBeenSet;
}

