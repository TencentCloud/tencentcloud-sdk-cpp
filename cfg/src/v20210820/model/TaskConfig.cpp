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

#include <tencentcloud/cfg/v20210820/model/TaskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskConfig::TaskConfig() :
    m_taskGroupsConfigHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_taskPauseDurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_policyDealTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupsConfig") && !value["TaskGroupsConfig"].IsNull())
    {
        if (!value["TaskGroupsConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskConfig.TaskGroupsConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupsConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroupConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroupsConfig.push_back(item);
        }
        m_taskGroupsConfigHasBeenSet = true;
    }

    if (value.HasMember("TaskTitle") && !value["TaskTitle"].IsNull())
    {
        if (!value["TaskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskConfig.TaskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTitle = string(value["TaskTitle"].GetString());
        m_taskTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskConfig.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskMode") && !value["TaskMode"].IsNull())
    {
        if (!value["TaskMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskConfig.TaskMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMode = value["TaskMode"].GetUint64();
        m_taskModeHasBeenSet = true;
    }

    if (value.HasMember("TaskPauseDuration") && !value["TaskPauseDuration"].IsNull())
    {
        if (!value["TaskPauseDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskConfig.TaskPauseDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPauseDuration = value["TaskPauseDuration"].GetUint64();
        m_taskPauseDurationHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskConfig.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagWithCreate item;
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

    if (value.HasMember("PolicyDealType") && !value["PolicyDealType"].IsNull())
    {
        if (!value["PolicyDealType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskConfig.PolicyDealType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyDealType = value["PolicyDealType"].GetInt64();
        m_policyDealTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroupsConfig.begin(); itr != m_taskGroupsConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_policyDealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyDealType, allocator);
    }

}


vector<TaskGroupConfig> TaskConfig::GetTaskGroupsConfig() const
{
    return m_taskGroupsConfig;
}

void TaskConfig::SetTaskGroupsConfig(const vector<TaskGroupConfig>& _taskGroupsConfig)
{
    m_taskGroupsConfig = _taskGroupsConfig;
    m_taskGroupsConfigHasBeenSet = true;
}

bool TaskConfig::TaskGroupsConfigHasBeenSet() const
{
    return m_taskGroupsConfigHasBeenSet;
}

string TaskConfig::GetTaskTitle() const
{
    return m_taskTitle;
}

void TaskConfig::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool TaskConfig::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string TaskConfig::GetTaskDescription() const
{
    return m_taskDescription;
}

void TaskConfig::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool TaskConfig::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

uint64_t TaskConfig::GetTaskMode() const
{
    return m_taskMode;
}

void TaskConfig::SetTaskMode(const uint64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool TaskConfig::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

uint64_t TaskConfig::GetTaskPauseDuration() const
{
    return m_taskPauseDuration;
}

void TaskConfig::SetTaskPauseDuration(const uint64_t& _taskPauseDuration)
{
    m_taskPauseDuration = _taskPauseDuration;
    m_taskPauseDurationHasBeenSet = true;
}

bool TaskConfig::TaskPauseDurationHasBeenSet() const
{
    return m_taskPauseDurationHasBeenSet;
}

vector<TagWithCreate> TaskConfig::GetTags() const
{
    return m_tags;
}

void TaskConfig::SetTags(const vector<TagWithCreate>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TaskConfig::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t TaskConfig::GetPolicyDealType() const
{
    return m_policyDealType;
}

void TaskConfig::SetPolicyDealType(const int64_t& _policyDealType)
{
    m_policyDealType = _policyDealType;
    m_policyDealTypeHasBeenSet = true;
}

bool TaskConfig::PolicyDealTypeHasBeenSet() const
{
    return m_policyDealTypeHasBeenSet;
}

