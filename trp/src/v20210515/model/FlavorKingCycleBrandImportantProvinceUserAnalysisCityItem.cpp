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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem() :
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false),
    m_cityHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

}


double FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

string FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::GetCity() const
{
    return m_city;
}

void FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantProvinceUserAnalysisCityItem::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

