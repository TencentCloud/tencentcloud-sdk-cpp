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

#include <tencentcloud/hunyuan/v20230901/model/ChatStdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ChatStdRequest::ChatStdRequest() :
    m_messagesHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_temperatureHasBeenSet(false)
{
}

string ChatStdRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Message> ChatStdRequest::GetMessages() const
{
    return m_messages;
}

void ChatStdRequest::SetMessages(const vector<Message>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ChatStdRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

double ChatStdRequest::GetTopP() const
{
    return m_topP;
}

void ChatStdRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ChatStdRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

double ChatStdRequest::GetTemperature() const
{
    return m_temperature;
}

void ChatStdRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ChatStdRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}


