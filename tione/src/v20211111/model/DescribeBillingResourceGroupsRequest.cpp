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

#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeBillingResourceGroupsRequest::DescribeBillingResourceGroupsRequest() :
    m_typeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_dontShowInstanceSetHasBeenSet(false)
{
}

string DescribeBillingResourceGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_dontShowInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DontShowInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dontShowInstanceSet, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillingResourceGroupsRequest::GetType() const
{
    return m_type;
}

void DescribeBillingResourceGroupsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Filter> DescribeBillingResourceGroupsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBillingResourceGroupsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<TagFilter> DescribeBillingResourceGroupsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeBillingResourceGroupsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

int64_t DescribeBillingResourceGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBillingResourceGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeBillingResourceGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBillingResourceGroupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBillingResourceGroupsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeBillingResourceGroupsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

bool DescribeBillingResourceGroupsRequest::GetDontShowInstanceSet() const
{
    return m_dontShowInstanceSet;
}

void DescribeBillingResourceGroupsRequest::SetDontShowInstanceSet(const bool& _dontShowInstanceSet)
{
    m_dontShowInstanceSet = _dontShowInstanceSet;
    m_dontShowInstanceSetHasBeenSet = true;
}

bool DescribeBillingResourceGroupsRequest::DontShowInstanceSetHasBeenSet() const
{
    return m_dontShowInstanceSetHasBeenSet;
}


