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

#include <tencentcloud/tione/v20211111/model/ChatCompletionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ChatCompletionRequest::ChatCompletionRequest() :
    m_modelHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_maxTokensHasBeenSet(false)
{
}

string ChatCompletionRequest::ToJsonString() const
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

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTokens, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionRequest::GetModel() const
{
    return m_model;
}

void ChatCompletionRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatCompletionRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<Message> ChatCompletionRequest::GetMessages() const
{
    return m_messages;
}

void ChatCompletionRequest::SetMessages(const vector<Message>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ChatCompletionRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

double ChatCompletionRequest::GetTemperature() const
{
    return m_temperature;
}

void ChatCompletionRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ChatCompletionRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double ChatCompletionRequest::GetTopP() const
{
    return m_topP;
}

void ChatCompletionRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ChatCompletionRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

int64_t ChatCompletionRequest::GetMaxTokens() const
{
    return m_maxTokens;
}

void ChatCompletionRequest::SetMaxTokens(const int64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool ChatCompletionRequest::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}


