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

#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeEnterpriseSecurityGroupRuleListRequest::DescribeEnterpriseSecurityGroupRuleListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_searchFiltersHasBeenSet(false)
{
}

string DescribeEnterpriseSecurityGroupRuleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filter, allocator);
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_searchFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchFilters.begin(); itr != m_searchFilters.end(); ++itr, ++i)
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


int64_t DescribeEnterpriseSecurityGroupRuleListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeEnterpriseSecurityGroupRuleListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleListRequest::GetStatus() const
{
    return m_status;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleListRequest::GetArea() const
{
    return m_area;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t DescribeEnterpriseSecurityGroupRuleListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetFilter(const int64_t& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeEnterpriseSecurityGroupRuleListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

vector<CommonFilter> DescribeEnterpriseSecurityGroupRuleListRequest::GetSearchFilters() const
{
    return m_searchFilters;
}

void DescribeEnterpriseSecurityGroupRuleListRequest::SetSearchFilters(const vector<CommonFilter>& _searchFilters)
{
    m_searchFilters = _searchFilters;
    m_searchFiltersHasBeenSet = true;
}

bool DescribeEnterpriseSecurityGroupRuleListRequest::SearchFiltersHasBeenSet() const
{
    return m_searchFiltersHasBeenSet;
}


