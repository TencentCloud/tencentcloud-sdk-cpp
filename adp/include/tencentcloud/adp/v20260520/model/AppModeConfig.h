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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MultiAgentConfig.h>
#include <tencentcloud/adp/v20260520/model/SingleWorkflowConfig.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模式配置 - 包含不同模式的独有配置
                */
                class AppModeConfig : public AbstractModel
                {
                public:
                    AppModeConfig();
                    ~AppModeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多智能体配置(Agent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiAgentConfig 多智能体配置(Agent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiAgentConfig GetMultiAgentConfig() const;

                    /**
                     * 设置多智能体配置(Agent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiAgentConfig 多智能体配置(Agent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiAgentConfig(const MultiAgentConfig& _multiAgentConfig);

                    /**
                     * 判断参数 MultiAgentConfig 是否已赋值
                     * @return MultiAgentConfig 是否已赋值
                     * 
                     */
                    bool MultiAgentConfigHasBeenSet() const;

                    /**
                     * 获取单工作流配置(单工作流模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SingleWorkflowConfig 单工作流配置(单工作流模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SingleWorkflowConfig GetSingleWorkflowConfig() const;

                    /**
                     * 设置单工作流配置(单工作流模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _singleWorkflowConfig 单工作流配置(单工作流模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSingleWorkflowConfig(const SingleWorkflowConfig& _singleWorkflowConfig);

                    /**
                     * 判断参数 SingleWorkflowConfig 是否已赋值
                     * @return SingleWorkflowConfig 是否已赋值
                     * 
                     */
                    bool SingleWorkflowConfigHasBeenSet() const;

                    /**
                     * 获取ClawAgent配置(ClawAgent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClawAgentConfig ClawAgent配置(ClawAgent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClawAgentConfig GetClawAgentConfig() const;

                    /**
                     * 设置ClawAgent配置(ClawAgent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clawAgentConfig ClawAgent配置(ClawAgent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClawAgentConfig(const ClawAgentConfig& _clawAgentConfig);

                    /**
                     * 判断参数 ClawAgentConfig 是否已赋值
                     * @return ClawAgentConfig 是否已赋值
                     * 
                     */
                    bool ClawAgentConfigHasBeenSet() const;

                private:

                    /**
                     * 多智能体配置(Agent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiAgentConfig m_multiAgentConfig;
                    bool m_multiAgentConfigHasBeenSet;

                    /**
                     * 单工作流配置(单工作流模式)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SingleWorkflowConfig m_singleWorkflowConfig;
                    bool m_singleWorkflowConfigHasBeenSet;

                    /**
                     * ClawAgent配置(ClawAgent模式)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClawAgentConfig m_clawAgentConfig;
                    bool m_clawAgentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMODECONFIG_H_
