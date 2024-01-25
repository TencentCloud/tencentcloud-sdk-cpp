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

#include <tencentcloud/wedata/v20210820/model/CreateTaskDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskDsRequest::CreateTaskDsRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskExtHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false)
{
}

string CreateTaskDsRequest::ToJsonString() const
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

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_taskExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskExt.begin(); itr != m_taskExt.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_leftCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftCoordinate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_leftCoordinate, allocator);
    }

    if (m_topCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCoordinate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topCoordinate, allocator);
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


string CreateTaskDsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateTaskDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateTaskDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string CreateTaskDsRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskDsRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskDsRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t CreateTaskDsRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateTaskDsRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateTaskDsRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<TaskExtInfo> CreateTaskDsRequest::GetTaskExt() const
{
    return m_taskExt;
}

void CreateTaskDsRequest::SetTaskExt(const vector<TaskExtInfo>& _taskExt)
{
    m_taskExt = _taskExt;
    m_taskExtHasBeenSet = true;
}

bool CreateTaskDsRequest::TaskExtHasBeenSet() const
{
    return m_taskExtHasBeenSet;
}

string CreateTaskDsRequest::GetProductName() const
{
    return m_productName;
}

void CreateTaskDsRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CreateTaskDsRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CreateTaskDsRequest::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void CreateTaskDsRequest::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool CreateTaskDsRequest::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

double CreateTaskDsRequest::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void CreateTaskDsRequest::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool CreateTaskDsRequest::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double CreateTaskDsRequest::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void CreateTaskDsRequest::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool CreateTaskDsRequest::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

string CreateTaskDsRequest::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void CreateTaskDsRequest::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool CreateTaskDsRequest::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}


