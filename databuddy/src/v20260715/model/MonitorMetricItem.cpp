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

#include <tencentcloud/databuddy/v20260715/model/MonitorMetricItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

MonitorMetricItem::MonitorMetricItem() :
    m_metricTypeHasBeenSet(false),
    m_warningThresholdHasBeenSet(false),
    m_timeoutThresholdHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMetricItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricType") && !value["MetricType"].IsNull())
    {
        if (!value["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricItem.MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(value["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (value.HasMember("WarningThreshold") && !value["WarningThreshold"].IsNull())
    {
        if (!value["WarningThreshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricItem.WarningThreshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warningThreshold = string(value["WarningThreshold"].GetString());
        m_warningThresholdHasBeenSet = true;
    }

    if (value.HasMember("TimeoutThreshold") && !value["TimeoutThreshold"].IsNull())
    {
        if (!value["TimeoutThreshold"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricItem.TimeoutThreshold` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutThreshold = string(value["TimeoutThreshold"].GetString());
        m_timeoutThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMetricItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_warningThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warningThreshold.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeoutThreshold.c_str(), allocator).Move(), allocator);
    }

}


string MonitorMetricItem::GetMetricType() const
{
    return m_metricType;
}

void MonitorMetricItem::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool MonitorMetricItem::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string MonitorMetricItem::GetWarningThreshold() const
{
    return m_warningThreshold;
}

void MonitorMetricItem::SetWarningThreshold(const string& _warningThreshold)
{
    m_warningThreshold = _warningThreshold;
    m_warningThresholdHasBeenSet = true;
}

bool MonitorMetricItem::WarningThresholdHasBeenSet() const
{
    return m_warningThresholdHasBeenSet;
}

string MonitorMetricItem::GetTimeoutThreshold() const
{
    return m_timeoutThreshold;
}

void MonitorMetricItem::SetTimeoutThreshold(const string& _timeoutThreshold)
{
    m_timeoutThreshold = _timeoutThreshold;
    m_timeoutThresholdHasBeenSet = true;
}

bool MonitorMetricItem::TimeoutThresholdHasBeenSet() const
{
    return m_timeoutThresholdHasBeenSet;
}

