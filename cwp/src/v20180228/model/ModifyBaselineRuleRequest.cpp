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

#include <tencentcloud/cwp/v20180228/model/ModifyBaselineRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyBaselineRuleRequest::ModifyBaselineRuleRequest() :
    m_dataHasBeenSet(false),
    m_selectAllHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_excludeIdsHasBeenSet(false),
    m_categoryIdsHasBeenSet(false)
{
}

string ModifyBaselineRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_selectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectAll, allocator);
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

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idType, allocator);
    }

    if (m_excludeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeIds.begin(); itr != m_excludeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


BaselineRule ModifyBaselineRuleRequest::GetData() const
{
    return m_data;
}

void ModifyBaselineRuleRequest::SetData(const BaselineRule& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t ModifyBaselineRuleRequest::GetSelectAll() const
{
    return m_selectAll;
}

void ModifyBaselineRuleRequest::SetSelectAll(const int64_t& _selectAll)
{
    m_selectAll = _selectAll;
    m_selectAllHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::SelectAllHasBeenSet() const
{
    return m_selectAllHasBeenSet;
}

vector<Filter> ModifyBaselineRuleRequest::GetFilters() const
{
    return m_filters;
}

void ModifyBaselineRuleRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t ModifyBaselineRuleRequest::GetIdType() const
{
    return m_idType;
}

void ModifyBaselineRuleRequest::SetIdType(const uint64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

vector<uint64_t> ModifyBaselineRuleRequest::GetExcludeIds() const
{
    return m_excludeIds;
}

void ModifyBaselineRuleRequest::SetExcludeIds(const vector<uint64_t>& _excludeIds)
{
    m_excludeIds = _excludeIds;
    m_excludeIdsHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::ExcludeIdsHasBeenSet() const
{
    return m_excludeIdsHasBeenSet;
}

vector<uint64_t> ModifyBaselineRuleRequest::GetCategoryIds() const
{
    return m_categoryIds;
}

void ModifyBaselineRuleRequest::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool ModifyBaselineRuleRequest::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}


