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

#include <tencentcloud/monitor/v20230616/model/TriggerDigitalTwinTaskResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

TriggerDigitalTwinTaskResp::TriggerDigitalTwinTaskResp() :
    m_taskIDHasBeenSet(false)
{
}

CoreInternalOutcome TriggerDigitalTwinTaskResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerDigitalTwinTaskResp.TaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = value["TaskID"].GetInt64();
        m_taskIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerDigitalTwinTaskResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskID, allocator);
    }

}


int64_t TriggerDigitalTwinTaskResp::GetTaskID() const
{
    return m_taskID;
}

void TriggerDigitalTwinTaskResp::SetTaskID(const int64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool TriggerDigitalTwinTaskResp::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

