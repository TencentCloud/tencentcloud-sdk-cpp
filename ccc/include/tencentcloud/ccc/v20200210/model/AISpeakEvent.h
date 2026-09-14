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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AISPEAKEVENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AISPEAKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallLatencyMetrics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 智能体发言事件
                */
                class AISpeakEvent : public AbstractModel
                {
                public:
                    AISpeakEvent();
                    ~AISpeakEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本次话术是否允许被用户VAD打断</p>
                     * @return CanBeInterrupted <p>本次话术是否允许被用户VAD打断</p>
                     * 
                     */
                    bool GetCanBeInterrupted() const;

                    /**
                     * 设置<p>本次话术是否允许被用户VAD打断</p>
                     * @param _canBeInterrupted <p>本次话术是否允许被用户VAD打断</p>
                     * 
                     */
                    void SetCanBeInterrupted(const bool& _canBeInterrupted);

                    /**
                     * 判断参数 CanBeInterrupted 是否已赋值
                     * @return CanBeInterrupted 是否已赋值
                     * 
                     */
                    bool CanBeInterruptedHasBeenSet() const;

                    /**
                     * 获取<p>智能体播报的话术文本内容</p>
                     * @return SpokenText <p>智能体播报的话术文本内容</p>
                     * 
                     */
                    std::string GetSpokenText() const;

                    /**
                     * 设置<p>智能体播报的话术文本内容</p>
                     * @param _spokenText <p>智能体播报的话术文本内容</p>
                     * 
                     */
                    void SetSpokenText(const std::string& _spokenText);

                    /**
                     * 判断参数 SpokenText 是否已赋值
                     * @return SpokenText 是否已赋值
                     * 
                     */
                    bool SpokenTextHasBeenSet() const;

                    /**
                     * 获取<p>智能体发言类型</p><p>枚举值：</p><ul><li>Script： 智能体话术</li><li>KnowledgeBase： 知识库</li><li>LLMFallback： 大模型兜底</li><li>NoResponseTip： 无响应提示</li><li>SmartFollowUp： 智能追问</li><li>FAQ： FAQ</li><li>TransferWaitingPrompt： 转人工 - 排队等待音</li><li>PlayNoResponseEndPrompt： 无响应挂断前放音</li><li>PlayQueuePrompt： 转人工 - 排队前放音</li><li>PlayPromptBeforeReception： 转人工 - 接待前放音</li><li>PlayQueueTimeoutPrompt： 转人工 - 排队超时放音</li><li>PlayTransferFailPrompt： 转人工 - 转人工失败放音</li><li>Dtmf： DTMF收号（按键用户输入）</li><li>PlayDtmfPrompt： 按键节点 - 播放提示音</li><li>PlayInvalidDtmfPrompt： 按键节点 - 输入错误提示音</li><li>PlayDtmfTimeoutPrompt： 按键节点 - 超时提示音</li><li>TransferAgentPrompt： 转接智能体 - 转接至目标智能体提示音</li><li>Other： 其他类型</li></ul>
                     * @return SpokenType <p>智能体发言类型</p><p>枚举值：</p><ul><li>Script： 智能体话术</li><li>KnowledgeBase： 知识库</li><li>LLMFallback： 大模型兜底</li><li>NoResponseTip： 无响应提示</li><li>SmartFollowUp： 智能追问</li><li>FAQ： FAQ</li><li>TransferWaitingPrompt： 转人工 - 排队等待音</li><li>PlayNoResponseEndPrompt： 无响应挂断前放音</li><li>PlayQueuePrompt： 转人工 - 排队前放音</li><li>PlayPromptBeforeReception： 转人工 - 接待前放音</li><li>PlayQueueTimeoutPrompt： 转人工 - 排队超时放音</li><li>PlayTransferFailPrompt： 转人工 - 转人工失败放音</li><li>Dtmf： DTMF收号（按键用户输入）</li><li>PlayDtmfPrompt： 按键节点 - 播放提示音</li><li>PlayInvalidDtmfPrompt： 按键节点 - 输入错误提示音</li><li>PlayDtmfTimeoutPrompt： 按键节点 - 超时提示音</li><li>TransferAgentPrompt： 转接智能体 - 转接至目标智能体提示音</li><li>Other： 其他类型</li></ul>
                     * 
                     */
                    std::string GetSpokenType() const;

                    /**
                     * 设置<p>智能体发言类型</p><p>枚举值：</p><ul><li>Script： 智能体话术</li><li>KnowledgeBase： 知识库</li><li>LLMFallback： 大模型兜底</li><li>NoResponseTip： 无响应提示</li><li>SmartFollowUp： 智能追问</li><li>FAQ： FAQ</li><li>TransferWaitingPrompt： 转人工 - 排队等待音</li><li>PlayNoResponseEndPrompt： 无响应挂断前放音</li><li>PlayQueuePrompt： 转人工 - 排队前放音</li><li>PlayPromptBeforeReception： 转人工 - 接待前放音</li><li>PlayQueueTimeoutPrompt： 转人工 - 排队超时放音</li><li>PlayTransferFailPrompt： 转人工 - 转人工失败放音</li><li>Dtmf： DTMF收号（按键用户输入）</li><li>PlayDtmfPrompt： 按键节点 - 播放提示音</li><li>PlayInvalidDtmfPrompt： 按键节点 - 输入错误提示音</li><li>PlayDtmfTimeoutPrompt： 按键节点 - 超时提示音</li><li>TransferAgentPrompt： 转接智能体 - 转接至目标智能体提示音</li><li>Other： 其他类型</li></ul>
                     * @param _spokenType <p>智能体发言类型</p><p>枚举值：</p><ul><li>Script： 智能体话术</li><li>KnowledgeBase： 知识库</li><li>LLMFallback： 大模型兜底</li><li>NoResponseTip： 无响应提示</li><li>SmartFollowUp： 智能追问</li><li>FAQ： FAQ</li><li>TransferWaitingPrompt： 转人工 - 排队等待音</li><li>PlayNoResponseEndPrompt： 无响应挂断前放音</li><li>PlayQueuePrompt： 转人工 - 排队前放音</li><li>PlayPromptBeforeReception： 转人工 - 接待前放音</li><li>PlayQueueTimeoutPrompt： 转人工 - 排队超时放音</li><li>PlayTransferFailPrompt： 转人工 - 转人工失败放音</li><li>Dtmf： DTMF收号（按键用户输入）</li><li>PlayDtmfPrompt： 按键节点 - 播放提示音</li><li>PlayInvalidDtmfPrompt： 按键节点 - 输入错误提示音</li><li>PlayDtmfTimeoutPrompt： 按键节点 - 超时提示音</li><li>TransferAgentPrompt： 转接智能体 - 转接至目标智能体提示音</li><li>Other： 其他类型</li></ul>
                     * 
                     */
                    void SetSpokenType(const std::string& _spokenType);

                    /**
                     * 判断参数 SpokenType 是否已赋值
                     * @return SpokenType 是否已赋值
                     * 
                     */
                    bool SpokenTypeHasBeenSet() const;

                    /**
                     * 获取<p>本次响应生成的时延结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatencyMetrics <p>本次响应生成的时延结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallLatencyMetrics GetLatencyMetrics() const;

                    /**
                     * 设置<p>本次响应生成的时延结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latencyMetrics <p>本次响应生成的时延结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatencyMetrics(const AICallLatencyMetrics& _latencyMetrics);

                    /**
                     * 判断参数 LatencyMetrics 是否已赋值
                     * @return LatencyMetrics 是否已赋值
                     * 
                     */
                    bool LatencyMetricsHasBeenSet() const;

                    /**
                     * 获取<p>用户回复命中的知识库问题标题，仅 SpokenType 为 KnowledgeBase 或 FAQ 等命中知识库的场景有值。</p>
                     * @return KnowledgeName <p>用户回复命中的知识库问题标题，仅 SpokenType 为 KnowledgeBase 或 FAQ 等命中知识库的场景有值。</p>
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置<p>用户回复命中的知识库问题标题，仅 SpokenType 为 KnowledgeBase 或 FAQ 等命中知识库的场景有值。</p>
                     * @param _knowledgeName <p>用户回复命中的知识库问题标题，仅 SpokenType 为 KnowledgeBase 或 FAQ 等命中知识库的场景有值。</p>
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                    /**
                     * 获取<p>节点跳转的原因，仅画布为灵活模式时有值</p>
                     * @return TraverseReason <p>节点跳转的原因，仅画布为灵活模式时有值</p>
                     * 
                     */
                    std::string GetTraverseReason() const;

                    /**
                     * 设置<p>节点跳转的原因，仅画布为灵活模式时有值</p>
                     * @param _traverseReason <p>节点跳转的原因，仅画布为灵活模式时有值</p>
                     * 
                     */
                    void SetTraverseReason(const std::string& _traverseReason);

                    /**
                     * 判断参数 TraverseReason 是否已赋值
                     * @return TraverseReason 是否已赋值
                     * 
                     */
                    bool TraverseReasonHasBeenSet() const;

                private:

                    /**
                     * <p>本次话术是否允许被用户VAD打断</p>
                     */
                    bool m_canBeInterrupted;
                    bool m_canBeInterruptedHasBeenSet;

                    /**
                     * <p>智能体播报的话术文本内容</p>
                     */
                    std::string m_spokenText;
                    bool m_spokenTextHasBeenSet;

                    /**
                     * <p>智能体发言类型</p><p>枚举值：</p><ul><li>Script： 智能体话术</li><li>KnowledgeBase： 知识库</li><li>LLMFallback： 大模型兜底</li><li>NoResponseTip： 无响应提示</li><li>SmartFollowUp： 智能追问</li><li>FAQ： FAQ</li><li>TransferWaitingPrompt： 转人工 - 排队等待音</li><li>PlayNoResponseEndPrompt： 无响应挂断前放音</li><li>PlayQueuePrompt： 转人工 - 排队前放音</li><li>PlayPromptBeforeReception： 转人工 - 接待前放音</li><li>PlayQueueTimeoutPrompt： 转人工 - 排队超时放音</li><li>PlayTransferFailPrompt： 转人工 - 转人工失败放音</li><li>Dtmf： DTMF收号（按键用户输入）</li><li>PlayDtmfPrompt： 按键节点 - 播放提示音</li><li>PlayInvalidDtmfPrompt： 按键节点 - 输入错误提示音</li><li>PlayDtmfTimeoutPrompt： 按键节点 - 超时提示音</li><li>TransferAgentPrompt： 转接智能体 - 转接至目标智能体提示音</li><li>Other： 其他类型</li></ul>
                     */
                    std::string m_spokenType;
                    bool m_spokenTypeHasBeenSet;

                    /**
                     * <p>本次响应生成的时延结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallLatencyMetrics m_latencyMetrics;
                    bool m_latencyMetricsHasBeenSet;

                    /**
                     * <p>用户回复命中的知识库问题标题，仅 SpokenType 为 KnowledgeBase 或 FAQ 等命中知识库的场景有值。</p>
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * <p>节点跳转的原因，仅画布为灵活模式时有值</p>
                     */
                    std::string m_traverseReason;
                    bool m_traverseReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AISPEAKEVENT_H_
