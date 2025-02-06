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

#include <tencentcloud/lke/v20231130/model/ModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModelInfo::ModelInfo() :
    m_modelNameHasBeenSet(false),
    m_modelDescHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_promptWordsLimitHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_isFreeHasBeenSet(false)
{
}

CoreInternalOutcome ModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelDesc") && !value["ModelDesc"].IsNull())
    {
        if (!value["ModelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelDesc = string(value["ModelDesc"].GetString());
        m_modelDescHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ResourceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetUint64();
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("PromptWordsLimit") && !value["PromptWordsLimit"].IsNull())
    {
        if (!value["PromptWordsLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.PromptWordsLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptWordsLimit = string(value["PromptWordsLimit"].GetString());
        m_promptWordsLimitHasBeenSet = true;
    }

    if (value.HasMember("TopP") && !value["TopP"].IsNull())
    {
        if (!value["TopP"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.TopP` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topP.Deserialize(value["TopP"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topPHasBeenSet = true;
    }

    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.Temperature` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_temperature.Deserialize(value["Temperature"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("MaxTokens") && !value["MaxTokens"].IsNull())
    {
        if (!value["MaxTokens"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.MaxTokens` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxTokens.Deserialize(value["MaxTokens"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxTokensHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("IsFree") && !value["IsFree"].IsNull())
    {
        if (!value["IsFree"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.IsFree` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFree = value["IsFree"].GetBool();
        m_isFreeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

    if (m_promptWordsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptWordsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptWordsLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topP.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_temperature.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxTokens.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFree, allocator);
    }

}


string ModelInfo::GetModelName() const
{
    return m_modelName;
}

void ModelInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelInfo::GetModelDesc() const
{
    return m_modelDesc;
}

void ModelInfo::SetModelDesc(const string& _modelDesc)
{
    m_modelDesc = _modelDesc;
    m_modelDescHasBeenSet = true;
}

bool ModelInfo::ModelDescHasBeenSet() const
{
    return m_modelDescHasBeenSet;
}

string ModelInfo::GetAliasName() const
{
    return m_aliasName;
}

void ModelInfo::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool ModelInfo::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

uint64_t ModelInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void ModelInfo::SetResourceStatus(const uint64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool ModelInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

string ModelInfo::GetPromptWordsLimit() const
{
    return m_promptWordsLimit;
}

void ModelInfo::SetPromptWordsLimit(const string& _promptWordsLimit)
{
    m_promptWordsLimit = _promptWordsLimit;
    m_promptWordsLimitHasBeenSet = true;
}

bool ModelInfo::PromptWordsLimitHasBeenSet() const
{
    return m_promptWordsLimitHasBeenSet;
}

ModelParameter ModelInfo::GetTopP() const
{
    return m_topP;
}

void ModelInfo::SetTopP(const ModelParameter& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ModelInfo::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

ModelParameter ModelInfo::GetTemperature() const
{
    return m_temperature;
}

void ModelInfo::SetTemperature(const ModelParameter& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ModelInfo::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

ModelParameter ModelInfo::GetMaxTokens() const
{
    return m_maxTokens;
}

void ModelInfo::SetMaxTokens(const ModelParameter& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool ModelInfo::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

string ModelInfo::GetSource() const
{
    return m_source;
}

void ModelInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModelInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ModelInfo::GetIcon() const
{
    return m_icon;
}

void ModelInfo::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ModelInfo::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

bool ModelInfo::GetIsFree() const
{
    return m_isFree;
}

void ModelInfo::SetIsFree(const bool& _isFree)
{
    m_isFree = _isFree;
    m_isFreeHasBeenSet = true;
}

bool ModelInfo::IsFreeHasBeenSet() const
{
    return m_isFreeHasBeenSet;
}

