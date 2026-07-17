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

#include <tencentcloud/cfw/v20190904/model/DescribeCfwStatusMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCfwStatusMonitorRequest::DescribeCfwStatusMonitorRequest() :
    m_opHasBeenSet(false),
    m_firewallTypeHasBeenSet(false),
    m_selectionIdHasBeenSet(false),
    m_selectionNameHasBeenSet(false),
    m_selectionInstanceIdHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_perspectiveHasBeenSet(false),
    m_ipScopeHasBeenSet(false),
    m_timePresetHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_overviewOnlyHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeCfwStatusMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_firewallTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firewallType.c_str(), allocator).Move(), allocator);
    }

    if (m_selectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_selectionInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selectionInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_perspectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Perspective";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_perspective.c_str(), allocator).Move(), allocator);
    }

    if (m_ipScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipScope.c_str(), allocator).Move(), allocator);
    }

    if (m_timePresetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePreset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timePreset.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_overviewOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverviewOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_overviewOnly, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
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


string DescribeCfwStatusMonitorRequest::GetOp() const
{
    return m_op;
}

void DescribeCfwStatusMonitorRequest::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetFirewallType() const
{
    return m_firewallType;
}

void DescribeCfwStatusMonitorRequest::SetFirewallType(const string& _firewallType)
{
    m_firewallType = _firewallType;
    m_firewallTypeHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::FirewallTypeHasBeenSet() const
{
    return m_firewallTypeHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetSelectionId() const
{
    return m_selectionId;
}

void DescribeCfwStatusMonitorRequest::SetSelectionId(const string& _selectionId)
{
    m_selectionId = _selectionId;
    m_selectionIdHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::SelectionIdHasBeenSet() const
{
    return m_selectionIdHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetSelectionName() const
{
    return m_selectionName;
}

void DescribeCfwStatusMonitorRequest::SetSelectionName(const string& _selectionName)
{
    m_selectionName = _selectionName;
    m_selectionNameHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::SelectionNameHasBeenSet() const
{
    return m_selectionNameHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetSelectionInstanceId() const
{
    return m_selectionInstanceId;
}

void DescribeCfwStatusMonitorRequest::SetSelectionInstanceId(const string& _selectionInstanceId)
{
    m_selectionInstanceId = _selectionInstanceId;
    m_selectionInstanceIdHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::SelectionInstanceIdHasBeenSet() const
{
    return m_selectionInstanceIdHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetMetric() const
{
    return m_metric;
}

void DescribeCfwStatusMonitorRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetPerspective() const
{
    return m_perspective;
}

void DescribeCfwStatusMonitorRequest::SetPerspective(const string& _perspective)
{
    m_perspective = _perspective;
    m_perspectiveHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::PerspectiveHasBeenSet() const
{
    return m_perspectiveHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetIpScope() const
{
    return m_ipScope;
}

void DescribeCfwStatusMonitorRequest::SetIpScope(const string& _ipScope)
{
    m_ipScope = _ipScope;
    m_ipScopeHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::IpScopeHasBeenSet() const
{
    return m_ipScopeHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetTimePreset() const
{
    return m_timePreset;
}

void DescribeCfwStatusMonitorRequest::SetTimePreset(const string& _timePreset)
{
    m_timePreset = _timePreset;
    m_timePresetHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::TimePresetHasBeenSet() const
{
    return m_timePresetHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCfwStatusMonitorRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCfwStatusMonitorRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeCfwStatusMonitorRequest::GetPage() const
{
    return m_page;
}

void DescribeCfwStatusMonitorRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeCfwStatusMonitorRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCfwStatusMonitorRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeCfwStatusMonitorRequest::GetOverviewOnly() const
{
    return m_overviewOnly;
}

void DescribeCfwStatusMonitorRequest::SetOverviewOnly(const bool& _overviewOnly)
{
    m_overviewOnly = _overviewOnly;
    m_overviewOnlyHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::OverviewOnlyHasBeenSet() const
{
    return m_overviewOnlyHasBeenSet;
}

int64_t DescribeCfwStatusMonitorRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCfwStatusMonitorRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeCfwStatusMonitorRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeCfwStatusMonitorRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeCfwStatusMonitorRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

vector<CfwStatusMonitorFilter> DescribeCfwStatusMonitorRequest::GetFilters() const
{
    return m_filters;
}

void DescribeCfwStatusMonitorRequest::SetFilters(const vector<CfwStatusMonitorFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeCfwStatusMonitorRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


