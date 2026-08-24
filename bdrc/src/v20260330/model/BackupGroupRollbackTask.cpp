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

#include <tencentcloud/bdrc/v20260330/model/BackupGroupRollbackTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupGroupRollbackTask::BackupGroupRollbackTask() :
    m_taskIdHasBeenSet(false),
    m_sourceInstanceIdHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false),
    m_backupGroupIdHasBeenSet(false),
    m_rollbackTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_backupGroupNameHasBeenSet(false),
    m_failReasonHasBeenSet(false)
{
}

CoreInternalOutcome BackupGroupRollbackTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SourceInstanceId") && !value["SourceInstanceId"].IsNull())
    {
        if (!value["SourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.SourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInstanceId = string(value["SourceInstanceId"].GetString());
        m_sourceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetInstanceId") && !value["TargetInstanceId"].IsNull())
    {
        if (!value["TargetInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.TargetInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetInstanceId = string(value["TargetInstanceId"].GetString());
        m_targetInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("BackupGroupId") && !value["BackupGroupId"].IsNull())
    {
        if (!value["BackupGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.BackupGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupGroupId = string(value["BackupGroupId"].GetString());
        m_backupGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RollbackType") && !value["RollbackType"].IsNull())
    {
        if (!value["RollbackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.RollbackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackType = string(value["RollbackType"].GetString());
        m_rollbackTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BackupGroupName") && !value["BackupGroupName"].IsNull())
    {
        if (!value["BackupGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.BackupGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupGroupName = string(value["BackupGroupName"].GetString());
        m_backupGroupNameHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupGroupRollbackTask.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupGroupRollbackTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollbackType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_backupGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

}


string BackupGroupRollbackTask::GetTaskId() const
{
    return m_taskId;
}

void BackupGroupRollbackTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BackupGroupRollbackTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BackupGroupRollbackTask::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void BackupGroupRollbackTask::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool BackupGroupRollbackTask::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

string BackupGroupRollbackTask::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void BackupGroupRollbackTask::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool BackupGroupRollbackTask::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

string BackupGroupRollbackTask::GetBackupGroupId() const
{
    return m_backupGroupId;
}

void BackupGroupRollbackTask::SetBackupGroupId(const string& _backupGroupId)
{
    m_backupGroupId = _backupGroupId;
    m_backupGroupIdHasBeenSet = true;
}

bool BackupGroupRollbackTask::BackupGroupIdHasBeenSet() const
{
    return m_backupGroupIdHasBeenSet;
}

string BackupGroupRollbackTask::GetRollbackType() const
{
    return m_rollbackType;
}

void BackupGroupRollbackTask::SetRollbackType(const string& _rollbackType)
{
    m_rollbackType = _rollbackType;
    m_rollbackTypeHasBeenSet = true;
}

bool BackupGroupRollbackTask::RollbackTypeHasBeenSet() const
{
    return m_rollbackTypeHasBeenSet;
}

string BackupGroupRollbackTask::GetStatus() const
{
    return m_status;
}

void BackupGroupRollbackTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupGroupRollbackTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BackupGroupRollbackTask::GetPercent() const
{
    return m_percent;
}

void BackupGroupRollbackTask::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool BackupGroupRollbackTask::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string BackupGroupRollbackTask::GetStartTime() const
{
    return m_startTime;
}

void BackupGroupRollbackTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupGroupRollbackTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupGroupRollbackTask::GetEndTime() const
{
    return m_endTime;
}

void BackupGroupRollbackTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BackupGroupRollbackTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t BackupGroupRollbackTask::GetAppId() const
{
    return m_appId;
}

void BackupGroupRollbackTask::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupGroupRollbackTask::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BackupGroupRollbackTask::GetBackupGroupName() const
{
    return m_backupGroupName;
}

void BackupGroupRollbackTask::SetBackupGroupName(const string& _backupGroupName)
{
    m_backupGroupName = _backupGroupName;
    m_backupGroupNameHasBeenSet = true;
}

bool BackupGroupRollbackTask::BackupGroupNameHasBeenSet() const
{
    return m_backupGroupNameHasBeenSet;
}

string BackupGroupRollbackTask::GetFailReason() const
{
    return m_failReason;
}

void BackupGroupRollbackTask::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool BackupGroupRollbackTask::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

