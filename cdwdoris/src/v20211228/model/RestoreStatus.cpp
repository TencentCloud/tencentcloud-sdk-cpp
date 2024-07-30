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

#include <tencentcloud/cdwdoris/v20211228/model/RestoreStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

RestoreStatus::RestoreStatus() :
    m_jobIdHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_allowLoadHasBeenSet(false),
    m_replicationNumHasBeenSet(false),
    m_replicaAllocationHasBeenSet(false),
    m_restoreObjectsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_metaPreparedTimeHasBeenSet(false),
    m_snapshotFinishedTimeHasBeenSet(false),
    m_downloadFinishedTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_unfinishedTasksHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_taskErrMsgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_reserveReplicaHasBeenSet(false),
    m_reserveDynamicPartitionEnableHasBeenSet(false),
    m_backupJobIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome RestoreStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.JobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = value["JobId"].GetInt64();
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AllowLoad") && !value["AllowLoad"].IsNull())
    {
        if (!value["AllowLoad"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.AllowLoad` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowLoad = value["AllowLoad"].GetBool();
        m_allowLoadHasBeenSet = true;
    }

    if (value.HasMember("ReplicationNum") && !value["ReplicationNum"].IsNull())
    {
        if (!value["ReplicationNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.ReplicationNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationNum = string(value["ReplicationNum"].GetString());
        m_replicationNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaAllocation") && !value["ReplicaAllocation"].IsNull())
    {
        if (!value["ReplicaAllocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.ReplicaAllocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaAllocation = string(value["ReplicaAllocation"].GetString());
        m_replicaAllocationHasBeenSet = true;
    }

    if (value.HasMember("RestoreObjects") && !value["RestoreObjects"].IsNull())
    {
        if (!value["RestoreObjects"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.RestoreObjects` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreObjects = string(value["RestoreObjects"].GetString());
        m_restoreObjectsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MetaPreparedTime") && !value["MetaPreparedTime"].IsNull())
    {
        if (!value["MetaPreparedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.MetaPreparedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaPreparedTime = string(value["MetaPreparedTime"].GetString());
        m_metaPreparedTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotFinishedTime") && !value["SnapshotFinishedTime"].IsNull())
    {
        if (!value["SnapshotFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.SnapshotFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFinishedTime = string(value["SnapshotFinishedTime"].GetString());
        m_snapshotFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadFinishedTime") && !value["DownloadFinishedTime"].IsNull())
    {
        if (!value["DownloadFinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.DownloadFinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadFinishedTime = string(value["DownloadFinishedTime"].GetString());
        m_downloadFinishedTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("UnfinishedTasks") && !value["UnfinishedTasks"].IsNull())
    {
        if (!value["UnfinishedTasks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.UnfinishedTasks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unfinishedTasks = string(value["UnfinishedTasks"].GetString());
        m_unfinishedTasksHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.Progress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progress = string(value["Progress"].GetString());
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("TaskErrMsg") && !value["TaskErrMsg"].IsNull())
    {
        if (!value["TaskErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.TaskErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskErrMsg = string(value["TaskErrMsg"].GetString());
        m_taskErrMsgHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("ReserveReplica") && !value["ReserveReplica"].IsNull())
    {
        if (!value["ReserveReplica"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.ReserveReplica` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reserveReplica = value["ReserveReplica"].GetBool();
        m_reserveReplicaHasBeenSet = true;
    }

    if (value.HasMember("ReserveDynamicPartitionEnable") && !value["ReserveDynamicPartitionEnable"].IsNull())
    {
        if (!value["ReserveDynamicPartitionEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.ReserveDynamicPartitionEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDynamicPartitionEnable = value["ReserveDynamicPartitionEnable"].GetBool();
        m_reserveDynamicPartitionEnableHasBeenSet = true;
    }

    if (value.HasMember("BackupJobId") && !value["BackupJobId"].IsNull())
    {
        if (!value["BackupJobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.BackupJobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupJobId = value["BackupJobId"].GetInt64();
        m_backupJobIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreStatus.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobId, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
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

    if (m_allowLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowLoad, allocator);
    }

    if (m_replicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationNum.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaAllocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaAllocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaAllocation.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreObjects.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metaPreparedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaPreparedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaPreparedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFinishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotFinishedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadFinishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadFinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadFinishedTime.c_str(), allocator).Move(), allocator);
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

    if (m_reserveReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveReplica, allocator);
    }

    if (m_reserveDynamicPartitionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDynamicPartitionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveDynamicPartitionEnable, allocator);
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


int64_t RestoreStatus::GetJobId() const
{
    return m_jobId;
}

void RestoreStatus::SetJobId(const int64_t& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool RestoreStatus::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string RestoreStatus::GetLabel() const
{
    return m_label;
}

void RestoreStatus::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool RestoreStatus::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string RestoreStatus::GetTimestamp() const
{
    return m_timestamp;
}

void RestoreStatus::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool RestoreStatus::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string RestoreStatus::GetDbName() const
{
    return m_dbName;
}

void RestoreStatus::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool RestoreStatus::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string RestoreStatus::GetState() const
{
    return m_state;
}

void RestoreStatus::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool RestoreStatus::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool RestoreStatus::GetAllowLoad() const
{
    return m_allowLoad;
}

void RestoreStatus::SetAllowLoad(const bool& _allowLoad)
{
    m_allowLoad = _allowLoad;
    m_allowLoadHasBeenSet = true;
}

bool RestoreStatus::AllowLoadHasBeenSet() const
{
    return m_allowLoadHasBeenSet;
}

string RestoreStatus::GetReplicationNum() const
{
    return m_replicationNum;
}

void RestoreStatus::SetReplicationNum(const string& _replicationNum)
{
    m_replicationNum = _replicationNum;
    m_replicationNumHasBeenSet = true;
}

bool RestoreStatus::ReplicationNumHasBeenSet() const
{
    return m_replicationNumHasBeenSet;
}

string RestoreStatus::GetReplicaAllocation() const
{
    return m_replicaAllocation;
}

void RestoreStatus::SetReplicaAllocation(const string& _replicaAllocation)
{
    m_replicaAllocation = _replicaAllocation;
    m_replicaAllocationHasBeenSet = true;
}

bool RestoreStatus::ReplicaAllocationHasBeenSet() const
{
    return m_replicaAllocationHasBeenSet;
}

string RestoreStatus::GetRestoreObjects() const
{
    return m_restoreObjects;
}

void RestoreStatus::SetRestoreObjects(const string& _restoreObjects)
{
    m_restoreObjects = _restoreObjects;
    m_restoreObjectsHasBeenSet = true;
}

bool RestoreStatus::RestoreObjectsHasBeenSet() const
{
    return m_restoreObjectsHasBeenSet;
}

string RestoreStatus::GetCreateTime() const
{
    return m_createTime;
}

void RestoreStatus::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RestoreStatus::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RestoreStatus::GetMetaPreparedTime() const
{
    return m_metaPreparedTime;
}

void RestoreStatus::SetMetaPreparedTime(const string& _metaPreparedTime)
{
    m_metaPreparedTime = _metaPreparedTime;
    m_metaPreparedTimeHasBeenSet = true;
}

bool RestoreStatus::MetaPreparedTimeHasBeenSet() const
{
    return m_metaPreparedTimeHasBeenSet;
}

string RestoreStatus::GetSnapshotFinishedTime() const
{
    return m_snapshotFinishedTime;
}

void RestoreStatus::SetSnapshotFinishedTime(const string& _snapshotFinishedTime)
{
    m_snapshotFinishedTime = _snapshotFinishedTime;
    m_snapshotFinishedTimeHasBeenSet = true;
}

bool RestoreStatus::SnapshotFinishedTimeHasBeenSet() const
{
    return m_snapshotFinishedTimeHasBeenSet;
}

string RestoreStatus::GetDownloadFinishedTime() const
{
    return m_downloadFinishedTime;
}

void RestoreStatus::SetDownloadFinishedTime(const string& _downloadFinishedTime)
{
    m_downloadFinishedTime = _downloadFinishedTime;
    m_downloadFinishedTimeHasBeenSet = true;
}

bool RestoreStatus::DownloadFinishedTimeHasBeenSet() const
{
    return m_downloadFinishedTimeHasBeenSet;
}

string RestoreStatus::GetFinishedTime() const
{
    return m_finishedTime;
}

void RestoreStatus::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool RestoreStatus::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

string RestoreStatus::GetUnfinishedTasks() const
{
    return m_unfinishedTasks;
}

void RestoreStatus::SetUnfinishedTasks(const string& _unfinishedTasks)
{
    m_unfinishedTasks = _unfinishedTasks;
    m_unfinishedTasksHasBeenSet = true;
}

bool RestoreStatus::UnfinishedTasksHasBeenSet() const
{
    return m_unfinishedTasksHasBeenSet;
}

string RestoreStatus::GetProgress() const
{
    return m_progress;
}

void RestoreStatus::SetProgress(const string& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RestoreStatus::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string RestoreStatus::GetTaskErrMsg() const
{
    return m_taskErrMsg;
}

void RestoreStatus::SetTaskErrMsg(const string& _taskErrMsg)
{
    m_taskErrMsg = _taskErrMsg;
    m_taskErrMsgHasBeenSet = true;
}

bool RestoreStatus::TaskErrMsgHasBeenSet() const
{
    return m_taskErrMsgHasBeenSet;
}

string RestoreStatus::GetStatus() const
{
    return m_status;
}

void RestoreStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RestoreStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RestoreStatus::GetTimeout() const
{
    return m_timeout;
}

void RestoreStatus::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool RestoreStatus::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool RestoreStatus::GetReserveReplica() const
{
    return m_reserveReplica;
}

void RestoreStatus::SetReserveReplica(const bool& _reserveReplica)
{
    m_reserveReplica = _reserveReplica;
    m_reserveReplicaHasBeenSet = true;
}

bool RestoreStatus::ReserveReplicaHasBeenSet() const
{
    return m_reserveReplicaHasBeenSet;
}

bool RestoreStatus::GetReserveDynamicPartitionEnable() const
{
    return m_reserveDynamicPartitionEnable;
}

void RestoreStatus::SetReserveDynamicPartitionEnable(const bool& _reserveDynamicPartitionEnable)
{
    m_reserveDynamicPartitionEnable = _reserveDynamicPartitionEnable;
    m_reserveDynamicPartitionEnableHasBeenSet = true;
}

bool RestoreStatus::ReserveDynamicPartitionEnableHasBeenSet() const
{
    return m_reserveDynamicPartitionEnableHasBeenSet;
}

int64_t RestoreStatus::GetBackupJobId() const
{
    return m_backupJobId;
}

void RestoreStatus::SetBackupJobId(const int64_t& _backupJobId)
{
    m_backupJobId = _backupJobId;
    m_backupJobIdHasBeenSet = true;
}

bool RestoreStatus::BackupJobIdHasBeenSet() const
{
    return m_backupJobIdHasBeenSet;
}

int64_t RestoreStatus::GetTaskId() const
{
    return m_taskId;
}

void RestoreStatus::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RestoreStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

