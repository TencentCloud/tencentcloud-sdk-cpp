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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem() :
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false),
    m_citiesHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }

    if (value.HasMember("Cities") && !value["Cities"].IsNull())
    {
        if (!value["Cities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.Cities` is not array type"));

        const rapidjson::Value &tmpValue = value["Cities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem item;
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
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


double FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

vector<FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem> FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetCities() const
{
    return m_cities;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetCities(const vector<FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem>& _cities)
{
    m_cities = _cities;
    m_citiesHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::CitiesHasBeenSet() const
{
    return m_citiesHasBeenSet;
}

string FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::GetProvince() const
{
    return m_province;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisProvinceItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

