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

#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkLLMConfigInfo::TalkLLMConfigInfo() :
    m_lLMTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_streamingHasBeenSet(false),
    m_configHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_topPHasBeenSet(false)
{
}

CoreInternalOutcome TalkLLMConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LLMType") && !value["LLMType"].IsNull())
    {
        if (!value["LLMType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.LLMType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lLMType = string(value["LLMType"].GetString());
        m_lLMTypeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Streaming") && !value["Streaming"].IsNull())
    {
        if (!value["Streaming"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.Streaming` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_streaming = value["Streaming"].GetBool();
        m_streamingHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.Temperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_temperature = value["Temperature"].GetDouble();
        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("MaxTokens") && !value["MaxTokens"].IsNull())
    {
        if (!value["MaxTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.MaxTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTokens = value["MaxTokens"].GetInt64();
        m_maxTokensHasBeenSet = true;
    }

    if (value.HasMember("TopP") && !value["TopP"].IsNull())
    {
        if (!value["TopP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfigInfo.TopP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topP = value["TopP"].GetDouble();
        m_topPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkLLMConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lLMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lLMType.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_streamingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Streaming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streaming, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_temperature, allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTokens, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topP, allocator);
    }

}


string TalkLLMConfigInfo::GetLLMType() const
{
    return m_lLMType;
}

void TalkLLMConfigInfo::SetLLMType(const string& _lLMType)
{
    m_lLMType = _lLMType;
    m_lLMTypeHasBeenSet = true;
}

bool TalkLLMConfigInfo::LLMTypeHasBeenSet() const
{
    return m_lLMTypeHasBeenSet;
}

bool TalkLLMConfigInfo::GetEnabled() const
{
    return m_enabled;
}

void TalkLLMConfigInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TalkLLMConfigInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string TalkLLMConfigInfo::GetModel() const
{
    return m_model;
}

void TalkLLMConfigInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TalkLLMConfigInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool TalkLLMConfigInfo::GetStreaming() const
{
    return m_streaming;
}

void TalkLLMConfigInfo::SetStreaming(const bool& _streaming)
{
    m_streaming = _streaming;
    m_streamingHasBeenSet = true;
}

bool TalkLLMConfigInfo::StreamingHasBeenSet() const
{
    return m_streamingHasBeenSet;
}

string TalkLLMConfigInfo::GetConfig() const
{
    return m_config;
}

void TalkLLMConfigInfo::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TalkLLMConfigInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

double TalkLLMConfigInfo::GetTemperature() const
{
    return m_temperature;
}

void TalkLLMConfigInfo::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool TalkLLMConfigInfo::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

int64_t TalkLLMConfigInfo::GetMaxTokens() const
{
    return m_maxTokens;
}

void TalkLLMConfigInfo::SetMaxTokens(const int64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool TalkLLMConfigInfo::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

double TalkLLMConfigInfo::GetTopP() const
{
    return m_topP;
}

void TalkLLMConfigInfo::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool TalkLLMConfigInfo::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

