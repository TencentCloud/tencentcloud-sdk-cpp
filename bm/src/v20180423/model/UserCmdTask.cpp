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

#include <tencentcloud/bm/v20180423/model/UserCmdTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

UserCmdTask::UserCmdTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_cmdIdHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failureCountHasBeenSet(false),
    m_runBeginTimeHasBeenSet(false),
    m_runEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome UserCmdTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("CmdId") && !value["CmdId"].IsNull())
    {
        if (!value["CmdId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.CmdId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdId = string(value["CmdId"].GetString());
        m_cmdIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.SuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetUint64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailureCount") && !value["FailureCount"].IsNull())
    {
        if (!value["FailureCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.FailureCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failureCount = value["FailureCount"].GetUint64();
        m_failureCountHasBeenSet = true;
    }

    if (value.HasMember("RunBeginTime") && !value["RunBeginTime"].IsNull())
    {
        if (!value["RunBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.RunBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runBeginTime = string(value["RunBeginTime"].GetString());
        m_runBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("RunEndTime") && !value["RunEndTime"].IsNull())
    {
        if (!value["RunEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserCmdTask.RunEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runEndTime = string(value["RunEndTime"].GetString());
        m_runEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserCmdTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failureCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureCount, allocator);
    }

    if (m_runBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runEndTime.c_str(), allocator).Move(), allocator);
    }

}


string UserCmdTask::GetTaskId() const
{
    return m_taskId;
}

void UserCmdTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UserCmdTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t UserCmdTask::GetStatus() const
{
    return m_status;
}

void UserCmdTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserCmdTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UserCmdTask::GetAlias() const
{
    return m_alias;
}

void UserCmdTask::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool UserCmdTask::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string UserCmdTask::GetCmdId() const
{
    return m_cmdId;
}

void UserCmdTask::SetCmdId(const string& _cmdId)
{
    m_cmdId = _cmdId;
    m_cmdIdHasBeenSet = true;
}

bool UserCmdTask::CmdIdHasBeenSet() const
{
    return m_cmdIdHasBeenSet;
}

uint64_t UserCmdTask::GetInstanceCount() const
{
    return m_instanceCount;
}

void UserCmdTask::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool UserCmdTask::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t UserCmdTask::GetSuccessCount() const
{
    return m_successCount;
}

void UserCmdTask::SetSuccessCount(const uint64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool UserCmdTask::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

uint64_t UserCmdTask::GetFailureCount() const
{
    return m_failureCount;
}

void UserCmdTask::SetFailureCount(const uint64_t& _failureCount)
{
    m_failureCount = _failureCount;
    m_failureCountHasBeenSet = true;
}

bool UserCmdTask::FailureCountHasBeenSet() const
{
    return m_failureCountHasBeenSet;
}

string UserCmdTask::GetRunBeginTime() const
{
    return m_runBeginTime;
}

void UserCmdTask::SetRunBeginTime(const string& _runBeginTime)
{
    m_runBeginTime = _runBeginTime;
    m_runBeginTimeHasBeenSet = true;
}

bool UserCmdTask::RunBeginTimeHasBeenSet() const
{
    return m_runBeginTimeHasBeenSet;
}

string UserCmdTask::GetRunEndTime() const
{
    return m_runEndTime;
}

void UserCmdTask::SetRunEndTime(const string& _runEndTime)
{
    m_runEndTime = _runEndTime;
    m_runEndTimeHasBeenSet = true;
}

bool UserCmdTask::RunEndTimeHasBeenSet() const
{
    return m_runEndTimeHasBeenSet;
}

