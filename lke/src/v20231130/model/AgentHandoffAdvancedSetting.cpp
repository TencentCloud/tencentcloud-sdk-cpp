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

#include <tencentcloud/lke/v20231130/model/AgentHandoffAdvancedSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentHandoffAdvancedSetting::AgentHandoffAdvancedSetting() :
    m_conversationPolicyHasBeenSet(false)
{
}

CoreInternalOutcome AgentHandoffAdvancedSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConversationPolicy") && !value["ConversationPolicy"].IsNull())
    {
        if (!value["ConversationPolicy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentHandoffAdvancedSetting.ConversationPolicy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conversationPolicy = value["ConversationPolicy"].GetInt64();
        m_conversationPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentHandoffAdvancedSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conversationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conversationPolicy, allocator);
    }

}


int64_t AgentHandoffAdvancedSetting::GetConversationPolicy() const
{
    return m_conversationPolicy;
}

void AgentHandoffAdvancedSetting::SetConversationPolicy(const int64_t& _conversationPolicy)
{
    m_conversationPolicy = _conversationPolicy;
    m_conversationPolicyHasBeenSet = true;
}

bool AgentHandoffAdvancedSetting::ConversationPolicyHasBeenSet() const
{
    return m_conversationPolicyHasBeenSet;
}

