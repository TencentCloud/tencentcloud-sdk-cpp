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

#include <tencentcloud/monitor/v20180724/model/AlarmHistoryMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmHistoryMetric::AlarmHistoryMetric() :
    m_qceNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AlarmHistoryMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QceNamespace") && !value["QceNamespace"].IsNull())
    {
        if (!value["QceNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistoryMetric.QceNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qceNamespace = string(value["QceNamespace"].GetString());
        m_qceNamespaceHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistoryMetric.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistoryMetric.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistoryMetric.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHistoryMetric.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmHistoryMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qceNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QceNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qceNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string AlarmHistoryMetric::GetQceNamespace() const
{
    return m_qceNamespace;
}

void AlarmHistoryMetric::SetQceNamespace(const string& _qceNamespace)
{
    m_qceNamespace = _qceNamespace;
    m_qceNamespaceHasBeenSet = true;
}

bool AlarmHistoryMetric::QceNamespaceHasBeenSet() const
{
    return m_qceNamespaceHasBeenSet;
}

string AlarmHistoryMetric::GetMetricName() const
{
    return m_metricName;
}

void AlarmHistoryMetric::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool AlarmHistoryMetric::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

int64_t AlarmHistoryMetric::GetPeriod() const
{
    return m_period;
}

void AlarmHistoryMetric::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool AlarmHistoryMetric::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string AlarmHistoryMetric::GetValue() const
{
    return m_value;
}

void AlarmHistoryMetric::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AlarmHistoryMetric::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AlarmHistoryMetric::GetDescription() const
{
    return m_description;
}

void AlarmHistoryMetric::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlarmHistoryMetric::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

