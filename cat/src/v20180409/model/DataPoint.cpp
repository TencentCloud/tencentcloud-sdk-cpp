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

#include <tencentcloud/cat/v20180409/model/DataPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

DataPoint::DataPoint() :
    m_logTimeHasBeenSet(false),
    m_metricValueHasBeenSet(false)
{
}

CoreInternalOutcome DataPoint::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LogTime") && !value["LogTime"].IsNull())
    {
        if (!value["LogTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataPoint.LogTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTime = string(value["LogTime"].GetString());
        m_logTimeHasBeenSet = true;
    }

    if (value.HasMember("MetricValue") && !value["MetricValue"].IsNull())
    {
        if (!value["MetricValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `DataPoint.MetricValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_metricValue = value["MetricValue"].GetDouble();
        m_metricValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataPoint::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_logTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricValue, allocator);
    }

}


string DataPoint::GetLogTime() const
{
    return m_logTime;
}

void DataPoint::SetLogTime(const string& _logTime)
{
    m_logTime = _logTime;
    m_logTimeHasBeenSet = true;
}

bool DataPoint::LogTimeHasBeenSet() const
{
    return m_logTimeHasBeenSet;
}

double DataPoint::GetMetricValue() const
{
    return m_metricValue;
}

void DataPoint::SetMetricValue(const double& _metricValue)
{
    m_metricValue = _metricValue;
    m_metricValueHasBeenSet = true;
}

bool DataPoint::MetricValueHasBeenSet() const
{
    return m_metricValueHasBeenSet;
}

