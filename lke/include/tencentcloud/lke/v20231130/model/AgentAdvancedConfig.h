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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTADVANCEDCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTADVANCEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StructuredOutputConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent高级设置
                */
                class AgentAdvancedConfig : public AbstractModel
                {
                public:
                    AgentAdvancedConfig();
                    ~AgentAdvancedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启澄清询问
                     * @return EnableClarification 是否开启澄清询问
                     * 
                     */
                    bool GetEnableClarification() const;

                    /**
                     * 设置是否开启澄清询问
                     * @param _enableClarification 是否开启澄清询问
                     * 
                     */
                    void SetEnableClarification(const bool& _enableClarification);

                    /**
                     * 判断参数 EnableClarification 是否已赋值
                     * @return EnableClarification 是否已赋值
                     * 
                     */
                    bool EnableClarificationHasBeenSet() const;

                    /**
                     * 获取思考模式，0为效果优先，1为速度优先
                     * @return ThinkingMode 思考模式，0为效果优先，1为速度优先
                     * 
                     */
                    int64_t GetThinkingMode() const;

                    /**
                     * 设置思考模式，0为效果优先，1为速度优先
                     * @param _thinkingMode 思考模式，0为效果优先，1为速度优先
                     * 
                     */
                    void SetThinkingMode(const int64_t& _thinkingMode);

                    /**
                     * 判断参数 ThinkingMode 是否已赋值
                     * @return ThinkingMode 是否已赋值
                     * 
                     */
                    bool ThinkingModeHasBeenSet() const;

                    /**
                     * 获取最大推理轮数
                     * @return MaxReasoningRound 最大推理轮数
                     * 
                     */
                    uint64_t GetMaxReasoningRound() const;

                    /**
                     * 设置最大推理轮数
                     * @param _maxReasoningRound 最大推理轮数
                     * 
                     */
                    void SetMaxReasoningRound(const uint64_t& _maxReasoningRound);

                    /**
                     * 判断参数 MaxReasoningRound 是否已赋值
                     * @return MaxReasoningRound 是否已赋值
                     * 
                     */
                    bool MaxReasoningRoundHasBeenSet() const;

                    /**
                     * 获取上下文轮数
                     * @return HistoryLimit 上下文轮数
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置上下文轮数
                     * @param _historyLimit 上下文轮数
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取是否开启结构化输出
                     * @return EnableStructuredOutput 是否开启结构化输出
                     * 
                     */
                    bool GetEnableStructuredOutput() const;

                    /**
                     * 设置是否开启结构化输出
                     * @param _enableStructuredOutput 是否开启结构化输出
                     * 
                     */
                    void SetEnableStructuredOutput(const bool& _enableStructuredOutput);

                    /**
                     * 判断参数 EnableStructuredOutput 是否已赋值
                     * @return EnableStructuredOutput 是否已赋值
                     * 
                     */
                    bool EnableStructuredOutputHasBeenSet() const;

                    /**
                     * 获取结构化输出配置
                     * @return StructuredOutputConfig 结构化输出配置
                     * 
                     */
                    StructuredOutputConfig GetStructuredOutputConfig() const;

                    /**
                     * 设置结构化输出配置
                     * @param _structuredOutputConfig 结构化输出配置
                     * 
                     */
                    void SetStructuredOutputConfig(const StructuredOutputConfig& _structuredOutputConfig);

                    /**
                     * 判断参数 StructuredOutputConfig 是否已赋值
                     * @return StructuredOutputConfig 是否已赋值
                     * 
                     */
                    bool StructuredOutputConfigHasBeenSet() const;

                private:

                    /**
                     * 是否开启澄清询问
                     */
                    bool m_enableClarification;
                    bool m_enableClarificationHasBeenSet;

                    /**
                     * 思考模式，0为效果优先，1为速度优先
                     */
                    int64_t m_thinkingMode;
                    bool m_thinkingModeHasBeenSet;

                    /**
                     * 最大推理轮数
                     */
                    uint64_t m_maxReasoningRound;
                    bool m_maxReasoningRoundHasBeenSet;

                    /**
                     * 上下文轮数
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * 是否开启结构化输出
                     */
                    bool m_enableStructuredOutput;
                    bool m_enableStructuredOutputHasBeenSet;

                    /**
                     * 结构化输出配置
                     */
                    StructuredOutputConfig m_structuredOutputConfig;
                    bool m_structuredOutputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTADVANCEDCONFIG_H_
