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

#include <tencentcloud/dlc/v20210125/model/DescribeDataEnginesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDataEnginesRequest::DescribeDataEnginesRequest() :
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortingHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_excludePublicEngineHasBeenSet(false),
    m_accessTypesHasBeenSet(false),
    m_engineExecTypeHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_datasourceConnectionNameSetHasBeenSet(false),
    m_engineGenerationHasBeenSet(false),
    m_engineTypeDetailHasBeenSet(false)
{
}

string DescribeDataEnginesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_excludePublicEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePublicEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_excludePublicEngine, allocator);
    }

    if (m_accessTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessTypes.begin(); itr != m_accessTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineExecTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExecType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineExecType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionNameSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceConnectionNameSet.begin(); itr != m_datasourceConnectionNameSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineGeneration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineGeneration.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineTypeDetail.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataEnginesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDataEnginesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDataEnginesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeDataEnginesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDataEnginesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDataEnginesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeDataEnginesRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeDataEnginesRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeDataEnginesRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeDataEnginesRequest::GetSorting() const
{
    return m_sorting;
}

void DescribeDataEnginesRequest::SetSorting(const string& _sorting)
{
    m_sorting = _sorting;
    m_sortingHasBeenSet = true;
}

bool DescribeDataEnginesRequest::SortingHasBeenSet() const
{
    return m_sortingHasBeenSet;
}

int64_t DescribeDataEnginesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDataEnginesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDataEnginesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDataEnginesRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DescribeDataEnginesRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DescribeDataEnginesRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

bool DescribeDataEnginesRequest::GetExcludePublicEngine() const
{
    return m_excludePublicEngine;
}

void DescribeDataEnginesRequest::SetExcludePublicEngine(const bool& _excludePublicEngine)
{
    m_excludePublicEngine = _excludePublicEngine;
    m_excludePublicEngineHasBeenSet = true;
}

bool DescribeDataEnginesRequest::ExcludePublicEngineHasBeenSet() const
{
    return m_excludePublicEngineHasBeenSet;
}

vector<string> DescribeDataEnginesRequest::GetAccessTypes() const
{
    return m_accessTypes;
}

void DescribeDataEnginesRequest::SetAccessTypes(const vector<string>& _accessTypes)
{
    m_accessTypes = _accessTypes;
    m_accessTypesHasBeenSet = true;
}

bool DescribeDataEnginesRequest::AccessTypesHasBeenSet() const
{
    return m_accessTypesHasBeenSet;
}

string DescribeDataEnginesRequest::GetEngineExecType() const
{
    return m_engineExecType;
}

void DescribeDataEnginesRequest::SetEngineExecType(const string& _engineExecType)
{
    m_engineExecType = _engineExecType;
    m_engineExecTypeHasBeenSet = true;
}

bool DescribeDataEnginesRequest::EngineExecTypeHasBeenSet() const
{
    return m_engineExecTypeHasBeenSet;
}

string DescribeDataEnginesRequest::GetEngineType() const
{
    return m_engineType;
}

void DescribeDataEnginesRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DescribeDataEnginesRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<string> DescribeDataEnginesRequest::GetDatasourceConnectionNameSet() const
{
    return m_datasourceConnectionNameSet;
}

void DescribeDataEnginesRequest::SetDatasourceConnectionNameSet(const vector<string>& _datasourceConnectionNameSet)
{
    m_datasourceConnectionNameSet = _datasourceConnectionNameSet;
    m_datasourceConnectionNameSetHasBeenSet = true;
}

bool DescribeDataEnginesRequest::DatasourceConnectionNameSetHasBeenSet() const
{
    return m_datasourceConnectionNameSetHasBeenSet;
}

string DescribeDataEnginesRequest::GetEngineGeneration() const
{
    return m_engineGeneration;
}

void DescribeDataEnginesRequest::SetEngineGeneration(const string& _engineGeneration)
{
    m_engineGeneration = _engineGeneration;
    m_engineGenerationHasBeenSet = true;
}

bool DescribeDataEnginesRequest::EngineGenerationHasBeenSet() const
{
    return m_engineGenerationHasBeenSet;
}

string DescribeDataEnginesRequest::GetEngineTypeDetail() const
{
    return m_engineTypeDetail;
}

void DescribeDataEnginesRequest::SetEngineTypeDetail(const string& _engineTypeDetail)
{
    m_engineTypeDetail = _engineTypeDetail;
    m_engineTypeDetailHasBeenSet = true;
}

bool DescribeDataEnginesRequest::EngineTypeDetailHasBeenSet() const
{
    return m_engineTypeDetailHasBeenSet;
}


