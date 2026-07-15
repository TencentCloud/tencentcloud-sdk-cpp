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

#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkAgentInfo::TalkAgentInfo() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
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
    m_metadataHasBeenSet(false),
    m_bindingsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TalkAgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("STTConfig") && !value["STTConfig"].IsNull())
    {
        if (!value["STTConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.STTConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sTTConfig.Deserialize(value["STTConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sTTConfigHasBeenSet = true;
    }

    if (value.HasMember("LLMConfig") && !value["LLMConfig"].IsNull())
    {
        if (!value["LLMConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.LLMConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMConfig.Deserialize(value["LLMConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMConfigHasBeenSet = true;
    }

    if (value.HasMember("TTSConfig") && !value["TTSConfig"].IsNull())
    {
        if (!value["TTSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.TTSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSConfig.Deserialize(value["TTSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSConfigHasBeenSet = true;
    }

    if (value.HasMember("ConversationConfig") && !value["ConversationConfig"].IsNull())
    {
        if (!value["ConversationConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.ConversationConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conversationConfig.Deserialize(value["ConversationConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conversationConfigHasBeenSet = true;
    }

    if (value.HasMember("MemoryConfig") && !value["MemoryConfig"].IsNull())
    {
        if (!value["MemoryConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.MemoryConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memoryConfig.Deserialize(value["MemoryConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memoryConfigHasBeenSet = true;
    }

    if (value.HasMember("IOTTools") && !value["IOTTools"].IsNull())
    {
        if (!value["IOTTools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.IOTTools` is not array type"));

        const rapidjson::Value &tmpValue = value["IOTTools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TalkIOTTool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iOTTools.push_back(item);
        }
        m_iOTToolsHasBeenSet = true;
    }

    if (value.HasMember("WebhookTools") && !value["WebhookTools"].IsNull())
    {
        if (!value["WebhookTools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.WebhookTools` is not array type"));

        const rapidjson::Value &tmpValue = value["WebhookTools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TalkWebhookTool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webhookTools.push_back(item);
        }
        m_webhookToolsHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Bindings") && !value["Bindings"].IsNull())
    {
        if (!value["Bindings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.Bindings` is not array type"));

        const rapidjson::Value &tmpValue = value["Bindings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TalkAgentBinding item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindings.push_back(item);
        }
        m_bindingsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkAgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sTTConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTTConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conversationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conversationConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memoryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memoryConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iOTToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOTTools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iOTTools.begin(); itr != m_iOTTools.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webhookToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookTools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webhookTools.begin(); itr != m_webhookTools.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bindings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindings.begin(); itr != m_bindings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


int64_t TalkAgentInfo::GetUin() const
{
    return m_uin;
}

void TalkAgentInfo::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TalkAgentInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t TalkAgentInfo::GetAppId() const
{
    return m_appId;
}

void TalkAgentInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TalkAgentInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TalkAgentInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TalkAgentInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TalkAgentInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TalkAgentInfo::GetAgentId() const
{
    return m_agentId;
}

void TalkAgentInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool TalkAgentInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string TalkAgentInfo::GetName() const
{
    return m_name;
}

void TalkAgentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TalkAgentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TalkAgentInfo::GetDescription() const
{
    return m_description;
}

void TalkAgentInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TalkAgentInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

TalkSTTConfig TalkAgentInfo::GetSTTConfig() const
{
    return m_sTTConfig;
}

void TalkAgentInfo::SetSTTConfig(const TalkSTTConfig& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool TalkAgentInfo::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfig TalkAgentInfo::GetLLMConfig() const
{
    return m_lLMConfig;
}

void TalkAgentInfo::SetLLMConfig(const TalkLLMConfig& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool TalkAgentInfo::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfig TalkAgentInfo::GetTTSConfig() const
{
    return m_tTSConfig;
}

void TalkAgentInfo::SetTTSConfig(const TalkTTSConfig& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool TalkAgentInfo::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkConversationConfig TalkAgentInfo::GetConversationConfig() const
{
    return m_conversationConfig;
}

void TalkAgentInfo::SetConversationConfig(const TalkConversationConfig& _conversationConfig)
{
    m_conversationConfig = _conversationConfig;
    m_conversationConfigHasBeenSet = true;
}

bool TalkAgentInfo::ConversationConfigHasBeenSet() const
{
    return m_conversationConfigHasBeenSet;
}

TalkMemoryConfig TalkAgentInfo::GetMemoryConfig() const
{
    return m_memoryConfig;
}

void TalkAgentInfo::SetMemoryConfig(const TalkMemoryConfig& _memoryConfig)
{
    m_memoryConfig = _memoryConfig;
    m_memoryConfigHasBeenSet = true;
}

bool TalkAgentInfo::MemoryConfigHasBeenSet() const
{
    return m_memoryConfigHasBeenSet;
}

vector<TalkIOTTool> TalkAgentInfo::GetIOTTools() const
{
    return m_iOTTools;
}

void TalkAgentInfo::SetIOTTools(const vector<TalkIOTTool>& _iOTTools)
{
    m_iOTTools = _iOTTools;
    m_iOTToolsHasBeenSet = true;
}

bool TalkAgentInfo::IOTToolsHasBeenSet() const
{
    return m_iOTToolsHasBeenSet;
}

vector<TalkWebhookTool> TalkAgentInfo::GetWebhookTools() const
{
    return m_webhookTools;
}

void TalkAgentInfo::SetWebhookTools(const vector<TalkWebhookTool>& _webhookTools)
{
    m_webhookTools = _webhookTools;
    m_webhookToolsHasBeenSet = true;
}

bool TalkAgentInfo::WebhookToolsHasBeenSet() const
{
    return m_webhookToolsHasBeenSet;
}

string TalkAgentInfo::GetMetadata() const
{
    return m_metadata;
}

void TalkAgentInfo::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool TalkAgentInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

vector<TalkAgentBinding> TalkAgentInfo::GetBindings() const
{
    return m_bindings;
}

void TalkAgentInfo::SetBindings(const vector<TalkAgentBinding>& _bindings)
{
    m_bindings = _bindings;
    m_bindingsHasBeenSet = true;
}

bool TalkAgentInfo::BindingsHasBeenSet() const
{
    return m_bindingsHasBeenSet;
}

int64_t TalkAgentInfo::GetCreateTime() const
{
    return m_createTime;
}

void TalkAgentInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TalkAgentInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TalkAgentInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TalkAgentInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TalkAgentInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

