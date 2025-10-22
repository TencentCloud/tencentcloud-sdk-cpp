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
                     * 获取温度
                     * @return Temperature 温度
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置温度
                     * @param _temperature 温度
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
                     * 获取Top_P
                     * @return TopP Top_P
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置Top_P
                     * @param _topP Top_P
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
                     * 获取随机种子
                     * @return Seed 随机种子
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置随机种子
                     * @param _seed 随机种子
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
                     * 获取存在惩罚
                     * @return PresencePenalty 存在惩罚
                     * 
                     */
                    double GetPresencePenalty() const;

                    /**
                     * 设置存在惩罚
                     * @param _presencePenalty 存在惩罚
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
                     * 获取频率惩罚
                     * @return FrequencyPenalty 频率惩罚
                     * 
                     */
                    double GetFrequencyPenalty() const;

                    /**
                     * 设置频率惩罚
                     * @param _frequencyPenalty 频率惩罚
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
                     * 获取重复惩罚
                     * @return RepetitionPenalty 重复惩罚
                     * 
                     */
                    double GetRepetitionPenalty() const;

                    /**
                     * 设置重复惩罚
                     * @param _repetitionPenalty 重复惩罚
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
                     * 获取最大输出长度
                     * @return MaxTokens 最大输出长度
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置最大输出长度
                     * @param _maxTokens 最大输出长度
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
                     * 获取停止序列
                     * @return StopSequences 停止序列
                     * 
                     */
                    std::vector<std::string> GetStopSequences() const;

                    /**
                     * 设置停止序列
                     * @param _stopSequences 停止序列
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
                     * 获取输出格式
                     * @return ReplyFormat 输出格式
                     * 
                     */
                    std::string GetReplyFormat() const;

                    /**
                     * 设置输出格式
                     * @param _replyFormat 输出格式
                     * 
                     */
                    void SetReplyFormat(const std::string& _replyFormat);

                    /**
                     * 判断参数 ReplyFormat 是否已赋值
                     * @return ReplyFormat 是否已赋值
                     * 
                     */
                    bool ReplyFormatHasBeenSet() const;

                private:

                    /**
                     * 温度
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * Top_P
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 随机种子
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 存在惩罚
                     */
                    double m_presencePenalty;
                    bool m_presencePenaltyHasBeenSet;

                    /**
                     * 频率惩罚
                     */
                    double m_frequencyPenalty;
                    bool m_frequencyPenaltyHasBeenSet;

                    /**
                     * 重复惩罚
                     */
                    double m_repetitionPenalty;
                    bool m_repetitionPenaltyHasBeenSet;

                    /**
                     * 最大输出长度
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * 停止序列
                     */
                    std::vector<std::string> m_stopSequences;
                    bool m_stopSequencesHasBeenSet;

                    /**
                     * 输出格式
                     */
                    std::string m_replyFormat;
                    bool m_replyFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMS_H_
