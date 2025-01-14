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

#include <tencentcloud/wedata/v20210820/model/DescribeOpsWorkflowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeOpsWorkflowsRequest::DescribeOpsWorkflowsRequest() :
    m_projectIdHasBeenSet(false),
    m_productNameListHasBeenSet(false),
    m_folderIdListHasBeenSet(false),
    m_workFlowIdListHasBeenSet(false),
    m_workFlowNameListHasBeenSet(false),
    m_taskNameListHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_workflowTypeListHasBeenSet(false),
    m_keyWordHasBeenSet(false)
{
}

string DescribeOpsWorkflowsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusList.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inChargeList.c_str(), allocator).Move(), allocator);
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

    if (m_sortItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortItem.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowTypeList.begin(); itr != m_workflowTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOpsWorkflowsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeOpsWorkflowsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetProductNameList() const
{
    return m_productNameList;
}

void DescribeOpsWorkflowsRequest::SetProductNameList(const string& _productNameList)
{
    m_productNameList = _productNameList;
    m_productNameListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::ProductNameListHasBeenSet() const
{
    return m_productNameListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetFolderIdList() const
{
    return m_folderIdList;
}

void DescribeOpsWorkflowsRequest::SetFolderIdList(const string& _folderIdList)
{
    m_folderIdList = _folderIdList;
    m_folderIdListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::FolderIdListHasBeenSet() const
{
    return m_folderIdListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetWorkFlowIdList() const
{
    return m_workFlowIdList;
}

void DescribeOpsWorkflowsRequest::SetWorkFlowIdList(const string& _workFlowIdList)
{
    m_workFlowIdList = _workFlowIdList;
    m_workFlowIdListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::WorkFlowIdListHasBeenSet() const
{
    return m_workFlowIdListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetWorkFlowNameList() const
{
    return m_workFlowNameList;
}

void DescribeOpsWorkflowsRequest::SetWorkFlowNameList(const string& _workFlowNameList)
{
    m_workFlowNameList = _workFlowNameList;
    m_workFlowNameListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::WorkFlowNameListHasBeenSet() const
{
    return m_workFlowNameListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetTaskNameList() const
{
    return m_taskNameList;
}

void DescribeOpsWorkflowsRequest::SetTaskNameList(const string& _taskNameList)
{
    m_taskNameList = _taskNameList;
    m_taskNameListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::TaskNameListHasBeenSet() const
{
    return m_taskNameListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void DescribeOpsWorkflowsRequest::SetTaskIdList(const string& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeOpsWorkflowsRequest::SetStatusList(const string& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void DescribeOpsWorkflowsRequest::SetInChargeList(const string& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

uint64_t DescribeOpsWorkflowsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeOpsWorkflowsRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeOpsWorkflowsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeOpsWorkflowsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeOpsWorkflowsRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeOpsWorkflowsRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

vector<string> DescribeOpsWorkflowsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeOpsWorkflowsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeOpsWorkflowsRequest::GetWorkflowTypeList() const
{
    return m_workflowTypeList;
}

void DescribeOpsWorkflowsRequest::SetWorkflowTypeList(const vector<string>& _workflowTypeList)
{
    m_workflowTypeList = _workflowTypeList;
    m_workflowTypeListHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::WorkflowTypeListHasBeenSet() const
{
    return m_workflowTypeListHasBeenSet;
}

string DescribeOpsWorkflowsRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeOpsWorkflowsRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeOpsWorkflowsRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}


