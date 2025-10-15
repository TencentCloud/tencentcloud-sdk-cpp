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

#include <tencentcloud/iotexplorer/v20190423/model/TalkBasicConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkBasicConfigInfo::TalkBasicConfigInfo() :
    m_systemPromptHasBeenSet(false),
    m_greetingMessageHasBeenSet(false),
    m_defaultVoiceTypeHasBeenSet(false)
{
}

CoreInternalOutcome TalkBasicConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkBasicConfigInfo.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }

    if (value.HasMember("GreetingMessage") && !value["GreetingMessage"].IsNull())
    {
        if (!value["GreetingMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkBasicConfigInfo.GreetingMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greetingMessage = string(value["GreetingMessage"].GetString());
        m_greetingMessageHasBeenSet = true;
    }

    if (value.HasMember("DefaultVoiceType") && !value["DefaultVoiceType"].IsNull())
    {
        if (!value["DefaultVoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkBasicConfigInfo.DefaultVoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultVoiceType = value["DefaultVoiceType"].GetInt64();
        m_defaultVoiceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkBasicConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_greetingMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greetingMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultVoiceType, allocator);
    }

}


string TalkBasicConfigInfo::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void TalkBasicConfigInfo::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool TalkBasicConfigInfo::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string TalkBasicConfigInfo::GetGreetingMessage() const
{
    return m_greetingMessage;
}

void TalkBasicConfigInfo::SetGreetingMessage(const string& _greetingMessage)
{
    m_greetingMessage = _greetingMessage;
    m_greetingMessageHasBeenSet = true;
}

bool TalkBasicConfigInfo::GreetingMessageHasBeenSet() const
{
    return m_greetingMessageHasBeenSet;
}

int64_t TalkBasicConfigInfo::GetDefaultVoiceType() const
{
    return m_defaultVoiceType;
}

void TalkBasicConfigInfo::SetDefaultVoiceType(const int64_t& _defaultVoiceType)
{
    m_defaultVoiceType = _defaultVoiceType;
    m_defaultVoiceTypeHasBeenSet = true;
}

bool TalkBasicConfigInfo::DefaultVoiceTypeHasBeenSet() const
{
    return m_defaultVoiceTypeHasBeenSet;
}

