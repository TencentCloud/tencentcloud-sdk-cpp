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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceCityScanAnalysisCityItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::FlavorKingCycleBrandProvinceCityScanAnalysisCityItem() :
    m_ratioHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_cityHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisCityItem.Ratio` is not array type"));

        const rapidjson::Value &tmpValue = value["Ratio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ratio.push_back((*itr).GetDouble());
        }
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisCityItem.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem item;
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
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisCityItem.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ratio.begin(); itr != m_ratio.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
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


vector<double> FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::SetRatio(const vector<double>& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

vector<FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem> FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::GetRegions() const
{
    return m_regions;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::SetRegions(const vector<FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::GetCity() const
{
    return m_city;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisCityItem::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

