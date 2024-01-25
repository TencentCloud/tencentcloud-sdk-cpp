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

#include <tencentcloud/wedata/v20210820/model/ImportOfflineTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ImportOfflineTaskRequest::ImportOfflineTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_taskInfoListHasBeenSet(false),
    m_taskNameExistModeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false)
{
}

string ImportOfflineTaskRequest::ToJsonString() const
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

    if (m_taskInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfoList.begin(); itr != m_taskInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskNameExistModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameExistMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskNameExistMode, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportOfflineTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportOfflineTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportOfflineTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TaskBaseInfo> ImportOfflineTaskRequest::GetTaskInfoList() const
{
    return m_taskInfoList;
}

void ImportOfflineTaskRequest::SetTaskInfoList(const vector<TaskBaseInfo>& _taskInfoList)
{
    m_taskInfoList = _taskInfoList;
    m_taskInfoListHasBeenSet = true;
}

bool ImportOfflineTaskRequest::TaskInfoListHasBeenSet() const
{
    return m_taskInfoListHasBeenSet;
}

int64_t ImportOfflineTaskRequest::GetTaskNameExistMode() const
{
    return m_taskNameExistMode;
}

void ImportOfflineTaskRequest::SetTaskNameExistMode(const int64_t& _taskNameExistMode)
{
    m_taskNameExistMode = _taskNameExistMode;
    m_taskNameExistModeHasBeenSet = true;
}

bool ImportOfflineTaskRequest::TaskNameExistModeHasBeenSet() const
{
    return m_taskNameExistModeHasBeenSet;
}

string ImportOfflineTaskRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ImportOfflineTaskRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ImportOfflineTaskRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ImportOfflineTaskRequest::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void ImportOfflineTaskRequest::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool ImportOfflineTaskRequest::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}


