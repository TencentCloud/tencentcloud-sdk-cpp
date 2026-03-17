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

#include <tencentcloud/wedata/v20210820/model/DescribeRealViewDatabasePageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRealViewDatabasePageRequest::DescribeRealViewDatabasePageRequest() :
    m_datasourceIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ascHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

string DescribeRealViewDatabasePageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asc, allocator);
    }

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeRealViewDatabasePageRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void DescribeRealViewDatabasePageRequest::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRealViewDatabasePageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeRealViewDatabasePageRequest::GetAsc() const
{
    return m_asc;
}

void DescribeRealViewDatabasePageRequest::SetAsc(const bool& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetConnectionType() const
{
    return m_connectionType;
}

void DescribeRealViewDatabasePageRequest::SetConnectionType(const string& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeRealViewDatabasePageRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DescribeRealViewDatabasePageRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeRealViewDatabasePageRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeRealViewDatabasePageRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRealViewDatabasePageRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void DescribeRealViewDatabasePageRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

int64_t DescribeRealViewDatabasePageRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeRealViewDatabasePageRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetSort() const
{
    return m_sort;
}

void DescribeRealViewDatabasePageRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeRealViewDatabasePageRequest::GetCatalogName() const
{
    return m_catalogName;
}

void DescribeRealViewDatabasePageRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool DescribeRealViewDatabasePageRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


