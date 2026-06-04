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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MULTIAGENTCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MULTIAGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentCollaborationConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 多智能体配置
                */
                class MultiAgentConfig : public AbstractModel
                {
                public:
                    MultiAgentConfig();
                    ~MultiAgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent协同配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCollaboration Agent协同配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentCollaborationConfig GetAgentCollaboration() const;

                    /**
                     * 设置Agent协同配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCollaboration Agent协同配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentCollaboration(const AgentCollaborationConfig& _agentCollaboration);

                    /**
                     * 判断参数 AgentCollaboration 是否已赋值
                     * @return AgentCollaboration 是否已赋值
                     * 
                     */
                    bool AgentCollaborationHasBeenSet() const;

                private:

                    /**
                     * Agent协同配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentCollaborationConfig m_agentCollaboration;
                    bool m_agentCollaborationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MULTIAGENTCONFIG_H_
