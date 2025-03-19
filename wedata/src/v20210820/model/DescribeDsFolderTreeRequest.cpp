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

#include <tencentcloud/wedata/v20210820/model/DescribeDsFolderTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDsFolderTreeRequest::DescribeDsFolderTreeRequest() :
    m_projectIdHasBeenSet(false),
    m_firstLevelPullHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_includeWorkflowHasBeenSet(false),
    m_includeTaskHasBeenSet(false),
    m_includeVirtualTaskHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_includeTaskFolderHasBeenSet(false),
    m_newFolderTreeModeHasBeenSet(false),
    m_taskNodeIdHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_taskTypeIdListHasBeenSet(false),
    m_inChargeIdListHasBeenSet(false),
    m_onlyMeHasBeenSet(false),
    m_includeCodeTemplateHasBeenSet(false),
    m_folderFormHasBeenSet(false)
{
}

string DescribeDsFolderTreeRequest::ToJsonString() const
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

    if (m_firstLevelPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstLevelPull";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_firstLevelPull, allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_includeWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeWorkflow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeWorkflow, allocator);
    }

    if (m_includeTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeTask, allocator);
    }

    if (m_includeVirtualTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeVirtualTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeVirtualTask, allocator);
    }

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayType.c_str(), allocator).Move(), allocator);
    }

    if (m_includeTaskFolderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeTaskFolder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeTaskFolder, allocator);
    }

    if (m_newFolderTreeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFolderTreeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newFolderTreeMode, allocator);
    }

    if (m_taskNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeIdList.begin(); itr != m_taskTypeIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_inChargeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeIdList.begin(); itr != m_inChargeIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyMe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyMe, allocator);
    }

    if (m_includeCodeTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeCodeTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeCodeTemplate, allocator);
    }

    if (m_folderFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderForm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderForm.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDsFolderTreeRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDsFolderTreeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetFirstLevelPull() const
{
    return m_firstLevelPull;
}

void DescribeDsFolderTreeRequest::SetFirstLevelPull(const bool& _firstLevelPull)
{
    m_firstLevelPull = _firstLevelPull;
    m_firstLevelPullHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::FirstLevelPullHasBeenSet() const
{
    return m_firstLevelPullHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetFolderId() const
{
    return m_folderId;
}

void DescribeDsFolderTreeRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeDsFolderTreeRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDsFolderTreeRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetIncludeWorkflow() const
{
    return m_includeWorkflow;
}

void DescribeDsFolderTreeRequest::SetIncludeWorkflow(const bool& _includeWorkflow)
{
    m_includeWorkflow = _includeWorkflow;
    m_includeWorkflowHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::IncludeWorkflowHasBeenSet() const
{
    return m_includeWorkflowHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetIncludeTask() const
{
    return m_includeTask;
}

void DescribeDsFolderTreeRequest::SetIncludeTask(const bool& _includeTask)
{
    m_includeTask = _includeTask;
    m_includeTaskHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::IncludeTaskHasBeenSet() const
{
    return m_includeTaskHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetIncludeVirtualTask() const
{
    return m_includeVirtualTask;
}

void DescribeDsFolderTreeRequest::SetIncludeVirtualTask(const bool& _includeVirtualTask)
{
    m_includeVirtualTask = _includeVirtualTask;
    m_includeVirtualTaskHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::IncludeVirtualTaskHasBeenSet() const
{
    return m_includeVirtualTaskHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void DescribeDsFolderTreeRequest::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetDisplayType() const
{
    return m_displayType;
}

void DescribeDsFolderTreeRequest::SetDisplayType(const string& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetIncludeTaskFolder() const
{
    return m_includeTaskFolder;
}

void DescribeDsFolderTreeRequest::SetIncludeTaskFolder(const bool& _includeTaskFolder)
{
    m_includeTaskFolder = _includeTaskFolder;
    m_includeTaskFolderHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::IncludeTaskFolderHasBeenSet() const
{
    return m_includeTaskFolderHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetNewFolderTreeMode() const
{
    return m_newFolderTreeMode;
}

void DescribeDsFolderTreeRequest::SetNewFolderTreeMode(const bool& _newFolderTreeMode)
{
    m_newFolderTreeMode = _newFolderTreeMode;
    m_newFolderTreeModeHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::NewFolderTreeModeHasBeenSet() const
{
    return m_newFolderTreeModeHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetTaskNodeId() const
{
    return m_taskNodeId;
}

void DescribeDsFolderTreeRequest::SetTaskNodeId(const string& _taskNodeId)
{
    m_taskNodeId = _taskNodeId;
    m_taskNodeIdHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::TaskNodeIdHasBeenSet() const
{
    return m_taskNodeIdHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetWorkflowType() const
{
    return m_workflowType;
}

void DescribeDsFolderTreeRequest::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

vector<int64_t> DescribeDsFolderTreeRequest::GetTaskTypeIdList() const
{
    return m_taskTypeIdList;
}

void DescribeDsFolderTreeRequest::SetTaskTypeIdList(const vector<int64_t>& _taskTypeIdList)
{
    m_taskTypeIdList = _taskTypeIdList;
    m_taskTypeIdListHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::TaskTypeIdListHasBeenSet() const
{
    return m_taskTypeIdListHasBeenSet;
}

vector<string> DescribeDsFolderTreeRequest::GetInChargeIdList() const
{
    return m_inChargeIdList;
}

void DescribeDsFolderTreeRequest::SetInChargeIdList(const vector<string>& _inChargeIdList)
{
    m_inChargeIdList = _inChargeIdList;
    m_inChargeIdListHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::InChargeIdListHasBeenSet() const
{
    return m_inChargeIdListHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetOnlyMe() const
{
    return m_onlyMe;
}

void DescribeDsFolderTreeRequest::SetOnlyMe(const bool& _onlyMe)
{
    m_onlyMe = _onlyMe;
    m_onlyMeHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::OnlyMeHasBeenSet() const
{
    return m_onlyMeHasBeenSet;
}

bool DescribeDsFolderTreeRequest::GetIncludeCodeTemplate() const
{
    return m_includeCodeTemplate;
}

void DescribeDsFolderTreeRequest::SetIncludeCodeTemplate(const bool& _includeCodeTemplate)
{
    m_includeCodeTemplate = _includeCodeTemplate;
    m_includeCodeTemplateHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::IncludeCodeTemplateHasBeenSet() const
{
    return m_includeCodeTemplateHasBeenSet;
}

string DescribeDsFolderTreeRequest::GetFolderForm() const
{
    return m_folderForm;
}

void DescribeDsFolderTreeRequest::SetFolderForm(const string& _folderForm)
{
    m_folderForm = _folderForm;
    m_folderFormHasBeenSet = true;
}

bool DescribeDsFolderTreeRequest::FolderFormHasBeenSet() const
{
    return m_folderFormHasBeenSet;
}


