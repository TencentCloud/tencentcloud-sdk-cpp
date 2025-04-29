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

#include <tencentcloud/lkeap/v20240522/model/ChatCompletionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

ChatCompletionsRequest::ChatCompletionsRequest() :
    m_modelHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_enableSearchHasBeenSet(false)
{
}

string ChatCompletionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTokens, allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSearch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionsRequest::GetModel() const
{
    return m_model;
}

void ChatCompletionsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatCompletionsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<Message> ChatCompletionsRequest::GetMessages() const
{
    return m_messages;
}

void ChatCompletionsRequest::SetMessages(const vector<Message>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ChatCompletionsRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

bool ChatCompletionsRequest::GetStream() const
{
    return m_stream;
}

void ChatCompletionsRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool ChatCompletionsRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

double ChatCompletionsRequest::GetTemperature() const
{
    return m_temperature;
}

void ChatCompletionsRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ChatCompletionsRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

int64_t ChatCompletionsRequest::GetMaxTokens() const
{
    return m_maxTokens;
}

void ChatCompletionsRequest::SetMaxTokens(const int64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool ChatCompletionsRequest::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void ChatCompletionsRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}


