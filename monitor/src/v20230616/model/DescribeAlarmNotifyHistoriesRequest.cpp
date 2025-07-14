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

#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeAlarmNotifyHistoriesRequest::DescribeAlarmNotifyHistoriesRequest() :
    m_monitorTypeHasBeenSet(false),
    m_queryBaseTimeHasBeenSet(false),
    m_queryBeforeSecondsHasBeenSet(false),
    m_pageParamsHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

string DescribeAlarmNotifyHistoriesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_queryBaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryBaseTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryBaseTime, allocator);
    }

    if (m_queryBeforeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryBeforeSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryBeforeSeconds, allocator);
    }

    if (m_pageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmNotifyHistoriesRequest::GetMonitorType() const
{
    return m_monitorType;
}

void DescribeAlarmNotifyHistoriesRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

int64_t DescribeAlarmNotifyHistoriesRequest::GetQueryBaseTime() const
{
    return m_queryBaseTime;
}

void DescribeAlarmNotifyHistoriesRequest::SetQueryBaseTime(const int64_t& _queryBaseTime)
{
    m_queryBaseTime = _queryBaseTime;
    m_queryBaseTimeHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::QueryBaseTimeHasBeenSet() const
{
    return m_queryBaseTimeHasBeenSet;
}

int64_t DescribeAlarmNotifyHistoriesRequest::GetQueryBeforeSeconds() const
{
    return m_queryBeforeSeconds;
}

void DescribeAlarmNotifyHistoriesRequest::SetQueryBeforeSeconds(const int64_t& _queryBeforeSeconds)
{
    m_queryBeforeSeconds = _queryBeforeSeconds;
    m_queryBeforeSecondsHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::QueryBeforeSecondsHasBeenSet() const
{
    return m_queryBeforeSecondsHasBeenSet;
}

PageByNoParams DescribeAlarmNotifyHistoriesRequest::GetPageParams() const
{
    return m_pageParams;
}

void DescribeAlarmNotifyHistoriesRequest::SetPageParams(const PageByNoParams& _pageParams)
{
    m_pageParams = _pageParams;
    m_pageParamsHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::PageParamsHasBeenSet() const
{
    return m_pageParamsHasBeenSet;
}

string DescribeAlarmNotifyHistoriesRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeAlarmNotifyHistoriesRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeAlarmNotifyHistoriesRequest::GetModelName() const
{
    return m_modelName;
}

void DescribeAlarmNotifyHistoriesRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string DescribeAlarmNotifyHistoriesRequest::GetPolicyId() const
{
    return m_policyId;
}

void DescribeAlarmNotifyHistoriesRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DescribeAlarmNotifyHistoriesRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}


