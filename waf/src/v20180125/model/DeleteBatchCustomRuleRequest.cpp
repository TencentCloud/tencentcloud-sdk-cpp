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

#include <tencentcloud/waf/v20180125/model/DeleteBatchCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DeleteBatchCustomRuleRequest::DeleteBatchCustomRuleRequest() :
    m_dataTypeHasBeenSet(false),
    m_isDeleteAllHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DeleteBatchCustomRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeleteAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteAll, allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteBatchCustomRuleRequest::GetDataType() const
{
    return m_dataType;
}

void DeleteBatchCustomRuleRequest::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DeleteBatchCustomRuleRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t DeleteBatchCustomRuleRequest::GetIsDeleteAll() const
{
    return m_isDeleteAll;
}

void DeleteBatchCustomRuleRequest::SetIsDeleteAll(const int64_t& _isDeleteAll)
{
    m_isDeleteAll = _isDeleteAll;
    m_isDeleteAllHasBeenSet = true;
}

bool DeleteBatchCustomRuleRequest::IsDeleteAllHasBeenSet() const
{
    return m_isDeleteAllHasBeenSet;
}

vector<uint64_t> DeleteBatchCustomRuleRequest::GetIds() const
{
    return m_ids;
}

void DeleteBatchCustomRuleRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool DeleteBatchCustomRuleRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

vector<FiltersItemNew> DeleteBatchCustomRuleRequest::GetFilters() const
{
    return m_filters;
}

void DeleteBatchCustomRuleRequest::SetFilters(const vector<FiltersItemNew>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DeleteBatchCustomRuleRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


