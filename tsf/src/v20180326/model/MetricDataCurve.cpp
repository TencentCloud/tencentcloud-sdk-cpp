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

#include <tencentcloud/tsf/v20180326/model/MetricDataCurve.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MetricDataCurve::MetricDataCurve() :
    m_metricNameHasBeenSet(false),
    m_metricFunctionHasBeenSet(false),
    m_metricDataPointsHasBeenSet(false)
{
}

CoreInternalOutcome MetricDataCurve::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataCurve.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricFunction") && !value["MetricFunction"].IsNull())
    {
        if (!value["MetricFunction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataCurve.MetricFunction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricFunction = string(value["MetricFunction"].GetString());
        m_metricFunctionHasBeenSet = true;
    }

    if (value.HasMember("MetricDataPoints") && !value["MetricDataPoints"].IsNull())
    {
        if (!value["MetricDataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricDataCurve.MetricDataPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricDataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricDataPoints.push_back(item);
        }
        m_metricDataPointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricDataCurve::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricFunctionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricFunction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricFunction.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDataPoints.begin(); itr != m_metricDataPoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricDataCurve::GetMetricName() const
{
    return m_metricName;
}

void MetricDataCurve::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricDataCurve::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string MetricDataCurve::GetMetricFunction() const
{
    return m_metricFunction;
}

void MetricDataCurve::SetMetricFunction(const string& _metricFunction)
{
    m_metricFunction = _metricFunction;
    m_metricFunctionHasBeenSet = true;
}

bool MetricDataCurve::MetricFunctionHasBeenSet() const
{
    return m_metricFunctionHasBeenSet;
}

vector<MetricDataPoint> MetricDataCurve::GetMetricDataPoints() const
{
    return m_metricDataPoints;
}

void MetricDataCurve::SetMetricDataPoints(const vector<MetricDataPoint>& _metricDataPoints)
{
    m_metricDataPoints = _metricDataPoints;
    m_metricDataPointsHasBeenSet = true;
}

bool MetricDataCurve::MetricDataPointsHasBeenSet() const
{
    return m_metricDataPointsHasBeenSet;
}

