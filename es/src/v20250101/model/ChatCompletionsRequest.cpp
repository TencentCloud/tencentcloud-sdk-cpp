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

#include <tencentcloud/es/v20250101/model/ChatCompletionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ChatCompletionsRequest::ChatCompletionsRequest() :
    m_messagesHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_onlineSearchHasBeenSet(false),
    m_onlineSearchOptionsHasBeenSet(false)
{
}

string ChatCompletionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topP, allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_onlineSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlineSearch, allocator);
    }

    if (m_onlineSearchOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineSearchOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_onlineSearchOptions.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string ChatCompletionsRequest::GetModelName() const
{
    return m_modelName;
}

void ChatCompletionsRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ChatCompletionsRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
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

double ChatCompletionsRequest::GetTopP() const
{
    return m_topP;
}

void ChatCompletionsRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ChatCompletionsRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
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

bool ChatCompletionsRequest::GetOnlineSearch() const
{
    return m_onlineSearch;
}

void ChatCompletionsRequest::SetOnlineSearch(const bool& _onlineSearch)
{
    m_onlineSearch = _onlineSearch;
    m_onlineSearchHasBeenSet = true;
}

bool ChatCompletionsRequest::OnlineSearchHasBeenSet() const
{
    return m_onlineSearchHasBeenSet;
}

OnlineSearchOptions ChatCompletionsRequest::GetOnlineSearchOptions() const
{
    return m_onlineSearchOptions;
}

void ChatCompletionsRequest::SetOnlineSearchOptions(const OnlineSearchOptions& _onlineSearchOptions)
{
    m_onlineSearchOptions = _onlineSearchOptions;
    m_onlineSearchOptionsHasBeenSet = true;
}

bool ChatCompletionsRequest::OnlineSearchOptionsHasBeenSet() const
{
    return m_onlineSearchOptionsHasBeenSet;
}


