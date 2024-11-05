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

#include <tencentcloud/hunyuan/v20230901/model/RunThreadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

RunThreadRequest::RunThreadRequest() :
    m_threadIDHasBeenSet(false),
    m_assistantIDHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_additionalMessagesHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_maxPromptTokensHasBeenSet(false),
    m_maxCompletionTokensHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_toolChoiceHasBeenSet(false)
{
}

string RunThreadRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_threadIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_threadID.c_str(), allocator).Move(), allocator);
    }

    if (m_assistantIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssistantID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assistantID.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalMessages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_additionalMessages.begin(); itr != m_additionalMessages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topP, allocator);
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_maxPromptTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPromptTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPromptTokens, allocator);
    }

    if (m_maxCompletionTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCompletionTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCompletionTokens, allocator);
    }

    if (m_toolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tools.begin(); itr != m_tools.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_toolChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolChoice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolChoice.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunThreadRequest::GetThreadID() const
{
    return m_threadID;
}

void RunThreadRequest::SetThreadID(const string& _threadID)
{
    m_threadID = _threadID;
    m_threadIDHasBeenSet = true;
}

bool RunThreadRequest::ThreadIDHasBeenSet() const
{
    return m_threadIDHasBeenSet;
}

string RunThreadRequest::GetAssistantID() const
{
    return m_assistantID;
}

void RunThreadRequest::SetAssistantID(const string& _assistantID)
{
    m_assistantID = _assistantID;
    m_assistantIDHasBeenSet = true;
}

bool RunThreadRequest::AssistantIDHasBeenSet() const
{
    return m_assistantIDHasBeenSet;
}

string RunThreadRequest::GetModel() const
{
    return m_model;
}

void RunThreadRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool RunThreadRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<ThreadAdditionalMessage> RunThreadRequest::GetAdditionalMessages() const
{
    return m_additionalMessages;
}

void RunThreadRequest::SetAdditionalMessages(const vector<ThreadAdditionalMessage>& _additionalMessages)
{
    m_additionalMessages = _additionalMessages;
    m_additionalMessagesHasBeenSet = true;
}

bool RunThreadRequest::AdditionalMessagesHasBeenSet() const
{
    return m_additionalMessagesHasBeenSet;
}

double RunThreadRequest::GetTemperature() const
{
    return m_temperature;
}

void RunThreadRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool RunThreadRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double RunThreadRequest::GetTopP() const
{
    return m_topP;
}

void RunThreadRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool RunThreadRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

bool RunThreadRequest::GetStream() const
{
    return m_stream;
}

void RunThreadRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool RunThreadRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

int64_t RunThreadRequest::GetMaxPromptTokens() const
{
    return m_maxPromptTokens;
}

void RunThreadRequest::SetMaxPromptTokens(const int64_t& _maxPromptTokens)
{
    m_maxPromptTokens = _maxPromptTokens;
    m_maxPromptTokensHasBeenSet = true;
}

bool RunThreadRequest::MaxPromptTokensHasBeenSet() const
{
    return m_maxPromptTokensHasBeenSet;
}

int64_t RunThreadRequest::GetMaxCompletionTokens() const
{
    return m_maxCompletionTokens;
}

void RunThreadRequest::SetMaxCompletionTokens(const int64_t& _maxCompletionTokens)
{
    m_maxCompletionTokens = _maxCompletionTokens;
    m_maxCompletionTokensHasBeenSet = true;
}

bool RunThreadRequest::MaxCompletionTokensHasBeenSet() const
{
    return m_maxCompletionTokensHasBeenSet;
}

vector<Tool> RunThreadRequest::GetTools() const
{
    return m_tools;
}

void RunThreadRequest::SetTools(const vector<Tool>& _tools)
{
    m_tools = _tools;
    m_toolsHasBeenSet = true;
}

bool RunThreadRequest::ToolsHasBeenSet() const
{
    return m_toolsHasBeenSet;
}

string RunThreadRequest::GetToolChoice() const
{
    return m_toolChoice;
}

void RunThreadRequest::SetToolChoice(const string& _toolChoice)
{
    m_toolChoice = _toolChoice;
    m_toolChoiceHasBeenSet = true;
}

bool RunThreadRequest::ToolChoiceHasBeenSet() const
{
    return m_toolChoiceHasBeenSet;
}


