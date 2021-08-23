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

#include <tencentcloud/tcr/v20190924/model/RetentionTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RetentionTask::RetentionTask() :
    m_taskIdHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_retainedHasBeenSet(false),
    m_repositoryHasBeenSet(false)
{
}

CoreInternalOutcome RetentionTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.ExecutionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = value["ExecutionId"].GetInt64();
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Retained") && !value["Retained"].IsNull())
    {
        if (!value["Retained"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.Retained` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retained = value["Retained"].GetInt64();
        m_retainedHasBeenSet = true;
    }

    if (value.HasMember("Repository") && !value["Repository"].IsNull())
    {
        if (!value["Repository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionTask.Repository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repository = string(value["Repository"].GetString());
        m_repositoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionId, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_retainedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retained";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retained, allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repository.c_str(), allocator).Move(), allocator);
    }

}


int64_t RetentionTask::GetTaskId() const
{
    return m_taskId;
}

void RetentionTask::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RetentionTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t RetentionTask::GetExecutionId() const
{
    return m_executionId;
}

void RetentionTask::SetExecutionId(const int64_t& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool RetentionTask::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string RetentionTask::GetStartTime() const
{
    return m_startTime;
}

void RetentionTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RetentionTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RetentionTask::GetEndTime() const
{
    return m_endTime;
}

void RetentionTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RetentionTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RetentionTask::GetStatus() const
{
    return m_status;
}

void RetentionTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RetentionTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RetentionTask::GetTotal() const
{
    return m_total;
}

void RetentionTask::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool RetentionTask::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t RetentionTask::GetRetained() const
{
    return m_retained;
}

void RetentionTask::SetRetained(const int64_t& _retained)
{
    m_retained = _retained;
    m_retainedHasBeenSet = true;
}

bool RetentionTask::RetainedHasBeenSet() const
{
    return m_retainedHasBeenSet;
}

string RetentionTask::GetRepository() const
{
    return m_repository;
}

void RetentionTask::SetRepository(const string& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool RetentionTask::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

