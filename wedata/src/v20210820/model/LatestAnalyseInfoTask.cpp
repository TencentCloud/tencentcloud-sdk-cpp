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

#include <tencentcloud/wedata/v20210820/model/LatestAnalyseInfoTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LatestAnalyseInfoTask::LatestAnalyseInfoTask() :
    m_taskIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_requestScriptIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome LatestAnalyseInfoTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("RequestScriptId") && !value["RequestScriptId"].IsNull())
    {
        if (!value["RequestScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.RequestScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestScriptId = string(value["RequestScriptId"].GetString());
        m_requestScriptIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAnalyseInfoTask.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LatestAnalyseInfoTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_requestScriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestScriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
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

}


string LatestAnalyseInfoTask::GetTaskId() const
{
    return m_taskId;
}

void LatestAnalyseInfoTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool LatestAnalyseInfoTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string LatestAnalyseInfoTask::GetRecordId() const
{
    return m_recordId;
}

void LatestAnalyseInfoTask::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool LatestAnalyseInfoTask::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string LatestAnalyseInfoTask::GetCurRunDate() const
{
    return m_curRunDate;
}

void LatestAnalyseInfoTask::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool LatestAnalyseInfoTask::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string LatestAnalyseInfoTask::GetRequestScriptId() const
{
    return m_requestScriptId;
}

void LatestAnalyseInfoTask::SetRequestScriptId(const string& _requestScriptId)
{
    m_requestScriptId = _requestScriptId;
    m_requestScriptIdHasBeenSet = true;
}

bool LatestAnalyseInfoTask::RequestScriptIdHasBeenSet() const
{
    return m_requestScriptIdHasBeenSet;
}

string LatestAnalyseInfoTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void LatestAnalyseInfoTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool LatestAnalyseInfoTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string LatestAnalyseInfoTask::GetCreateUser() const
{
    return m_createUser;
}

void LatestAnalyseInfoTask::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool LatestAnalyseInfoTask::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string LatestAnalyseInfoTask::GetProjectId() const
{
    return m_projectId;
}

void LatestAnalyseInfoTask::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool LatestAnalyseInfoTask::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

