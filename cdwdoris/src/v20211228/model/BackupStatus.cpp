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

#include <tencentcloud/cdwdoris/v20211228/model/BackupStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

BackupStatus::BackupStatus() :
    m_jobIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_backupObjectsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_snapshotFinishedTimeHasBeenSet(false),
    m_uploadFinishedTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_unfinishedTasksHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_taskErrMsgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_backupJobIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome BackupStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("BackupObjects") && !value["BackupObjects"].IsNull())
    {
        if (!value["BackupObjects"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.BackupObjects` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupObjects = string(value["BackupObjects"].GetString());
        m_backupObjectsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotFinishedTime") && !value["SnapshotFinishedTime"].IsNull())
    {
        if (!value["SnapshotFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.SnapshotFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFinishedTime = string(value["SnapshotFinishedTime"].GetString());
        m_snapshotFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("UploadFinishedTime") && !value["UploadFinishedTime"].IsNull())
    {
        if (!value["UploadFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.UploadFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadFinishedTime = string(value["UploadFinishedTime"].GetString());
        m_uploadFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("UnfinishedTasks") && !value["UnfinishedTasks"].IsNull())
    {
        if (!value["UnfinishedTasks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.UnfinishedTasks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unfinishedTasks = string(value["UnfinishedTasks"].GetString());
        m_unfinishedTasksHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(value["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("TaskErrMsg") && !value["TaskErrMsg"].IsNull())
    {
        if (!value["TaskErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.TaskErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskErrMsg = string(value["TaskErrMsg"].GetString());
        m_taskErrMsgHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("BackupJobId") && !value["BackupJobId"].IsNull())
    {
        if (!value["BackupJobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.BackupJobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupJobId = value["BackupJobId"].GetInt64();
        m_backupJobIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_backupObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupObjects.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFinishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotFinishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadFinishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadFinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadFinishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_unfinishedTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnfinishedTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unfinishedTasks.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progress.c_str(), allocator).Move(), allocator);
    }

    if (m_taskErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_backupJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupJobId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


int64_t BackupStatus::GetJobId() const
{
    return m_jobId;
}

void BackupStatus::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool BackupStatus::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string BackupStatus::GetSnapshotName() const
{
    return m_snapshotName;
}

void BackupStatus::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool BackupStatus::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string BackupStatus::GetDbName() const
{
    return m_dbName;
}

void BackupStatus::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool BackupStatus::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string BackupStatus::GetState() const
{
    return m_state;
}

void BackupStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool BackupStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string BackupStatus::GetBackupObjects() const
{
    return m_backupObjects;
}

void BackupStatus::SetBackupObjects(const string& _backupObjects)
{
    m_backupObjects = _backupObjects;
    m_backupObjectsHasBeenSet = true;
}

bool BackupStatus::BackupObjectsHasBeenSet() const
{
    return m_backupObjectsHasBeenSet;
}

string BackupStatus::GetCreateTime() const
{
    return m_createTime;
}

void BackupStatus::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BackupStatus::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BackupStatus::GetSnapshotFinishedTime() const
{
    return m_snapshotFinishedTime;
}

void BackupStatus::SetSnapshotFinishedTime(const string& _snapshotFinishedTime)
{
    m_snapshotFinishedTime = _snapshotFinishedTime;
    m_snapshotFinishedTimeHasBeenSet = true;
}

bool BackupStatus::SnapshotFinishedTimeHasBeenSet() const
{
    return m_snapshotFinishedTimeHasBeenSet;
}

string BackupStatus::GetUploadFinishedTime() const
{
    return m_uploadFinishedTime;
}

void BackupStatus::SetUploadFinishedTime(const string& _uploadFinishedTime)
{
    m_uploadFinishedTime = _uploadFinishedTime;
    m_uploadFinishedTimeHasBeenSet = true;
}

bool BackupStatus::UploadFinishedTimeHasBeenSet() const
{
    return m_uploadFinishedTimeHasBeenSet;
}

string BackupStatus::GetFinishedTime() const
{
    return m_finishedTime;
}

void BackupStatus::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool BackupStatus::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

string BackupStatus::GetUnfinishedTasks() const
{
    return m_unfinishedTasks;
}

void BackupStatus::SetUnfinishedTasks(const string& _unfinishedTasks)
{
    m_unfinishedTasks = _unfinishedTasks;
    m_unfinishedTasksHasBeenSet = true;
}

bool BackupStatus::UnfinishedTasksHasBeenSet() const
{
    return m_unfinishedTasksHasBeenSet;
}

string BackupStatus::GetProgress() const
{
    return m_progress;
}

void BackupStatus::SetProgress(const string& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool BackupStatus::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string BackupStatus::GetTaskErrMsg() const
{
    return m_taskErrMsg;
}

void BackupStatus::SetTaskErrMsg(const string& _taskErrMsg)
{
    m_taskErrMsg = _taskErrMsg;
    m_taskErrMsgHasBeenSet = true;
}

bool BackupStatus::TaskErrMsgHasBeenSet() const
{
    return m_taskErrMsgHasBeenSet;
}

string BackupStatus::GetStatus() const
{
    return m_status;
}

void BackupStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BackupStatus::GetTimeout() const
{
    return m_timeout;
}

void BackupStatus::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool BackupStatus::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t BackupStatus::GetBackupJobId() const
{
    return m_backupJobId;
}

void BackupStatus::SetBackupJobId(const int64_t& _backupJobId)
{
    m_backupJobId = _backupJobId;
    m_backupJobIdHasBeenSet = true;
}

bool BackupStatus::BackupJobIdHasBeenSet() const
{
    return m_backupJobIdHasBeenSet;
}

int64_t BackupStatus::GetTaskId() const
{
    return m_taskId;
}

void BackupStatus::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BackupStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

