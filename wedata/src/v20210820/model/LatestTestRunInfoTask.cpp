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

#include <tencentcloud/wedata/v20210820/model/LatestTestRunInfoTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LatestTestRunInfoTask::LatestTestRunInfoTask() :
    m_taskIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_requestTaskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_serialNoHasBeenSet(false)
{
}

CoreInternalOutcome LatestTestRunInfoTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("RequestTaskId") && !value["RequestTaskId"].IsNull())
    {
        if (!value["RequestTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.RequestTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestTaskId = string(value["RequestTaskId"].GetString());
        m_requestTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestTestRunInfoTask.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LatestTestRunInfoTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

}


string LatestTestRunInfoTask::GetTaskId() const
{
    return m_taskId;
}

void LatestTestRunInfoTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LatestTestRunInfoTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LatestTestRunInfoTask::GetRecordId() const
{
    return m_recordId;
}

void LatestTestRunInfoTask::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool LatestTestRunInfoTask::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string LatestTestRunInfoTask::GetCurRunDate() const
{
    return m_curRunDate;
}

void LatestTestRunInfoTask::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool LatestTestRunInfoTask::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string LatestTestRunInfoTask::GetRequestTaskId() const
{
    return m_requestTaskId;
}

void LatestTestRunInfoTask::SetRequestTaskId(const string& _requestTaskId)
{
    m_requestTaskId = _requestTaskId;
    m_requestTaskIdHasBeenSet = true;
}

bool LatestTestRunInfoTask::RequestTaskIdHasBeenSet() const
{
    return m_requestTaskIdHasBeenSet;
}

string LatestTestRunInfoTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void LatestTestRunInfoTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool LatestTestRunInfoTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string LatestTestRunInfoTask::GetJobId() const
{
    return m_jobId;
}

void LatestTestRunInfoTask::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool LatestTestRunInfoTask::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string LatestTestRunInfoTask::GetCreateUser() const
{
    return m_createUser;
}

void LatestTestRunInfoTask::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool LatestTestRunInfoTask::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string LatestTestRunInfoTask::GetProjectId() const
{
    return m_projectId;
}

void LatestTestRunInfoTask::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LatestTestRunInfoTask::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string LatestTestRunInfoTask::GetSerialNo() const
{
    return m_serialNo;
}

void LatestTestRunInfoTask::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool LatestTestRunInfoTask::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

