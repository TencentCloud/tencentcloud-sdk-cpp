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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceTask::AndroidInstanceTask() :
    m_taskIdHasBeenSet(false),
    m_androidInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTask.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceTask::GetTaskId() const
{
    return m_taskId;
}

void AndroidInstanceTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AndroidInstanceTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AndroidInstanceTask::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstanceTask::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstanceTask::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

