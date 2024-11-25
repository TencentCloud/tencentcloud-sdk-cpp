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

#include <tencentcloud/cfg/v20210820/model/TaskGroupForAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupForAction::TaskGroupForAction() :
    m_taskActionIdHasBeenSet(false),
    m_taskActionGeneralConfigurationHasBeenSet(false),
    m_taskActionCustomConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupForAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskActionId") && !value["TaskActionId"].IsNull())
    {
        if (!value["TaskActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupForAction.TaskActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskActionId = value["TaskActionId"].GetInt64();
        m_taskActionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskActionGeneralConfiguration") && !value["TaskActionGeneralConfiguration"].IsNull())
    {
        if (!value["TaskActionGeneralConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupForAction.TaskActionGeneralConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskActionGeneralConfiguration = string(value["TaskActionGeneralConfiguration"].GetString());
        m_taskActionGeneralConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TaskActionCustomConfiguration") && !value["TaskActionCustomConfiguration"].IsNull())
    {
        if (!value["TaskActionCustomConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupForAction.TaskActionCustomConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskActionCustomConfiguration = string(value["TaskActionCustomConfiguration"].GetString());
        m_taskActionCustomConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupForAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskActionId, allocator);
    }

    if (m_taskActionGeneralConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionGeneralConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskActionGeneralConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionCustomConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionCustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskActionCustomConfiguration.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskGroupForAction::GetTaskActionId() const
{
    return m_taskActionId;
}

void TaskGroupForAction::SetTaskActionId(const int64_t& _taskActionId)
{
    m_taskActionId = _taskActionId;
    m_taskActionIdHasBeenSet = true;
}

bool TaskGroupForAction::TaskActionIdHasBeenSet() const
{
    return m_taskActionIdHasBeenSet;
}

string TaskGroupForAction::GetTaskActionGeneralConfiguration() const
{
    return m_taskActionGeneralConfiguration;
}

void TaskGroupForAction::SetTaskActionGeneralConfiguration(const string& _taskActionGeneralConfiguration)
{
    m_taskActionGeneralConfiguration = _taskActionGeneralConfiguration;
    m_taskActionGeneralConfigurationHasBeenSet = true;
}

bool TaskGroupForAction::TaskActionGeneralConfigurationHasBeenSet() const
{
    return m_taskActionGeneralConfigurationHasBeenSet;
}

string TaskGroupForAction::GetTaskActionCustomConfiguration() const
{
    return m_taskActionCustomConfiguration;
}

void TaskGroupForAction::SetTaskActionCustomConfiguration(const string& _taskActionCustomConfiguration)
{
    m_taskActionCustomConfiguration = _taskActionCustomConfiguration;
    m_taskActionCustomConfigurationHasBeenSet = true;
}

bool TaskGroupForAction::TaskActionCustomConfigurationHasBeenSet() const
{
    return m_taskActionCustomConfigurationHasBeenSet;
}

