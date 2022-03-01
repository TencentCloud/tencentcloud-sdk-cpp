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

#include <tencentcloud/tsf/v20180326/model/InvocationMetricScatterPlot.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

InvocationMetricScatterPlot::InvocationMetricScatterPlot() :
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_dataPointsHasBeenSet(false)
{
}

CoreInternalOutcome InvocationMetricScatterPlot::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationMetricScatterPlot.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationMetricScatterPlot.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationMetricScatterPlot.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("DataPoints") && !value["DataPoints"].IsNull())
    {
        if (!value["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationMetricScatterPlot.DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiValueDataPoints item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataPoints.push_back(item);
        }
        m_dataPointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationMetricScatterPlot::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_dataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataPoints.begin(); itr != m_dataPoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InvocationMetricScatterPlot::GetEndTime() const
{
    return m_endTime;
}

void InvocationMetricScatterPlot::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InvocationMetricScatterPlot::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t InvocationMetricScatterPlot::GetStartTime() const
{
    return m_startTime;
}

void InvocationMetricScatterPlot::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InvocationMetricScatterPlot::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t InvocationMetricScatterPlot::GetPeriod() const
{
    return m_period;
}

void InvocationMetricScatterPlot::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InvocationMetricScatterPlot::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<MultiValueDataPoints> InvocationMetricScatterPlot::GetDataPoints() const
{
    return m_dataPoints;
}

void InvocationMetricScatterPlot::SetDataPoints(const vector<MultiValueDataPoints>& _dataPoints)
{
    m_dataPoints = _dataPoints;
    m_dataPointsHasBeenSet = true;
}

bool InvocationMetricScatterPlot::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}

