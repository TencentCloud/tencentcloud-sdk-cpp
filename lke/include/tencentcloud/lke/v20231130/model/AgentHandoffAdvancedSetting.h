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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTHANDOFFADVANCEDSETTING_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTHANDOFFADVANCEDSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent转交高级设置
                */
                class AgentHandoffAdvancedSetting : public AbstractModel
                {
                public:
                    AgentHandoffAdvancedSetting();
                    ~AgentHandoffAdvancedSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对话流转策略；0-由上一轮回复用户的 Agent 继续发起，1- 回到主Agent
                     * @return ConversationPolicy 对话流转策略；0-由上一轮回复用户的 Agent 继续发起，1- 回到主Agent
                     * 
                     */
                    int64_t GetConversationPolicy() const;

                    /**
                     * 设置对话流转策略；0-由上一轮回复用户的 Agent 继续发起，1- 回到主Agent
                     * @param _conversationPolicy 对话流转策略；0-由上一轮回复用户的 Agent 继续发起，1- 回到主Agent
                     * 
                     */
                    void SetConversationPolicy(const int64_t& _conversationPolicy);

                    /**
                     * 判断参数 ConversationPolicy 是否已赋值
                     * @return ConversationPolicy 是否已赋值
                     * 
                     */
                    bool ConversationPolicyHasBeenSet() const;

                private:

                    /**
                     * 对话流转策略；0-由上一轮回复用户的 Agent 继续发起，1- 回到主Agent
                     */
                    int64_t m_conversationPolicy;
                    bool m_conversationPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTHANDOFFADVANCEDSETTING_H_
