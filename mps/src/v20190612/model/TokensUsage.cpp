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

#include <tencentcloud/mps/v20190612/model/TokensUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TokensUsage::TokensUsage() :
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome TokensUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokensUsage.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokensUsage.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokensUsage.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokensUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


uint64_t TokensUsage::GetInputTokens() const
{
    return m_inputTokens;
}

void TokensUsage::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool TokensUsage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t TokensUsage::GetOutputTokens() const
{
    return m_outputTokens;
}

void TokensUsage::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool TokensUsage::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

uint64_t TokensUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void TokensUsage::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool TokensUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

