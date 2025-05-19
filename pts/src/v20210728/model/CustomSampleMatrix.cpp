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

#include <tencentcloud/pts/v20210728/model/CustomSampleMatrix.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CustomSampleMatrix::CustomSampleMatrix() :
    m_metricHasBeenSet(false),
    m_aggregationHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_streamsHasBeenSet(false),
    m_stepHasBeenSet(false)
{
}

CoreInternalOutcome CustomSampleMatrix::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomSampleMatrix.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Aggregation") && !value["Aggregation"].IsNull())
    {
        if (!value["Aggregation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomSampleMatrix.Aggregation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggregation = string(value["Aggregation"].GetString());
        m_aggregationHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomSampleMatrix.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Streams") && !value["Streams"].IsNull())
    {
        if (!value["Streams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomSampleMatrix.Streams` is not array type"));

        const rapidjson::Value &tmpValue = value["Streams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SampleStream item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_streams.push_back(item);
        }
        m_streamsHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomSampleMatrix.Step` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetInt64();
        m_stepHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomSampleMatrix::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_streamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Streams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streams.begin(); itr != m_streams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

}


string CustomSampleMatrix::GetMetric() const
{
    return m_metric;
}

void CustomSampleMatrix::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool CustomSampleMatrix::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string CustomSampleMatrix::GetAggregation() const
{
    return m_aggregation;
}

void CustomSampleMatrix::SetAggregation(const string& _aggregation)
{
    m_aggregation = _aggregation;
    m_aggregationHasBeenSet = true;
}

bool CustomSampleMatrix::AggregationHasBeenSet() const
{
    return m_aggregationHasBeenSet;
}

string CustomSampleMatrix::GetUnit() const
{
    return m_unit;
}

void CustomSampleMatrix::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool CustomSampleMatrix::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<SampleStream> CustomSampleMatrix::GetStreams() const
{
    return m_streams;
}

void CustomSampleMatrix::SetStreams(const vector<SampleStream>& _streams)
{
    m_streams = _streams;
    m_streamsHasBeenSet = true;
}

bool CustomSampleMatrix::StreamsHasBeenSet() const
{
    return m_streamsHasBeenSet;
}

int64_t CustomSampleMatrix::GetStep() const
{
    return m_step;
}

void CustomSampleMatrix::SetStep(const int64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool CustomSampleMatrix::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

