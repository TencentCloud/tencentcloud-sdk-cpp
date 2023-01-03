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

#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EditMediaTask::EditMediaTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_procedureTaskIdHasBeenSet(false),
    m_reviewAudioVideoTaskIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskId") && !value["ProcedureTaskId"].IsNull())
    {
        if (!value["ProcedureTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.ProcedureTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureTaskId = string(value["ProcedureTaskId"].GetString());
        m_procedureTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ReviewAudioVideoTaskId") && !value["ReviewAudioVideoTaskId"].IsNull())
    {
        if (!value["ReviewAudioVideoTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.ReviewAudioVideoTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewAudioVideoTaskId = string(value["ReviewAudioVideoTaskId"].GetString());
        m_reviewAudioVideoTaskIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaTask.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_errCodeExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCodeExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCodeExt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_procedureTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewAudioVideoTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewAudioVideoTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

}


string EditMediaTask::GetTaskId() const
{
    return m_taskId;
}

void EditMediaTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EditMediaTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string EditMediaTask::GetStatus() const
{
    return m_status;
}

void EditMediaTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EditMediaTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EditMediaTask::GetErrCode() const
{
    return m_errCode;
}

void EditMediaTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool EditMediaTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string EditMediaTask::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void EditMediaTask::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool EditMediaTask::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string EditMediaTask::GetMessage() const
{
    return m_message;
}

void EditMediaTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool EditMediaTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t EditMediaTask::GetProgress() const
{
    return m_progress;
}

void EditMediaTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool EditMediaTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

EditMediaTaskInput EditMediaTask::GetInput() const
{
    return m_input;
}

void EditMediaTask::SetInput(const EditMediaTaskInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool EditMediaTask::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

EditMediaTaskOutput EditMediaTask::GetOutput() const
{
    return m_output;
}

void EditMediaTask::SetOutput(const EditMediaTaskOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool EditMediaTask::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

MediaMetaData EditMediaTask::GetMetaData() const
{
    return m_metaData;
}

void EditMediaTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool EditMediaTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string EditMediaTask::GetProcedureTaskId() const
{
    return m_procedureTaskId;
}

void EditMediaTask::SetProcedureTaskId(const string& _procedureTaskId)
{
    m_procedureTaskId = _procedureTaskId;
    m_procedureTaskIdHasBeenSet = true;
}

bool EditMediaTask::ProcedureTaskIdHasBeenSet() const
{
    return m_procedureTaskIdHasBeenSet;
}

string EditMediaTask::GetReviewAudioVideoTaskId() const
{
    return m_reviewAudioVideoTaskId;
}

void EditMediaTask::SetReviewAudioVideoTaskId(const string& _reviewAudioVideoTaskId)
{
    m_reviewAudioVideoTaskId = _reviewAudioVideoTaskId;
    m_reviewAudioVideoTaskIdHasBeenSet = true;
}

bool EditMediaTask::ReviewAudioVideoTaskIdHasBeenSet() const
{
    return m_reviewAudioVideoTaskIdHasBeenSet;
}

string EditMediaTask::GetSessionId() const
{
    return m_sessionId;
}

void EditMediaTask::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EditMediaTask::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EditMediaTask::GetSessionContext() const
{
    return m_sessionContext;
}

void EditMediaTask::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool EditMediaTask::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

