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

#include <tencentcloud/trtc/v20190722/model/VoiceConversationLLMConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceConversationLLMConfig::VoiceConversationLLMConfig() :
    m_lLMTypeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_aPIUrlHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_thinkingModeHasBeenSet(false),
    m_maxHistoryHasBeenSet(false),
    m_maxToolRoundHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_mcpServerHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_historyMessagesHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConversationLLMConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LLMType") && !value["LLMType"].IsNull())
    {
        if (!value["LLMType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.LLMType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lLMType = string(value["LLMType"].GetString());
        m_lLMTypeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("APIUrl") && !value["APIUrl"].IsNull())
    {
        if (!value["APIUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.APIUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIUrl = string(value["APIUrl"].GetString());
        m_aPIUrlHasBeenSet = true;
    }

    if (value.HasMember("APIKey") && !value["APIKey"].IsNull())
    {
        if (!value["APIKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.APIKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIKey = string(value["APIKey"].GetString());
        m_aPIKeyHasBeenSet = true;
    }

    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }

    if (value.HasMember("FailureMessage") && !value["FailureMessage"].IsNull())
    {
        if (!value["FailureMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.FailureMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMessage = string(value["FailureMessage"].GetString());
        m_failureMessageHasBeenSet = true;
    }

    if (value.HasMember("MaxTokens") && !value["MaxTokens"].IsNull())
    {
        if (!value["MaxTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.MaxTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTokens = value["MaxTokens"].GetUint64();
        m_maxTokensHasBeenSet = true;
    }

    if (value.HasMember("ThinkingMode") && !value["ThinkingMode"].IsNull())
    {
        if (!value["ThinkingMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.ThinkingMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_thinkingMode = value["ThinkingMode"].GetBool();
        m_thinkingModeHasBeenSet = true;
    }

    if (value.HasMember("MaxHistory") && !value["MaxHistory"].IsNull())
    {
        if (!value["MaxHistory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.MaxHistory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxHistory = value["MaxHistory"].GetUint64();
        m_maxHistoryHasBeenSet = true;
    }

    if (value.HasMember("MaxToolRound") && !value["MaxToolRound"].IsNull())
    {
        if (!value["MaxToolRound"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.MaxToolRound` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxToolRound = value["MaxToolRound"].GetUint64();
        m_maxToolRoundHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.Temperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_temperature = value["Temperature"].GetDouble();
        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("TopP") && !value["TopP"].IsNull())
    {
        if (!value["TopP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.TopP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topP = value["TopP"].GetDouble();
        m_topPHasBeenSet = true;
    }

    if (value.HasMember("McpServer") && !value["McpServer"].IsNull())
    {
        if (!value["McpServer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.McpServer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcpServer.Deserialize(value["McpServer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcpServerHasBeenSet = true;
    }

    if (value.HasMember("CustomHeaders") && !value["CustomHeaders"].IsNull())
    {
        if (!value["CustomHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.CustomHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customHeaders.push_back(item);
        }
        m_customHeadersHasBeenSet = true;
    }

    if (value.HasMember("CustomFields") && !value["CustomFields"].IsNull())
    {
        if (!value["CustomFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.CustomFields` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customFields.push_back(item);
        }
        m_customFieldsHasBeenSet = true;
    }

    if (value.HasMember("HistoryMessages") && !value["HistoryMessages"].IsNull())
    {
        if (!value["HistoryMessages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationLLMConfig.HistoryMessages` is not array type"));

        const rapidjson::Value &tmpValue = value["HistoryMessages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VoiceConversationHistoryMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_historyMessages.push_back(item);
        }
        m_historyMessagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConversationLLMConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lLMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lLMType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIKey.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_failureMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTokens, allocator);
    }

    if (m_thinkingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThinkingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thinkingMode, allocator);
    }

    if (m_maxHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxHistory, allocator);
    }

    if (m_maxToolRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxToolRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxToolRound, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
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

    if (m_mcpServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcpServer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customHeaders.begin(); itr != m_customHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_historyMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_historyMessages.begin(); itr != m_historyMessages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VoiceConversationLLMConfig::GetLLMType() const
{
    return m_lLMType;
}

void VoiceConversationLLMConfig::SetLLMType(const string& _lLMType)
{
    m_lLMType = _lLMType;
    m_lLMTypeHasBeenSet = true;
}

bool VoiceConversationLLMConfig::LLMTypeHasBeenSet() const
{
    return m_lLMTypeHasBeenSet;
}

string VoiceConversationLLMConfig::GetModel() const
{
    return m_model;
}

void VoiceConversationLLMConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool VoiceConversationLLMConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string VoiceConversationLLMConfig::GetAPIUrl() const
{
    return m_aPIUrl;
}

void VoiceConversationLLMConfig::SetAPIUrl(const string& _aPIUrl)
{
    m_aPIUrl = _aPIUrl;
    m_aPIUrlHasBeenSet = true;
}

bool VoiceConversationLLMConfig::APIUrlHasBeenSet() const
{
    return m_aPIUrlHasBeenSet;
}

string VoiceConversationLLMConfig::GetAPIKey() const
{
    return m_aPIKey;
}

void VoiceConversationLLMConfig::SetAPIKey(const string& _aPIKey)
{
    m_aPIKey = _aPIKey;
    m_aPIKeyHasBeenSet = true;
}

bool VoiceConversationLLMConfig::APIKeyHasBeenSet() const
{
    return m_aPIKeyHasBeenSet;
}

string VoiceConversationLLMConfig::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void VoiceConversationLLMConfig::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool VoiceConversationLLMConfig::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string VoiceConversationLLMConfig::GetFailureMessage() const
{
    return m_failureMessage;
}

void VoiceConversationLLMConfig::SetFailureMessage(const string& _failureMessage)
{
    m_failureMessage = _failureMessage;
    m_failureMessageHasBeenSet = true;
}

bool VoiceConversationLLMConfig::FailureMessageHasBeenSet() const
{
    return m_failureMessageHasBeenSet;
}

uint64_t VoiceConversationLLMConfig::GetMaxTokens() const
{
    return m_maxTokens;
}

void VoiceConversationLLMConfig::SetMaxTokens(const uint64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool VoiceConversationLLMConfig::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

bool VoiceConversationLLMConfig::GetThinkingMode() const
{
    return m_thinkingMode;
}

void VoiceConversationLLMConfig::SetThinkingMode(const bool& _thinkingMode)
{
    m_thinkingMode = _thinkingMode;
    m_thinkingModeHasBeenSet = true;
}

bool VoiceConversationLLMConfig::ThinkingModeHasBeenSet() const
{
    return m_thinkingModeHasBeenSet;
}

uint64_t VoiceConversationLLMConfig::GetMaxHistory() const
{
    return m_maxHistory;
}

void VoiceConversationLLMConfig::SetMaxHistory(const uint64_t& _maxHistory)
{
    m_maxHistory = _maxHistory;
    m_maxHistoryHasBeenSet = true;
}

bool VoiceConversationLLMConfig::MaxHistoryHasBeenSet() const
{
    return m_maxHistoryHasBeenSet;
}

uint64_t VoiceConversationLLMConfig::GetMaxToolRound() const
{
    return m_maxToolRound;
}

void VoiceConversationLLMConfig::SetMaxToolRound(const uint64_t& _maxToolRound)
{
    m_maxToolRound = _maxToolRound;
    m_maxToolRoundHasBeenSet = true;
}

bool VoiceConversationLLMConfig::MaxToolRoundHasBeenSet() const
{
    return m_maxToolRoundHasBeenSet;
}

uint64_t VoiceConversationLLMConfig::GetTimeout() const
{
    return m_timeout;
}

void VoiceConversationLLMConfig::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool VoiceConversationLLMConfig::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

double VoiceConversationLLMConfig::GetTemperature() const
{
    return m_temperature;
}

void VoiceConversationLLMConfig::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool VoiceConversationLLMConfig::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double VoiceConversationLLMConfig::GetTopP() const
{
    return m_topP;
}

void VoiceConversationLLMConfig::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool VoiceConversationLLMConfig::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

VoiceConversationMcpServer VoiceConversationLLMConfig::GetMcpServer() const
{
    return m_mcpServer;
}

void VoiceConversationLLMConfig::SetMcpServer(const VoiceConversationMcpServer& _mcpServer)
{
    m_mcpServer = _mcpServer;
    m_mcpServerHasBeenSet = true;
}

bool VoiceConversationLLMConfig::McpServerHasBeenSet() const
{
    return m_mcpServerHasBeenSet;
}

vector<KeyValueItem> VoiceConversationLLMConfig::GetCustomHeaders() const
{
    return m_customHeaders;
}

void VoiceConversationLLMConfig::SetCustomHeaders(const vector<KeyValueItem>& _customHeaders)
{
    m_customHeaders = _customHeaders;
    m_customHeadersHasBeenSet = true;
}

bool VoiceConversationLLMConfig::CustomHeadersHasBeenSet() const
{
    return m_customHeadersHasBeenSet;
}

vector<KeyValueItem> VoiceConversationLLMConfig::GetCustomFields() const
{
    return m_customFields;
}

void VoiceConversationLLMConfig::SetCustomFields(const vector<KeyValueItem>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool VoiceConversationLLMConfig::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

vector<VoiceConversationHistoryMessage> VoiceConversationLLMConfig::GetHistoryMessages() const
{
    return m_historyMessages;
}

void VoiceConversationLLMConfig::SetHistoryMessages(const vector<VoiceConversationHistoryMessage>& _historyMessages)
{
    m_historyMessages = _historyMessages;
    m_historyMessagesHasBeenSet = true;
}

bool VoiceConversationLLMConfig::HistoryMessagesHasBeenSet() const
{
    return m_historyMessagesHasBeenSet;
}

