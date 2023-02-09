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

#include <tencentcloud/dlc/v20210125/model/NotebookSessionStatementInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NotebookSessionStatementInfo::NotebookSessionStatementInfo() :
    m_completedHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_outPutHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSessionStatementInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Completed") && !value["Completed"].IsNull())
    {
        if (!value["Completed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.Completed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completed = value["Completed"].GetInt64();
        m_completedHasBeenSet = true;
    }

    if (value.HasMember("Started") && !value["Started"].IsNull())
    {
        if (!value["Started"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.Started` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_started = value["Started"].GetInt64();
        m_startedHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("StatementId") && !value["StatementId"].IsNull())
    {
        if (!value["StatementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.StatementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statementId = string(value["StatementId"].GetString());
        m_statementIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("OutPut") && !value["OutPut"].IsNull())
    {
        if (!value["OutPut"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.OutPut` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outPut.Deserialize(value["OutPut"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outPutHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSessionStatementInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSessionStatementInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_completedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completed, allocator);
    }

    if (m_startedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Started";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_started, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statementId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_outPutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutPut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outPut.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

}


int64_t NotebookSessionStatementInfo::GetCompleted() const
{
    return m_completed;
}

void NotebookSessionStatementInfo::SetCompleted(const int64_t& _completed)
{
    m_completed = _completed;
    m_completedHasBeenSet = true;
}

bool NotebookSessionStatementInfo::CompletedHasBeenSet() const
{
    return m_completedHasBeenSet;
}

int64_t NotebookSessionStatementInfo::GetStarted() const
{
    return m_started;
}

void NotebookSessionStatementInfo::SetStarted(const int64_t& _started)
{
    m_started = _started;
    m_startedHasBeenSet = true;
}

bool NotebookSessionStatementInfo::StartedHasBeenSet() const
{
    return m_startedHasBeenSet;
}

double NotebookSessionStatementInfo::GetProgress() const
{
    return m_progress;
}

void NotebookSessionStatementInfo::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool NotebookSessionStatementInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string NotebookSessionStatementInfo::GetStatementId() const
{
    return m_statementId;
}

void NotebookSessionStatementInfo::SetStatementId(const string& _statementId)
{
    m_statementId = _statementId;
    m_statementIdHasBeenSet = true;
}

bool NotebookSessionStatementInfo::StatementIdHasBeenSet() const
{
    return m_statementIdHasBeenSet;
}

string NotebookSessionStatementInfo::GetState() const
{
    return m_state;
}

void NotebookSessionStatementInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NotebookSessionStatementInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

StatementOutput NotebookSessionStatementInfo::GetOutPut() const
{
    return m_outPut;
}

void NotebookSessionStatementInfo::SetOutPut(const StatementOutput& _outPut)
{
    m_outPut = _outPut;
    m_outPutHasBeenSet = true;
}

bool NotebookSessionStatementInfo::OutPutHasBeenSet() const
{
    return m_outPutHasBeenSet;
}

string NotebookSessionStatementInfo::GetBatchId() const
{
    return m_batchId;
}

void NotebookSessionStatementInfo::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool NotebookSessionStatementInfo::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string NotebookSessionStatementInfo::GetCode() const
{
    return m_code;
}

void NotebookSessionStatementInfo::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool NotebookSessionStatementInfo::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string NotebookSessionStatementInfo::GetTaskId() const
{
    return m_taskId;
}

void NotebookSessionStatementInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool NotebookSessionStatementInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

