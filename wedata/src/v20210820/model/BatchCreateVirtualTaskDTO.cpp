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

#include <tencentcloud/wedata/v20210820/model/BatchCreateVirtualTaskDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateVirtualTaskDTO::BatchCreateVirtualTaskDTO() :
    m_taskIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false)
{
}

CoreInternalOutcome BatchCreateVirtualTaskDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateVirtualTaskDTO.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCreateVirtualTaskDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_leftCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftCoordinate, allocator);
    }

    if (m_topCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topCoordinate, allocator);
    }

}


string BatchCreateVirtualTaskDTO::GetTaskId() const
{
    return m_taskId;
}

void BatchCreateVirtualTaskDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BatchCreateVirtualTaskDTO::GetWorkflowId() const
{
    return m_workflowId;
}

void BatchCreateVirtualTaskDTO::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string BatchCreateVirtualTaskDTO::GetProjectId() const
{
    return m_projectId;
}

void BatchCreateVirtualTaskDTO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BatchCreateVirtualTaskDTO::GetTaskName() const
{
    return m_taskName;
}

void BatchCreateVirtualTaskDTO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

double BatchCreateVirtualTaskDTO::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void BatchCreateVirtualTaskDTO::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double BatchCreateVirtualTaskDTO::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void BatchCreateVirtualTaskDTO::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool BatchCreateVirtualTaskDTO::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

