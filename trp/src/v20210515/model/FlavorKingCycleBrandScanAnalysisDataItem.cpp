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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandScanAnalysisDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandScanAnalysisDataItem::FlavorKingCycleBrandScanAnalysisDataItem() :
    m_durationHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandScanAnalysisDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisDataItem.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisDataItem.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisDataItem.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandScanAnalysisDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


string FlavorKingCycleBrandScanAnalysisDataItem::GetDuration() const
{
    return m_duration;
}

void FlavorKingCycleBrandScanAnalysisDataItem::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisDataItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string FlavorKingCycleBrandScanAnalysisDataItem::GetBrandName() const
{
    return m_brandName;
}

void FlavorKingCycleBrandScanAnalysisDataItem::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisDataItem::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

double FlavorKingCycleBrandScanAnalysisDataItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandScanAnalysisDataItem::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisDataItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

