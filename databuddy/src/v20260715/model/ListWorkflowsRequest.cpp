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

#include <tencentcloud/databuddy/v20260715/model/ListWorkflowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkflowsRequest::ListWorkflowsRequest() :
    m_workspaceIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workflowNameKeywordHasBeenSet(false),
    m_workflowNamesHasBeenSet(false),
    m_workflowIdsHasBeenSet(false),
    m_runUserUinsHasBeenSet(false),
    m_labelKeyIdsHasBeenSet(false),
    m_labelValueIdsHasBeenSet(false),
    m_quickSelectionTypeHasBeenSet(false),
    m_orderBysHasBeenSet(false)
{
}

string ListWorkflowsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
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

    if (m_workflowNameKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNameKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowNameKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowNames.begin(); itr != m_workflowNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIds.begin(); itr != m_workflowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runUserUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runUserUins.begin(); itr != m_runUserUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelKeyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelKeyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelKeyIds.begin(); itr != m_labelKeyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelValueIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelValueIds.begin(); itr != m_labelValueIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quickSelectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuickSelectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quickSelectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderBysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderBys.begin(); itr != m_orderBys.end(); ++itr, ++i)
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


string ListWorkflowsRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkflowsRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkflowsRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t ListWorkflowsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkflowsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkflowsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkflowsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkflowsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkflowsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkflowsRequest::GetWorkflowNameKeyword() const
{
    return m_workflowNameKeyword;
}

void ListWorkflowsRequest::SetWorkflowNameKeyword(const string& _workflowNameKeyword)
{
    m_workflowNameKeyword = _workflowNameKeyword;
    m_workflowNameKeywordHasBeenSet = true;
}

bool ListWorkflowsRequest::WorkflowNameKeywordHasBeenSet() const
{
    return m_workflowNameKeywordHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetWorkflowNames() const
{
    return m_workflowNames;
}

void ListWorkflowsRequest::SetWorkflowNames(const vector<string>& _workflowNames)
{
    m_workflowNames = _workflowNames;
    m_workflowNamesHasBeenSet = true;
}

bool ListWorkflowsRequest::WorkflowNamesHasBeenSet() const
{
    return m_workflowNamesHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetWorkflowIds() const
{
    return m_workflowIds;
}

void ListWorkflowsRequest::SetWorkflowIds(const vector<string>& _workflowIds)
{
    m_workflowIds = _workflowIds;
    m_workflowIdsHasBeenSet = true;
}

bool ListWorkflowsRequest::WorkflowIdsHasBeenSet() const
{
    return m_workflowIdsHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetRunUserUins() const
{
    return m_runUserUins;
}

void ListWorkflowsRequest::SetRunUserUins(const vector<string>& _runUserUins)
{
    m_runUserUins = _runUserUins;
    m_runUserUinsHasBeenSet = true;
}

bool ListWorkflowsRequest::RunUserUinsHasBeenSet() const
{
    return m_runUserUinsHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetLabelKeyIds() const
{
    return m_labelKeyIds;
}

void ListWorkflowsRequest::SetLabelKeyIds(const vector<string>& _labelKeyIds)
{
    m_labelKeyIds = _labelKeyIds;
    m_labelKeyIdsHasBeenSet = true;
}

bool ListWorkflowsRequest::LabelKeyIdsHasBeenSet() const
{
    return m_labelKeyIdsHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetLabelValueIds() const
{
    return m_labelValueIds;
}

void ListWorkflowsRequest::SetLabelValueIds(const vector<string>& _labelValueIds)
{
    m_labelValueIds = _labelValueIds;
    m_labelValueIdsHasBeenSet = true;
}

bool ListWorkflowsRequest::LabelValueIdsHasBeenSet() const
{
    return m_labelValueIdsHasBeenSet;
}

string ListWorkflowsRequest::GetQuickSelectionType() const
{
    return m_quickSelectionType;
}

void ListWorkflowsRequest::SetQuickSelectionType(const string& _quickSelectionType)
{
    m_quickSelectionType = _quickSelectionType;
    m_quickSelectionTypeHasBeenSet = true;
}

bool ListWorkflowsRequest::QuickSelectionTypeHasBeenSet() const
{
    return m_quickSelectionTypeHasBeenSet;
}

vector<OrderBy> ListWorkflowsRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkflowsRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkflowsRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}


