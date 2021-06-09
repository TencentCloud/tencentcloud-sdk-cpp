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

#include <tencentcloud/tbp/v20190311/model/TextProcessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

TextProcessRequest::TextProcessRequest() :
    m_botIdHasBeenSet(false),
    m_terminalIdHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_botEnvHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false)
{
}

string TextProcessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_terminalId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputText.c_str(), allocator).Move(), allocator);
    }

    if (m_botEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionAttributes.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextProcessRequest::GetBotId() const
{
    return m_botId;
}

void TextProcessRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool TextProcessRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string TextProcessRequest::GetTerminalId() const
{
    return m_terminalId;
}

void TextProcessRequest::SetTerminalId(const string& _terminalId)
{
    m_terminalId = _terminalId;
    m_terminalIdHasBeenSet = true;
}

bool TextProcessRequest::TerminalIdHasBeenSet() const
{
    return m_terminalIdHasBeenSet;
}

string TextProcessRequest::GetInputText() const
{
    return m_inputText;
}

void TextProcessRequest::SetInputText(const string& _inputText)
{
    m_inputText = _inputText;
    m_inputTextHasBeenSet = true;
}

bool TextProcessRequest::InputTextHasBeenSet() const
{
    return m_inputTextHasBeenSet;
}

string TextProcessRequest::GetBotEnv() const
{
    return m_botEnv;
}

void TextProcessRequest::SetBotEnv(const string& _botEnv)
{
    m_botEnv = _botEnv;
    m_botEnvHasBeenSet = true;
}

bool TextProcessRequest::BotEnvHasBeenSet() const
{
    return m_botEnvHasBeenSet;
}

string TextProcessRequest::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

void TextProcessRequest::SetSessionAttributes(const string& _sessionAttributes)
{
    m_sessionAttributes = _sessionAttributes;
    m_sessionAttributesHasBeenSet = true;
}

bool TextProcessRequest::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}


