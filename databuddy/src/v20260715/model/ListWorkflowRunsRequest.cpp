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

#include <tencentcloud/databuddy/v20260715/model/ListWorkflowRunsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkflowRunsRequest::ListWorkflowRunsRequest() :
    m_workspaceIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameKeywordHasBeenSet(false),
    m_createStartTimeHasBeenSet(false),
    m_createEndTimeHasBeenSet(false),
    m_runStatesHasBeenSet(false),
    m_errorCodeStringsHasBeenSet(false),
    m_runUserUinsHasBeenSet(false),
    m_labelKeyIdsHasBeenSet(false),
    m_labelValueIdsHasBeenSet(false),
    m_orderBysHasBeenSet(false)
{
}

string ListWorkflowRunsRequest::ToJsonString() const
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

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNameKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowNameKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_createStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runStates.begin(); itr != m_runStates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorCodeStringsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeStrings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorCodeStrings.begin(); itr != m_errorCodeStrings.end(); ++itr)
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


string ListWorkflowRunsRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkflowRunsRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkflowRunsRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t ListWorkflowRunsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkflowRunsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkflowRunsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkflowRunsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkflowRunsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkflowRunsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkflowRunsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ListWorkflowRunsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ListWorkflowRunsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ListWorkflowRunsRequest::GetWorkflowNameKeyword() const
{
    return m_workflowNameKeyword;
}

void ListWorkflowRunsRequest::SetWorkflowNameKeyword(const string& _workflowNameKeyword)
{
    m_workflowNameKeyword = _workflowNameKeyword;
    m_workflowNameKeywordHasBeenSet = true;
}

bool ListWorkflowRunsRequest::WorkflowNameKeywordHasBeenSet() const
{
    return m_workflowNameKeywordHasBeenSet;
}

string ListWorkflowRunsRequest::GetCreateStartTime() const
{
    return m_createStartTime;
}

void ListWorkflowRunsRequest::SetCreateStartTime(const string& _createStartTime)
{
    m_createStartTime = _createStartTime;
    m_createStartTimeHasBeenSet = true;
}

bool ListWorkflowRunsRequest::CreateStartTimeHasBeenSet() const
{
    return m_createStartTimeHasBeenSet;
}

string ListWorkflowRunsRequest::GetCreateEndTime() const
{
    return m_createEndTime;
}

void ListWorkflowRunsRequest::SetCreateEndTime(const string& _createEndTime)
{
    m_createEndTime = _createEndTime;
    m_createEndTimeHasBeenSet = true;
}

bool ListWorkflowRunsRequest::CreateEndTimeHasBeenSet() const
{
    return m_createEndTimeHasBeenSet;
}

vector<string> ListWorkflowRunsRequest::GetRunStates() const
{
    return m_runStates;
}

void ListWorkflowRunsRequest::SetRunStates(const vector<string>& _runStates)
{
    m_runStates = _runStates;
    m_runStatesHasBeenSet = true;
}

bool ListWorkflowRunsRequest::RunStatesHasBeenSet() const
{
    return m_runStatesHasBeenSet;
}

vector<string> ListWorkflowRunsRequest::GetErrorCodeStrings() const
{
    return m_errorCodeStrings;
}

void ListWorkflowRunsRequest::SetErrorCodeStrings(const vector<string>& _errorCodeStrings)
{
    m_errorCodeStrings = _errorCodeStrings;
    m_errorCodeStringsHasBeenSet = true;
}

bool ListWorkflowRunsRequest::ErrorCodeStringsHasBeenSet() const
{
    return m_errorCodeStringsHasBeenSet;
}

vector<string> ListWorkflowRunsRequest::GetRunUserUins() const
{
    return m_runUserUins;
}

void ListWorkflowRunsRequest::SetRunUserUins(const vector<string>& _runUserUins)
{
    m_runUserUins = _runUserUins;
    m_runUserUinsHasBeenSet = true;
}

bool ListWorkflowRunsRequest::RunUserUinsHasBeenSet() const
{
    return m_runUserUinsHasBeenSet;
}

vector<string> ListWorkflowRunsRequest::GetLabelKeyIds() const
{
    return m_labelKeyIds;
}

void ListWorkflowRunsRequest::SetLabelKeyIds(const vector<string>& _labelKeyIds)
{
    m_labelKeyIds = _labelKeyIds;
    m_labelKeyIdsHasBeenSet = true;
}

bool ListWorkflowRunsRequest::LabelKeyIdsHasBeenSet() const
{
    return m_labelKeyIdsHasBeenSet;
}

vector<string> ListWorkflowRunsRequest::GetLabelValueIds() const
{
    return m_labelValueIds;
}

void ListWorkflowRunsRequest::SetLabelValueIds(const vector<string>& _labelValueIds)
{
    m_labelValueIds = _labelValueIds;
    m_labelValueIdsHasBeenSet = true;
}

bool ListWorkflowRunsRequest::LabelValueIdsHasBeenSet() const
{
    return m_labelValueIdsHasBeenSet;
}

vector<OrderBy> ListWorkflowRunsRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkflowRunsRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkflowRunsRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}


