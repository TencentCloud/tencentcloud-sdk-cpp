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

#include <tencentcloud/ioa/v20220601/model/Condition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

Condition::Condition() :
    m_filtersHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false)
{
}

CoreInternalOutcome Condition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Condition.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Filter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("FilterGroups") && !value["FilterGroups"].IsNull())
    {
        if (!value["FilterGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Condition.FilterGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterGroups.push_back(item);
        }
        m_filterGroupsHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.Sort` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sort.Deserialize(value["Sort"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sortHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("PageNum") && !value["PageNum"].IsNull())
    {
        if (!value["PageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Condition.PageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = value["PageNum"].GetInt64();
        m_pageNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Condition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_filterGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterGroups.begin(); itr != m_filterGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

}


vector<Filter> Condition::GetFilters() const
{
    return m_filters;
}

void Condition::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool Condition::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<FilterGroup> Condition::GetFilterGroups() const
{
    return m_filterGroups;
}

void Condition::SetFilterGroups(const vector<FilterGroup>& _filterGroups)
{
    m_filterGroups = _filterGroups;
    m_filterGroupsHasBeenSet = true;
}

bool Condition::FilterGroupsHasBeenSet() const
{
    return m_filterGroupsHasBeenSet;
}

Sort Condition::GetSort() const
{
    return m_sort;
}

void Condition::SetSort(const Sort& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool Condition::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t Condition::GetPageSize() const
{
    return m_pageSize;
}

void Condition::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool Condition::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t Condition::GetPageNum() const
{
    return m_pageNum;
}

void Condition::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool Condition::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

