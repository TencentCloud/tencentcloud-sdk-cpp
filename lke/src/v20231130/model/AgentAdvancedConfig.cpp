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

#include <tencentcloud/lke/v20231130/model/AgentAdvancedConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentAdvancedConfig::AgentAdvancedConfig() :
    m_enableClarificationHasBeenSet(false),
    m_thinkingModeHasBeenSet(false),
    m_maxReasoningRoundHasBeenSet(false),
    m_historyLimitHasBeenSet(false),
    m_enableStructuredOutputHasBeenSet(false),
    m_structuredOutputConfigHasBeenSet(false),
    m_agentOutputConfigHasBeenSet(false),
    m_clarificationConfigHasBeenSet(false)
{
}

CoreInternalOutcome AgentAdvancedConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableClarification") && !value["EnableClarification"].IsNull())
    {
        if (!value["EnableClarification"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.EnableClarification` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableClarification = value["EnableClarification"].GetBool();
        m_enableClarificationHasBeenSet = true;
    }

    if (value.HasMember("ThinkingMode") && !value["ThinkingMode"].IsNull())
    {
        if (!value["ThinkingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.ThinkingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thinkingMode = value["ThinkingMode"].GetInt64();
        m_thinkingModeHasBeenSet = true;
    }

    if (value.HasMember("MaxReasoningRound") && !value["MaxReasoningRound"].IsNull())
    {
        if (!value["MaxReasoningRound"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.MaxReasoningRound` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReasoningRound = value["MaxReasoningRound"].GetUint64();
        m_maxReasoningRoundHasBeenSet = true;
    }

    if (value.HasMember("HistoryLimit") && !value["HistoryLimit"].IsNull())
    {
        if (!value["HistoryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.HistoryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_historyLimit = value["HistoryLimit"].GetUint64();
        m_historyLimitHasBeenSet = true;
    }

    if (value.HasMember("EnableStructuredOutput") && !value["EnableStructuredOutput"].IsNull())
    {
        if (!value["EnableStructuredOutput"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.EnableStructuredOutput` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStructuredOutput = value["EnableStructuredOutput"].GetBool();
        m_enableStructuredOutputHasBeenSet = true;
    }

    if (value.HasMember("StructuredOutputConfig") && !value["StructuredOutputConfig"].IsNull())
    {
        if (!value["StructuredOutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.StructuredOutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_structuredOutputConfig.Deserialize(value["StructuredOutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_structuredOutputConfigHasBeenSet = true;
    }

    if (value.HasMember("AgentOutputConfig") && !value["AgentOutputConfig"].IsNull())
    {
        if (!value["AgentOutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.AgentOutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentOutputConfig.Deserialize(value["AgentOutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentOutputConfigHasBeenSet = true;
    }

    if (value.HasMember("ClarificationConfig") && !value["ClarificationConfig"].IsNull())
    {
        if (!value["ClarificationConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.ClarificationConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clarificationConfig.Deserialize(value["ClarificationConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clarificationConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAdvancedConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableClarificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClarification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableClarification, allocator);
    }

    if (m_thinkingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThinkingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thinkingMode, allocator);
    }

    if (m_maxReasoningRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReasoningRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReasoningRound, allocator);
    }

    if (m_historyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyLimit, allocator);
    }

    if (m_enableStructuredOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStructuredOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStructuredOutput, allocator);
    }

    if (m_structuredOutputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredOutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_structuredOutputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_agentOutputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentOutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentOutputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clarificationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClarificationConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clarificationConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AgentAdvancedConfig::GetEnableClarification() const
{
    return m_enableClarification;
}

void AgentAdvancedConfig::SetEnableClarification(const bool& _enableClarification)
{
    m_enableClarification = _enableClarification;
    m_enableClarificationHasBeenSet = true;
}

bool AgentAdvancedConfig::EnableClarificationHasBeenSet() const
{
    return m_enableClarificationHasBeenSet;
}

int64_t AgentAdvancedConfig::GetThinkingMode() const
{
    return m_thinkingMode;
}

void AgentAdvancedConfig::SetThinkingMode(const int64_t& _thinkingMode)
{
    m_thinkingMode = _thinkingMode;
    m_thinkingModeHasBeenSet = true;
}

bool AgentAdvancedConfig::ThinkingModeHasBeenSet() const
{
    return m_thinkingModeHasBeenSet;
}

uint64_t AgentAdvancedConfig::GetMaxReasoningRound() const
{
    return m_maxReasoningRound;
}

void AgentAdvancedConfig::SetMaxReasoningRound(const uint64_t& _maxReasoningRound)
{
    m_maxReasoningRound = _maxReasoningRound;
    m_maxReasoningRoundHasBeenSet = true;
}

bool AgentAdvancedConfig::MaxReasoningRoundHasBeenSet() const
{
    return m_maxReasoningRoundHasBeenSet;
}

uint64_t AgentAdvancedConfig::GetHistoryLimit() const
{
    return m_historyLimit;
}

void AgentAdvancedConfig::SetHistoryLimit(const uint64_t& _historyLimit)
{
    m_historyLimit = _historyLimit;
    m_historyLimitHasBeenSet = true;
}

bool AgentAdvancedConfig::HistoryLimitHasBeenSet() const
{
    return m_historyLimitHasBeenSet;
}

bool AgentAdvancedConfig::GetEnableStructuredOutput() const
{
    return m_enableStructuredOutput;
}

void AgentAdvancedConfig::SetEnableStructuredOutput(const bool& _enableStructuredOutput)
{
    m_enableStructuredOutput = _enableStructuredOutput;
    m_enableStructuredOutputHasBeenSet = true;
}

bool AgentAdvancedConfig::EnableStructuredOutputHasBeenSet() const
{
    return m_enableStructuredOutputHasBeenSet;
}

StructuredOutputConfig AgentAdvancedConfig::GetStructuredOutputConfig() const
{
    return m_structuredOutputConfig;
}

void AgentAdvancedConfig::SetStructuredOutputConfig(const StructuredOutputConfig& _structuredOutputConfig)
{
    m_structuredOutputConfig = _structuredOutputConfig;
    m_structuredOutputConfigHasBeenSet = true;
}

bool AgentAdvancedConfig::StructuredOutputConfigHasBeenSet() const
{
    return m_structuredOutputConfigHasBeenSet;
}

AgentOutputConfig AgentAdvancedConfig::GetAgentOutputConfig() const
{
    return m_agentOutputConfig;
}

void AgentAdvancedConfig::SetAgentOutputConfig(const AgentOutputConfig& _agentOutputConfig)
{
    m_agentOutputConfig = _agentOutputConfig;
    m_agentOutputConfigHasBeenSet = true;
}

bool AgentAdvancedConfig::AgentOutputConfigHasBeenSet() const
{
    return m_agentOutputConfigHasBeenSet;
}

ClarificationConfig AgentAdvancedConfig::GetClarificationConfig() const
{
    return m_clarificationConfig;
}

void AgentAdvancedConfig::SetClarificationConfig(const ClarificationConfig& _clarificationConfig)
{
    m_clarificationConfig = _clarificationConfig;
    m_clarificationConfigHasBeenSet = true;
}

bool AgentAdvancedConfig::ClarificationConfigHasBeenSet() const
{
    return m_clarificationConfigHasBeenSet;
}

