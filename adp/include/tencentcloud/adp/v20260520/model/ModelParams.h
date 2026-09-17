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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
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
                     * 获取<p>是否开启深度思考</p>
                     * @return DeepThinking <p>是否开启深度思考</p>
                     * 
                     */
                    std::string GetDeepThinking() const;

                    /**
                     * 设置<p>是否开启深度思考</p>
                     * @param _deepThinking <p>是否开启深度思考</p>
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrequencyPenalty <p>频率惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFrequencyPenalty() const;

                    /**
                     * 设置<p>频率惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frequencyPenalty <p>频率惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTokens <p>最大输出长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置<p>最大输出长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxTokens <p>最大输出长度</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresencePenalty <p>存在惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPresencePenalty() const;

                    /**
                     * 设置<p>存在惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _presencePenalty <p>存在惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>深度思考效果</p>
                     * @return ReasoningEffort <p>深度思考效果</p>
                     * 
                     */
                    std::string GetReasoningEffort() const;

                    /**
                     * 设置<p>深度思考效果</p>
                     * @param _reasoningEffort <p>深度思考效果</p>
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepetitionPenalty <p>重复惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRepetitionPenalty() const;

                    /**
                     * 设置<p>重复惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repetitionPenalty <p>重复惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>输出格式（text、json_object）</p>
                     * @return ReplyFormat <p>输出格式（text、json_object）</p>
                     * 
                     */
                    std::string GetReplyFormat() const;

                    /**
                     * 设置<p>输出格式（text、json_object）</p>
                     * @param _replyFormat <p>输出格式（text、json_object）</p>
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
                     * 获取<p>seed 随机种子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seed <p>seed 随机种子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>seed 随机种子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seed <p>seed 随机种子</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * @return StopSequenceList <p>停止序列</p>
                     * 
                     */
                    std::vector<std::string> GetStopSequenceList() const;

                    /**
                     * 设置<p>停止序列</p>
                     * @param _stopSequenceList <p>停止序列</p>
                     * 
                     */
                    void SetStopSequenceList(const std::vector<std::string>& _stopSequenceList);

                    /**
                     * 判断参数 StopSequenceList 是否已赋值
                     * @return StopSequenceList 是否已赋值
                     * 
                     */
                    bool StopSequenceListHasBeenSet() const;

                    /**
                     * 获取<p>温度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Temperature <p>温度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>温度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _temperature <p>温度</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>top_p</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopP <p>top_p</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>top_p</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topP <p>top_p</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取<p>top_k</p>
                     * @return TopK <p>top_k</p>
                     * 
                     */
                    int64_t GetTopK() const;

                    /**
                     * 设置<p>top_k</p>
                     * @param _topK <p>top_k</p>
                     * 
                     */
                    void SetTopK(const int64_t& _topK);

                    /**
                     * 判断参数 TopK 是否已赋值
                     * @return TopK 是否已赋值
                     * 
                     */
                    bool TopKHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启深度思考</p>
                     */
                    std::string m_deepThinking;
                    bool m_deepThinkingHasBeenSet;

                    /**
                     * <p>频率惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_frequencyPenalty;
                    bool m_frequencyPenaltyHasBeenSet;

                    /**
                     * <p>最大输出长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>存在惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_presencePenalty;
                    bool m_presencePenaltyHasBeenSet;

                    /**
                     * <p>深度思考效果</p>
                     */
                    std::string m_reasoningEffort;
                    bool m_reasoningEffortHasBeenSet;

                    /**
                     * <p>重复惩罚</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_repetitionPenalty;
                    bool m_repetitionPenaltyHasBeenSet;

                    /**
                     * <p>输出格式（text、json_object）</p>
                     */
                    std::string m_replyFormat;
                    bool m_replyFormatHasBeenSet;

                    /**
                     * <p>seed 随机种子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>停止序列</p>
                     */
                    std::vector<std::string> m_stopSequenceList;
                    bool m_stopSequenceListHasBeenSet;

                    /**
                     * <p>温度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>top_p</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>top_k</p>
                     */
                    int64_t m_topK;
                    bool m_topKHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_
