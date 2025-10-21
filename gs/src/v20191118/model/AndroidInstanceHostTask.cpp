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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceHostTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceHostTask::AndroidInstanceHostTask() :
    m_taskIdHasBeenSet(false),
    m_hostSerialNumberHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceHostTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceHostTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("HostSerialNumber") && !value["HostSerialNumber"].IsNull())
    {
        if (!value["HostSerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceHostTask.HostSerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostSerialNumber = string(value["HostSerialNumber"].GetString());
        m_hostSerialNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceHostTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostSerialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostSerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostSerialNumber.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceHostTask::GetTaskId() const
{
    return m_taskId;
}

void AndroidInstanceHostTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AndroidInstanceHostTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AndroidInstanceHostTask::GetHostSerialNumber() const
{
    return m_hostSerialNumber;
}

void AndroidInstanceHostTask::SetHostSerialNumber(const string& _hostSerialNumber)
{
    m_hostSerialNumber = _hostSerialNumber;
    m_hostSerialNumberHasBeenSet = true;
}

bool AndroidInstanceHostTask::HostSerialNumberHasBeenSet() const
{
    return m_hostSerialNumberHasBeenSet;
}

