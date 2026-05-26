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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceScanAnalysisResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandProvinceScanAnalysisResponse::FlavorKingCycleBrandProvinceScanAnalysisResponse() :
    m_marketShareHasBeenSet(false),
    m_lastCycleMarketShareHasBeenSet(false),
    m_provincesHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandProvinceScanAnalysisResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisResponse.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleMarketShare") && !value["LastCycleMarketShare"].IsNull())
    {
        if (!value["LastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisResponse.LastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleMarketShare = value["LastCycleMarketShare"].GetDouble();
        m_lastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("Provinces") && !value["Provinces"].IsNull())
    {
        if (!value["Provinces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisResponse.Provinces` is not array type"));

        const rapidjson::Value &tmpValue = value["Provinces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandProvinceScanAnalysisDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_provinces.push_back(item);
        }
        m_provincesHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisResponse.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandProvinceScanAnalysisResponse.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marketShare, allocator);
    }

    if (m_lastCycleMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleMarketShare, allocator);
    }

    if (m_provincesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provinces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_provinces.begin(); itr != m_provinces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


double FlavorKingCycleBrandProvinceScanAnalysisResponse::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisResponse::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisResponse::GetLastCycleMarketShare() const
{
    return m_lastCycleMarketShare;
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::SetLastCycleMarketShare(const double& _lastCycleMarketShare)
{
    m_lastCycleMarketShare = _lastCycleMarketShare;
    m_lastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisResponse::LastCycleMarketShareHasBeenSet() const
{
    return m_lastCycleMarketShareHasBeenSet;
}

vector<FlavorKingCycleBrandProvinceScanAnalysisDataItem> FlavorKingCycleBrandProvinceScanAnalysisResponse::GetProvinces() const
{
    return m_provinces;
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::SetProvinces(const vector<FlavorKingCycleBrandProvinceScanAnalysisDataItem>& _provinces)
{
    m_provinces = _provinces;
    m_provincesHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisResponse::ProvincesHasBeenSet() const
{
    return m_provincesHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisResponse::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisResponse::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandProvinceScanAnalysisResponse::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandProvinceScanAnalysisResponse::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandProvinceScanAnalysisResponse::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

