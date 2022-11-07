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

#include <tencentcloud/wedata/v20210820/model/TaskLockStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskLockStatus::TaskLockStatus() :
    m_taskIdHasBeenSet(false),
    m_lockerHasBeenSet(false),
    m_isLockerHasBeenSet(false),
    m_isRobHasBeenSet(false)
{
}

CoreInternalOutcome TaskLockStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLockStatus.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Locker") && !value["Locker"].IsNull())
    {
        if (!value["Locker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLockStatus.Locker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locker = string(value["Locker"].GetString());
        m_lockerHasBeenSet = true;
    }

    if (value.HasMember("IsLocker") && !value["IsLocker"].IsNull())
    {
        if (!value["IsLocker"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLockStatus.IsLocker` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isLocker = value["IsLocker"].GetInt64();
        m_isLockerHasBeenSet = true;
    }

    if (value.HasMember("IsRob") && !value["IsRob"].IsNull())
    {
        if (!value["IsRob"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLockStatus.IsRob` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRob = value["IsRob"].GetInt64();
        m_isRobHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLockStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_lockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locker.c_str(), allocator).Move(), allocator);
    }

    if (m_isLockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLocker, allocator);
    }

    if (m_isRobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRob, allocator);
    }

}


string TaskLockStatus::GetTaskId() const
{
    return m_taskId;
}

void TaskLockStatus::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskLockStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskLockStatus::GetLocker() const
{
    return m_locker;
}

void TaskLockStatus::SetLocker(const string& _locker)
{
    m_locker = _locker;
    m_lockerHasBeenSet = true;
}

bool TaskLockStatus::LockerHasBeenSet() const
{
    return m_lockerHasBeenSet;
}

int64_t TaskLockStatus::GetIsLocker() const
{
    return m_isLocker;
}

void TaskLockStatus::SetIsLocker(const int64_t& _isLocker)
{
    m_isLocker = _isLocker;
    m_isLockerHasBeenSet = true;
}

bool TaskLockStatus::IsLockerHasBeenSet() const
{
    return m_isLockerHasBeenSet;
}

int64_t TaskLockStatus::GetIsRob() const
{
    return m_isRob;
}

void TaskLockStatus::SetIsRob(const int64_t& _isRob)
{
    m_isRob = _isRob;
    m_isRobHasBeenSet = true;
}

bool TaskLockStatus::IsRobHasBeenSet() const
{
    return m_isRobHasBeenSet;
}

