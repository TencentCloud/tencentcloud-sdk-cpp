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

#include <tencentcloud/dlc/v20210125/model/DescribeUserRolesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeUserRolesRequest::DescribeUserRolesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_fuzzyHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortingHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

string DescribeUserRolesRequest::ToJsonString() const
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

    if (m_fuzzyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fuzzy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fuzzy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sorting.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefault, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserRolesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUserRolesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUserRolesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeUserRolesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUserRolesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUserRolesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeUserRolesRequest::GetFuzzy() const
{
    return m_fuzzy;
}

void DescribeUserRolesRequest::SetFuzzy(const string& _fuzzy)
{
    m_fuzzy = _fuzzy;
    m_fuzzyHasBeenSet = true;
}

bool DescribeUserRolesRequest::FuzzyHasBeenSet() const
{
    return m_fuzzyHasBeenSet;
}

string DescribeUserRolesRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeUserRolesRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeUserRolesRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeUserRolesRequest::GetSorting() const
{
    return m_sorting;
}

void DescribeUserRolesRequest::SetSorting(const string& _sorting)
{
    m_sorting = _sorting;
    m_sortingHasBeenSet = true;
}

bool DescribeUserRolesRequest::SortingHasBeenSet() const
{
    return m_sortingHasBeenSet;
}

int64_t DescribeUserRolesRequest::GetIsDefault() const
{
    return m_isDefault;
}

void DescribeUserRolesRequest::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool DescribeUserRolesRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}


