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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkAIBotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeTalkAIBotRequest::CreateTWeTalkAIBotRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string CreateTWeTalkAIBotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTWeTalkAIBotRequest::GetName() const
{
    return m_name;
}

void CreateTWeTalkAIBotRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateTWeTalkAIBotRequest::GetDescription() const
{
    return m_description;
}

void CreateTWeTalkAIBotRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateTWeTalkAIBotRequest::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void CreateTWeTalkAIBotRequest::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

TalkSTTConfigInfo CreateTWeTalkAIBotRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void CreateTWeTalkAIBotRequest::SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfigInfo CreateTWeTalkAIBotRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void CreateTWeTalkAIBotRequest::SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfigInfo CreateTWeTalkAIBotRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void CreateTWeTalkAIBotRequest::SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkAgentConfigInfo CreateTWeTalkAIBotRequest::GetAgentConfig() const
{
    return m_agentConfig;
}

void CreateTWeTalkAIBotRequest::SetAgentConfig(const TalkAgentConfigInfo& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string CreateTWeTalkAIBotRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateTWeTalkAIBotRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateTWeTalkAIBotRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


