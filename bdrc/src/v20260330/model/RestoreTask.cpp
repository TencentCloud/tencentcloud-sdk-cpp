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

#include <tencentcloud/bdrc/v20260330/model/RestoreTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

RestoreTask::RestoreTask() :
    m_taskIdHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_restorePathsHasBeenSet(false),
    m_targetLocationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalFileCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_totalSizeFormattedHasBeenSet(false),
    m_restoreFileCountHasBeenSet(false),
    m_restoreSizeHasBeenSet(false),
    m_restoreSizeFormattedHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_conflictStrategyHasBeenSet(false)
{
}

CoreInternalOutcome RestoreTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetResourceId") && !value["TargetResourceId"].IsNull())
    {
        if (!value["TargetResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResourceId = string(value["TargetResourceId"].GetString());
        m_targetResourceIdHasBeenSet = true;
    }

    if (value.HasMember("RestorePaths") && !value["RestorePaths"].IsNull())
    {
        if (!value["RestorePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestorePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RestorePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_restorePaths.push_back((*itr).GetString());
        }
        m_restorePathsHasBeenSet = true;
    }

    if (value.HasMember("TargetLocation") && !value["TargetLocation"].IsNull())
    {
        if (!value["TargetLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLocation = string(value["TargetLocation"].GetString());
        m_targetLocationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalFileCount") && !value["TotalFileCount"].IsNull())
    {
        if (!value["TotalFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TotalFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFileCount = value["TotalFileCount"].GetInt64();
        m_totalFileCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalSizeFormatted") && !value["TotalSizeFormatted"].IsNull())
    {
        if (!value["TotalSizeFormatted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TotalSizeFormatted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalSizeFormatted = string(value["TotalSizeFormatted"].GetString());
        m_totalSizeFormattedHasBeenSet = true;
    }

    if (value.HasMember("RestoreFileCount") && !value["RestoreFileCount"].IsNull())
    {
        if (!value["RestoreFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreFileCount = value["RestoreFileCount"].GetInt64();
        m_restoreFileCountHasBeenSet = true;
    }

    if (value.HasMember("RestoreSize") && !value["RestoreSize"].IsNull())
    {
        if (!value["RestoreSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreSize = value["RestoreSize"].GetInt64();
        m_restoreSizeHasBeenSet = true;
    }

    if (value.HasMember("RestoreSizeFormatted") && !value["RestoreSizeFormatted"].IsNull())
    {
        if (!value["RestoreSizeFormatted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreSizeFormatted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreSizeFormatted = string(value["RestoreSizeFormatted"].GetString());
        m_restoreSizeFormattedHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("ConflictStrategy") && !value["ConflictStrategy"].IsNull())
    {
        if (!value["ConflictStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.ConflictStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictStrategy = string(value["ConflictStrategy"].GetString());
        m_conflictStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_restorePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestorePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_restorePaths.begin(); itr != m_restorePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFileCount, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_totalSizeFormattedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSizeFormatted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalSizeFormatted.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreFileCount, allocator);
    }

    if (m_restoreSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreSize, allocator);
    }

    if (m_restoreSizeFormattedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreSizeFormatted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreSizeFormatted.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictStrategy.c_str(), allocator).Move(), allocator);
    }

}


string RestoreTask::GetTaskId() const
{
    return m_taskId;
}

void RestoreTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RestoreTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RestoreTask::GetBackupId() const
{
    return m_backupId;
}

void RestoreTask::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool RestoreTask::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string RestoreTask::GetResourceId() const
{
    return m_resourceId;
}

void RestoreTask::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool RestoreTask::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string RestoreTask::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void RestoreTask::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool RestoreTask::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

vector<string> RestoreTask::GetRestorePaths() const
{
    return m_restorePaths;
}

void RestoreTask::SetRestorePaths(const vector<string>& _restorePaths)
{
    m_restorePaths = _restorePaths;
    m_restorePathsHasBeenSet = true;
}

bool RestoreTask::RestorePathsHasBeenSet() const
{
    return m_restorePathsHasBeenSet;
}

string RestoreTask::GetTargetLocation() const
{
    return m_targetLocation;
}

void RestoreTask::SetTargetLocation(const string& _targetLocation)
{
    m_targetLocation = _targetLocation;
    m_targetLocationHasBeenSet = true;
}

bool RestoreTask::TargetLocationHasBeenSet() const
{
    return m_targetLocationHasBeenSet;
}

string RestoreTask::GetStatus() const
{
    return m_status;
}

void RestoreTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RestoreTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RestoreTask::GetTotalFileCount() const
{
    return m_totalFileCount;
}

void RestoreTask::SetTotalFileCount(const int64_t& _totalFileCount)
{
    m_totalFileCount = _totalFileCount;
    m_totalFileCountHasBeenSet = true;
}

bool RestoreTask::TotalFileCountHasBeenSet() const
{
    return m_totalFileCountHasBeenSet;
}

int64_t RestoreTask::GetTotalSize() const
{
    return m_totalSize;
}

void RestoreTask::SetTotalSize(const int64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool RestoreTask::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

string RestoreTask::GetTotalSizeFormatted() const
{
    return m_totalSizeFormatted;
}

void RestoreTask::SetTotalSizeFormatted(const string& _totalSizeFormatted)
{
    m_totalSizeFormatted = _totalSizeFormatted;
    m_totalSizeFormattedHasBeenSet = true;
}

bool RestoreTask::TotalSizeFormattedHasBeenSet() const
{
    return m_totalSizeFormattedHasBeenSet;
}

int64_t RestoreTask::GetRestoreFileCount() const
{
    return m_restoreFileCount;
}

void RestoreTask::SetRestoreFileCount(const int64_t& _restoreFileCount)
{
    m_restoreFileCount = _restoreFileCount;
    m_restoreFileCountHasBeenSet = true;
}

bool RestoreTask::RestoreFileCountHasBeenSet() const
{
    return m_restoreFileCountHasBeenSet;
}

int64_t RestoreTask::GetRestoreSize() const
{
    return m_restoreSize;
}

void RestoreTask::SetRestoreSize(const int64_t& _restoreSize)
{
    m_restoreSize = _restoreSize;
    m_restoreSizeHasBeenSet = true;
}

bool RestoreTask::RestoreSizeHasBeenSet() const
{
    return m_restoreSizeHasBeenSet;
}

string RestoreTask::GetRestoreSizeFormatted() const
{
    return m_restoreSizeFormatted;
}

void RestoreTask::SetRestoreSizeFormatted(const string& _restoreSizeFormatted)
{
    m_restoreSizeFormatted = _restoreSizeFormatted;
    m_restoreSizeFormattedHasBeenSet = true;
}

bool RestoreTask::RestoreSizeFormattedHasBeenSet() const
{
    return m_restoreSizeFormattedHasBeenSet;
}

double RestoreTask::GetProgress() const
{
    return m_progress;
}

void RestoreTask::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RestoreTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string RestoreTask::GetJobId() const
{
    return m_jobId;
}

void RestoreTask::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool RestoreTask::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string RestoreTask::GetStartTime() const
{
    return m_startTime;
}

void RestoreTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RestoreTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RestoreTask::GetEndTime() const
{
    return m_endTime;
}

void RestoreTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RestoreTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RestoreTask::GetCreatedTime() const
{
    return m_createdTime;
}

void RestoreTask::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RestoreTask::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string RestoreTask::GetFailReason() const
{
    return m_failReason;
}

void RestoreTask::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool RestoreTask::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string RestoreTask::GetConflictStrategy() const
{
    return m_conflictStrategy;
}

void RestoreTask::SetConflictStrategy(const string& _conflictStrategy)
{
    m_conflictStrategy = _conflictStrategy;
    m_conflictStrategyHasBeenSet = true;
}

bool RestoreTask::ConflictStrategyHasBeenSet() const
{
    return m_conflictStrategyHasBeenSet;
}

