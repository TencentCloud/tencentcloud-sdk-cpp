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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmPolicyTriggerTask::AlarmPolicyTriggerTask() :
    m_typeHasBeenSet(false),
    m_taskConfigHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyTriggerTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyTriggerTask.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TaskConfig") && !value["TaskConfig"].IsNull())
    {
        if (!value["TaskConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyTriggerTask.TaskConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskConfig = string(value["TaskConfig"].GetString());
        m_taskConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyTriggerTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_taskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskConfig.c_str(), allocator).Move(), allocator);
    }

}


string AlarmPolicyTriggerTask::GetType() const
{
    return m_type;
}

void AlarmPolicyTriggerTask::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmPolicyTriggerTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmPolicyTriggerTask::GetTaskConfig() const
{
    return m_taskConfig;
}

void AlarmPolicyTriggerTask::SetTaskConfig(const string& _taskConfig)
{
    m_taskConfig = _taskConfig;
    m_taskConfigHasBeenSet = true;
}

bool AlarmPolicyTriggerTask::TaskConfigHasBeenSet() const
{
    return m_taskConfigHasBeenSet;
}

