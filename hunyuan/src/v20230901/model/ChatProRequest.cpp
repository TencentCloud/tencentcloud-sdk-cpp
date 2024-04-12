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

#include <tencentcloud/hunyuan/v20230901/model/ChatProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ChatProRequest::ChatProRequest() :
    m_messagesHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_streamModerationHasBeenSet(false)
{
}

string ChatProRequest::ToJsonString() const
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

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_streamModerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamModeration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_streamModeration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Message> ChatProRequest::GetMessages() const
{
    return m_messages;
}

void ChatProRequest::SetMessages(const vector<Message>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ChatProRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

double ChatProRequest::GetTopP() const
{
    return m_topP;
}

void ChatProRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ChatProRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

double ChatProRequest::GetTemperature() const
{
    return m_temperature;
}

void ChatProRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ChatProRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

bool ChatProRequest::GetStream() const
{
    return m_stream;
}

void ChatProRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool ChatProRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

bool ChatProRequest::GetStreamModeration() const
{
    return m_streamModeration;
}

void ChatProRequest::SetStreamModeration(const bool& _streamModeration)
{
    m_streamModeration = _streamModeration;
    m_streamModerationHasBeenSet = true;
}

bool ChatProRequest::StreamModerationHasBeenSet() const
{
    return m_streamModerationHasBeenSet;
}


