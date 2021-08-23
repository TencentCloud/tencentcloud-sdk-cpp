/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/ConsumptionRegionSummaryDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ConsumptionRegionSummaryDataItem::ConsumptionRegionSummaryDataItem() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_businessHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionRegionSummaryDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionRegionSummaryDataItem.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionRegionSummaryDataItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionRegionSummaryDataItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionRegionSummaryDataItem.Trend` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trend.Deserialize(value["Trend"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trendHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumptionRegionSummaryDataItem.Business` is not array type"));

        const rapidjson::Value &tmpValue = value["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumptionBusinessSummaryDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_business.push_back(item);
        }
        m_businessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionRegionSummaryDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trend.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConsumptionRegionSummaryDataItem::GetRegionId() const
{
    return m_regionId;
}

void ConsumptionRegionSummaryDataItem::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ConsumptionRegionSummaryDataItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ConsumptionRegionSummaryDataItem::GetRegionName() const
{
    return m_regionName;
}

void ConsumptionRegionSummaryDataItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ConsumptionRegionSummaryDataItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ConsumptionRegionSummaryDataItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ConsumptionRegionSummaryDataItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ConsumptionRegionSummaryDataItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

ConsumptionSummaryTrend ConsumptionRegionSummaryDataItem::GetTrend() const
{
    return m_trend;
}

void ConsumptionRegionSummaryDataItem::SetTrend(const ConsumptionSummaryTrend& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool ConsumptionRegionSummaryDataItem::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

vector<ConsumptionBusinessSummaryDataItem> ConsumptionRegionSummaryDataItem::GetBusiness() const
{
    return m_business;
}

void ConsumptionRegionSummaryDataItem::SetBusiness(const vector<ConsumptionBusinessSummaryDataItem>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ConsumptionRegionSummaryDataItem::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

