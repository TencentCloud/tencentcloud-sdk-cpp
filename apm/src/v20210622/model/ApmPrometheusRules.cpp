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

#include <tencentcloud/apm/v20210622/model/ApmPrometheusRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmPrometheusRules::ApmPrometheusRules() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_metricNameRuleHasBeenSet(false),
    m_metricMatchTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApmPrometheusRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MetricNameRule") && !value["MetricNameRule"].IsNull())
    {
        if (!value["MetricNameRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.MetricNameRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricNameRule = string(value["MetricNameRule"].GetString());
        m_metricNameRuleHasBeenSet = true;
    }

    if (value.HasMember("MetricMatchType") && !value["MetricMatchType"].IsNull())
    {
        if (!value["MetricMatchType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmPrometheusRules.MetricMatchType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricMatchType = value["MetricMatchType"].GetInt64();
        m_metricMatchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmPrometheusRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_metricNameRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNameRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricNameRule.c_str(), allocator).Move(), allocator);
    }

    if (m_metricMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricMatchType, allocator);
    }

}


int64_t ApmPrometheusRules::GetId() const
{
    return m_id;
}

void ApmPrometheusRules::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ApmPrometheusRules::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ApmPrometheusRules::GetName() const
{
    return m_name;
}

void ApmPrometheusRules::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApmPrometheusRules::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApmPrometheusRules::GetServiceName() const
{
    return m_serviceName;
}

void ApmPrometheusRules::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApmPrometheusRules::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ApmPrometheusRules::GetStatus() const
{
    return m_status;
}

void ApmPrometheusRules::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApmPrometheusRules::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApmPrometheusRules::GetMetricNameRule() const
{
    return m_metricNameRule;
}

void ApmPrometheusRules::SetMetricNameRule(const string& _metricNameRule)
{
    m_metricNameRule = _metricNameRule;
    m_metricNameRuleHasBeenSet = true;
}

bool ApmPrometheusRules::MetricNameRuleHasBeenSet() const
{
    return m_metricNameRuleHasBeenSet;
}

int64_t ApmPrometheusRules::GetMetricMatchType() const
{
    return m_metricMatchType;
}

void ApmPrometheusRules::SetMetricMatchType(const int64_t& _metricMatchType)
{
    m_metricMatchType = _metricMatchType;
    m_metricMatchTypeHasBeenSet = true;
}

bool ApmPrometheusRules::MetricMatchTypeHasBeenSet() const
{
    return m_metricMatchTypeHasBeenSet;
}

