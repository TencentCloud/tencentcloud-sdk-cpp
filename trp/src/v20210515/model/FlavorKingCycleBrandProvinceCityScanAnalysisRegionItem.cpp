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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem() :
    m_ratioHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem.Ratio` is not array type"));

        const rapidjson::Value &tmpValue = value["Ratio"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ratio.push_back((*itr).GetDouble());
        }
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


vector<double> FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::SetRatio(const vector<double>& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::GetRegion() const
{
    return m_region;
}

void FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

