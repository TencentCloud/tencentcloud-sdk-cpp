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

#include <tencentcloud/workbuddyenterprise/v20260709/model/TokenUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

TokenUsage::TokenUsage() :
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

CoreInternalOutcome TokenUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.OutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetInt64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

}


int64_t TokenUsage::GetInputTokens() const
{
    return m_inputTokens;
}

void TokenUsage::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool TokenUsage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t TokenUsage::GetOutputTokens() const
{
    return m_outputTokens;
}

void TokenUsage::SetOutputTokens(const int64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool TokenUsage::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

int64_t TokenUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void TokenUsage::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool TokenUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string TokenUsage::GetScope() const
{
    return m_scope;
}

void TokenUsage::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool TokenUsage::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

