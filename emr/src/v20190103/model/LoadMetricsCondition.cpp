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

#include <tencentcloud/emr/v20190103/model/LoadMetricsCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

LoadMetricsCondition::LoadMetricsCondition() :
    m_statisticPeriodHasBeenSet(false),
    m_triggerThresholdHasBeenSet(false),
    m_loadMetricsHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

CoreInternalOutcome LoadMetricsCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatisticPeriod") && !value["StatisticPeriod"].IsNull())
    {
        if (!value["StatisticPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadMetricsCondition.StatisticPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statisticPeriod = value["StatisticPeriod"].GetInt64();
        m_statisticPeriodHasBeenSet = true;
    }

    if (value.HasMember("TriggerThreshold") && !value["TriggerThreshold"].IsNull())
    {
        if (!value["TriggerThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadMetricsCondition.TriggerThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerThreshold = value["TriggerThreshold"].GetInt64();
        m_triggerThresholdHasBeenSet = true;
    }

    if (value.HasMember("LoadMetrics") && !value["LoadMetrics"].IsNull())
    {
        if (!value["LoadMetrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadMetricsCondition.LoadMetrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadMetrics = string(value["LoadMetrics"].GetString());
        m_loadMetricsHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadMetricsCondition.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadMetricsCondition.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadMetricsCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statisticPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statisticPeriod, allocator);
    }

    if (m_triggerThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerThreshold, allocator);
    }

    if (m_loadMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadMetrics.c_str(), allocator).Move(), allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t LoadMetricsCondition::GetStatisticPeriod() const
{
    return m_statisticPeriod;
}

void LoadMetricsCondition::SetStatisticPeriod(const int64_t& _statisticPeriod)
{
    m_statisticPeriod = _statisticPeriod;
    m_statisticPeriodHasBeenSet = true;
}

bool LoadMetricsCondition::StatisticPeriodHasBeenSet() const
{
    return m_statisticPeriodHasBeenSet;
}

int64_t LoadMetricsCondition::GetTriggerThreshold() const
{
    return m_triggerThreshold;
}

void LoadMetricsCondition::SetTriggerThreshold(const int64_t& _triggerThreshold)
{
    m_triggerThreshold = _triggerThreshold;
    m_triggerThresholdHasBeenSet = true;
}

bool LoadMetricsCondition::TriggerThresholdHasBeenSet() const
{
    return m_triggerThresholdHasBeenSet;
}

string LoadMetricsCondition::GetLoadMetrics() const
{
    return m_loadMetrics;
}

void LoadMetricsCondition::SetLoadMetrics(const string& _loadMetrics)
{
    m_loadMetrics = _loadMetrics;
    m_loadMetricsHasBeenSet = true;
}

bool LoadMetricsCondition::LoadMetricsHasBeenSet() const
{
    return m_loadMetricsHasBeenSet;
}

int64_t LoadMetricsCondition::GetMetricId() const
{
    return m_metricId;
}

void LoadMetricsCondition::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool LoadMetricsCondition::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

vector<TriggerCondition> LoadMetricsCondition::GetConditions() const
{
    return m_conditions;
}

void LoadMetricsCondition::SetConditions(const vector<TriggerCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool LoadMetricsCondition::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

