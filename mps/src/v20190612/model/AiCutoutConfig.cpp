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

#include <tencentcloud/mps/v20190612/model/AiCutoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiCutoutConfig::AiCutoutConfig() :
    m_switchHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_patternConfigHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome AiCutoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiCutoutConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiCutoutConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PatternConfig") && !value["PatternConfig"].IsNull())
    {
        if (!value["PatternConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiCutoutConfig.PatternConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_patternConfig.Deserialize(value["PatternConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_patternConfigHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiCutoutConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiCutoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_patternConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatternConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_patternConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

}


string AiCutoutConfig::GetSwitch() const
{
    return m_switch;
}

void AiCutoutConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AiCutoutConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AiCutoutConfig::GetType() const
{
    return m_type;
}

void AiCutoutConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiCutoutConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

PatternConfig AiCutoutConfig::GetPatternConfig() const
{
    return m_patternConfig;
}

void AiCutoutConfig::SetPatternConfig(const PatternConfig& _patternConfig)
{
    m_patternConfig = _patternConfig;
    m_patternConfigHasBeenSet = true;
}

bool AiCutoutConfig::PatternConfigHasBeenSet() const
{
    return m_patternConfigHasBeenSet;
}

string AiCutoutConfig::GetModel() const
{
    return m_model;
}

void AiCutoutConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AiCutoutConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

