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

#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerAdvancedConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowTriggerAdvancedConfiguration::WorkflowTriggerAdvancedConfiguration() :
    m_taskRetryModeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTriggerAdvancedConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskRetryMode") && !value["TaskRetryMode"].IsNull())
    {
        if (!value["TaskRetryMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerAdvancedConfiguration.TaskRetryMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskRetryMode = string(value["TaskRetryMode"].GetString());
        m_taskRetryModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTriggerAdvancedConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskRetryModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRetryMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskRetryMode.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowTriggerAdvancedConfiguration::GetTaskRetryMode() const
{
    return m_taskRetryMode;
}

void WorkflowTriggerAdvancedConfiguration::SetTaskRetryMode(const string& _taskRetryMode)
{
    m_taskRetryMode = _taskRetryMode;
    m_taskRetryModeHasBeenSet = true;
}

bool WorkflowTriggerAdvancedConfiguration::TaskRetryModeHasBeenSet() const
{
    return m_taskRetryModeHasBeenSet;
}

