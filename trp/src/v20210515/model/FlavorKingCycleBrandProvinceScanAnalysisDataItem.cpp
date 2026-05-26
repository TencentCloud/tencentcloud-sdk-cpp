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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceScanAnalysisDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandProvinceScanAnalysisDataItem::FlavorKingCycleBrandProvinceScanAnalysisDataItem() :
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_lastCycleMarketShareHasBeenSet(false),
    m_otherLastCycleMarketShareHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_lastCycleRatioHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandProvinceScanAnalysisDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleMarketShare") && !value["LastCycleMarketShare"].IsNull())
    {
        if (!value["LastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.LastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleMarketShare = value["LastCycleMarketShare"].GetDouble();
        m_lastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherLastCycleMarketShare") && !value["OtherLastCycleMarketShare"].IsNull())
    {
        if (!value["OtherLastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.OtherLastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherLastCycleMarketShare = value["OtherLastCycleMarketShare"].GetDouble();
        m_otherLastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("LastCycleRatio") && !value["LastCycleRatio"].IsNull())
    {
        if (!value["LastCycleRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.LastCycleRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleRatio = value["LastCycleRatio"].GetDouble();
        m_lastCycleRatioHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisDataItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marketShare, allocator);
    }

    if (m_otherMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherMarketShare, allocator);
    }

    if (m_lastCycleMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleMarketShare, allocator);
    }

    if (m_otherLastCycleMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherLastCycleMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherLastCycleMarketShare, allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_lastCycleRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleRatio, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_growRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_growRatio, allocator);
    }

    if (m_otherGrowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherGrowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherGrowRatio, allocator);
    }

}


double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetLastCycleMarketShare() const
{
    return m_lastCycleMarketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetLastCycleMarketShare(const double& _lastCycleMarketShare)
{
    m_lastCycleMarketShare = _lastCycleMarketShare;
    m_lastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::LastCycleMarketShareHasBeenSet() const
{
    return m_lastCycleMarketShareHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetOtherLastCycleMarketShare() const
{
    return m_otherLastCycleMarketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetOtherLastCycleMarketShare(const double& _otherLastCycleMarketShare)
{
    m_otherLastCycleMarketShare = _otherLastCycleMarketShare;
    m_otherLastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::OtherLastCycleMarketShareHasBeenSet() const
{
    return m_otherLastCycleMarketShareHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetLastCycleRatio() const
{
    return m_lastCycleRatio;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetLastCycleRatio(const double& _lastCycleRatio)
{
    m_lastCycleRatio = _lastCycleRatio;
    m_lastCycleRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::LastCycleRatioHasBeenSet() const
{
    return m_lastCycleRatioHasBeenSet;
}

string FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetProvince() const
{
    return m_province;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisDataItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandProvinceScanAnalysisDataItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisDataItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

