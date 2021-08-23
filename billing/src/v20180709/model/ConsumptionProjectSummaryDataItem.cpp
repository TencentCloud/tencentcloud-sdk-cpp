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

#include <tencentcloud/billing/v20180709/model/ConsumptionProjectSummaryDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ConsumptionProjectSummaryDataItem::ConsumptionProjectSummaryDataItem() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_businessHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionProjectSummaryDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionProjectSummaryDataItem.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionProjectSummaryDataItem.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionProjectSummaryDataItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumptionProjectSummaryDataItem.Trend` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ConsumptionProjectSummaryDataItem.Business` is not array type"));

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

void ConsumptionProjectSummaryDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
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


string ConsumptionProjectSummaryDataItem::GetProjectId() const
{
    return m_projectId;
}

void ConsumptionProjectSummaryDataItem::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ConsumptionProjectSummaryDataItem::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ConsumptionProjectSummaryDataItem::GetProjectName() const
{
    return m_projectName;
}

void ConsumptionProjectSummaryDataItem::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ConsumptionProjectSummaryDataItem::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ConsumptionProjectSummaryDataItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ConsumptionProjectSummaryDataItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ConsumptionProjectSummaryDataItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

ConsumptionSummaryTrend ConsumptionProjectSummaryDataItem::GetTrend() const
{
    return m_trend;
}

void ConsumptionProjectSummaryDataItem::SetTrend(const ConsumptionSummaryTrend& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool ConsumptionProjectSummaryDataItem::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

vector<ConsumptionBusinessSummaryDataItem> ConsumptionProjectSummaryDataItem::GetBusiness() const
{
    return m_business;
}

void ConsumptionProjectSummaryDataItem::SetBusiness(const vector<ConsumptionBusinessSummaryDataItem>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ConsumptionProjectSummaryDataItem::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

