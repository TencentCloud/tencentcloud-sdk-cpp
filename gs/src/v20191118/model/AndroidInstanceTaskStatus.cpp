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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceTaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceTaskStatus::AndroidInstanceTaskStatus() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_androidInstanceIdHasBeenSet(false),
    m_taskResultHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceTaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskResult") && !value["TaskResult"].IsNull())
    {
        if (!value["TaskResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.TaskResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskResult = string(value["TaskResult"].GetString());
        m_taskResultHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CompleteTime") && !value["CompleteTime"].IsNull())
    {
        if (!value["CompleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceTaskStatus.CompleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_completeTime = string(value["CompleteTime"].GetString());
        m_completeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceTaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskResult.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_completeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_completeTime.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceTaskStatus::GetTaskId() const
{
    return m_taskId;
}

void AndroidInstanceTaskStatus::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AndroidInstanceTaskStatus::GetStatus() const
{
    return m_status;
}

void AndroidInstanceTaskStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AndroidInstanceTaskStatus::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstanceTaskStatus::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string AndroidInstanceTaskStatus::GetTaskResult() const
{
    return m_taskResult;
}

void AndroidInstanceTaskStatus::SetTaskResult(const string& _taskResult)
{
    m_taskResult = _taskResult;
    m_taskResultHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::TaskResultHasBeenSet() const
{
    return m_taskResultHasBeenSet;
}

string AndroidInstanceTaskStatus::GetTaskType() const
{
    return m_taskType;
}

void AndroidInstanceTaskStatus::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string AndroidInstanceTaskStatus::GetCreateTime() const
{
    return m_createTime;
}

void AndroidInstanceTaskStatus::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AndroidInstanceTaskStatus::GetCompleteTime() const
{
    return m_completeTime;
}

void AndroidInstanceTaskStatus::SetCompleteTime(const string& _completeTime)
{
    m_completeTime = _completeTime;
    m_completeTimeHasBeenSet = true;
}

bool AndroidInstanceTaskStatus::CompleteTimeHasBeenSet() const
{
    return m_completeTimeHasBeenSet;
}

