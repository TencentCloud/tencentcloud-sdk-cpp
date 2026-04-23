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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMS_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMS_H_

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
                * 模型参数
                */
                class ModelParams : public AbstractModel
                {
                public:
                    ModelParams();
                    ~ModelParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>深度思考值<br>disabled<br>enabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeepThinking <p>深度思考值<br>disabled<br>enabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeepThinking() const;

                    /**
                     * 设置<p>深度思考值<br>disabled<br>enabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deepThinking <p>深度思考值<br>disabled<br>enabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeepThinking(const std::string& _deepThinking);

                    /**
                     * 判断参数 DeepThinking 是否已赋值
                     * @return DeepThinking 是否已赋值
                     * 
                     */
                    bool DeepThinkingHasBeenSet() const;

                    /**
                     * 获取<p>频率惩罚</p>
                     * @return FrequencyPenalty <p>频率惩罚</p>
                     * 
                     */
                    double GetFrequencyPenalty() const;

                    /**
                     * 设置<p>频率惩罚</p>
                     * @param _frequencyPenalty <p>频率惩罚</p>
                     * 
                     */
                    void SetFrequencyPenalty(const double& _frequencyPenalty);

                    /**
                     * 判断参数 FrequencyPenalty 是否已赋值
                     * @return FrequencyPenalty 是否已赋值
                     * 
                     */
                    bool FrequencyPenaltyHasBeenSet() const;

                    /**
                     * 获取<p>最大输出长度</p>
                     * @return MaxTokens <p>最大输出长度</p>
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置<p>最大输出长度</p>
                     * @param _maxTokens <p>最大输出长度</p>
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>存在惩罚</p>
                     * @return PresencePenalty <p>存在惩罚</p>
                     * 
                     */
                    double GetPresencePenalty() const;

                    /**
                     * 设置<p>存在惩罚</p>
                     * @param _presencePenalty <p>存在惩罚</p>
                     * 
                     */
                    void SetPresencePenalty(const double& _presencePenalty);

                    /**
                     * 判断参数 PresencePenalty 是否已赋值
                     * @return PresencePenalty 是否已赋值
                     * 
                     */
                    bool PresencePenaltyHasBeenSet() const;

                    /**
                     * 获取<p>效果 disabled low medium high</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReasoningEffort <p>效果 disabled low medium high</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReasoningEffort() const;

                    /**
                     * 设置<p>效果 disabled low medium high</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasoningEffort <p>效果 disabled low medium high</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReasoningEffort(const std::string& _reasoningEffort);

                    /**
                     * 判断参数 ReasoningEffort 是否已赋值
                     * @return ReasoningEffort 是否已赋值
                     * 
                     */
                    bool ReasoningEffortHasBeenSet() const;

                    /**
                     * 获取<p>重复惩罚</p>
                     * @return RepetitionPenalty <p>重复惩罚</p>
                     * 
                     */
                    double GetRepetitionPenalty() const;

                    /**
                     * 设置<p>重复惩罚</p>
                     * @param _repetitionPenalty <p>重复惩罚</p>
                     * 
                     */
                    void SetRepetitionPenalty(const double& _repetitionPenalty);

                    /**
                     * 判断参数 RepetitionPenalty 是否已赋值
                     * @return RepetitionPenalty 是否已赋值
                     * 
                     */
                    bool RepetitionPenaltyHasBeenSet() const;

                    /**
                     * 获取<p>输出格式</p>
                     * @return ReplyFormat <p>输出格式</p>
                     * 
                     */
                    std::string GetReplyFormat() const;

                    /**
                     * 设置<p>输出格式</p>
                     * @param _replyFormat <p>输出格式</p>
                     * 
                     */
                    void SetReplyFormat(const std::string& _replyFormat);

                    /**
                     * 判断参数 ReplyFormat 是否已赋值
                     * @return ReplyFormat 是否已赋值
                     * 
                     */
                    bool ReplyFormatHasBeenSet() const;

                    /**
                     * 获取<p>随机种子</p>
                     * @return Seed <p>随机种子</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>随机种子</p>
                     * @param _seed <p>随机种子</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>停止序列</p>
                     * @return StopSequences <p>停止序列</p>
                     * 
                     */
                    std::vector<std::string> GetStopSequences() const;

                    /**
                     * 设置<p>停止序列</p>
                     * @param _stopSequences <p>停止序列</p>
                     * 
                     */
                    void SetStopSequences(const std::vector<std::string>& _stopSequences);

                    /**
                     * 判断参数 StopSequences 是否已赋值
                     * @return StopSequences 是否已赋值
                     * 
                     */
                    bool StopSequencesHasBeenSet() const;

                    /**
                     * 获取<p>温度</p>
                     * @return Temperature <p>温度</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>温度</p>
                     * @param _temperature <p>温度</p>
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>Top_P</p>
                     * @return TopP <p>Top_P</p>
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>Top_P</p>
                     * @param _topP <p>Top_P</p>
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                private:

                    /**
                     * <p>深度思考值<br>disabled<br>enabled</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deepThinking;
                    bool m_deepThinkingHasBeenSet;

                    /**
                     * <p>频率惩罚</p>
                     */
                    double m_frequencyPenalty;
                    bool m_frequencyPenaltyHasBeenSet;

                    /**
                     * <p>最大输出长度</p>
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>存在惩罚</p>
                     */
                    double m_presencePenalty;
                    bool m_presencePenaltyHasBeenSet;

                    /**
                     * <p>效果 disabled low medium high</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reasoningEffort;
                    bool m_reasoningEffortHasBeenSet;

                    /**
                     * <p>重复惩罚</p>
                     */
                    double m_repetitionPenalty;
                    bool m_repetitionPenaltyHasBeenSet;

                    /**
                     * <p>输出格式</p>
                     */
                    std::string m_replyFormat;
                    bool m_replyFormatHasBeenSet;

                    /**
                     * <p>随机种子</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>停止序列</p>
                     */
                    std::vector<std::string> m_stopSequences;
                    bool m_stopSequencesHasBeenSet;

                    /**
                     * <p>温度</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>Top_P</p>
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMS_H_
