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

#include <tencentcloud/wedata/v20210820/model/DescribeTableInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableInfoListRequest::DescribeTableInfoListRequest() :
    m_filtersHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_catalogHasBeenSet(false)
{
}

string DescribeTableInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeTableInfoListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTableInfoListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTableInfoListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTableInfoListRequest::GetConnectionType() const
{
    return m_connectionType;
}

void DescribeTableInfoListRequest::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool DescribeTableInfoListRequest::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string DescribeTableInfoListRequest::GetCatalog() const
{
    return m_catalog;
}

void DescribeTableInfoListRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DescribeTableInfoListRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}


