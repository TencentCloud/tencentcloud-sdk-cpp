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

#include <tencentcloud/batch/v20170312/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Job::Job() :
    m_tasksHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_dependencesHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_taskExecutionDependOnHasBeenSet(false),
    m_stateIfCreateCvmFailedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_notificationTargetHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Task item;
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

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobDescription") && !value["JobDescription"].IsNull())
    {
        if (!value["JobDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDescription = string(value["JobDescription"].GetString());
        m_jobDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Dependences") && !value["Dependences"].IsNull())
    {
        if (!value["Dependences"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Dependences` is not array type"));

        const rapidjson::Value &tmpValue = value["Dependences"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Dependence item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependences.push_back(item);
        }
        m_dependencesHasBeenSet = true;
    }

    if (value.HasMember("Notifications") && !value["Notifications"].IsNull())
    {
        if (!value["Notifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Notifications` is not array type"));

        const rapidjson::Value &tmpValue = value["Notifications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Notification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notifications.push_back(item);
        }
        m_notificationsHasBeenSet = true;
    }

    if (value.HasMember("TaskExecutionDependOn") && !value["TaskExecutionDependOn"].IsNull())
    {
        if (!value["TaskExecutionDependOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.TaskExecutionDependOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskExecutionDependOn = string(value["TaskExecutionDependOn"].GetString());
        m_taskExecutionDependOnHasBeenSet = true;
    }

    if (value.HasMember("StateIfCreateCvmFailed") && !value["StateIfCreateCvmFailed"].IsNull())
    {
        if (!value["StateIfCreateCvmFailed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.StateIfCreateCvmFailed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateIfCreateCvmFailed = string(value["StateIfCreateCvmFailed"].GetString());
        m_stateIfCreateCvmFailedHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("NotificationTarget") && !value["NotificationTarget"].IsNull())
    {
        if (!value["NotificationTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.NotificationTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationTarget = string(value["NotificationTarget"].GetString());
        m_notificationTargetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_dependencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dependences";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependences.begin(); itr != m_dependences.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifications.begin(); itr != m_notifications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskExecutionDependOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExecutionDependOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskExecutionDependOn.c_str(), allocator).Move(), allocator);
    }

    if (m_stateIfCreateCvmFailedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateIfCreateCvmFailed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateIfCreateCvmFailed.c_str(), allocator).Move(), allocator);
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

    if (m_notificationTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notificationTarget.c_str(), allocator).Move(), allocator);
    }

}


vector<Task> Job::GetTasks() const
{
    return m_tasks;
}

void Job::SetTasks(const vector<Task>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool Job::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string Job::GetJobName() const
{
    return m_jobName;
}

void Job::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool Job::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string Job::GetJobDescription() const
{
    return m_jobDescription;
}

void Job::SetJobDescription(const string& _jobDescription)
{
    m_jobDescription = _jobDescription;
    m_jobDescriptionHasBeenSet = true;
}

bool Job::JobDescriptionHasBeenSet() const
{
    return m_jobDescriptionHasBeenSet;
}

uint64_t Job::GetPriority() const
{
    return m_priority;
}

void Job::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool Job::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Dependence> Job::GetDependences() const
{
    return m_dependences;
}

void Job::SetDependences(const vector<Dependence>& _dependences)
{
    m_dependences = _dependences;
    m_dependencesHasBeenSet = true;
}

bool Job::DependencesHasBeenSet() const
{
    return m_dependencesHasBeenSet;
}

vector<Notification> Job::GetNotifications() const
{
    return m_notifications;
}

void Job::SetNotifications(const vector<Notification>& _notifications)
{
    m_notifications = _notifications;
    m_notificationsHasBeenSet = true;
}

bool Job::NotificationsHasBeenSet() const
{
    return m_notificationsHasBeenSet;
}

string Job::GetTaskExecutionDependOn() const
{
    return m_taskExecutionDependOn;
}

void Job::SetTaskExecutionDependOn(const string& _taskExecutionDependOn)
{
    m_taskExecutionDependOn = _taskExecutionDependOn;
    m_taskExecutionDependOnHasBeenSet = true;
}

bool Job::TaskExecutionDependOnHasBeenSet() const
{
    return m_taskExecutionDependOnHasBeenSet;
}

string Job::GetStateIfCreateCvmFailed() const
{
    return m_stateIfCreateCvmFailed;
}

void Job::SetStateIfCreateCvmFailed(const string& _stateIfCreateCvmFailed)
{
    m_stateIfCreateCvmFailed = _stateIfCreateCvmFailed;
    m_stateIfCreateCvmFailedHasBeenSet = true;
}

bool Job::StateIfCreateCvmFailedHasBeenSet() const
{
    return m_stateIfCreateCvmFailedHasBeenSet;
}

vector<Tag> Job::GetTags() const
{
    return m_tags;
}

void Job::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Job::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Job::GetNotificationTarget() const
{
    return m_notificationTarget;
}

void Job::SetNotificationTarget(const string& _notificationTarget)
{
    m_notificationTarget = _notificationTarget;
    m_notificationTargetHasBeenSet = true;
}

bool Job::NotificationTargetHasBeenSet() const
{
    return m_notificationTargetHasBeenSet;
}

