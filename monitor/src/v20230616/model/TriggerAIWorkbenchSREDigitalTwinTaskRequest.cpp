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

#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchSREDigitalTwinTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

TriggerAIWorkbenchSREDigitalTwinTaskRequest::TriggerAIWorkbenchSREDigitalTwinTaskRequest() :
    m_taskIDHasBeenSet(false)
{
}

string TriggerAIWorkbenchSREDigitalTwinTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t TriggerAIWorkbenchSREDigitalTwinTaskRequest::GetTaskID() const
{
    return m_taskID;
}

void TriggerAIWorkbenchSREDigitalTwinTaskRequest::SetTaskID(const int64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool TriggerAIWorkbenchSREDigitalTwinTaskRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}


