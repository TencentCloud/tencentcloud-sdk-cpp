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

#include <tencentcloud/adp/v20260520/model/TokenUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TokenUsage::TokenUsage() :
    m_completionTokensHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_promptTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome TokenUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompletionTokens") && !value["CompletionTokens"].IsNull())
    {
        if (!value["CompletionTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.CompletionTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_completionTokens = value["CompletionTokens"].GetUint64();
        m_completionTokensHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("PromptTokens") && !value["PromptTokens"].IsNull())
    {
        if (!value["PromptTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.PromptTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTokens = value["PromptTokens"].GetUint64();
        m_promptTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenUsage.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_completionTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletionTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completionTokens, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptTokens, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


uint64_t TokenUsage::GetCompletionTokens() const
{
    return m_completionTokens;
}

void TokenUsage::SetCompletionTokens(const uint64_t& _completionTokens)
{
    m_completionTokens = _completionTokens;
    m_completionTokensHasBeenSet = true;
}

bool TokenUsage::CompletionTokensHasBeenSet() const
{
    return m_completionTokensHasBeenSet;
}

string TokenUsage::GetModelName() const
{
    return m_modelName;
}

void TokenUsage::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool TokenUsage::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

uint64_t TokenUsage::GetPromptTokens() const
{
    return m_promptTokens;
}

void TokenUsage::SetPromptTokens(const uint64_t& _promptTokens)
{
    m_promptTokens = _promptTokens;
    m_promptTokensHasBeenSet = true;
}

bool TokenUsage::PromptTokensHasBeenSet() const
{
    return m_promptTokensHasBeenSet;
}

uint64_t TokenUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void TokenUsage::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool TokenUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

