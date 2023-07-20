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

#include <tencentcloud/wedata/v20210820/model/DrInstanceOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DrInstanceOpsDto::DrInstanceOpsDto() :
    m_taskSourceHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_sonRecordIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_submitUserNameHasBeenSet(false),
    m_submitUserIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_hasResultSetHasBeenSet(false)
{
}

CoreInternalOutcome DrInstanceOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskSource") && !value["TaskSource"].IsNull())
    {
        if (!value["TaskSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.TaskSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSource = string(value["TaskSource"].GetString());
        m_taskSourceHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.RecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = value["RecordId"].GetUint64();
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("SonRecordId") && !value["SonRecordId"].IsNull())
    {
        if (!value["SonRecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.SonRecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sonRecordId = value["SonRecordId"].GetUint64();
        m_sonRecordIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("SubmitUserName") && !value["SubmitUserName"].IsNull())
    {
        if (!value["SubmitUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.SubmitUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitUserName = string(value["SubmitUserName"].GetString());
        m_submitUserNameHasBeenSet = true;
    }

    if (value.HasMember("SubmitUserId") && !value["SubmitUserId"].IsNull())
    {
        if (!value["SubmitUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.SubmitUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitUserId = string(value["SubmitUserId"].GetString());
        m_submitUserIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("HasResultSet") && !value["HasResultSet"].IsNull())
    {
        if (!value["HasResultSet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DrInstanceOpsDto.HasResultSet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasResultSet = value["HasResultSet"].GetBool();
        m_hasResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrInstanceOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSource.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordId, allocator);
    }

    if (m_sonRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sonRecordId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_submitUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_submitUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_hasResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasResultSet, allocator);
    }

}


string DrInstanceOpsDto::GetTaskSource() const
{
    return m_taskSource;
}

void DrInstanceOpsDto::SetTaskSource(const string& _taskSource)
{
    m_taskSource = _taskSource;
    m_taskSourceHasBeenSet = true;
}

bool DrInstanceOpsDto::TaskSourceHasBeenSet() const
{
    return m_taskSourceHasBeenSet;
}

string DrInstanceOpsDto::GetJobId() const
{
    return m_jobId;
}

void DrInstanceOpsDto::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DrInstanceOpsDto::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

uint64_t DrInstanceOpsDto::GetRecordId() const
{
    return m_recordId;
}

void DrInstanceOpsDto::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DrInstanceOpsDto::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t DrInstanceOpsDto::GetSonRecordId() const
{
    return m_sonRecordId;
}

void DrInstanceOpsDto::SetSonRecordId(const uint64_t& _sonRecordId)
{
    m_sonRecordId = _sonRecordId;
    m_sonRecordIdHasBeenSet = true;
}

bool DrInstanceOpsDto::SonRecordIdHasBeenSet() const
{
    return m_sonRecordIdHasBeenSet;
}

string DrInstanceOpsDto::GetInstanceId() const
{
    return m_instanceId;
}

void DrInstanceOpsDto::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DrInstanceOpsDto::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DrInstanceOpsDto::GetTaskId() const
{
    return m_taskId;
}

void DrInstanceOpsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DrInstanceOpsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DrInstanceOpsDto::GetRemotePath() const
{
    return m_remotePath;
}

void DrInstanceOpsDto::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool DrInstanceOpsDto::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string DrInstanceOpsDto::GetScriptContent() const
{
    return m_scriptContent;
}

void DrInstanceOpsDto::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool DrInstanceOpsDto::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string DrInstanceOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void DrInstanceOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DrInstanceOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DrInstanceOpsDto::GetStartTime() const
{
    return m_startTime;
}

void DrInstanceOpsDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DrInstanceOpsDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DrInstanceOpsDto::GetDuration() const
{
    return m_duration;
}

void DrInstanceOpsDto::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DrInstanceOpsDto::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string DrInstanceOpsDto::GetStatus() const
{
    return m_status;
}

void DrInstanceOpsDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DrInstanceOpsDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DrInstanceOpsDto::GetTaskName() const
{
    return m_taskName;
}

void DrInstanceOpsDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DrInstanceOpsDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DrInstanceOpsDto::GetSubmitUserName() const
{
    return m_submitUserName;
}

void DrInstanceOpsDto::SetSubmitUserName(const string& _submitUserName)
{
    m_submitUserName = _submitUserName;
    m_submitUserNameHasBeenSet = true;
}

bool DrInstanceOpsDto::SubmitUserNameHasBeenSet() const
{
    return m_submitUserNameHasBeenSet;
}

string DrInstanceOpsDto::GetSubmitUserId() const
{
    return m_submitUserId;
}

void DrInstanceOpsDto::SetSubmitUserId(const string& _submitUserId)
{
    m_submitUserId = _submitUserId;
    m_submitUserIdHasBeenSet = true;
}

bool DrInstanceOpsDto::SubmitUserIdHasBeenSet() const
{
    return m_submitUserIdHasBeenSet;
}

string DrInstanceOpsDto::GetTaskType() const
{
    return m_taskType;
}

void DrInstanceOpsDto::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DrInstanceOpsDto::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

bool DrInstanceOpsDto::GetHasResultSet() const
{
    return m_hasResultSet;
}

void DrInstanceOpsDto::SetHasResultSet(const bool& _hasResultSet)
{
    m_hasResultSet = _hasResultSet;
    m_hasResultSetHasBeenSet = true;
}

bool DrInstanceOpsDto::HasResultSetHasBeenSet() const
{
    return m_hasResultSetHasBeenSet;
}

