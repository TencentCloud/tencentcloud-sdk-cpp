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

#include <tencentcloud/lighthouse/v20200324/model/Bundle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Bundle::Bundle() :
    m_bundleIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_systemDiskTypeHasBeenSet(false),
    m_systemDiskSizeHasBeenSet(false),
    m_monthlyTrafficHasBeenSet(false),
    m_supportLinuxUnixPlatformHasBeenSet(false),
    m_supportWindowsPlatformHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_bundleSalesStateHasBeenSet(false),
    m_bundleTypeHasBeenSet(false),
    m_bundleTypeDescriptionHasBeenSet(false),
    m_bundleDisplayLabelHasBeenSet(false)
{
}

CoreInternalOutcome Bundle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskType") && !value["SystemDiskType"].IsNull())
    {
        if (!value["SystemDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.SystemDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskType = string(value["SystemDiskType"].GetString());
        m_systemDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.SystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetInt64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MonthlyTraffic") && !value["MonthlyTraffic"].IsNull())
    {
        if (!value["MonthlyTraffic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.MonthlyTraffic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthlyTraffic = value["MonthlyTraffic"].GetInt64();
        m_monthlyTrafficHasBeenSet = true;
    }

    if (value.HasMember("SupportLinuxUnixPlatform") && !value["SupportLinuxUnixPlatform"].IsNull())
    {
        if (!value["SupportLinuxUnixPlatform"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.SupportLinuxUnixPlatform` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportLinuxUnixPlatform = value["SupportLinuxUnixPlatform"].GetBool();
        m_supportLinuxUnixPlatformHasBeenSet = true;
    }

    if (value.HasMember("SupportWindowsPlatform") && !value["SupportWindowsPlatform"].IsNull())
    {
        if (!value["SupportWindowsPlatform"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.SupportWindowsPlatform` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportWindowsPlatform = value["SupportWindowsPlatform"].GetBool();
        m_supportWindowsPlatformHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("InternetChargeType") && !value["InternetChargeType"].IsNull())
    {
        if (!value["InternetChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.InternetChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetChargeType = string(value["InternetChargeType"].GetString());
        m_internetChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("BundleSalesState") && !value["BundleSalesState"].IsNull())
    {
        if (!value["BundleSalesState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.BundleSalesState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleSalesState = string(value["BundleSalesState"].GetString());
        m_bundleSalesStateHasBeenSet = true;
    }

    if (value.HasMember("BundleType") && !value["BundleType"].IsNull())
    {
        if (!value["BundleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.BundleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleType = string(value["BundleType"].GetString());
        m_bundleTypeHasBeenSet = true;
    }

    if (value.HasMember("BundleTypeDescription") && !value["BundleTypeDescription"].IsNull())
    {
        if (!value["BundleTypeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.BundleTypeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleTypeDescription = string(value["BundleTypeDescription"].GetString());
        m_bundleTypeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("BundleDisplayLabel") && !value["BundleDisplayLabel"].IsNull())
    {
        if (!value["BundleDisplayLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bundle.BundleDisplayLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleDisplayLabel = string(value["BundleDisplayLabel"].GetString());
        m_bundleDisplayLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Bundle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
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

    if (m_bundleDisplayLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleDisplayLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleDisplayLabel.c_str(), allocator).Move(), allocator);
    }

}


string Bundle::GetBundleId() const
{
    return m_bundleId;
}

void Bundle::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool Bundle::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

int64_t Bundle::GetMemory() const
{
    return m_memory;
}

void Bundle::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Bundle::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string Bundle::GetSystemDiskType() const
{
    return m_systemDiskType;
}

void Bundle::SetSystemDiskType(const string& _systemDiskType)
{
    m_systemDiskType = _systemDiskType;
    m_systemDiskTypeHasBeenSet = true;
}

bool Bundle::SystemDiskTypeHasBeenSet() const
{
    return m_systemDiskTypeHasBeenSet;
}

int64_t Bundle::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void Bundle::SetSystemDiskSize(const int64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool Bundle::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

int64_t Bundle::GetMonthlyTraffic() const
{
    return m_monthlyTraffic;
}

void Bundle::SetMonthlyTraffic(const int64_t& _monthlyTraffic)
{
    m_monthlyTraffic = _monthlyTraffic;
    m_monthlyTrafficHasBeenSet = true;
}

bool Bundle::MonthlyTrafficHasBeenSet() const
{
    return m_monthlyTrafficHasBeenSet;
}

bool Bundle::GetSupportLinuxUnixPlatform() const
{
    return m_supportLinuxUnixPlatform;
}

void Bundle::SetSupportLinuxUnixPlatform(const bool& _supportLinuxUnixPlatform)
{
    m_supportLinuxUnixPlatform = _supportLinuxUnixPlatform;
    m_supportLinuxUnixPlatformHasBeenSet = true;
}

bool Bundle::SupportLinuxUnixPlatformHasBeenSet() const
{
    return m_supportLinuxUnixPlatformHasBeenSet;
}

bool Bundle::GetSupportWindowsPlatform() const
{
    return m_supportWindowsPlatform;
}

void Bundle::SetSupportWindowsPlatform(const bool& _supportWindowsPlatform)
{
    m_supportWindowsPlatform = _supportWindowsPlatform;
    m_supportWindowsPlatformHasBeenSet = true;
}

bool Bundle::SupportWindowsPlatformHasBeenSet() const
{
    return m_supportWindowsPlatformHasBeenSet;
}

Price Bundle::GetPrice() const
{
    return m_price;
}

void Bundle::SetPrice(const Price& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool Bundle::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

int64_t Bundle::GetCPU() const
{
    return m_cPU;
}

void Bundle::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Bundle::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t Bundle::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void Bundle::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool Bundle::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string Bundle::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void Bundle::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool Bundle::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

string Bundle::GetBundleSalesState() const
{
    return m_bundleSalesState;
}

void Bundle::SetBundleSalesState(const string& _bundleSalesState)
{
    m_bundleSalesState = _bundleSalesState;
    m_bundleSalesStateHasBeenSet = true;
}

bool Bundle::BundleSalesStateHasBeenSet() const
{
    return m_bundleSalesStateHasBeenSet;
}

string Bundle::GetBundleType() const
{
    return m_bundleType;
}

void Bundle::SetBundleType(const string& _bundleType)
{
    m_bundleType = _bundleType;
    m_bundleTypeHasBeenSet = true;
}

bool Bundle::BundleTypeHasBeenSet() const
{
    return m_bundleTypeHasBeenSet;
}

string Bundle::GetBundleTypeDescription() const
{
    return m_bundleTypeDescription;
}

void Bundle::SetBundleTypeDescription(const string& _bundleTypeDescription)
{
    m_bundleTypeDescription = _bundleTypeDescription;
    m_bundleTypeDescriptionHasBeenSet = true;
}

bool Bundle::BundleTypeDescriptionHasBeenSet() const
{
    return m_bundleTypeDescriptionHasBeenSet;
}

string Bundle::GetBundleDisplayLabel() const
{
    return m_bundleDisplayLabel;
}

void Bundle::SetBundleDisplayLabel(const string& _bundleDisplayLabel)
{
    m_bundleDisplayLabel = _bundleDisplayLabel;
    m_bundleDisplayLabelHasBeenSet = true;
}

bool Bundle::BundleDisplayLabelHasBeenSet() const
{
    return m_bundleDisplayLabelHasBeenSet;
}

