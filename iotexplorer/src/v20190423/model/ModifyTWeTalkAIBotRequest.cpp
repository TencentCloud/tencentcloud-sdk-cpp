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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkAIBotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeTalkAIBotRequest::ModifyTWeTalkAIBotRequest() :
    m_botIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_customToolsHasBeenSet(false)
{
}

string ModifyTWeTalkAIBotRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_sTTConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTTConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customTools.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeTalkAIBotRequest::GetBotId() const
{
    return m_botId;
}

void ModifyTWeTalkAIBotRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string ModifyTWeTalkAIBotRequest::GetName() const
{
    return m_name;
}

void ModifyTWeTalkAIBotRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyTWeTalkAIBotRequest::GetDescription() const
{
    return m_description;
}

void ModifyTWeTalkAIBotRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyTWeTalkAIBotRequest::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void ModifyTWeTalkAIBotRequest::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

TalkSTTConfigInfo ModifyTWeTalkAIBotRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void ModifyTWeTalkAIBotRequest::SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfigInfo ModifyTWeTalkAIBotRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void ModifyTWeTalkAIBotRequest::SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfigInfo ModifyTWeTalkAIBotRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void ModifyTWeTalkAIBotRequest::SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkAgentConfigInfo ModifyTWeTalkAIBotRequest::GetAgentConfig() const
{
    return m_agentConfig;
}

void ModifyTWeTalkAIBotRequest::SetAgentConfig(const TalkAgentConfigInfo& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string ModifyTWeTalkAIBotRequest::GetCustomTools() const
{
    return m_customTools;
}

void ModifyTWeTalkAIBotRequest::SetCustomTools(const string& _customTools)
{
    m_customTools = _customTools;
    m_customToolsHasBeenSet = true;
}

bool ModifyTWeTalkAIBotRequest::CustomToolsHasBeenSet() const
{
    return m_customToolsHasBeenSet;
}


