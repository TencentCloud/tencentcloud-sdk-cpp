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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeTalkProductConfigRequest::ModifyTWeTalkProductConfigRequest() :
    m_productIdHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_greetingMessageHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_targetLanguageHasBeenSet(false)
{
}

string ModifyTWeTalkProductConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_greetingMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_greetingMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeTalkProductConfigRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTWeTalkProductConfigRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeTalkProductConfigRequest::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void ModifyTWeTalkProductConfigRequest::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigRequest::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string ModifyTWeTalkProductConfigRequest::GetGreetingMessage() const
{
    return m_greetingMessage;
}

void ModifyTWeTalkProductConfigRequest::SetGreetingMessage(const string& _greetingMessage)
{
    m_greetingMessage = _greetingMessage;
    m_greetingMessageHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigRequest::GreetingMessageHasBeenSet() const
{
    return m_greetingMessageHasBeenSet;
}

int64_t ModifyTWeTalkProductConfigRequest::GetVoiceType() const
{
    return m_voiceType;
}

void ModifyTWeTalkProductConfigRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string ModifyTWeTalkProductConfigRequest::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void ModifyTWeTalkProductConfigRequest::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigRequest::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}


