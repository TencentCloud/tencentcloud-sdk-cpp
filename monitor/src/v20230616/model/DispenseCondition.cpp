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

#include <tencentcloud/monitor/v20230616/model/DispenseCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DispenseCondition::DispenseCondition() :
    m_extMetricHasBeenSet(false),
    m_dispenseFiltersHasBeenSet(false),
    m_conditionIdHasBeenSet(false)
{
}

CoreInternalOutcome DispenseCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExtMetric") && !value["ExtMetric"].IsNull())
    {
        if (!value["ExtMetric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseCondition.ExtMetric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extMetric = string(value["ExtMetric"].GetString());
        m_extMetricHasBeenSet = true;
    }

    if (value.HasMember("DispenseFilters") && !value["DispenseFilters"].IsNull())
    {
        if (!value["DispenseFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DispenseCondition.DispenseFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["DispenseFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DispenseFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dispenseFilters.push_back(item);
        }
        m_dispenseFiltersHasBeenSet = true;
    }

    if (value.HasMember("ConditionId") && !value["ConditionId"].IsNull())
    {
        if (!value["ConditionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseCondition.ConditionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conditionId = value["ConditionId"].GetInt64();
        m_conditionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DispenseCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_extMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extMetric.c_str(), allocator).Move(), allocator);
    }

    if (m_dispenseFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dispenseFilters.begin(); itr != m_dispenseFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_conditionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conditionId, allocator);
    }

}


string DispenseCondition::GetExtMetric() const
{
    return m_extMetric;
}

void DispenseCondition::SetExtMetric(const string& _extMetric)
{
    m_extMetric = _extMetric;
    m_extMetricHasBeenSet = true;
}

bool DispenseCondition::ExtMetricHasBeenSet() const
{
    return m_extMetricHasBeenSet;
}

vector<DispenseFilter> DispenseCondition::GetDispenseFilters() const
{
    return m_dispenseFilters;
}

void DispenseCondition::SetDispenseFilters(const vector<DispenseFilter>& _dispenseFilters)
{
    m_dispenseFilters = _dispenseFilters;
    m_dispenseFiltersHasBeenSet = true;
}

bool DispenseCondition::DispenseFiltersHasBeenSet() const
{
    return m_dispenseFiltersHasBeenSet;
}

int64_t DispenseCondition::GetConditionId() const
{
    return m_conditionId;
}

void DispenseCondition::SetConditionId(const int64_t& _conditionId)
{
    m_conditionId = _conditionId;
    m_conditionIdHasBeenSet = true;
}

bool DispenseCondition::ConditionIdHasBeenSet() const
{
    return m_conditionIdHasBeenSet;
}

