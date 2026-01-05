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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskBaseAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerTaskBaseAttribute::CreateTriggerTaskBaseAttribute() :
    m_taskNameHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskFolderPathHasBeenSet(false)
{
}

CoreInternalOutcome CreateTriggerTaskBaseAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.TaskTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = string(value["TaskTypeId"].GetString());
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderPath") && !value["TaskFolderPath"].IsNull())
    {
        if (!value["TaskFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskBaseAttribute.TaskFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderPath = string(value["TaskFolderPath"].GetString());
        m_taskFolderPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTriggerTaskBaseAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderPath.c_str(), allocator).Move(), allocator);
    }

}


string CreateTriggerTaskBaseAttribute::GetTaskName() const
{
    return m_taskName;
}

void CreateTriggerTaskBaseAttribute::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTriggerTaskBaseAttribute::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void CreateTriggerTaskBaseAttribute::SetTaskTypeId(const string& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string CreateTriggerTaskBaseAttribute::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateTriggerTaskBaseAttribute::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string CreateTriggerTaskBaseAttribute::GetOwnerUin() const
{
    return m_ownerUin;
}

void CreateTriggerTaskBaseAttribute::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string CreateTriggerTaskBaseAttribute::GetTaskDescription() const
{
    return m_taskDescription;
}

void CreateTriggerTaskBaseAttribute::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string CreateTriggerTaskBaseAttribute::GetTaskFolderPath() const
{
    return m_taskFolderPath;
}

void CreateTriggerTaskBaseAttribute::SetTaskFolderPath(const string& _taskFolderPath)
{
    m_taskFolderPath = _taskFolderPath;
    m_taskFolderPathHasBeenSet = true;
}

bool CreateTriggerTaskBaseAttribute::TaskFolderPathHasBeenSet() const
{
    return m_taskFolderPathHasBeenSet;
}

