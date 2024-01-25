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

#include <tencentcloud/wedata/v20210820/model/ProjectCloneWorkflowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ProjectCloneWorkflowInfo::ProjectCloneWorkflowInfo() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_taskNumHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_latestSubmitTimeHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

CoreInternalOutcome ProjectCloneWorkflowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Folder") && !value["Folder"].IsNull())
    {
        if (!value["Folder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.Folder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folder = string(value["Folder"].GetString());
        m_folderHasBeenSet = true;
    }

    if (value.HasMember("TaskNum") && !value["TaskNum"].IsNull())
    {
        if (!value["TaskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.TaskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNum = value["TaskNum"].GetUint64();
        m_taskNumHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("LatestSubmitTime") && !value["LatestSubmitTime"].IsNull())
    {
        if (!value["LatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.LatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSubmitTime = string(value["LatestSubmitTime"].GetString());
        m_latestSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProjectCloneWorkflowInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProjectCloneTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectCloneWorkflowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Folder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folder.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNum, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProjectCloneWorkflowInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void ProjectCloneWorkflowInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ProjectCloneWorkflowInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void ProjectCloneWorkflowInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string ProjectCloneWorkflowInfo::GetFolder() const
{
    return m_folder;
}

void ProjectCloneWorkflowInfo::SetFolder(const string& _folder)
{
    m_folder = _folder;
    m_folderHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::FolderHasBeenSet() const
{
    return m_folderHasBeenSet;
}

uint64_t ProjectCloneWorkflowInfo::GetTaskNum() const
{
    return m_taskNum;
}

void ProjectCloneWorkflowInfo::SetTaskNum(const uint64_t& _taskNum)
{
    m_taskNum = _taskNum;
    m_taskNumHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::TaskNumHasBeenSet() const
{
    return m_taskNumHasBeenSet;
}

string ProjectCloneWorkflowInfo::GetOwner() const
{
    return m_owner;
}

void ProjectCloneWorkflowInfo::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string ProjectCloneWorkflowInfo::GetOwnerName() const
{
    return m_ownerName;
}

void ProjectCloneWorkflowInfo::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string ProjectCloneWorkflowInfo::GetLatestSubmitTime() const
{
    return m_latestSubmitTime;
}

void ProjectCloneWorkflowInfo::SetLatestSubmitTime(const string& _latestSubmitTime)
{
    m_latestSubmitTime = _latestSubmitTime;
    m_latestSubmitTimeHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::LatestSubmitTimeHasBeenSet() const
{
    return m_latestSubmitTimeHasBeenSet;
}

vector<ProjectCloneTaskInfo> ProjectCloneWorkflowInfo::GetTasks() const
{
    return m_tasks;
}

void ProjectCloneWorkflowInfo::SetTasks(const vector<ProjectCloneTaskInfo>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ProjectCloneWorkflowInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

