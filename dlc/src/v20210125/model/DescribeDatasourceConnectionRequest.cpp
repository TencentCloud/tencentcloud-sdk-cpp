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

#include <tencentcloud/dlc/v20210125/model/DescribeDatasourceConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDatasourceConnectionRequest::DescribeDatasourceConnectionRequest() :
    m_datasourceConnectionIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortingHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_datasourceConnectionNamesHasBeenSet(false),
    m_datasourceConnectionTypesHasBeenSet(false),
    m_hiveVersionHasBeenSet(false)
{
}

string DescribeDatasourceConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceConnectionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceConnectionIds.begin(); itr != m_datasourceConnectionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_datasourceConnectionNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceConnectionNames.begin(); itr != m_datasourceConnectionNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datasourceConnectionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceConnectionTypes.begin(); itr != m_datasourceConnectionTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hiveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hiveVersion.begin(); itr != m_hiveVersion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDatasourceConnectionRequest::GetDatasourceConnectionIds() const
{
    return m_datasourceConnectionIds;
}

void DescribeDatasourceConnectionRequest::SetDatasourceConnectionIds(const vector<string>& _datasourceConnectionIds)
{
    m_datasourceConnectionIds = _datasourceConnectionIds;
    m_datasourceConnectionIdsHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::DatasourceConnectionIdsHasBeenSet() const
{
    return m_datasourceConnectionIdsHasBeenSet;
}

vector<Filter> DescribeDatasourceConnectionRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDatasourceConnectionRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeDatasourceConnectionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDatasourceConnectionRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDatasourceConnectionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDatasourceConnectionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDatasourceConnectionRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeDatasourceConnectionRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeDatasourceConnectionRequest::GetSorting() const
{
    return m_sorting;
}

void DescribeDatasourceConnectionRequest::SetSorting(const string& _sorting)
{
    m_sorting = _sorting;
    m_sortingHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::SortingHasBeenSet() const
{
    return m_sortingHasBeenSet;
}

string DescribeDatasourceConnectionRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDatasourceConnectionRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDatasourceConnectionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDatasourceConnectionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeDatasourceConnectionRequest::GetDatasourceConnectionNames() const
{
    return m_datasourceConnectionNames;
}

void DescribeDatasourceConnectionRequest::SetDatasourceConnectionNames(const vector<string>& _datasourceConnectionNames)
{
    m_datasourceConnectionNames = _datasourceConnectionNames;
    m_datasourceConnectionNamesHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::DatasourceConnectionNamesHasBeenSet() const
{
    return m_datasourceConnectionNamesHasBeenSet;
}

vector<string> DescribeDatasourceConnectionRequest::GetDatasourceConnectionTypes() const
{
    return m_datasourceConnectionTypes;
}

void DescribeDatasourceConnectionRequest::SetDatasourceConnectionTypes(const vector<string>& _datasourceConnectionTypes)
{
    m_datasourceConnectionTypes = _datasourceConnectionTypes;
    m_datasourceConnectionTypesHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::DatasourceConnectionTypesHasBeenSet() const
{
    return m_datasourceConnectionTypesHasBeenSet;
}

vector<string> DescribeDatasourceConnectionRequest::GetHiveVersion() const
{
    return m_hiveVersion;
}

void DescribeDatasourceConnectionRequest::SetHiveVersion(const vector<string>& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool DescribeDatasourceConnectionRequest::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}


