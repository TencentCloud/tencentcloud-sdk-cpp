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

#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkLLMConfig::TalkLLMConfig() :
    m_typeHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_historyHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_extraBodyHasBeenSet(false),
    m_aDPHasBeenSet(false)
{
}

CoreInternalOutcome TalkLLMConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }

    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.Temperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_temperature = value["Temperature"].GetDouble();
        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("History") && !value["History"].IsNull())
    {
        if (!value["History"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.History` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_history = value["History"].GetInt64();
        m_historyHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("BaseUrl") && !value["BaseUrl"].IsNull())
    {
        if (!value["BaseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.BaseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseUrl = string(value["BaseUrl"].GetString());
        m_baseUrlHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("ExtraBody") && !value["ExtraBody"].IsNull())
    {
        if (!value["ExtraBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.ExtraBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraBody = string(value["ExtraBody"].GetString());
        m_extraBodyHasBeenSet = true;
    }

    if (value.HasMember("ADP") && !value["ADP"].IsNull())
    {
        if (!value["ADP"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkLLMConfig.ADP` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aDP.Deserialize(value["ADP"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aDPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkLLMConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_temperature, allocator);
    }

    if (m_historyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "History";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_history, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_baseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_extraBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraBody.c_str(), allocator).Move(), allocator);
    }

    if (m_aDPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ADP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aDP.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TalkLLMConfig::GetType() const
{
    return m_type;
}

void TalkLLMConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TalkLLMConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TalkLLMConfig::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void TalkLLMConfig::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool TalkLLMConfig::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

double TalkLLMConfig::GetTemperature() const
{
    return m_temperature;
}

void TalkLLMConfig::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool TalkLLMConfig::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

int64_t TalkLLMConfig::GetHistory() const
{
    return m_history;
}

void TalkLLMConfig::SetHistory(const int64_t& _history)
{
    m_history = _history;
    m_historyHasBeenSet = true;
}

bool TalkLLMConfig::HistoryHasBeenSet() const
{
    return m_historyHasBeenSet;
}

int64_t TalkLLMConfig::GetTimeout() const
{
    return m_timeout;
}

void TalkLLMConfig::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool TalkLLMConfig::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string TalkLLMConfig::GetBaseUrl() const
{
    return m_baseUrl;
}

void TalkLLMConfig::SetBaseUrl(const string& _baseUrl)
{
    m_baseUrl = _baseUrl;
    m_baseUrlHasBeenSet = true;
}

bool TalkLLMConfig::BaseUrlHasBeenSet() const
{
    return m_baseUrlHasBeenSet;
}

string TalkLLMConfig::GetModel() const
{
    return m_model;
}

void TalkLLMConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TalkLLMConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TalkLLMConfig::GetApiKey() const
{
    return m_apiKey;
}

void TalkLLMConfig::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool TalkLLMConfig::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string TalkLLMConfig::GetExtraBody() const
{
    return m_extraBody;
}

void TalkLLMConfig::SetExtraBody(const string& _extraBody)
{
    m_extraBody = _extraBody;
    m_extraBodyHasBeenSet = true;
}

bool TalkLLMConfig::ExtraBodyHasBeenSet() const
{
    return m_extraBodyHasBeenSet;
}

ADPConfig TalkLLMConfig::GetADP() const
{
    return m_aDP;
}

void TalkLLMConfig::SetADP(const ADPConfig& _aDP)
{
    m_aDP = _aDP;
    m_aDPHasBeenSet = true;
}

bool TalkLLMConfig::ADPHasBeenSet() const
{
    return m_aDPHasBeenSet;
}

