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

#include <tencentcloud/adp/v20260520/model/AgentAdvancedConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentAdvancedConfig::AgentAdvancedConfig() :
    m_maxReasoningRoundHasBeenSet(false)
{
}

CoreInternalOutcome AgentAdvancedConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxReasoningRound") && !value["MaxReasoningRound"].IsNull())
    {
        if (!value["MaxReasoningRound"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAdvancedConfig.MaxReasoningRound` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReasoningRound = value["MaxReasoningRound"].GetUint64();
        m_maxReasoningRoundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAdvancedConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxReasoningRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReasoningRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReasoningRound, allocator);
    }

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

