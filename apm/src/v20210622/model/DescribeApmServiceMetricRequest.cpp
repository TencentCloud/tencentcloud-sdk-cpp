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

#include <tencentcloud/apm/v20210622/model/DescribeApmServiceMetricRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeApmServiceMetricRequest::DescribeApmServiceMetricRequest() :
    m_instanceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_demoHasBeenSet(false),
    m_serviceStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeApmServiceMetricRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderBy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_demoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Demo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_demo, allocator);
    }

    if (m_serviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApmServiceMetricRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeApmServiceMetricRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeApmServiceMetricRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeApmServiceMetricRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeApmServiceMetricRequest::GetServiceID() const
{
    return m_serviceID;
}

void DescribeApmServiceMetricRequest::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

int64_t DescribeApmServiceMetricRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeApmServiceMetricRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeApmServiceMetricRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeApmServiceMetricRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

OrderBy DescribeApmServiceMetricRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeApmServiceMetricRequest::SetOrderBy(const OrderBy& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeApmServiceMetricRequest::GetDemo() const
{
    return m_demo;
}

void DescribeApmServiceMetricRequest::SetDemo(const bool& _demo)
{
    m_demo = _demo;
    m_demoHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::DemoHasBeenSet() const
{
    return m_demoHasBeenSet;
}

string DescribeApmServiceMetricRequest::GetServiceStatus() const
{
    return m_serviceStatus;
}

void DescribeApmServiceMetricRequest::SetServiceStatus(const string& _serviceStatus)
{
    m_serviceStatus = _serviceStatus;
    m_serviceStatusHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::ServiceStatusHasBeenSet() const
{
    return m_serviceStatusHasBeenSet;
}

vector<ApmTag> DescribeApmServiceMetricRequest::GetTags() const
{
    return m_tags;
}

void DescribeApmServiceMetricRequest::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeApmServiceMetricRequest::GetPage() const
{
    return m_page;
}

void DescribeApmServiceMetricRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeApmServiceMetricRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeApmServiceMetricRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeApmServiceMetricRequest::GetFilters() const
{
    return m_filters;
}

void DescribeApmServiceMetricRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeApmServiceMetricRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


