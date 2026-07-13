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

#include <tencentcloud/vod/v20180717/model/AigcVideoTaskUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoTaskUsage::AigcVideoTaskUsage() :
    m_inputTokensHasBeenSet(false),
    m_thoughtTokensHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoTaskUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("ThoughtTokens") && !value["ThoughtTokens"].IsNull())
    {
        if (!value["ThoughtTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskUsage.ThoughtTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thoughtTokens = value["ThoughtTokens"].GetInt64();
        m_thoughtTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoTaskUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_thoughtTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThoughtTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thoughtTokens, allocator);
    }

}


int64_t AigcVideoTaskUsage::GetInputTokens() const
{
    return m_inputTokens;
}

void AigcVideoTaskUsage::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool AigcVideoTaskUsage::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t AigcVideoTaskUsage::GetThoughtTokens() const
{
    return m_thoughtTokens;
}

void AigcVideoTaskUsage::SetThoughtTokens(const int64_t& _thoughtTokens)
{
    m_thoughtTokens = _thoughtTokens;
    m_thoughtTokensHasBeenSet = true;
}

bool AigcVideoTaskUsage::ThoughtTokensHasBeenSet() const
{
    return m_thoughtTokensHasBeenSet;
}

