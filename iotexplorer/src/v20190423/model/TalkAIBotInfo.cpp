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

#include <tencentcloud/iotexplorer/v20190423/model/TalkAIBotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkAIBotInfo::TalkAIBotInfo() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_productListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_boundProductsHasBeenSet(false),
    m_customToolsHasBeenSet(false)
{
}

CoreInternalOutcome TalkAIBotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("BotId") && !value["BotId"].IsNull())
    {
        if (!value["BotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.BotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botId = string(value["BotId"].GetString());
        m_botIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TargetLanguage") && !value["TargetLanguage"].IsNull())
    {
        if (!value["TargetLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.TargetLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLanguage = string(value["TargetLanguage"].GetString());
        m_targetLanguageHasBeenSet = true;
    }

    if (value.HasMember("STTConfig") && !value["STTConfig"].IsNull())
    {
        if (!value["STTConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.STTConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.LLMConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.TTSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSConfig.Deserialize(value["TTSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSConfigHasBeenSet = true;
    }

    if (value.HasMember("AgentConfig") && !value["AgentConfig"].IsNull())
    {
        if (!value["AgentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.AgentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentConfig.Deserialize(value["AgentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentConfigHasBeenSet = true;
    }

    if (value.HasMember("ProductList") && !value["ProductList"].IsNull())
    {
        if (!value["ProductList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.ProductList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productList.Deserialize(value["ProductList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BoundProducts") && !value["BoundProducts"].IsNull())
    {
        if (!value["BoundProducts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.BoundProducts` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundProducts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TalkProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_boundProducts.push_back(item);
        }
        m_boundProductsHasBeenSet = true;
    }

    if (value.HasMember("CustomTools") && !value["CustomTools"].IsNull())
    {
        if (!value["CustomTools"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAIBotInfo.CustomTools` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customTools = string(value["CustomTools"].GetString());
        m_customToolsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkAIBotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
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

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
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

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productList.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_boundProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_boundProducts.begin(); itr != m_boundProducts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customTools.c_str(), allocator).Move(), allocator);
    }

}


int64_t TalkAIBotInfo::GetUin() const
{
    return m_uin;
}

void TalkAIBotInfo::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TalkAIBotInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t TalkAIBotInfo::GetAppId() const
{
    return m_appId;
}

void TalkAIBotInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TalkAIBotInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TalkAIBotInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TalkAIBotInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TalkAIBotInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TalkAIBotInfo::GetBotId() const
{
    return m_botId;
}

void TalkAIBotInfo::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool TalkAIBotInfo::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string TalkAIBotInfo::GetName() const
{
    return m_name;
}

void TalkAIBotInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TalkAIBotInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TalkAIBotInfo::GetDescription() const
{
    return m_description;
}

void TalkAIBotInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TalkAIBotInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TalkAIBotInfo::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void TalkAIBotInfo::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool TalkAIBotInfo::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

TalkSTTConfigInfo TalkAIBotInfo::GetSTTConfig() const
{
    return m_sTTConfig;
}

void TalkAIBotInfo::SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool TalkAIBotInfo::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfigInfo TalkAIBotInfo::GetLLMConfig() const
{
    return m_lLMConfig;
}

void TalkAIBotInfo::SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool TalkAIBotInfo::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfigInfo TalkAIBotInfo::GetTTSConfig() const
{
    return m_tTSConfig;
}

void TalkAIBotInfo::SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool TalkAIBotInfo::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkAgentConfigInfo TalkAIBotInfo::GetAgentConfig() const
{
    return m_agentConfig;
}

void TalkAIBotInfo::SetAgentConfig(const TalkAgentConfigInfo& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool TalkAIBotInfo::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

TalkProductInfo TalkAIBotInfo::GetProductList() const
{
    return m_productList;
}

void TalkAIBotInfo::SetProductList(const TalkProductInfo& _productList)
{
    m_productList = _productList;
    m_productListHasBeenSet = true;
}

bool TalkAIBotInfo::ProductListHasBeenSet() const
{
    return m_productListHasBeenSet;
}

int64_t TalkAIBotInfo::GetCreateTime() const
{
    return m_createTime;
}

void TalkAIBotInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TalkAIBotInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TalkAIBotInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TalkAIBotInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TalkAIBotInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<TalkProductInfo> TalkAIBotInfo::GetBoundProducts() const
{
    return m_boundProducts;
}

void TalkAIBotInfo::SetBoundProducts(const vector<TalkProductInfo>& _boundProducts)
{
    m_boundProducts = _boundProducts;
    m_boundProductsHasBeenSet = true;
}

bool TalkAIBotInfo::BoundProductsHasBeenSet() const
{
    return m_boundProductsHasBeenSet;
}

string TalkAIBotInfo::GetCustomTools() const
{
    return m_customTools;
}

void TalkAIBotInfo::SetCustomTools(const string& _customTools)
{
    m_customTools = _customTools;
    m_customToolsHasBeenSet = true;
}

bool TalkAIBotInfo::CustomToolsHasBeenSet() const
{
    return m_customToolsHasBeenSet;
}

