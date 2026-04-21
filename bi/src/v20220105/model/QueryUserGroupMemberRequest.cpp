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

#include <tencentcloud/bi/v20220105/model/QueryUserGroupMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

QueryUserGroupMemberRequest::QueryUserGroupMemberRequest() :
    m_groupIdsHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_tagValueListHasBeenSet(false),
    m_filterGroupIdsHasBeenSet(false)
{
}

string QueryUserGroupMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> QueryUserGroupMemberRequest::GetGroupIds() const
{
    return m_groupIds;
}

void QueryUserGroupMemberRequest::SetGroupIds(const vector<int64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string QueryUserGroupMemberRequest::GetKeyword() const
{
    return m_keyword;
}

void QueryUserGroupMemberRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t QueryUserGroupMemberRequest::GetPageSize() const
{
    return m_pageSize;
}

void QueryUserGroupMemberRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t QueryUserGroupMemberRequest::GetPageNo() const
{
    return m_pageNo;
}

void QueryUserGroupMemberRequest::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

bool QueryUserGroupMemberRequest::GetAllPage() const
{
    return m_allPage;
}

void QueryUserGroupMemberRequest::SetAllPage(const bool& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

vector<UserGroupTreeNodeDTO> QueryUserGroupMemberRequest::GetNodes() const
{
    return m_nodes;
}

void QueryUserGroupMemberRequest::SetNodes(const vector<UserGroupTreeNodeDTO>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<ResourceTagValue> QueryUserGroupMemberRequest::GetTagValueList() const
{
    return m_tagValueList;
}

void QueryUserGroupMemberRequest::SetTagValueList(const vector<ResourceTagValue>& _tagValueList)
{
    m_tagValueList = _tagValueList;
    m_tagValueListHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::TagValueListHasBeenSet() const
{
    return m_tagValueListHasBeenSet;
}

vector<int64_t> QueryUserGroupMemberRequest::GetFilterGroupIds() const
{
    return m_filterGroupIds;
}

void QueryUserGroupMemberRequest::SetFilterGroupIds(const vector<int64_t>& _filterGroupIds)
{
    m_filterGroupIds = _filterGroupIds;
    m_filterGroupIdsHasBeenSet = true;
}

bool QueryUserGroupMemberRequest::FilterGroupIdsHasBeenSet() const
{
    return m_filterGroupIdsHasBeenSet;
}


