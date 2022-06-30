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

#include <tencentcloud/tsf/v20180326/model/MetricDataSingleValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MetricDataSingleValue::MetricDataSingleValue() :
    m_metricNameHasBeenSet(false),
    m_metricFunctionHasBeenSet(false),
    m_metricDataValueHasBeenSet(false),
    m_dailyPercentHasBeenSet(false)
{
}

CoreInternalOutcome MetricDataSingleValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataSingleValue.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricFunction") && !value["MetricFunction"].IsNull())
    {
        if (!value["MetricFunction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataSingleValue.MetricFunction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricFunction = string(value["MetricFunction"].GetString());
        m_metricFunctionHasBeenSet = true;
    }

    if (value.HasMember("MetricDataValue") && !value["MetricDataValue"].IsNull())
    {
        if (!value["MetricDataValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataSingleValue.MetricDataValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricDataValue = string(value["MetricDataValue"].GetString());
        m_metricDataValueHasBeenSet = true;
    }

    if (value.HasMember("DailyPercent") && !value["DailyPercent"].IsNull())
    {
        if (!value["DailyPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricDataSingleValue.DailyPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dailyPercent = value["DailyPercent"].GetDouble();
        m_dailyPercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricDataSingleValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_metricDataValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDataValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricDataValue.c_str(), allocator).Move(), allocator);
    }

    if (m_dailyPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyPercent, allocator);
    }

}


string MetricDataSingleValue::GetMetricName() const
{
    return m_metricName;
}

void MetricDataSingleValue::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricDataSingleValue::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string MetricDataSingleValue::GetMetricFunction() const
{
    return m_metricFunction;
}

void MetricDataSingleValue::SetMetricFunction(const string& _metricFunction)
{
    m_metricFunction = _metricFunction;
    m_metricFunctionHasBeenSet = true;
}

bool MetricDataSingleValue::MetricFunctionHasBeenSet() const
{
    return m_metricFunctionHasBeenSet;
}

string MetricDataSingleValue::GetMetricDataValue() const
{
    return m_metricDataValue;
}

void MetricDataSingleValue::SetMetricDataValue(const string& _metricDataValue)
{
    m_metricDataValue = _metricDataValue;
    m_metricDataValueHasBeenSet = true;
}

bool MetricDataSingleValue::MetricDataValueHasBeenSet() const
{
    return m_metricDataValueHasBeenSet;
}

double MetricDataSingleValue::GetDailyPercent() const
{
    return m_dailyPercent;
}

void MetricDataSingleValue::SetDailyPercent(const double& _dailyPercent)
{
    m_dailyPercent = _dailyPercent;
    m_dailyPercentHasBeenSet = true;
}

bool MetricDataSingleValue::DailyPercentHasBeenSet() const
{
    return m_dailyPercentHasBeenSet;
}

