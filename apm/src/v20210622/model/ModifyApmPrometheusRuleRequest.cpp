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

#include <tencentcloud/apm/v20210622/model/ModifyApmPrometheusRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ModifyApmPrometheusRuleRequest::ModifyApmPrometheusRuleRequest() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_metricMatchTypeHasBeenSet(false),
    m_metricNameRuleHasBeenSet(false)
{
}

string ModifyApmPrometheusRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricMatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metricMatchType, allocator);
    }

    if (m_metricNameRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNameRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricNameRule.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyApmPrometheusRuleRequest::GetId() const
{
    return m_id;
}

void ModifyApmPrometheusRuleRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyApmPrometheusRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApmPrometheusRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyApmPrometheusRuleRequest::GetName() const
{
    return m_name;
}

void ModifyApmPrometheusRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyApmPrometheusRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyApmPrometheusRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyApmPrometheusRuleRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyApmPrometheusRuleRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ModifyApmPrometheusRuleRequest::GetMetricMatchType() const
{
    return m_metricMatchType;
}

void ModifyApmPrometheusRuleRequest::SetMetricMatchType(const int64_t& _metricMatchType)
{
    m_metricMatchType = _metricMatchType;
    m_metricMatchTypeHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::MetricMatchTypeHasBeenSet() const
{
    return m_metricMatchTypeHasBeenSet;
}

string ModifyApmPrometheusRuleRequest::GetMetricNameRule() const
{
    return m_metricNameRule;
}

void ModifyApmPrometheusRuleRequest::SetMetricNameRule(const string& _metricNameRule)
{
    m_metricNameRule = _metricNameRule;
    m_metricNameRuleHasBeenSet = true;
}

bool ModifyApmPrometheusRuleRequest::MetricNameRuleHasBeenSet() const
{
    return m_metricNameRuleHasBeenSet;
}


