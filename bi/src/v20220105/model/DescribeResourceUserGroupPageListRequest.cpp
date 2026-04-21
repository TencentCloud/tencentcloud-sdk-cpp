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

#include <tencentcloud/bi/v20220105/model/DescribeResourceUserGroupPageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeResourceUserGroupPageListRequest::DescribeResourceUserGroupPageListRequest() :
    m_projectIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tagValueListHasBeenSet(false),
    m_moduleCollectionHasBeenSet(false),
    m_resourceValueHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
}

string DescribeResourceUserGroupPageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageId, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_tagValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagValueList.begin(); itr != m_tagValueList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_moduleCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCollection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleCollection.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentId, allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_entityId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeResourceUserGroupPageListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeResourceUserGroupPageListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetPageId() const
{
    return m_pageId;
}

void DescribeResourceUserGroupPageListRequest::SetPageId(const int64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string DescribeResourceUserGroupPageListRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeResourceUserGroupPageListRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeResourceUserGroupPageListRequest::SetAllPage(const int64_t& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

string DescribeResourceUserGroupPageListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeResourceUserGroupPageListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeResourceUserGroupPageListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeResourceUserGroupPageListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<ResourceTagValue> DescribeResourceUserGroupPageListRequest::GetTagValueList() const
{
    return m_tagValueList;
}

void DescribeResourceUserGroupPageListRequest::SetTagValueList(const vector<ResourceTagValue>& _tagValueList)
{
    m_tagValueList = _tagValueList;
    m_tagValueListHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::TagValueListHasBeenSet() const
{
    return m_tagValueListHasBeenSet;
}

string DescribeResourceUserGroupPageListRequest::GetModuleCollection() const
{
    return m_moduleCollection;
}

void DescribeResourceUserGroupPageListRequest::SetModuleCollection(const string& _moduleCollection)
{
    m_moduleCollection = _moduleCollection;
    m_moduleCollectionHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ModuleCollectionHasBeenSet() const
{
    return m_moduleCollectionHasBeenSet;
}

string DescribeResourceUserGroupPageListRequest::GetResourceValue() const
{
    return m_resourceValue;
}

void DescribeResourceUserGroupPageListRequest::SetResourceValue(const string& _resourceValue)
{
    m_resourceValue = _resourceValue;
    m_resourceValueHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ResourceValueHasBeenSet() const
{
    return m_resourceValueHasBeenSet;
}

string DescribeResourceUserGroupPageListRequest::GetResourceName() const
{
    return m_resourceName;
}

void DescribeResourceUserGroupPageListRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetParentId() const
{
    return m_parentId;
}

void DescribeResourceUserGroupPageListRequest::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t DescribeResourceUserGroupPageListRequest::GetEntityId() const
{
    return m_entityId;
}

void DescribeResourceUserGroupPageListRequest::SetEntityId(const int64_t& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool DescribeResourceUserGroupPageListRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}


