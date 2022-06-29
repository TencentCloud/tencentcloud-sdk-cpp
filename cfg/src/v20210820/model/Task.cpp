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

#include <tencentcloud/cfg/v20210820/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

Task::Task() :
    m_taskIdHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskTagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskStatusTypeHasBeenSet(false),
    m_taskProtectStrategyHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskUpdateTimeHasBeenSet(false),
    m_taskGroupsHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskExpectHasBeenSet(false),
    m_taskSummaryHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_taskPauseDurationHasBeenSet(false),
    m_taskOwnerUinHasBeenSet(false),
    m_taskRegionIdHasBeenSet(false),
    m_taskMonitorsHasBeenSet(false),
    m_taskPolicyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTitle") && !value["TaskTitle"].IsNull())
    {
        if (!value["TaskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTitle = string(value["TaskTitle"].GetString());
        m_taskTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskTag") && !value["TaskTag"].IsNull())
    {
        if (!value["TaskTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTag = string(value["TaskTag"].GetString());
        m_taskTagHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskStatusType") && !value["TaskStatusType"].IsNull())
    {
        if (!value["TaskStatusType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStatusType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatusType = value["TaskStatusType"].GetInt64();
        m_taskStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskProtectStrategy") && !value["TaskProtectStrategy"].IsNull())
    {
        if (!value["TaskProtectStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskProtectStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskProtectStrategy = string(value["TaskProtectStrategy"].GetString());
        m_taskProtectStrategyHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskUpdateTime") && !value["TaskUpdateTime"].IsNull())
    {
        if (!value["TaskUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskUpdateTime = string(value["TaskUpdateTime"].GetString());
        m_taskUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroups") && !value["TaskGroups"].IsNull())
    {
        if (!value["TaskGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.TaskGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroups.push_back(item);
        }
        m_taskGroupsHasBeenSet = true;
    }

    if (value.HasMember("TaskStartTime") && !value["TaskStartTime"].IsNull())
    {
        if (!value["TaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStartTime = string(value["TaskStartTime"].GetString());
        m_taskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskEndTime") && !value["TaskEndTime"].IsNull())
    {
        if (!value["TaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEndTime = string(value["TaskEndTime"].GetString());
        m_taskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskExpect") && !value["TaskExpect"].IsNull())
    {
        if (!value["TaskExpect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskExpect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskExpect = value["TaskExpect"].GetInt64();
        m_taskExpectHasBeenSet = true;
    }

    if (value.HasMember("TaskSummary") && !value["TaskSummary"].IsNull())
    {
        if (!value["TaskSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSummary = string(value["TaskSummary"].GetString());
        m_taskSummaryHasBeenSet = true;
    }

    if (value.HasMember("TaskMode") && !value["TaskMode"].IsNull())
    {
        if (!value["TaskMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMode = value["TaskMode"].GetInt64();
        m_taskModeHasBeenSet = true;
    }

    if (value.HasMember("TaskPauseDuration") && !value["TaskPauseDuration"].IsNull())
    {
        if (!value["TaskPauseDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPauseDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPauseDuration = value["TaskPauseDuration"].GetInt64();
        m_taskPauseDurationHasBeenSet = true;
    }

    if (value.HasMember("TaskOwnerUin") && !value["TaskOwnerUin"].IsNull())
    {
        if (!value["TaskOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOwnerUin = string(value["TaskOwnerUin"].GetString());
        m_taskOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("TaskRegionId") && !value["TaskRegionId"].IsNull())
    {
        if (!value["TaskRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskRegionId = value["TaskRegionId"].GetInt64();
        m_taskRegionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskMonitors") && !value["TaskMonitors"].IsNull())
    {
        if (!value["TaskMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.TaskMonitors` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskMonitor item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskMonitors.push_back(item);
        }
        m_taskMonitorsHasBeenSet = true;
    }

    if (value.HasMember("TaskPolicy") && !value["TaskPolicy"].IsNull())
    {
        if (!value["TaskPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskPolicy.Deserialize(value["TaskPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskPolicyHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagWithDescribe item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_taskStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatusType, allocator);
    }

    if (m_taskProtectStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProtectStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskProtectStrategy.c_str(), allocator).Move(), allocator);
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

    if (m_taskGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroups.begin(); itr != m_taskGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskExpectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExpect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskExpect, allocator);
    }

    if (m_taskSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMode, allocator);
    }

    if (m_taskPauseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPauseDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPauseDuration, allocator);
    }

    if (m_taskOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRegionId, allocator);
    }

    if (m_taskMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskMonitors.begin(); itr != m_taskMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Task::GetTaskId() const
{
    return m_taskId;
}

void Task::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Task::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Task::GetTaskTitle() const
{
    return m_taskTitle;
}

void Task::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool Task::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string Task::GetTaskDescription() const
{
    return m_taskDescription;
}

void Task::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool Task::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string Task::GetTaskTag() const
{
    return m_taskTag;
}

void Task::SetTaskTag(const string& _taskTag)
{
    m_taskTag = _taskTag;
    m_taskTagHasBeenSet = true;
}

bool Task::TaskTagHasBeenSet() const
{
    return m_taskTagHasBeenSet;
}

int64_t Task::GetTaskStatus() const
{
    return m_taskStatus;
}

void Task::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool Task::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

int64_t Task::GetTaskStatusType() const
{
    return m_taskStatusType;
}

void Task::SetTaskStatusType(const int64_t& _taskStatusType)
{
    m_taskStatusType = _taskStatusType;
    m_taskStatusTypeHasBeenSet = true;
}

bool Task::TaskStatusTypeHasBeenSet() const
{
    return m_taskStatusTypeHasBeenSet;
}

string Task::GetTaskProtectStrategy() const
{
    return m_taskProtectStrategy;
}

void Task::SetTaskProtectStrategy(const string& _taskProtectStrategy)
{
    m_taskProtectStrategy = _taskProtectStrategy;
    m_taskProtectStrategyHasBeenSet = true;
}

bool Task::TaskProtectStrategyHasBeenSet() const
{
    return m_taskProtectStrategyHasBeenSet;
}

string Task::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void Task::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool Task::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string Task::GetTaskUpdateTime() const
{
    return m_taskUpdateTime;
}

void Task::SetTaskUpdateTime(const string& _taskUpdateTime)
{
    m_taskUpdateTime = _taskUpdateTime;
    m_taskUpdateTimeHasBeenSet = true;
}

bool Task::TaskUpdateTimeHasBeenSet() const
{
    return m_taskUpdateTimeHasBeenSet;
}

vector<TaskGroup> Task::GetTaskGroups() const
{
    return m_taskGroups;
}

void Task::SetTaskGroups(const vector<TaskGroup>& _taskGroups)
{
    m_taskGroups = _taskGroups;
    m_taskGroupsHasBeenSet = true;
}

bool Task::TaskGroupsHasBeenSet() const
{
    return m_taskGroupsHasBeenSet;
}

string Task::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void Task::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool Task::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string Task::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void Task::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool Task::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

int64_t Task::GetTaskExpect() const
{
    return m_taskExpect;
}

void Task::SetTaskExpect(const int64_t& _taskExpect)
{
    m_taskExpect = _taskExpect;
    m_taskExpectHasBeenSet = true;
}

bool Task::TaskExpectHasBeenSet() const
{
    return m_taskExpectHasBeenSet;
}

string Task::GetTaskSummary() const
{
    return m_taskSummary;
}

void Task::SetTaskSummary(const string& _taskSummary)
{
    m_taskSummary = _taskSummary;
    m_taskSummaryHasBeenSet = true;
}

bool Task::TaskSummaryHasBeenSet() const
{
    return m_taskSummaryHasBeenSet;
}

int64_t Task::GetTaskMode() const
{
    return m_taskMode;
}

void Task::SetTaskMode(const int64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool Task::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

int64_t Task::GetTaskPauseDuration() const
{
    return m_taskPauseDuration;
}

void Task::SetTaskPauseDuration(const int64_t& _taskPauseDuration)
{
    m_taskPauseDuration = _taskPauseDuration;
    m_taskPauseDurationHasBeenSet = true;
}

bool Task::TaskPauseDurationHasBeenSet() const
{
    return m_taskPauseDurationHasBeenSet;
}

string Task::GetTaskOwnerUin() const
{
    return m_taskOwnerUin;
}

void Task::SetTaskOwnerUin(const string& _taskOwnerUin)
{
    m_taskOwnerUin = _taskOwnerUin;
    m_taskOwnerUinHasBeenSet = true;
}

bool Task::TaskOwnerUinHasBeenSet() const
{
    return m_taskOwnerUinHasBeenSet;
}

int64_t Task::GetTaskRegionId() const
{
    return m_taskRegionId;
}

void Task::SetTaskRegionId(const int64_t& _taskRegionId)
{
    m_taskRegionId = _taskRegionId;
    m_taskRegionIdHasBeenSet = true;
}

bool Task::TaskRegionIdHasBeenSet() const
{
    return m_taskRegionIdHasBeenSet;
}

vector<TaskMonitor> Task::GetTaskMonitors() const
{
    return m_taskMonitors;
}

void Task::SetTaskMonitors(const vector<TaskMonitor>& _taskMonitors)
{
    m_taskMonitors = _taskMonitors;
    m_taskMonitorsHasBeenSet = true;
}

bool Task::TaskMonitorsHasBeenSet() const
{
    return m_taskMonitorsHasBeenSet;
}

DescribePolicy Task::GetTaskPolicy() const
{
    return m_taskPolicy;
}

void Task::SetTaskPolicy(const DescribePolicy& _taskPolicy)
{
    m_taskPolicy = _taskPolicy;
    m_taskPolicyHasBeenSet = true;
}

bool Task::TaskPolicyHasBeenSet() const
{
    return m_taskPolicyHasBeenSet;
}

vector<TagWithDescribe> Task::GetTags() const
{
    return m_tags;
}

void Task::SetTags(const vector<TagWithDescribe>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Task::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

