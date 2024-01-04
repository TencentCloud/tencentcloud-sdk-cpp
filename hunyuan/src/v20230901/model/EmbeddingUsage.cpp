/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/hunyuan/v20230901/model/EmbeddingUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

EmbeddingUsage::EmbeddingUsage() :
    m_promptTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome EmbeddingUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptTokens") && !value["PromptTokens"].IsNull())
    {
        if (!value["PromptTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingUsage.PromptTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTokens = value["PromptTokens"].GetInt64();
        m_promptTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingUsage.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbeddingUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


int64_t EmbeddingUsage::GetPromptTokens() const
{
    return m_promptTokens;
}

void EmbeddingUsage::SetPromptTokens(const int64_t& _promptTokens)
{
    m_promptTokens = _promptTokens;
    m_promptTokensHasBeenSet = true;
}

bool EmbeddingUsage::PromptTokensHasBeenSet() const
{
    return m_promptTokensHasBeenSet;
}

int64_t EmbeddingUsage::GetTotalTokens() const
{
    return m_totalTokens;
}

void EmbeddingUsage::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool EmbeddingUsage::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

