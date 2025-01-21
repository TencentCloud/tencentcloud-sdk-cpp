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

#include <tencentcloud/cfg/v20210820/model/TaskListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskListItem::TaskListItem() :
    m_taskIdHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskTagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskUpdateTimeHasBeenSet(false),
    m_taskPreCheckStatusHasBeenSet(false),
    m_taskPreCheckSuccessHasBeenSet(false),
    m_taskExpectHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_verifyIdHasBeenSet(false),
    m_taskStatusTypeHasBeenSet(false),
    m_archIdHasBeenSet(false),
    m_archNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTitle") && !value["TaskTitle"].IsNull())
    {
        if (!value["TaskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTitle = string(value["TaskTitle"].GetString());
        m_taskTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskTag") && !value["TaskTag"].IsNull())
    {
        if (!value["TaskTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTag = string(value["TaskTag"].GetString());
        m_taskTagHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskUpdateTime") && !value["TaskUpdateTime"].IsNull())
    {
        if (!value["TaskUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskUpdateTime = string(value["TaskUpdateTime"].GetString());
        m_taskUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskPreCheckStatus") && !value["TaskPreCheckStatus"].IsNull())
    {
        if (!value["TaskPreCheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskPreCheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPreCheckStatus = value["TaskPreCheckStatus"].GetInt64();
        m_taskPreCheckStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskPreCheckSuccess") && !value["TaskPreCheckSuccess"].IsNull())
    {
        if (!value["TaskPreCheckSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskPreCheckSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskPreCheckSuccess = value["TaskPreCheckSuccess"].GetBool();
        m_taskPreCheckSuccessHasBeenSet = true;
    }

    if (value.HasMember("TaskExpect") && !value["TaskExpect"].IsNull())
    {
        if (!value["TaskExpect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskExpect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskExpect = value["TaskExpect"].GetInt64();
        m_taskExpectHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("VerifyId") && !value["VerifyId"].IsNull())
    {
        if (!value["VerifyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.VerifyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyId = value["VerifyId"].GetUint64();
        m_verifyIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatusType") && !value["TaskStatusType"].IsNull())
    {
        if (!value["TaskStatusType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskStatusType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatusType = value["TaskStatusType"].GetUint64();
        m_taskStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("ArchId") && !value["ArchId"].IsNull())
    {
        if (!value["ArchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.ArchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archId = string(value["ArchId"].GetString());
        m_archIdHasBeenSet = true;
    }

    if (value.HasMember("ArchName") && !value["ArchName"].IsNull())
    {
        if (!value["ArchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.ArchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archName = string(value["ArchName"].GetString());
        m_archNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTag.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPreCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPreCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPreCheckStatus, allocator);
    }

    if (m_taskPreCheckSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPreCheckSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPreCheckSuccess, allocator);
    }

    if (m_taskExpectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExpect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskExpect, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyId, allocator);
    }

    if (m_taskStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatusType, allocator);
    }

    if (m_archIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archId.c_str(), allocator).Move(), allocator);
    }

    if (m_archNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskListItem::GetTaskId() const
{
    return m_taskId;
}

void TaskListItem::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskListItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskListItem::GetTaskTitle() const
{
    return m_taskTitle;
}

void TaskListItem::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool TaskListItem::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string TaskListItem::GetTaskDescription() const
{
    return m_taskDescription;
}

void TaskListItem::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool TaskListItem::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string TaskListItem::GetTaskTag() const
{
    return m_taskTag;
}

void TaskListItem::SetTaskTag(const string& _taskTag)
{
    m_taskTag = _taskTag;
    m_taskTagHasBeenSet = true;
}

bool TaskListItem::TaskTagHasBeenSet() const
{
    return m_taskTagHasBeenSet;
}

int64_t TaskListItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskListItem::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskListItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string TaskListItem::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void TaskListItem::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool TaskListItem::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string TaskListItem::GetTaskUpdateTime() const
{
    return m_taskUpdateTime;
}

void TaskListItem::SetTaskUpdateTime(const string& _taskUpdateTime)
{
    m_taskUpdateTime = _taskUpdateTime;
    m_taskUpdateTimeHasBeenSet = true;
}

bool TaskListItem::TaskUpdateTimeHasBeenSet() const
{
    return m_taskUpdateTimeHasBeenSet;
}

int64_t TaskListItem::GetTaskPreCheckStatus() const
{
    return m_taskPreCheckStatus;
}

void TaskListItem::SetTaskPreCheckStatus(const int64_t& _taskPreCheckStatus)
{
    m_taskPreCheckStatus = _taskPreCheckStatus;
    m_taskPreCheckStatusHasBeenSet = true;
}

bool TaskListItem::TaskPreCheckStatusHasBeenSet() const
{
    return m_taskPreCheckStatusHasBeenSet;
}

bool TaskListItem::GetTaskPreCheckSuccess() const
{
    return m_taskPreCheckSuccess;
}

void TaskListItem::SetTaskPreCheckSuccess(const bool& _taskPreCheckSuccess)
{
    m_taskPreCheckSuccess = _taskPreCheckSuccess;
    m_taskPreCheckSuccessHasBeenSet = true;
}

bool TaskListItem::TaskPreCheckSuccessHasBeenSet() const
{
    return m_taskPreCheckSuccessHasBeenSet;
}

int64_t TaskListItem::GetTaskExpect() const
{
    return m_taskExpect;
}

void TaskListItem::SetTaskExpect(const int64_t& _taskExpect)
{
    m_taskExpect = _taskExpect;
    m_taskExpectHasBeenSet = true;
}

bool TaskListItem::TaskExpectHasBeenSet() const
{
    return m_taskExpectHasBeenSet;
}

string TaskListItem::GetApplicationId() const
{
    return m_applicationId;
}

void TaskListItem::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool TaskListItem::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string TaskListItem::GetApplicationName() const
{
    return m_applicationName;
}

void TaskListItem::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool TaskListItem::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

uint64_t TaskListItem::GetVerifyId() const
{
    return m_verifyId;
}

void TaskListItem::SetVerifyId(const uint64_t& _verifyId)
{
    m_verifyId = _verifyId;
    m_verifyIdHasBeenSet = true;
}

bool TaskListItem::VerifyIdHasBeenSet() const
{
    return m_verifyIdHasBeenSet;
}

uint64_t TaskListItem::GetTaskStatusType() const
{
    return m_taskStatusType;
}

void TaskListItem::SetTaskStatusType(const uint64_t& _taskStatusType)
{
    m_taskStatusType = _taskStatusType;
    m_taskStatusTypeHasBeenSet = true;
}

bool TaskListItem::TaskStatusTypeHasBeenSet() const
{
    return m_taskStatusTypeHasBeenSet;
}

string TaskListItem::GetArchId() const
{
    return m_archId;
}

void TaskListItem::SetArchId(const string& _archId)
{
    m_archId = _archId;
    m_archIdHasBeenSet = true;
}

bool TaskListItem::ArchIdHasBeenSet() const
{
    return m_archIdHasBeenSet;
}

string TaskListItem::GetArchName() const
{
    return m_archName;
}

void TaskListItem::SetArchName(const string& _archName)
{
    m_archName = _archName;
    m_archNameHasBeenSet = true;
}

bool TaskListItem::ArchNameHasBeenSet() const
{
    return m_archNameHasBeenSet;
}

