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

#include <tencentcloud/trtc/v20190722/model/UpdateAIConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

UpdateAIConversationRequest::UpdateAIConversationRequest() :
    m_taskIdHasBeenSet(false),
    m_welcomeMessageHasBeenSet(false),
    m_interruptModeHasBeenSet(false),
    m_interruptSpeechDurationHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false)
{
}

string UpdateAIConversationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_welcomeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_welcomeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interruptMode, allocator);
    }

    if (m_interruptSpeechDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptSpeechDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interruptSpeechDuration, allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lLMConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tTSConfig.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAIConversationRequest::GetTaskId() const
{
    return m_taskId;
}

void UpdateAIConversationRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UpdateAIConversationRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string UpdateAIConversationRequest::GetWelcomeMessage() const
{
    return m_welcomeMessage;
}

void UpdateAIConversationRequest::SetWelcomeMessage(const string& _welcomeMessage)
{
    m_welcomeMessage = _welcomeMessage;
    m_welcomeMessageHasBeenSet = true;
}

bool UpdateAIConversationRequest::WelcomeMessageHasBeenSet() const
{
    return m_welcomeMessageHasBeenSet;
}

uint64_t UpdateAIConversationRequest::GetInterruptMode() const
{
    return m_interruptMode;
}

void UpdateAIConversationRequest::SetInterruptMode(const uint64_t& _interruptMode)
{
    m_interruptMode = _interruptMode;
    m_interruptModeHasBeenSet = true;
}

bool UpdateAIConversationRequest::InterruptModeHasBeenSet() const
{
    return m_interruptModeHasBeenSet;
}

uint64_t UpdateAIConversationRequest::GetInterruptSpeechDuration() const
{
    return m_interruptSpeechDuration;
}

void UpdateAIConversationRequest::SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration)
{
    m_interruptSpeechDuration = _interruptSpeechDuration;
    m_interruptSpeechDurationHasBeenSet = true;
}

bool UpdateAIConversationRequest::InterruptSpeechDurationHasBeenSet() const
{
    return m_interruptSpeechDurationHasBeenSet;
}

string UpdateAIConversationRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void UpdateAIConversationRequest::SetLLMConfig(const string& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool UpdateAIConversationRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

string UpdateAIConversationRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void UpdateAIConversationRequest::SetTTSConfig(const string& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool UpdateAIConversationRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}


