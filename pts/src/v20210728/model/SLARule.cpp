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

#include <tencentcloud/pts/v20210728/model/SLARule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

SLARule::SLARule() :
    m_metricHasBeenSet(false),
    m_aggregationHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_labelFilterHasBeenSet(false),
    m_abortFlagHasBeenSet(false),
    m_forHasBeenSet(false)
{
}

CoreInternalOutcome SLARule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Aggregation") && !value["Aggregation"].IsNull())
    {
        if (!value["Aggregation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.Aggregation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggregation = string(value["Aggregation"].GetString());
        m_aggregationHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("LabelFilter") && !value["LabelFilter"].IsNull())
    {
        if (!value["LabelFilter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SLARule.LabelFilter` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelFilter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SLALabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelFilter.push_back(item);
        }
        m_labelFilterHasBeenSet = true;
    }

    if (value.HasMember("AbortFlag") && !value["AbortFlag"].IsNull())
    {
        if (!value["AbortFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.AbortFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_abortFlag = value["AbortFlag"].GetBool();
        m_abortFlagHasBeenSet = true;
    }

    if (value.HasMember("For") && !value["For"].IsNull())
    {
        if (!value["For"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLARule.For` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_for = string(value["For"].GetString());
        m_forHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SLARule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggregation.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_labelFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelFilter.begin(); itr != m_labelFilter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abortFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbortFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abortFlag, allocator);
    }

    if (m_forHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "For";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_for.c_str(), allocator).Move(), allocator);
    }

}


string SLARule::GetMetric() const
{
    return m_metric;
}

void SLARule::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool SLARule::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string SLARule::GetAggregation() const
{
    return m_aggregation;
}

void SLARule::SetAggregation(const string& _aggregation)
{
    m_aggregation = _aggregation;
    m_aggregationHasBeenSet = true;
}

bool SLARule::AggregationHasBeenSet() const
{
    return m_aggregationHasBeenSet;
}

string SLARule::GetCondition() const
{
    return m_condition;
}

void SLARule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool SLARule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

double SLARule::GetValue() const
{
    return m_value;
}

void SLARule::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SLARule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<SLALabel> SLARule::GetLabelFilter() const
{
    return m_labelFilter;
}

void SLARule::SetLabelFilter(const vector<SLALabel>& _labelFilter)
{
    m_labelFilter = _labelFilter;
    m_labelFilterHasBeenSet = true;
}

bool SLARule::LabelFilterHasBeenSet() const
{
    return m_labelFilterHasBeenSet;
}

bool SLARule::GetAbortFlag() const
{
    return m_abortFlag;
}

void SLARule::SetAbortFlag(const bool& _abortFlag)
{
    m_abortFlag = _abortFlag;
    m_abortFlagHasBeenSet = true;
}

bool SLARule::AbortFlagHasBeenSet() const
{
    return m_abortFlagHasBeenSet;
}

string SLARule::GetFor() const
{
    return m_for;
}

void SLARule::SetFor(const string& _for)
{
    m_for = _for;
    m_forHasBeenSet = true;
}

bool SLARule::ForHasBeenSet() const
{
    return m_forHasBeenSet;
}

