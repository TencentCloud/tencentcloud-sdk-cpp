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

#include <tencentcloud/adp/v20260520/model/DescribeMetricOverviewListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeMetricOverviewListRequest::DescribeMetricOverviewListRequest() :
    m_resourceTypeHasBeenSet(false),
    m_timeRangeHasBeenSet(false),
    m_viewScopeHasBeenSet(false),
    m_filterListHasBeenSet(false)
{
}

string DescribeMetricOverviewListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_viewScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_viewScope.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterList.begin(); itr != m_filterList.end(); ++itr, ++i)
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


int64_t DescribeMetricOverviewListRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeMetricOverviewListRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeMetricOverviewListRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

TimeRange DescribeMetricOverviewListRequest::GetTimeRange() const
{
    return m_timeRange;
}

void DescribeMetricOverviewListRequest::SetTimeRange(const TimeRange& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool DescribeMetricOverviewListRequest::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

ViewScope DescribeMetricOverviewListRequest::GetViewScope() const
{
    return m_viewScope;
}

void DescribeMetricOverviewListRequest::SetViewScope(const ViewScope& _viewScope)
{
    m_viewScope = _viewScope;
    m_viewScopeHasBeenSet = true;
}

bool DescribeMetricOverviewListRequest::ViewScopeHasBeenSet() const
{
    return m_viewScopeHasBeenSet;
}

vector<Filter> DescribeMetricOverviewListRequest::GetFilterList() const
{
    return m_filterList;
}

void DescribeMetricOverviewListRequest::SetFilterList(const vector<Filter>& _filterList)
{
    m_filterList = _filterList;
    m_filterListHasBeenSet = true;
}

bool DescribeMetricOverviewListRequest::FilterListHasBeenSet() const
{
    return m_filterListHasBeenSet;
}


