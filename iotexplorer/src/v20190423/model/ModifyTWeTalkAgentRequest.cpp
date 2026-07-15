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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeTalkAgentRequest::ModifyTWeTalkAgentRequest() :
    m_agentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_conversationConfigHasBeenSet(false),
    m_memoryConfigHasBeenSet(false),
    m_iOTToolsHasBeenSet(false),
    m_webhookToolsHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string ModifyTWeTalkAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
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

    if (m_conversationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conversationConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_memoryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memoryConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iOTToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOTTools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iOTTools.begin(); itr != m_iOTTools.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_webhookToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookTools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webhookTools.begin(); itr != m_webhookTools.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeTalkAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void ModifyTWeTalkAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ModifyTWeTalkAgentRequest::GetName() const
{
    return m_name;
}

void ModifyTWeTalkAgentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyTWeTalkAgentRequest::GetDescription() const
{
    return m_description;
}

void ModifyTWeTalkAgentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

TalkSTTConfig ModifyTWeTalkAgentRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void ModifyTWeTalkAgentRequest::SetSTTConfig(const TalkSTTConfig& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfig ModifyTWeTalkAgentRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void ModifyTWeTalkAgentRequest::SetLLMConfig(const TalkLLMConfig& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfig ModifyTWeTalkAgentRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void ModifyTWeTalkAgentRequest::SetTTSConfig(const TalkTTSConfig& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkConversationConfig ModifyTWeTalkAgentRequest::GetConversationConfig() const
{
    return m_conversationConfig;
}

void ModifyTWeTalkAgentRequest::SetConversationConfig(const TalkConversationConfig& _conversationConfig)
{
    m_conversationConfig = _conversationConfig;
    m_conversationConfigHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::ConversationConfigHasBeenSet() const
{
    return m_conversationConfigHasBeenSet;
}

TalkMemoryConfig ModifyTWeTalkAgentRequest::GetMemoryConfig() const
{
    return m_memoryConfig;
}

void ModifyTWeTalkAgentRequest::SetMemoryConfig(const TalkMemoryConfig& _memoryConfig)
{
    m_memoryConfig = _memoryConfig;
    m_memoryConfigHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::MemoryConfigHasBeenSet() const
{
    return m_memoryConfigHasBeenSet;
}

vector<TalkIOTTool> ModifyTWeTalkAgentRequest::GetIOTTools() const
{
    return m_iOTTools;
}

void ModifyTWeTalkAgentRequest::SetIOTTools(const vector<TalkIOTTool>& _iOTTools)
{
    m_iOTTools = _iOTTools;
    m_iOTToolsHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::IOTToolsHasBeenSet() const
{
    return m_iOTToolsHasBeenSet;
}

vector<TalkWebhookTool> ModifyTWeTalkAgentRequest::GetWebhookTools() const
{
    return m_webhookTools;
}

void ModifyTWeTalkAgentRequest::SetWebhookTools(const vector<TalkWebhookTool>& _webhookTools)
{
    m_webhookTools = _webhookTools;
    m_webhookToolsHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::WebhookToolsHasBeenSet() const
{
    return m_webhookToolsHasBeenSet;
}

string ModifyTWeTalkAgentRequest::GetMetadata() const
{
    return m_metadata;
}

void ModifyTWeTalkAgentRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool ModifyTWeTalkAgentRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


