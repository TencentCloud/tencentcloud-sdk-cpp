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

#include <tencentcloud/bi/v20220105/model/DescribeUserGroupTreeListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeUserGroupTreeListRequest::DescribeUserGroupTreeListRequest() :
    m_projectIdHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tagValueListHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_queryNextNodeHasBeenSet(false),
    m_parentIdsHasBeenSet(false),
    m_queryAllNodeHasBeenSet(false),
    m_filterGroupIdsHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeUserGroupTreeListRequest::ToJsonString() const
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

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
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

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_queryNextNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryNextNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryNextNode, allocator);
    }

    if (m_parentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_parentIds.begin(); itr != m_parentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_queryAllNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAllNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryAllNode, allocator);
    }

    if (m_filterGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterGroupIds.begin(); itr != m_filterGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserGroupTreeListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeUserGroupTreeListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeUserGroupTreeListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeUserGroupTreeListRequest::SetAllPage(const int64_t& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

int64_t DescribeUserGroupTreeListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUserGroupTreeListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeUserGroupTreeListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUserGroupTreeListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<ResourceTagValue> DescribeUserGroupTreeListRequest::GetTagValueList() const
{
    return m_tagValueList;
}

void DescribeUserGroupTreeListRequest::SetTagValueList(const vector<ResourceTagValue>& _tagValueList)
{
    m_tagValueList = _tagValueList;
    m_tagValueListHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::TagValueListHasBeenSet() const
{
    return m_tagValueListHasBeenSet;
}

vector<UserGroupTreeNodeDTO> DescribeUserGroupTreeListRequest::GetNodes() const
{
    return m_nodes;
}

void DescribeUserGroupTreeListRequest::SetNodes(const vector<UserGroupTreeNodeDTO>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<int64_t> DescribeUserGroupTreeListRequest::GetGroupIds() const
{
    return m_groupIds;
}

void DescribeUserGroupTreeListRequest::SetGroupIds(const vector<int64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

bool DescribeUserGroupTreeListRequest::GetQueryNextNode() const
{
    return m_queryNextNode;
}

void DescribeUserGroupTreeListRequest::SetQueryNextNode(const bool& _queryNextNode)
{
    m_queryNextNode = _queryNextNode;
    m_queryNextNodeHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::QueryNextNodeHasBeenSet() const
{
    return m_queryNextNodeHasBeenSet;
}

vector<int64_t> DescribeUserGroupTreeListRequest::GetParentIds() const
{
    return m_parentIds;
}

void DescribeUserGroupTreeListRequest::SetParentIds(const vector<int64_t>& _parentIds)
{
    m_parentIds = _parentIds;
    m_parentIdsHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::ParentIdsHasBeenSet() const
{
    return m_parentIdsHasBeenSet;
}

bool DescribeUserGroupTreeListRequest::GetQueryAllNode() const
{
    return m_queryAllNode;
}

void DescribeUserGroupTreeListRequest::SetQueryAllNode(const bool& _queryAllNode)
{
    m_queryAllNode = _queryAllNode;
    m_queryAllNodeHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::QueryAllNodeHasBeenSet() const
{
    return m_queryAllNodeHasBeenSet;
}

vector<int64_t> DescribeUserGroupTreeListRequest::GetFilterGroupIds() const
{
    return m_filterGroupIds;
}

void DescribeUserGroupTreeListRequest::SetFilterGroupIds(const vector<int64_t>& _filterGroupIds)
{
    m_filterGroupIds = _filterGroupIds;
    m_filterGroupIdsHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::FilterGroupIdsHasBeenSet() const
{
    return m_filterGroupIdsHasBeenSet;
}

string DescribeUserGroupTreeListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeUserGroupTreeListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeUserGroupTreeListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


