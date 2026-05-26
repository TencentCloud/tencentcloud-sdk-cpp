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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem() :
    m_ratioHasBeenSet(false),
    m_citiesHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem.Ratio` is not array type"));

        const rapidjson::Value &tmpValue = value["Ratio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ratio.push_back((*itr).GetDouble());
        }
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Cities") && !value["Cities"].IsNull())
    {
        if (!value["Cities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem.Cities` is not array type"));

        const rapidjson::Value &tmpValue = value["Cities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandProvinceCityScanAnalysisCityItem item;
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
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


vector<double> FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::SetRatio(const vector<double>& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

vector<FlavorKingCycleBrandProvinceCityScanAnalysisCityItem> FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::GetCities() const
{
    return m_cities;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::SetCities(const vector<FlavorKingCycleBrandProvinceCityScanAnalysisCityItem>& _cities)
{
    m_cities = _cities;
    m_citiesHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::CitiesHasBeenSet() const
{
    return m_citiesHasBeenSet;
}

string FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::GetProvince() const
{
    return m_province;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

