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

#include <tencentcloud/tione/v20211111/model/TrainingMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainingMetric::TrainingMetric() :
    m_metricNameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_epochsHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_totalStepsHasBeenSet(false)
{
}

CoreInternalOutcome TrainingMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingMetric.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingMetric.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainingDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_values.push_back(item);
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Epochs") && !value["Epochs"].IsNull())
    {
        if (!value["Epochs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingMetric.Epochs` is not array type"));

        const rapidjson::Value &tmpValue = value["Epochs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainingDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_epochs.push_back(item);
        }
        m_epochsHasBeenSet = true;
    }

    if (value.HasMember("Steps") && !value["Steps"].IsNull())
    {
        if (!value["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingMetric.Steps` is not array type"));

        const rapidjson::Value &tmpValue = value["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainingDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }

    if (value.HasMember("TotalSteps") && !value["TotalSteps"].IsNull())
    {
        if (!value["TotalSteps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingMetric.TotalSteps` is not array type"));

        const rapidjson::Value &tmpValue = value["TotalSteps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainingDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_totalSteps.push_back(item);
        }
        m_totalStepsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_epochsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Epochs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_epochs.begin(); itr != m_epochs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_totalSteps.begin(); itr != m_totalSteps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrainingMetric::GetMetricName() const
{
    return m_metricName;
}

void TrainingMetric::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool TrainingMetric::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<TrainingDataPoint> TrainingMetric::GetValues() const
{
    return m_values;
}

void TrainingMetric::SetValues(const vector<TrainingDataPoint>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool TrainingMetric::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

vector<TrainingDataPoint> TrainingMetric::GetEpochs() const
{
    return m_epochs;
}

void TrainingMetric::SetEpochs(const vector<TrainingDataPoint>& _epochs)
{
    m_epochs = _epochs;
    m_epochsHasBeenSet = true;
}

bool TrainingMetric::EpochsHasBeenSet() const
{
    return m_epochsHasBeenSet;
}

vector<TrainingDataPoint> TrainingMetric::GetSteps() const
{
    return m_steps;
}

void TrainingMetric::SetSteps(const vector<TrainingDataPoint>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool TrainingMetric::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

vector<TrainingDataPoint> TrainingMetric::GetTotalSteps() const
{
    return m_totalSteps;
}

void TrainingMetric::SetTotalSteps(const vector<TrainingDataPoint>& _totalSteps)
{
    m_totalSteps = _totalSteps;
    m_totalStepsHasBeenSet = true;
}

bool TrainingMetric::TotalStepsHasBeenSet() const
{
    return m_totalStepsHasBeenSet;
}

