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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantCityScanAnalysisCityItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandImportantCityScanAnalysisCityItem::FlavorKingCycleBrandImportantCityScanAnalysisCityItem() :
    m_ratioHasBeenSet(false),
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_lastCycleRatioHasBeenSet(false),
    m_lastCycleMarketShareHasBeenSet(false),
    m_lastCycleOtherMarketShareHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_cityHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandImportantCityScanAnalysisCityItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleRatio") && !value["LastCycleRatio"].IsNull())
    {
        if (!value["LastCycleRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.LastCycleRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleRatio = value["LastCycleRatio"].GetDouble();
        m_lastCycleRatioHasBeenSet = true;
    }

    if (value.HasMember("LastCycleMarketShare") && !value["LastCycleMarketShare"].IsNull())
    {
        if (!value["LastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.LastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleMarketShare = value["LastCycleMarketShare"].GetDouble();
        m_lastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleOtherMarketShare") && !value["LastCycleOtherMarketShare"].IsNull())
    {
        if (!value["LastCycleOtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.LastCycleOtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleOtherMarketShare = value["LastCycleOtherMarketShare"].GetDouble();
        m_lastCycleOtherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandImportantCityScanAnalysisRegionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regions.push_back(item);
        }
        m_regionsHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisCityItem.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

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

    if (m_lastCycleRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleRatio, allocator);
    }

    if (m_lastCycleMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleMarketShare, allocator);
    }

    if (m_lastCycleOtherMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleOtherMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleOtherMarketShare, allocator);
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

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

}


double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetLastCycleRatio() const
{
    return m_lastCycleRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetLastCycleRatio(const double& _lastCycleRatio)
{
    m_lastCycleRatio = _lastCycleRatio;
    m_lastCycleRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::LastCycleRatioHasBeenSet() const
{
    return m_lastCycleRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetLastCycleMarketShare() const
{
    return m_lastCycleMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetLastCycleMarketShare(const double& _lastCycleMarketShare)
{
    m_lastCycleMarketShare = _lastCycleMarketShare;
    m_lastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::LastCycleMarketShareHasBeenSet() const
{
    return m_lastCycleMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetLastCycleOtherMarketShare() const
{
    return m_lastCycleOtherMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetLastCycleOtherMarketShare(const double& _lastCycleOtherMarketShare)
{
    m_lastCycleOtherMarketShare = _lastCycleOtherMarketShare;
    m_lastCycleOtherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::LastCycleOtherMarketShareHasBeenSet() const
{
    return m_lastCycleOtherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

vector<FlavorKingCycleBrandImportantCityScanAnalysisRegionItem> FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetRegions() const
{
    return m_regions;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetRegions(const vector<FlavorKingCycleBrandImportantCityScanAnalysisRegionItem>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string FlavorKingCycleBrandImportantCityScanAnalysisCityItem::GetCity() const
{
    return m_city;
}

void FlavorKingCycleBrandImportantCityScanAnalysisCityItem::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisCityItem::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

