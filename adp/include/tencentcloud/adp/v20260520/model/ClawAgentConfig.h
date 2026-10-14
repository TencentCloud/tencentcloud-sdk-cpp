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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentAgentTeamConfig.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentLongMemoryConfig.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentChannelContextTimeoutConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ClawAgent配置
                */
                class ClawAgentConfig : public AbstractModel
                {
                public:
                    ClawAgentConfig();
                    ~ClawAgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent团队协作配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentTeamConfig <p>Agent团队协作配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClawAgentAgentTeamConfig GetAgentTeamConfig() const;

                    /**
                     * 设置<p>Agent团队协作配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentTeamConfig <p>Agent团队协作配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentTeamConfig(const ClawAgentAgentTeamConfig& _agentTeamConfig);

                    /**
                     * 判断参数 AgentTeamConfig 是否已赋值
                     * @return AgentTeamConfig 是否已赋值
                     * 
                     */
                    bool AgentTeamConfigHasBeenSet() const;

                    /**
                     * 获取<p>长期记忆配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongMemoryConfig <p>长期记忆配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClawAgentLongMemoryConfig GetLongMemoryConfig() const;

                    /**
                     * 设置<p>长期记忆配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longMemoryConfig <p>长期记忆配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongMemoryConfig(const ClawAgentLongMemoryConfig& _longMemoryConfig);

                    /**
                     * 判断参数 LongMemoryConfig 是否已赋值
                     * @return LongMemoryConfig 是否已赋值
                     * 
                     */
                    bool LongMemoryConfigHasBeenSet() const;

                    /**
                     * 获取<p>渠道上下文超时清空配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelContextTimeoutConfig <p>渠道上下文超时清空配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClawAgentChannelContextTimeoutConfig GetChannelContextTimeoutConfig() const;

                    /**
                     * 设置<p>渠道上下文超时清空配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelContextTimeoutConfig <p>渠道上下文超时清空配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelContextTimeoutConfig(const ClawAgentChannelContextTimeoutConfig& _channelContextTimeoutConfig);

                    /**
                     * 判断参数 ChannelContextTimeoutConfig 是否已赋值
                     * @return ChannelContextTimeoutConfig 是否已赋值
                     * 
                     */
                    bool ChannelContextTimeoutConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Agent团队协作配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClawAgentAgentTeamConfig m_agentTeamConfig;
                    bool m_agentTeamConfigHasBeenSet;

                    /**
                     * <p>长期记忆配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClawAgentLongMemoryConfig m_longMemoryConfig;
                    bool m_longMemoryConfigHasBeenSet;

                    /**
                     * <p>渠道上下文超时清空配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClawAgentChannelContextTimeoutConfig m_channelContextTimeoutConfig;
                    bool m_channelContextTimeoutConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_
