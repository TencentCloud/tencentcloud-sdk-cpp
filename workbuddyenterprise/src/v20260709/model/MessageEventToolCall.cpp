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

#include <tencentcloud/workbuddyenterprise/v20260709/model/MessageEventToolCall.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

MessageEventToolCall::MessageEventToolCall() :
    m_toolCallIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_startedAtHasBeenSet(false)
{
}

CoreInternalOutcome MessageEventToolCall::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ToolCallId") && !value["ToolCallId"].IsNull())
    {
        if (!value["ToolCallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.ToolCallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolCallId = string(value["ToolCallId"].GetString());
        m_toolCallIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("EndedAt") && !value["EndedAt"].IsNull())
    {
        if (!value["EndedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.EndedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endedAt = string(value["EndedAt"].GetString());
        m_endedAtHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEventToolCall.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageEventToolCall::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_toolCallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolCallId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_endedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

}


string MessageEventToolCall::GetToolCallId() const
{
    return m_toolCallId;
}

void MessageEventToolCall::SetToolCallId(const string& _toolCallId)
{
    m_toolCallId = _toolCallId;
    m_toolCallIdHasBeenSet = true;
}

bool MessageEventToolCall::ToolCallIdHasBeenSet() const
{
    return m_toolCallIdHasBeenSet;
}

string MessageEventToolCall::GetToolName() const
{
    return m_toolName;
}

void MessageEventToolCall::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool MessageEventToolCall::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string MessageEventToolCall::GetStatus() const
{
    return m_status;
}

void MessageEventToolCall::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MessageEventToolCall::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MessageEventToolCall::GetInput() const
{
    return m_input;
}

void MessageEventToolCall::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool MessageEventToolCall::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string MessageEventToolCall::GetOutput() const
{
    return m_output;
}

void MessageEventToolCall::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool MessageEventToolCall::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string MessageEventToolCall::GetEndedAt() const
{
    return m_endedAt;
}

void MessageEventToolCall::SetEndedAt(const string& _endedAt)
{
    m_endedAt = _endedAt;
    m_endedAtHasBeenSet = true;
}

bool MessageEventToolCall::EndedAtHasBeenSet() const
{
    return m_endedAtHasBeenSet;
}

int64_t MessageEventToolCall::GetDurationMs() const
{
    return m_durationMs;
}

void MessageEventToolCall::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool MessageEventToolCall::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

string MessageEventToolCall::GetStartedAt() const
{
    return m_startedAt;
}

void MessageEventToolCall::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool MessageEventToolCall::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

