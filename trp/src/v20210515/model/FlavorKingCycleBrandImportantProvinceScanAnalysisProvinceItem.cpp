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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem() :
    m_ratioHasBeenSet(false),
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_lastCycleRatioHasBeenSet(false),
    m_lastCycleMarketShareHasBeenSet(false),
    m_lastCycleOtherMarketShareHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false),
    m_citiesHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleRatio") && !value["LastCycleRatio"].IsNull())
    {
        if (!value["LastCycleRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.LastCycleRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleRatio = value["LastCycleRatio"].GetDouble();
        m_lastCycleRatioHasBeenSet = true;
    }

    if (value.HasMember("LastCycleMarketShare") && !value["LastCycleMarketShare"].IsNull())
    {
        if (!value["LastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.LastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleMarketShare = value["LastCycleMarketShare"].GetDouble();
        m_lastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleOtherMarketShare") && !value["LastCycleOtherMarketShare"].IsNull())
    {
        if (!value["LastCycleOtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.LastCycleOtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleOtherMarketShare = value["LastCycleOtherMarketShare"].GetDouble();
        m_lastCycleOtherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }

    if (value.HasMember("Cities") && !value["Cities"].IsNull())
    {
        if (!value["Cities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.Cities` is not array type"));

        const rapidjson::Value &tmpValue = value["Cities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandImportantProvinceScanAnalysisCityItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cities.push_back(item);
        }
        m_citiesHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_citiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cities.begin(); itr != m_cities.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

}


double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetLastCycleRatio() const
{
    return m_lastCycleRatio;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetLastCycleRatio(const double& _lastCycleRatio)
{
    m_lastCycleRatio = _lastCycleRatio;
    m_lastCycleRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::LastCycleRatioHasBeenSet() const
{
    return m_lastCycleRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetLastCycleMarketShare() const
{
    return m_lastCycleMarketShare;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetLastCycleMarketShare(const double& _lastCycleMarketShare)
{
    m_lastCycleMarketShare = _lastCycleMarketShare;
    m_lastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::LastCycleMarketShareHasBeenSet() const
{
    return m_lastCycleMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetLastCycleOtherMarketShare() const
{
    return m_lastCycleOtherMarketShare;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetLastCycleOtherMarketShare(const double& _lastCycleOtherMarketShare)
{
    m_lastCycleOtherMarketShare = _lastCycleOtherMarketShare;
    m_lastCycleOtherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::LastCycleOtherMarketShareHasBeenSet() const
{
    return m_lastCycleOtherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

vector<FlavorKingCycleBrandImportantProvinceScanAnalysisCityItem> FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetCities() const
{
    return m_cities;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetCities(const vector<FlavorKingCycleBrandImportantProvinceScanAnalysisCityItem>& _cities)
{
    m_cities = _cities;
    m_citiesHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::CitiesHasBeenSet() const
{
    return m_citiesHasBeenSet;
}

string FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::GetProvince() const
{
    return m_province;
}

void FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceScanAnalysisProvinceItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

