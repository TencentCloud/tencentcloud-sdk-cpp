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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTCONFIG_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 任务关联的 Agent 配置
                */
                class AgentConfig : public AbstractModel
                {
                public:
                    AgentConfig();
                    ~AgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行 Prompt（必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prompt <p>执行 Prompt（必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>执行 Prompt（必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prompt <p>执行 Prompt（必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Agent 唯一标识（引用 CreateAgent 创建的 Managed Agent，必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentId <p>Agent 唯一标识（引用 CreateAgent 创建的 Managed Agent，必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent 唯一标识（引用 CreateAgent 创建的 Managed Agent，必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentId <p>Agent 唯一标识（引用 CreateAgent 创建的 Managed Agent，必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>执行 Prompt（必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Agent 唯一标识（引用 CreateAgent 创建的 Managed Agent，必填）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_AGENTCONFIG_H_
