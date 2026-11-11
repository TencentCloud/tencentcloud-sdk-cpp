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

#include <tencentcloud/mps/v20190612/model/ModelChatCompletionUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModelChatCompletionUsage::ModelChatCompletionUsage() :
    m_promptTokensHasBeenSet(false),
    m_completionTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome ModelChatCompletionUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptTokens") && !value["PromptTokens"].IsNull())
    {
        if (!value["PromptTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatCompletionUsage.PromptTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTokens = value["PromptTokens"].GetInt64();
        m_promptTokensHasBeenSet = true;
    }

    if (value.HasMember("CompletionTokens") && !value["CompletionTokens"].IsNull())
    {
        if (!value["CompletionTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatCompletionUsage.CompletionTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completionTokens = value["CompletionTokens"].GetInt64();
        m_completionTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChatCompletionUsage.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelChatCompletionUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptTokens, allocator);
    }

    if (m_completionTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletionTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completionTokens, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


int64_t ModelChatCompletionUsage::GetPromptTokens() const
{
    return m_promptTokens;
}

void ModelChatCompletionUsage::SetPromptTokens(const int64_t& _promptTokens)
{
    m_promptTokens = _promptTokens;
    m_promptTokensHasBeenSet = true;
}

bool ModelChatCompletionUsage::PromptTokensHasBeenSet() const
{
    return m_promptTokensHasBeenSet;
}

int64_t ModelChatCompletionUsage::GetCompletionTokens() const
{
    return m_completionTokens;
}

void ModelChatCompletionUsage::SetCompletionTokens(const int64_t& _completionTokens)
{
    m_completionTokens = _completionTokens;
    m_completionTokensHasBeenSet = true;
}

bool ModelChatCompletionUsage::CompletionTokensHasBeenSet() const
{
    return m_completionTokensHasBeenSet;
}

int64_t ModelChatCompletionUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void ModelChatCompletionUsage::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool ModelChatCompletionUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

