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

#include <tencentcloud/cfw/v20190904/model/OfflineExportTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OfflineExportTask::OfflineExportTask() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dataLengthHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_useUserCosHasBeenSet(false)
{
}

CoreInternalOutcome OfflineExportTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DataLength") && !value["DataLength"].IsNull())
    {
        if (!value["DataLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.DataLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataLength = value["DataLength"].GetUint64();
        m_dataLengthHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("UseUserCos") && !value["UseUserCos"].IsNull())
    {
        if (!value["UseUserCos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineExportTask.UseUserCos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useUserCos = value["UseUserCos"].GetInt64();
        m_useUserCosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OfflineExportTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataLength, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_useUserCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseUserCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useUserCos, allocator);
    }

}


string OfflineExportTask::GetTaskId() const
{
    return m_taskId;
}

void OfflineExportTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool OfflineExportTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string OfflineExportTask::GetTaskName() const
{
    return m_taskName;
}

void OfflineExportTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool OfflineExportTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string OfflineExportTask::GetCreateTime() const
{
    return m_createTime;
}

void OfflineExportTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OfflineExportTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t OfflineExportTask::GetDataLength() const
{
    return m_dataLength;
}

void OfflineExportTask::SetDataLength(const uint64_t& _dataLength)
{
    m_dataLength = _dataLength;
    m_dataLengthHasBeenSet = true;
}

bool OfflineExportTask::DataLengthHasBeenSet() const
{
    return m_dataLengthHasBeenSet;
}

uint64_t OfflineExportTask::GetStatus() const
{
    return m_status;
}

void OfflineExportTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OfflineExportTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OfflineExportTask::GetExpireTime() const
{
    return m_expireTime;
}

void OfflineExportTask::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool OfflineExportTask::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

double OfflineExportTask::GetProgress() const
{
    return m_progress;
}

void OfflineExportTask::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool OfflineExportTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string OfflineExportTask::GetErrorInfo() const
{
    return m_errorInfo;
}

void OfflineExportTask::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool OfflineExportTask::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

int64_t OfflineExportTask::GetUseUserCos() const
{
    return m_useUserCos;
}

void OfflineExportTask::SetUseUserCos(const int64_t& _useUserCos)
{
    m_useUserCos = _useUserCos;
    m_useUserCosHasBeenSet = true;
}

bool OfflineExportTask::UseUserCosHasBeenSet() const
{
    return m_useUserCosHasBeenSet;
}

