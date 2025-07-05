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

#include <tencentcloud/lke/v20231130/model/AgentModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentModelInfo::AgentModelInfo() :
    m_modelNameHasBeenSet(false),
    m_modelAliasNameHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_historyLimitHasBeenSet(false),
    m_modelContextWordsLimitHasBeenSet(false),
    m_instructionsWordsLimitHasBeenSet(false)
{
}

CoreInternalOutcome AgentModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelAliasName") && !value["ModelAliasName"].IsNull())
    {
        if (!value["ModelAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.ModelAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAliasName = string(value["ModelAliasName"].GetString());
        m_modelAliasNameHasBeenSet = true;
    }

    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.Temperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_temperature = value["Temperature"].GetDouble();
        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("TopP") && !value["TopP"].IsNull())
    {
        if (!value["TopP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.TopP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topP = value["TopP"].GetDouble();
        m_topPHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.IsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetBool();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("HistoryLimit") && !value["HistoryLimit"].IsNull())
    {
        if (!value["HistoryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.HistoryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_historyLimit = value["HistoryLimit"].GetUint64();
        m_historyLimitHasBeenSet = true;
    }

    if (value.HasMember("ModelContextWordsLimit") && !value["ModelContextWordsLimit"].IsNull())
    {
        if (!value["ModelContextWordsLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.ModelContextWordsLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelContextWordsLimit = string(value["ModelContextWordsLimit"].GetString());
        m_modelContextWordsLimitHasBeenSet = true;
    }

    if (value.HasMember("InstructionsWordsLimit") && !value["InstructionsWordsLimit"].IsNull())
    {
        if (!value["InstructionsWordsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentModelInfo.InstructionsWordsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instructionsWordsLimit = value["InstructionsWordsLimit"].GetUint64();
        m_instructionsWordsLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_temperature, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topP, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_historyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyLimit, allocator);
    }

    if (m_modelContextWordsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelContextWordsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelContextWordsLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionsWordsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstructionsWordsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instructionsWordsLimit, allocator);
    }

}


string AgentModelInfo::GetModelName() const
{
    return m_modelName;
}

void AgentModelInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AgentModelInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AgentModelInfo::GetModelAliasName() const
{
    return m_modelAliasName;
}

void AgentModelInfo::SetModelAliasName(const string& _modelAliasName)
{
    m_modelAliasName = _modelAliasName;
    m_modelAliasNameHasBeenSet = true;
}

bool AgentModelInfo::ModelAliasNameHasBeenSet() const
{
    return m_modelAliasNameHasBeenSet;
}

double AgentModelInfo::GetTemperature() const
{
    return m_temperature;
}

void AgentModelInfo::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool AgentModelInfo::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double AgentModelInfo::GetTopP() const
{
    return m_topP;
}

void AgentModelInfo::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool AgentModelInfo::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

bool AgentModelInfo::GetIsEnabled() const
{
    return m_isEnabled;
}

void AgentModelInfo::SetIsEnabled(const bool& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool AgentModelInfo::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

uint64_t AgentModelInfo::GetHistoryLimit() const
{
    return m_historyLimit;
}

void AgentModelInfo::SetHistoryLimit(const uint64_t& _historyLimit)
{
    m_historyLimit = _historyLimit;
    m_historyLimitHasBeenSet = true;
}

bool AgentModelInfo::HistoryLimitHasBeenSet() const
{
    return m_historyLimitHasBeenSet;
}

string AgentModelInfo::GetModelContextWordsLimit() const
{
    return m_modelContextWordsLimit;
}

void AgentModelInfo::SetModelContextWordsLimit(const string& _modelContextWordsLimit)
{
    m_modelContextWordsLimit = _modelContextWordsLimit;
    m_modelContextWordsLimitHasBeenSet = true;
}

bool AgentModelInfo::ModelContextWordsLimitHasBeenSet() const
{
    return m_modelContextWordsLimitHasBeenSet;
}

uint64_t AgentModelInfo::GetInstructionsWordsLimit() const
{
    return m_instructionsWordsLimit;
}

void AgentModelInfo::SetInstructionsWordsLimit(const uint64_t& _instructionsWordsLimit)
{
    m_instructionsWordsLimit = _instructionsWordsLimit;
    m_instructionsWordsLimitHasBeenSet = true;
}

bool AgentModelInfo::InstructionsWordsLimitHasBeenSet() const
{
    return m_instructionsWordsLimitHasBeenSet;
}

