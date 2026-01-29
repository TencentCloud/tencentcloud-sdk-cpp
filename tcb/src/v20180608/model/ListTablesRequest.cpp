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

#include <tencentcloud/tcb/v20180608/model/ListTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ListTablesRequest::ListTablesRequest() :
    m_mgoLimitHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_mgoOffsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_showHiddenHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_mongoConnectorHasBeenSet(false)
{
}

string ListTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mgoLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mgoLimit, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_mgoOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mgoOffset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_showHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowHidden";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showHidden, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoConnector.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListTablesRequest::GetMgoLimit() const
{
    return m_mgoLimit;
}

void ListTablesRequest::SetMgoLimit(const int64_t& _mgoLimit)
{
    m_mgoLimit = _mgoLimit;
    m_mgoLimitHasBeenSet = true;
}

bool ListTablesRequest::MgoLimitHasBeenSet() const
{
    return m_mgoLimitHasBeenSet;
}

string ListTablesRequest::GetTag() const
{
    return m_tag;
}

void ListTablesRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ListTablesRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t ListTablesRequest::GetMgoOffset() const
{
    return m_mgoOffset;
}

void ListTablesRequest::SetMgoOffset(const int64_t& _mgoOffset)
{
    m_mgoOffset = _mgoOffset;
    m_mgoOffsetHasBeenSet = true;
}

bool ListTablesRequest::MgoOffsetHasBeenSet() const
{
    return m_mgoOffsetHasBeenSet;
}

vector<string> ListTablesRequest::GetFilters() const
{
    return m_filters;
}

void ListTablesRequest::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListTablesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string ListTablesRequest::GetSearchValue() const
{
    return m_searchValue;
}

void ListTablesRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool ListTablesRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

bool ListTablesRequest::GetShowHidden() const
{
    return m_showHidden;
}

void ListTablesRequest::SetShowHidden(const bool& _showHidden)
{
    m_showHidden = _showHidden;
    m_showHiddenHasBeenSet = true;
}

bool ListTablesRequest::ShowHiddenHasBeenSet() const
{
    return m_showHiddenHasBeenSet;
}

string ListTablesRequest::GetEnvId() const
{
    return m_envId;
}

void ListTablesRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ListTablesRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

MongoConnector ListTablesRequest::GetMongoConnector() const
{
    return m_mongoConnector;
}

void ListTablesRequest::SetMongoConnector(const MongoConnector& _mongoConnector)
{
    m_mongoConnector = _mongoConnector;
    m_mongoConnectorHasBeenSet = true;
}

bool ListTablesRequest::MongoConnectorHasBeenSet() const
{
    return m_mongoConnectorHasBeenSet;
}


