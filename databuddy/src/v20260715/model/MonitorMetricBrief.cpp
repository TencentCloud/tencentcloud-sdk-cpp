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

#include <tencentcloud/databuddy/v20260715/model/MonitorMetricBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

MonitorMetricBrief::MonitorMetricBrief() :
    m_monitorMetricIdHasBeenSet(false),
    m_alarmMonitorTypeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMetricBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorMetricId") && !value["MonitorMetricId"].IsNull())
    {
        if (!value["MonitorMetricId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricBrief.MonitorMetricId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorMetricId = string(value["MonitorMetricId"].GetString());
        m_monitorMetricIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmMonitorType") && !value["AlarmMonitorType"].IsNull())
    {
        if (!value["AlarmMonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorMetricBrief.AlarmMonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMonitorType = string(value["AlarmMonitorType"].GetString());
        m_alarmMonitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorMetricBrief.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorMetricItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMetricBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorMetricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorMetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorMetricId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmMonitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMonitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MonitorMetricBrief::GetMonitorMetricId() const
{
    return m_monitorMetricId;
}

void MonitorMetricBrief::SetMonitorMetricId(const string& _monitorMetricId)
{
    m_monitorMetricId = _monitorMetricId;
    m_monitorMetricIdHasBeenSet = true;
}

bool MonitorMetricBrief::MonitorMetricIdHasBeenSet() const
{
    return m_monitorMetricIdHasBeenSet;
}

string MonitorMetricBrief::GetAlarmMonitorType() const
{
    return m_alarmMonitorType;
}

void MonitorMetricBrief::SetAlarmMonitorType(const string& _alarmMonitorType)
{
    m_alarmMonitorType = _alarmMonitorType;
    m_alarmMonitorTypeHasBeenSet = true;
}

bool MonitorMetricBrief::AlarmMonitorTypeHasBeenSet() const
{
    return m_alarmMonitorTypeHasBeenSet;
}

vector<MonitorMetricItem> MonitorMetricBrief::GetMetrics() const
{
    return m_metrics;
}

void MonitorMetricBrief::SetMetrics(const vector<MonitorMetricItem>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool MonitorMetricBrief::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

