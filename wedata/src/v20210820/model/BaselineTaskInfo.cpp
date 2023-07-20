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

#include <tencentcloud/wedata/v20210820/model/BaselineTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineTaskInfo::BaselineTaskInfo() :
    m_projectIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskCycleHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskInChargeNameHasBeenSet(false),
    m_taskInChargeUinHasBeenSet(false)
{
}

CoreInternalOutcome BaselineTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskCycle") && !value["TaskCycle"].IsNull())
    {
        if (!value["TaskCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.TaskCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCycle = string(value["TaskCycle"].GetString());
        m_taskCycleHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskInChargeName") && !value["TaskInChargeName"].IsNull())
    {
        if (!value["TaskInChargeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.TaskInChargeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInChargeName = string(value["TaskInChargeName"].GetString());
        m_taskInChargeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskInChargeUin") && !value["TaskInChargeUin"].IsNull())
    {
        if (!value["TaskInChargeUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskInfo.TaskInChargeUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInChargeUin = string(value["TaskInChargeUin"].GetString());
        m_taskInChargeUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInChargeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInChargeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInChargeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInChargeUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInChargeUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInChargeUin.c_str(), allocator).Move(), allocator);
    }

}


string BaselineTaskInfo::GetProjectId() const
{
    return m_projectId;
}

void BaselineTaskInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaselineTaskInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaselineTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void BaselineTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BaselineTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string BaselineTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void BaselineTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BaselineTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BaselineTaskInfo::GetTaskCycle() const
{
    return m_taskCycle;
}

void BaselineTaskInfo::SetTaskCycle(const string& _taskCycle)
{
    m_taskCycle = _taskCycle;
    m_taskCycleHasBeenSet = true;
}

bool BaselineTaskInfo::TaskCycleHasBeenSet() const
{
    return m_taskCycleHasBeenSet;
}

string BaselineTaskInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void BaselineTaskInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool BaselineTaskInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string BaselineTaskInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void BaselineTaskInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool BaselineTaskInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string BaselineTaskInfo::GetTaskInChargeName() const
{
    return m_taskInChargeName;
}

void BaselineTaskInfo::SetTaskInChargeName(const string& _taskInChargeName)
{
    m_taskInChargeName = _taskInChargeName;
    m_taskInChargeNameHasBeenSet = true;
}

bool BaselineTaskInfo::TaskInChargeNameHasBeenSet() const
{
    return m_taskInChargeNameHasBeenSet;
}

string BaselineTaskInfo::GetTaskInChargeUin() const
{
    return m_taskInChargeUin;
}

void BaselineTaskInfo::SetTaskInChargeUin(const string& _taskInChargeUin)
{
    m_taskInChargeUin = _taskInChargeUin;
    m_taskInChargeUinHasBeenSet = true;
}

bool BaselineTaskInfo::TaskInChargeUinHasBeenSet() const
{
    return m_taskInChargeUinHasBeenSet;
}

