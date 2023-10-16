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
    m_includeTaskHasBeenSet(false)
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


