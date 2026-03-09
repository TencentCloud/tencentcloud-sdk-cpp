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

#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcCustomVoiceTask::CreateAigcCustomVoiceTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcCustomVoiceTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.Input` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceTask.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcCustomVoiceTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string CreateAigcCustomVoiceTask::GetTaskId() const
{
    return m_taskId;
}

void CreateAigcCustomVoiceTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateAigcCustomVoiceTask::GetStatus() const
{
    return m_status;
}

void CreateAigcCustomVoiceTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CreateAigcCustomVoiceTask::GetErrCode() const
{
    return m_errCode;
}

void CreateAigcCustomVoiceTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string CreateAigcCustomVoiceTask::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void CreateAigcCustomVoiceTask::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string CreateAigcCustomVoiceTask::GetMessage() const
{
    return m_message;
}

void CreateAigcCustomVoiceTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t CreateAigcCustomVoiceTask::GetProgress() const
{
    return m_progress;
}

void CreateAigcCustomVoiceTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

CreateAigcCustomVoiceInput CreateAigcCustomVoiceTask::GetInput() const
{
    return m_input;
}

void CreateAigcCustomVoiceTask::SetInput(const CreateAigcCustomVoiceInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

CreateAigcCustomVoiceOutput CreateAigcCustomVoiceTask::GetOutput() const
{
    return m_output;
}

void CreateAigcCustomVoiceTask::SetOutput(const CreateAigcCustomVoiceOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string CreateAigcCustomVoiceTask::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcCustomVoiceTask::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcCustomVoiceTask::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcCustomVoiceTask::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcCustomVoiceTask::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

