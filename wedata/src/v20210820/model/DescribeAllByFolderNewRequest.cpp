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

#include <tencentcloud/wedata/v20210820/model/DescribeAllByFolderNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeAllByFolderNewRequest::DescribeAllByFolderNewRequest() :
    m_folderHasBeenSet(false),
    m_workflowsHasBeenSet(false),
    m_targetFolderIdHasBeenSet(false),
    m_keyWordsHasBeenSet(false),
    m_parentsFolderIdHasBeenSet(false),
    m_isAddWorkflowHasBeenSet(false),
    m_taskStatesHasBeenSet(false),
    m_findTypeHasBeenSet(false),
    m_optTypeHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_operatorIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_requestBaseInfoHasBeenSet(false),
    m_isCountHasBeenSet(false)
{
}

string DescribeAllByFolderNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_folderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Folder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_folder.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_workflowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workflows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflows.begin(); itr != m_workflows.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_targetFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWords.c_str(), allocator).Move(), allocator);
    }

    if (m_parentsFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentsFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentsFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAddWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAddWorkflow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAddWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStates.begin(); itr != m_taskStates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_findTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_findType.c_str(), allocator).Move(), allocator);
    }

    if (m_optTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_requestBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestBaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


FolderOpsDto DescribeAllByFolderNewRequest::GetFolder() const
{
    return m_folder;
}

void DescribeAllByFolderNewRequest::SetFolder(const FolderOpsDto& _folder)
{
    m_folder = _folder;
    m_folderHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::FolderHasBeenSet() const
{
    return m_folderHasBeenSet;
}

vector<WorkflowCanvasOpsDto> DescribeAllByFolderNewRequest::GetWorkflows() const
{
    return m_workflows;
}

void DescribeAllByFolderNewRequest::SetWorkflows(const vector<WorkflowCanvasOpsDto>& _workflows)
{
    m_workflows = _workflows;
    m_workflowsHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::WorkflowsHasBeenSet() const
{
    return m_workflowsHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetTargetFolderId() const
{
    return m_targetFolderId;
}

void DescribeAllByFolderNewRequest::SetTargetFolderId(const string& _targetFolderId)
{
    m_targetFolderId = _targetFolderId;
    m_targetFolderIdHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::TargetFolderIdHasBeenSet() const
{
    return m_targetFolderIdHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetKeyWords() const
{
    return m_keyWords;
}

void DescribeAllByFolderNewRequest::SetKeyWords(const string& _keyWords)
{
    m_keyWords = _keyWords;
    m_keyWordsHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::KeyWordsHasBeenSet() const
{
    return m_keyWordsHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetParentsFolderId() const
{
    return m_parentsFolderId;
}

void DescribeAllByFolderNewRequest::SetParentsFolderId(const string& _parentsFolderId)
{
    m_parentsFolderId = _parentsFolderId;
    m_parentsFolderIdHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::ParentsFolderIdHasBeenSet() const
{
    return m_parentsFolderIdHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetIsAddWorkflow() const
{
    return m_isAddWorkflow;
}

void DescribeAllByFolderNewRequest::SetIsAddWorkflow(const string& _isAddWorkflow)
{
    m_isAddWorkflow = _isAddWorkflow;
    m_isAddWorkflowHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::IsAddWorkflowHasBeenSet() const
{
    return m_isAddWorkflowHasBeenSet;
}

vector<string> DescribeAllByFolderNewRequest::GetTaskStates() const
{
    return m_taskStates;
}

void DescribeAllByFolderNewRequest::SetTaskStates(const vector<string>& _taskStates)
{
    m_taskStates = _taskStates;
    m_taskStatesHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::TaskStatesHasBeenSet() const
{
    return m_taskStatesHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetFindType() const
{
    return m_findType;
}

void DescribeAllByFolderNewRequest::SetFindType(const string& _findType)
{
    m_findType = _findType;
    m_findTypeHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::FindTypeHasBeenSet() const
{
    return m_findTypeHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetOptType() const
{
    return m_optType;
}

void DescribeAllByFolderNewRequest::SetOptType(const string& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetOperatorName() const
{
    return m_operatorName;
}

void DescribeAllByFolderNewRequest::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetOperatorId() const
{
    return m_operatorId;
}

void DescribeAllByFolderNewRequest::SetOperatorId(const string& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeAllByFolderNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetProjectIdent() const
{
    return m_projectIdent;
}

void DescribeAllByFolderNewRequest::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string DescribeAllByFolderNewRequest::GetProjectName() const
{
    return m_projectName;
}

void DescribeAllByFolderNewRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t DescribeAllByFolderNewRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeAllByFolderNewRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeAllByFolderNewRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAllByFolderNewRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeAllByFolderNewRequest::GetCount() const
{
    return m_count;
}

void DescribeAllByFolderNewRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

ProjectBaseInfoOpsRequest DescribeAllByFolderNewRequest::GetRequestBaseInfo() const
{
    return m_requestBaseInfo;
}

void DescribeAllByFolderNewRequest::SetRequestBaseInfo(const ProjectBaseInfoOpsRequest& _requestBaseInfo)
{
    m_requestBaseInfo = _requestBaseInfo;
    m_requestBaseInfoHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::RequestBaseInfoHasBeenSet() const
{
    return m_requestBaseInfoHasBeenSet;
}

bool DescribeAllByFolderNewRequest::GetIsCount() const
{
    return m_isCount;
}

void DescribeAllByFolderNewRequest::SetIsCount(const bool& _isCount)
{
    m_isCount = _isCount;
    m_isCountHasBeenSet = true;
}

bool DescribeAllByFolderNewRequest::IsCountHasBeenSet() const
{
    return m_isCountHasBeenSet;
}


