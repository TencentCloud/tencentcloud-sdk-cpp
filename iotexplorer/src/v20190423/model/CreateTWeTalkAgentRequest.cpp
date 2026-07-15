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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeTalkAgentRequest::CreateTWeTalkAgentRequest() :
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_conversationConfigHasBeenSet(false),
    m_memoryConfigHasBeenSet(false),
    m_iOTToolsHasBeenSet(false),
    m_webhookToolsHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string CreateTWeTalkAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


TalkSTTConfig CreateTWeTalkAgentRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void CreateTWeTalkAgentRequest::SetSTTConfig(const TalkSTTConfig& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfig CreateTWeTalkAgentRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void CreateTWeTalkAgentRequest::SetLLMConfig(const TalkLLMConfig& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfig CreateTWeTalkAgentRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void CreateTWeTalkAgentRequest::SetTTSConfig(const TalkTTSConfig& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

string CreateTWeTalkAgentRequest::GetName() const
{
    return m_name;
}

void CreateTWeTalkAgentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateTWeTalkAgentRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateTWeTalkAgentRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateTWeTalkAgentRequest::GetDescription() const
{
    return m_description;
}

void CreateTWeTalkAgentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

TalkConversationConfig CreateTWeTalkAgentRequest::GetConversationConfig() const
{
    return m_conversationConfig;
}

void CreateTWeTalkAgentRequest::SetConversationConfig(const TalkConversationConfig& _conversationConfig)
{
    m_conversationConfig = _conversationConfig;
    m_conversationConfigHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::ConversationConfigHasBeenSet() const
{
    return m_conversationConfigHasBeenSet;
}

TalkMemoryConfig CreateTWeTalkAgentRequest::GetMemoryConfig() const
{
    return m_memoryConfig;
}

void CreateTWeTalkAgentRequest::SetMemoryConfig(const TalkMemoryConfig& _memoryConfig)
{
    m_memoryConfig = _memoryConfig;
    m_memoryConfigHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::MemoryConfigHasBeenSet() const
{
    return m_memoryConfigHasBeenSet;
}

vector<TalkIOTTool> CreateTWeTalkAgentRequest::GetIOTTools() const
{
    return m_iOTTools;
}

void CreateTWeTalkAgentRequest::SetIOTTools(const vector<TalkIOTTool>& _iOTTools)
{
    m_iOTTools = _iOTTools;
    m_iOTToolsHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::IOTToolsHasBeenSet() const
{
    return m_iOTToolsHasBeenSet;
}

vector<TalkWebhookTool> CreateTWeTalkAgentRequest::GetWebhookTools() const
{
    return m_webhookTools;
}

void CreateTWeTalkAgentRequest::SetWebhookTools(const vector<TalkWebhookTool>& _webhookTools)
{
    m_webhookTools = _webhookTools;
    m_webhookToolsHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::WebhookToolsHasBeenSet() const
{
    return m_webhookToolsHasBeenSet;
}

string CreateTWeTalkAgentRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateTWeTalkAgentRequest::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateTWeTalkAgentRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


