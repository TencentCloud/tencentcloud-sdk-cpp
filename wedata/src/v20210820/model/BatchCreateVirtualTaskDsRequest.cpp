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

#include <tencentcloud/wedata/v20210820/model/BatchCreateVirtualTaskDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateVirtualTaskDsRequest::BatchCreateVirtualTaskDsRequest() :
    m_projectIdHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

string BatchCreateVirtualTaskDsRequest::ToJsonString() const
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

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string BatchCreateVirtualTaskDsRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchCreateVirtualTaskDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchCreateVirtualTaskDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<BatchCreateVirtualTaskDTO> BatchCreateVirtualTaskDsRequest::GetTasks() const
{
    return m_tasks;
}

void BatchCreateVirtualTaskDsRequest::SetTasks(const vector<BatchCreateVirtualTaskDTO>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool BatchCreateVirtualTaskDsRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string BatchCreateVirtualTaskDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void BatchCreateVirtualTaskDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool BatchCreateVirtualTaskDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}


