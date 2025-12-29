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

#include <tencentcloud/lke/v20231130/model/ModelParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModelParams::ModelParams() :
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_presencePenaltyHasBeenSet(false),
    m_frequencyPenaltyHasBeenSet(false),
    m_repetitionPenaltyHasBeenSet(false),
    m_maxTokensHasBeenSet(false),
    m_stopSequencesHasBeenSet(false),
    m_replyFormatHasBeenSet(false),
    m_deepThinkingHasBeenSet(false),
    m_reasoningEffortHasBeenSet(false)
{
}

CoreInternalOutcome ModelParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Temperature") && !value["Temperature"].IsNull())
    {
        if (!value["Temperature"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.Temperature` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_temperature = value["Temperature"].GetDouble();
        m_temperatureHasBeenSet = true;
    }

    if (value.HasMember("TopP") && !value["TopP"].IsNull())
    {
        if (!value["TopP"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.TopP` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topP = value["TopP"].GetDouble();
        m_topPHasBeenSet = true;
    }

    if (value.HasMember("Seed") && !value["Seed"].IsNull())
    {
        if (!value["Seed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.Seed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seed = value["Seed"].GetInt64();
        m_seedHasBeenSet = true;
    }

    if (value.HasMember("PresencePenalty") && !value["PresencePenalty"].IsNull())
    {
        if (!value["PresencePenalty"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.PresencePenalty` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_presencePenalty = value["PresencePenalty"].GetDouble();
        m_presencePenaltyHasBeenSet = true;
    }

    if (value.HasMember("FrequencyPenalty") && !value["FrequencyPenalty"].IsNull())
    {
        if (!value["FrequencyPenalty"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.FrequencyPenalty` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyPenalty = value["FrequencyPenalty"].GetDouble();
        m_frequencyPenaltyHasBeenSet = true;
    }

    if (value.HasMember("RepetitionPenalty") && !value["RepetitionPenalty"].IsNull())
    {
        if (!value["RepetitionPenalty"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.RepetitionPenalty` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_repetitionPenalty = value["RepetitionPenalty"].GetDouble();
        m_repetitionPenaltyHasBeenSet = true;
    }

    if (value.HasMember("MaxTokens") && !value["MaxTokens"].IsNull())
    {
        if (!value["MaxTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.MaxTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTokens = value["MaxTokens"].GetInt64();
        m_maxTokensHasBeenSet = true;
    }

    if (value.HasMember("StopSequences") && !value["StopSequences"].IsNull())
    {
        if (!value["StopSequences"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelParams.StopSequences` is not array type"));

        const rapidjson::Value &tmpValue = value["StopSequences"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stopSequences.push_back((*itr).GetString());
        }
        m_stopSequencesHasBeenSet = true;
    }

    if (value.HasMember("ReplyFormat") && !value["ReplyFormat"].IsNull())
    {
        if (!value["ReplyFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.ReplyFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyFormat = string(value["ReplyFormat"].GetString());
        m_replyFormatHasBeenSet = true;
    }

    if (value.HasMember("DeepThinking") && !value["DeepThinking"].IsNull())
    {
        if (!value["DeepThinking"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.DeepThinking` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deepThinking = string(value["DeepThinking"].GetString());
        m_deepThinkingHasBeenSet = true;
    }

    if (value.HasMember("ReasoningEffort") && !value["ReasoningEffort"].IsNull())
    {
        if (!value["ReasoningEffort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParams.ReasoningEffort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningEffort = string(value["ReasoningEffort"].GetString());
        m_reasoningEffortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seed, allocator);
    }

    if (m_presencePenaltyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresencePenalty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_presencePenalty, allocator);
    }

    if (m_frequencyPenaltyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyPenalty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyPenalty, allocator);
    }

    if (m_repetitionPenaltyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepetitionPenalty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repetitionPenalty, allocator);
    }

    if (m_maxTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTokens, allocator);
    }

    if (m_stopSequencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopSequences";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stopSequences.begin(); itr != m_stopSequences.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_replyFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replyFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_deepThinkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepThinking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deepThinking.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningEffortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningEffort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningEffort.c_str(), allocator).Move(), allocator);
    }

}


double ModelParams::GetTemperature() const
{
    return m_temperature;
}

void ModelParams::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ModelParams::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double ModelParams::GetTopP() const
{
    return m_topP;
}

void ModelParams::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ModelParams::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

int64_t ModelParams::GetSeed() const
{
    return m_seed;
}

void ModelParams::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool ModelParams::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

double ModelParams::GetPresencePenalty() const
{
    return m_presencePenalty;
}

void ModelParams::SetPresencePenalty(const double& _presencePenalty)
{
    m_presencePenalty = _presencePenalty;
    m_presencePenaltyHasBeenSet = true;
}

bool ModelParams::PresencePenaltyHasBeenSet() const
{
    return m_presencePenaltyHasBeenSet;
}

double ModelParams::GetFrequencyPenalty() const
{
    return m_frequencyPenalty;
}

void ModelParams::SetFrequencyPenalty(const double& _frequencyPenalty)
{
    m_frequencyPenalty = _frequencyPenalty;
    m_frequencyPenaltyHasBeenSet = true;
}

bool ModelParams::FrequencyPenaltyHasBeenSet() const
{
    return m_frequencyPenaltyHasBeenSet;
}

double ModelParams::GetRepetitionPenalty() const
{
    return m_repetitionPenalty;
}

void ModelParams::SetRepetitionPenalty(const double& _repetitionPenalty)
{
    m_repetitionPenalty = _repetitionPenalty;
    m_repetitionPenaltyHasBeenSet = true;
}

bool ModelParams::RepetitionPenaltyHasBeenSet() const
{
    return m_repetitionPenaltyHasBeenSet;
}

int64_t ModelParams::GetMaxTokens() const
{
    return m_maxTokens;
}

void ModelParams::SetMaxTokens(const int64_t& _maxTokens)
{
    m_maxTokens = _maxTokens;
    m_maxTokensHasBeenSet = true;
}

bool ModelParams::MaxTokensHasBeenSet() const
{
    return m_maxTokensHasBeenSet;
}

vector<string> ModelParams::GetStopSequences() const
{
    return m_stopSequences;
}

void ModelParams::SetStopSequences(const vector<string>& _stopSequences)
{
    m_stopSequences = _stopSequences;
    m_stopSequencesHasBeenSet = true;
}

bool ModelParams::StopSequencesHasBeenSet() const
{
    return m_stopSequencesHasBeenSet;
}

string ModelParams::GetReplyFormat() const
{
    return m_replyFormat;
}

void ModelParams::SetReplyFormat(const string& _replyFormat)
{
    m_replyFormat = _replyFormat;
    m_replyFormatHasBeenSet = true;
}

bool ModelParams::ReplyFormatHasBeenSet() const
{
    return m_replyFormatHasBeenSet;
}

string ModelParams::GetDeepThinking() const
{
    return m_deepThinking;
}

void ModelParams::SetDeepThinking(const string& _deepThinking)
{
    m_deepThinking = _deepThinking;
    m_deepThinkingHasBeenSet = true;
}

bool ModelParams::DeepThinkingHasBeenSet() const
{
    return m_deepThinkingHasBeenSet;
}

string ModelParams::GetReasoningEffort() const
{
    return m_reasoningEffort;
}

void ModelParams::SetReasoningEffort(const string& _reasoningEffort)
{
    m_reasoningEffort = _reasoningEffort;
    m_reasoningEffortHasBeenSet = true;
}

bool ModelParams::ReasoningEffortHasBeenSet() const
{
    return m_reasoningEffortHasBeenSet;
}

