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

#include <tencentcloud/wedata/v20250806/model/UpdateTaskBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateTaskBrief::UpdateTaskBrief() :
    m_taskBaseAttributeHasBeenSet(false),
    m_taskConfigurationHasBeenSet(false),
    m_taskSchedulerConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome UpdateTaskBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskBaseAttribute") && !value["TaskBaseAttribute"].IsNull())
    {
        if (!value["TaskBaseAttribute"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTaskBrief.TaskBaseAttribute` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskBaseAttribute.Deserialize(value["TaskBaseAttribute"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskBaseAttributeHasBeenSet = true;
    }

    if (value.HasMember("TaskConfiguration") && !value["TaskConfiguration"].IsNull())
    {
        if (!value["TaskConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTaskBrief.TaskConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskConfiguration.Deserialize(value["TaskConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TaskSchedulerConfiguration") && !value["TaskSchedulerConfiguration"].IsNull())
    {
        if (!value["TaskSchedulerConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTaskBrief.TaskSchedulerConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskSchedulerConfiguration.Deserialize(value["TaskSchedulerConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskSchedulerConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateTaskBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskBaseAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskBaseAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskBaseAttribute.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskSchedulerConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


UpdateTaskBaseAttribute UpdateTaskBrief::GetTaskBaseAttribute() const
{
    return m_taskBaseAttribute;
}

void UpdateTaskBrief::SetTaskBaseAttribute(const UpdateTaskBaseAttribute& _taskBaseAttribute)
{
    m_taskBaseAttribute = _taskBaseAttribute;
    m_taskBaseAttributeHasBeenSet = true;
}

bool UpdateTaskBrief::TaskBaseAttributeHasBeenSet() const
{
    return m_taskBaseAttributeHasBeenSet;
}

TaskConfiguration UpdateTaskBrief::GetTaskConfiguration() const
{
    return m_taskConfiguration;
}

void UpdateTaskBrief::SetTaskConfiguration(const TaskConfiguration& _taskConfiguration)
{
    m_taskConfiguration = _taskConfiguration;
    m_taskConfigurationHasBeenSet = true;
}

bool UpdateTaskBrief::TaskConfigurationHasBeenSet() const
{
    return m_taskConfigurationHasBeenSet;
}

TaskSchedulerConfiguration UpdateTaskBrief::GetTaskSchedulerConfiguration() const
{
    return m_taskSchedulerConfiguration;
}

void UpdateTaskBrief::SetTaskSchedulerConfiguration(const TaskSchedulerConfiguration& _taskSchedulerConfiguration)
{
    m_taskSchedulerConfiguration = _taskSchedulerConfiguration;
    m_taskSchedulerConfigurationHasBeenSet = true;
}

bool UpdateTaskBrief::TaskSchedulerConfigurationHasBeenSet() const
{
    return m_taskSchedulerConfigurationHasBeenSet;
}

