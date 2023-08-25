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

#include <tencentcloud/dsgc/v20190723/model/ListDSPACosMetaResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ListDSPACosMetaResourcesRequest::ListDSPACosMetaResourcesRequest() :
    m_dspaIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_bindTypeHasBeenSet(false)
{
}

string ListDSPACosMetaResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
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

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListDSPACosMetaResourcesRequest::GetDspaId() const
{
    return m_dspaId;
}

void ListDSPACosMetaResourcesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ListDSPACosMetaResourcesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

vector<DspaDataSourceMngFilter> ListDSPACosMetaResourcesRequest::GetFilters() const
{
    return m_filters;
}

void ListDSPACosMetaResourcesRequest::SetFilters(const vector<DspaDataSourceMngFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListDSPACosMetaResourcesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t ListDSPACosMetaResourcesRequest::GetOffset() const
{
    return m_offset;
}

void ListDSPACosMetaResourcesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListDSPACosMetaResourcesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListDSPACosMetaResourcesRequest::GetLimit() const
{
    return m_limit;
}

void ListDSPACosMetaResourcesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListDSPACosMetaResourcesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListDSPACosMetaResourcesRequest::GetBindType() const
{
    return m_bindType;
}

void ListDSPACosMetaResourcesRequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool ListDSPACosMetaResourcesRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}


