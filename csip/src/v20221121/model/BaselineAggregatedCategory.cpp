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

#include <tencentcloud/csip/v20221121/model/BaselineAggregatedCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineAggregatedCategory::BaselineAggregatedCategory() :
    m_categoryHasBeenSet(false),
    m_notPassItemRiskLevelStatisticHasBeenSet(false),
    m_passItemCountHasBeenSet(false),
    m_notPassItemCountHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_scannedHasBeenSet(false)
{
}

CoreInternalOutcome BaselineAggregatedCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.Category` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_category.Deserialize(value["Category"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("NotPassItemRiskLevelStatistic") && !value["NotPassItemRiskLevelStatistic"].IsNull())
    {
        if (!value["NotPassItemRiskLevelStatistic"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.NotPassItemRiskLevelStatistic` is not array type"));

        const rapidjson::Value &tmpValue = value["NotPassItemRiskLevelStatistic"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineRiskLevelStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notPassItemRiskLevelStatistic.push_back(item);
        }
        m_notPassItemRiskLevelStatisticHasBeenSet = true;
    }

    if (value.HasMember("PassItemCount") && !value["PassItemCount"].IsNull())
    {
        if (!value["PassItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.PassItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passItemCount = value["PassItemCount"].GetUint64();
        m_passItemCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassItemCount") && !value["NotPassItemCount"].IsNull())
    {
        if (!value["NotPassItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.NotPassItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassItemCount = value["NotPassItemCount"].GetUint64();
        m_notPassItemCountHasBeenSet = true;
    }

    if (value.HasMember("PassRate") && !value["PassRate"].IsNull())
    {
        if (!value["PassRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.PassRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = value["PassRate"].GetDouble();
        m_passRateHasBeenSet = true;
    }

    if (value.HasMember("Scanned") && !value["Scanned"].IsNull())
    {
        if (!value["Scanned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAggregatedCategory.Scanned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scanned = value["Scanned"].GetBool();
        m_scannedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineAggregatedCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_category.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notPassItemRiskLevelStatisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemRiskLevelStatistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notPassItemRiskLevelStatistic.begin(); itr != m_notPassItemRiskLevelStatistic.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_passItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passItemCount, allocator);
    }

    if (m_notPassItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassItemCount, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_scannedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scanned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanned, allocator);
    }

}


BaselineCategory BaselineAggregatedCategory::GetCategory() const
{
    return m_category;
}

void BaselineAggregatedCategory::SetCategory(const BaselineCategory& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool BaselineAggregatedCategory::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<BaselineRiskLevelStatistic> BaselineAggregatedCategory::GetNotPassItemRiskLevelStatistic() const
{
    return m_notPassItemRiskLevelStatistic;
}

void BaselineAggregatedCategory::SetNotPassItemRiskLevelStatistic(const vector<BaselineRiskLevelStatistic>& _notPassItemRiskLevelStatistic)
{
    m_notPassItemRiskLevelStatistic = _notPassItemRiskLevelStatistic;
    m_notPassItemRiskLevelStatisticHasBeenSet = true;
}

bool BaselineAggregatedCategory::NotPassItemRiskLevelStatisticHasBeenSet() const
{
    return m_notPassItemRiskLevelStatisticHasBeenSet;
}

uint64_t BaselineAggregatedCategory::GetPassItemCount() const
{
    return m_passItemCount;
}

void BaselineAggregatedCategory::SetPassItemCount(const uint64_t& _passItemCount)
{
    m_passItemCount = _passItemCount;
    m_passItemCountHasBeenSet = true;
}

bool BaselineAggregatedCategory::PassItemCountHasBeenSet() const
{
    return m_passItemCountHasBeenSet;
}

uint64_t BaselineAggregatedCategory::GetNotPassItemCount() const
{
    return m_notPassItemCount;
}

void BaselineAggregatedCategory::SetNotPassItemCount(const uint64_t& _notPassItemCount)
{
    m_notPassItemCount = _notPassItemCount;
    m_notPassItemCountHasBeenSet = true;
}

bool BaselineAggregatedCategory::NotPassItemCountHasBeenSet() const
{
    return m_notPassItemCountHasBeenSet;
}

double BaselineAggregatedCategory::GetPassRate() const
{
    return m_passRate;
}

void BaselineAggregatedCategory::SetPassRate(const double& _passRate)
{
    m_passRate = _passRate;
    m_passRateHasBeenSet = true;
}

bool BaselineAggregatedCategory::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

bool BaselineAggregatedCategory::GetScanned() const
{
    return m_scanned;
}

void BaselineAggregatedCategory::SetScanned(const bool& _scanned)
{
    m_scanned = _scanned;
    m_scannedHasBeenSet = true;
}

bool BaselineAggregatedCategory::ScannedHasBeenSet() const
{
    return m_scannedHasBeenSet;
}

