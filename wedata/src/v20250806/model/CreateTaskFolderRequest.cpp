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

#include <tencentcloud/wedata/v20250806/model/CreateTaskFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTaskFolderRequest::CreateTaskFolderRequest() :
    m_projectIdHasBeenSet(false),
    m_parentTaskFolderPathHasBeenSet(false),
    m_taskFolderNameHasBeenSet(false),
    m_taskFolderTypeHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

string CreateTaskFolderRequest::ToJsonString() const
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

    if (m_parentTaskFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTaskFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentTaskFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderType.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskFolderRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskFolderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskFolderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskFolderRequest::GetParentTaskFolderPath() const
{
    return m_parentTaskFolderPath;
}

void CreateTaskFolderRequest::SetParentTaskFolderPath(const string& _parentTaskFolderPath)
{
    m_parentTaskFolderPath = _parentTaskFolderPath;
    m_parentTaskFolderPathHasBeenSet = true;
}

bool CreateTaskFolderRequest::ParentTaskFolderPathHasBeenSet() const
{
    return m_parentTaskFolderPathHasBeenSet;
}

string CreateTaskFolderRequest::GetTaskFolderName() const
{
    return m_taskFolderName;
}

void CreateTaskFolderRequest::SetTaskFolderName(const string& _taskFolderName)
{
    m_taskFolderName = _taskFolderName;
    m_taskFolderNameHasBeenSet = true;
}

bool CreateTaskFolderRequest::TaskFolderNameHasBeenSet() const
{
    return m_taskFolderNameHasBeenSet;
}

string CreateTaskFolderRequest::GetTaskFolderType() const
{
    return m_taskFolderType;
}

void CreateTaskFolderRequest::SetTaskFolderType(const string& _taskFolderType)
{
    m_taskFolderType = _taskFolderType;
    m_taskFolderTypeHasBeenSet = true;
}

bool CreateTaskFolderRequest::TaskFolderTypeHasBeenSet() const
{
    return m_taskFolderTypeHasBeenSet;
}

string CreateTaskFolderRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateTaskFolderRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateTaskFolderRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}


