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

#include <tencentcloud/cfg/v20210820/model/TaskGroupActionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupActionConfig::TaskGroupActionConfig() :
    m_taskGroupActionOrderHasBeenSet(false),
    m_taskGroupActionGeneralConfigurationHasBeenSet(false),
    m_taskGroupActionCustomConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupActionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupActionOrder") && !value["TaskGroupActionOrder"].IsNull())
    {
        if (!value["TaskGroupActionOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupActionConfig.TaskGroupActionOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionOrder = value["TaskGroupActionOrder"].GetUint64();
        m_taskGroupActionOrderHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionGeneralConfiguration") && !value["TaskGroupActionGeneralConfiguration"].IsNull())
    {
        if (!value["TaskGroupActionGeneralConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupActionConfig.TaskGroupActionGeneralConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionGeneralConfiguration = string(value["TaskGroupActionGeneralConfiguration"].GetString());
        m_taskGroupActionGeneralConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionCustomConfiguration") && !value["TaskGroupActionCustomConfiguration"].IsNull())
    {
        if (!value["TaskGroupActionCustomConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupActionConfig.TaskGroupActionCustomConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionCustomConfiguration = string(value["TaskGroupActionCustomConfiguration"].GetString());
        m_taskGroupActionCustomConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupActionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupActionOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionOrder, allocator);
    }

    if (m_taskGroupActionGeneralConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionGeneralConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionGeneralConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionCustomConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionCustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionCustomConfiguration.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskGroupActionConfig::GetTaskGroupActionOrder() const
{
    return m_taskGroupActionOrder;
}

void TaskGroupActionConfig::SetTaskGroupActionOrder(const uint64_t& _taskGroupActionOrder)
{
    m_taskGroupActionOrder = _taskGroupActionOrder;
    m_taskGroupActionOrderHasBeenSet = true;
}

bool TaskGroupActionConfig::TaskGroupActionOrderHasBeenSet() const
{
    return m_taskGroupActionOrderHasBeenSet;
}

string TaskGroupActionConfig::GetTaskGroupActionGeneralConfiguration() const
{
    return m_taskGroupActionGeneralConfiguration;
}

void TaskGroupActionConfig::SetTaskGroupActionGeneralConfiguration(const string& _taskGroupActionGeneralConfiguration)
{
    m_taskGroupActionGeneralConfiguration = _taskGroupActionGeneralConfiguration;
    m_taskGroupActionGeneralConfigurationHasBeenSet = true;
}

bool TaskGroupActionConfig::TaskGroupActionGeneralConfigurationHasBeenSet() const
{
    return m_taskGroupActionGeneralConfigurationHasBeenSet;
}

string TaskGroupActionConfig::GetTaskGroupActionCustomConfiguration() const
{
    return m_taskGroupActionCustomConfiguration;
}

void TaskGroupActionConfig::SetTaskGroupActionCustomConfiguration(const string& _taskGroupActionCustomConfiguration)
{
    m_taskGroupActionCustomConfiguration = _taskGroupActionCustomConfiguration;
    m_taskGroupActionCustomConfigurationHasBeenSet = true;
}

bool TaskGroupActionConfig::TaskGroupActionCustomConfigurationHasBeenSet() const
{
    return m_taskGroupActionCustomConfigurationHasBeenSet;
}

