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

#include <tencentcloud/adp/v20260520/model/ConversationRecordTokenUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationRecordTokenUsage::ConversationRecordTokenUsage() :
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_cachedTokensHasBeenSet(false),
    m_reasoningTokensHasBeenSet(false)
{
}

CoreInternalOutcome ConversationRecordTokenUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTokenUsage.InputTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = string(value["InputTokens"].GetString());
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTokenUsage.OutputTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = string(value["OutputTokens"].GetString());
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTokenUsage.TotalTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = string(value["TotalTokens"].GetString());
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("CachedTokens") && !value["CachedTokens"].IsNull())
    {
        if (!value["CachedTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTokenUsage.CachedTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cachedTokens = string(value["CachedTokens"].GetString());
        m_cachedTokensHasBeenSet = true;
    }

    if (value.HasMember("ReasoningTokens") && !value["ReasoningTokens"].IsNull())
    {
        if (!value["ReasoningTokens"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationRecordTokenUsage.ReasoningTokens` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningTokens = string(value["ReasoningTokens"].GetString());
        m_reasoningTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationRecordTokenUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputTokens.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputTokens.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalTokens.c_str(), allocator).Move(), allocator);
    }

    if (m_cachedTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachedTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cachedTokens.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningTokens.c_str(), allocator).Move(), allocator);
    }

}


string ConversationRecordTokenUsage::GetInputTokens() const
{
    return m_inputTokens;
}

void ConversationRecordTokenUsage::SetInputTokens(const string& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool ConversationRecordTokenUsage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

string ConversationRecordTokenUsage::GetOutputTokens() const
{
    return m_outputTokens;
}

void ConversationRecordTokenUsage::SetOutputTokens(const string& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool ConversationRecordTokenUsage::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

string ConversationRecordTokenUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void ConversationRecordTokenUsage::SetTotalTokens(const string& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool ConversationRecordTokenUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string ConversationRecordTokenUsage::GetCachedTokens() const
{
    return m_cachedTokens;
}

void ConversationRecordTokenUsage::SetCachedTokens(const string& _cachedTokens)
{
    m_cachedTokens = _cachedTokens;
    m_cachedTokensHasBeenSet = true;
}

bool ConversationRecordTokenUsage::CachedTokensHasBeenSet() const
{
    return m_cachedTokensHasBeenSet;
}

string ConversationRecordTokenUsage::GetReasoningTokens() const
{
    return m_reasoningTokens;
}

void ConversationRecordTokenUsage::SetReasoningTokens(const string& _reasoningTokens)
{
    m_reasoningTokens = _reasoningTokens;
    m_reasoningTokensHasBeenSet = true;
}

bool ConversationRecordTokenUsage::ReasoningTokensHasBeenSet() const
{
    return m_reasoningTokensHasBeenSet;
}

