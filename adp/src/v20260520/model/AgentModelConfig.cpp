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

#include <tencentcloud/adp/v20260520/model/AgentModelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentModelConfig::AgentModelConfig() :
    m_modelIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_contextWordsLimitHasBeenSet(false),
    m_instructionsWordsLimitHasBeenSet(false),
    m_modelParametersHasBeenSet(false)
{
}

CoreInternalOutcome AgentModelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelConfig.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelConfig.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("ContextWordsLimit") && !value["ContextWordsLimit"].IsNull())
    {
        if (!value["ContextWordsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelConfig.ContextWordsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contextWordsLimit = value["ContextWordsLimit"].GetUint64();
        m_contextWordsLimitHasBeenSet = true;
    }

    if (value.HasMember("InstructionsWordsLimit") && !value["InstructionsWordsLimit"].IsNull())
    {
        if (!value["InstructionsWordsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelConfig.InstructionsWordsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instructionsWordsLimit = value["InstructionsWordsLimit"].GetUint64();
        m_instructionsWordsLimitHasBeenSet = true;
    }

    if (value.HasMember("ModelParameters") && !value["ModelParameters"].IsNull())
    {
        if (!value["ModelParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelConfig.ModelParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelParameters.Deserialize(value["ModelParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentModelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_contextWordsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextWordsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contextWordsLimit, allocator);
    }

    if (m_instructionsWordsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstructionsWordsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instructionsWordsLimit, allocator);
    }

    if (m_modelParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentModelConfig::GetModelId() const
{
    return m_modelId;
}

void AgentModelConfig::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool AgentModelConfig::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string AgentModelConfig::GetAlias() const
{
    return m_alias;
}

void AgentModelConfig::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool AgentModelConfig::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t AgentModelConfig::GetContextWordsLimit() const
{
    return m_contextWordsLimit;
}

void AgentModelConfig::SetContextWordsLimit(const uint64_t& _contextWordsLimit)
{
    m_contextWordsLimit = _contextWordsLimit;
    m_contextWordsLimitHasBeenSet = true;
}

bool AgentModelConfig::ContextWordsLimitHasBeenSet() const
{
    return m_contextWordsLimitHasBeenSet;
}

uint64_t AgentModelConfig::GetInstructionsWordsLimit() const
{
    return m_instructionsWordsLimit;
}

void AgentModelConfig::SetInstructionsWordsLimit(const uint64_t& _instructionsWordsLimit)
{
    m_instructionsWordsLimit = _instructionsWordsLimit;
    m_instructionsWordsLimitHasBeenSet = true;
}

bool AgentModelConfig::InstructionsWordsLimitHasBeenSet() const
{
    return m_instructionsWordsLimitHasBeenSet;
}

ModelParams AgentModelConfig::GetModelParameters() const
{
    return m_modelParameters;
}

void AgentModelConfig::SetModelParameters(const ModelParams& _modelParameters)
{
    m_modelParameters = _modelParameters;
    m_modelParametersHasBeenSet = true;
}

bool AgentModelConfig::ModelParametersHasBeenSet() const
{
    return m_modelParametersHasBeenSet;
}

