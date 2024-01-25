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

#include <tencentcloud/wedata/v20210820/model/RestoreRecycleTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RestoreRecycleTaskRequest::RestoreRecycleTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_fileRemotePathHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_virtualTaskIdHasBeenSet(false)
{
}

string RestoreRecycleTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileRemotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileRemotePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileRemotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_virtualFlag, allocator);
    }

    if (m_virtualTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestoreRecycleTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void RestoreRecycleTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RestoreRecycleTaskRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RestoreRecycleTaskRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string RestoreRecycleTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void RestoreRecycleTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RestoreRecycleTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void RestoreRecycleTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RestoreRecycleTaskRequest::GetProductName() const
{
    return m_productName;
}

void RestoreRecycleTaskRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string RestoreRecycleTaskRequest::GetFileRemotePath() const
{
    return m_fileRemotePath;
}

void RestoreRecycleTaskRequest::SetFileRemotePath(const string& _fileRemotePath)
{
    m_fileRemotePath = _fileRemotePath;
    m_fileRemotePathHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::FileRemotePathHasBeenSet() const
{
    return m_fileRemotePathHasBeenSet;
}

bool RestoreRecycleTaskRequest::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void RestoreRecycleTaskRequest::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string RestoreRecycleTaskRequest::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void RestoreRecycleTaskRequest::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool RestoreRecycleTaskRequest::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}


