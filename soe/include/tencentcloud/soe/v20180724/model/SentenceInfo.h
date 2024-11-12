/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_SENTENCEINFO_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_SENTENCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/soe/v20180724/model/WordRsp.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 语音过程中断句的中间结果
                */
                class SentenceInfo : public AbstractModel
                {
                public:
                    SentenceInfo();
                    ~SentenceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取句子序号，在段落、自由说模式下有效，表示断句序号，最后的综合结果的为-1.
                     * @return SentenceId 句子序号，在段落、自由说模式下有效，表示断句序号，最后的综合结果的为-1.
                     * 
                     */
                    int64_t GetSentenceId() const;

                    /**
                     * 设置句子序号，在段落、自由说模式下有效，表示断句序号，最后的综合结果的为-1.
                     * @param _sentenceId 句子序号，在段落、自由说模式下有效，表示断句序号，最后的综合结果的为-1.
                     * 
                     */
                    void SetSentenceId(const int64_t& _sentenceId);

                    /**
                     * 判断参数 SentenceId 是否已赋值
                     * @return SentenceId 是否已赋值
                     * 
                     */
                    bool SentenceIdHasBeenSet() const;

                    /**
                     * 获取详细发音评估结果
                     * @return Words 详细发音评估结果
                     * 
                     */
                    std::vector<WordRsp> GetWords() const;

                    /**
                     * 设置详细发音评估结果
                     * @param _words 详细发音评估结果
                     * 
                     */
                    void SetWords(const std::vector<WordRsp>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。
                     * @return PronAccuracy 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。
                     * 
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 设置发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。
                     * @param _pronAccuracy 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。
                     * 
                     */
                    void SetPronAccuracy(const double& _pronAccuracy);

                    /**
                     * 判断参数 PronAccuracy 是否已赋值
                     * @return PronAccuracy 是否已赋值
                     * 
                     */
                    bool PronAccuracyHasBeenSet() const;

                    /**
                     * 获取发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @return PronFluency 发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * 
                     */
                    double GetPronFluency() const;

                    /**
                     * 设置发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @param _pronFluency 发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * 
                     */
                    void SetPronFluency(const double& _pronFluency);

                    /**
                     * 判断参数 PronFluency 是否已赋值
                     * @return PronFluency 是否已赋值
                     * 
                     */
                    bool PronFluencyHasBeenSet() const;

                    /**
                     * 获取发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @return PronCompletion 发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * 
                     */
                    double GetPronCompletion() const;

                    /**
                     * 设置发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @param _pronCompletion 发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * 
                     */
                    void SetPronCompletion(const double& _pronCompletion);

                    /**
                     * 判断参数 PronCompletion 是否已赋值
                     * @return PronCompletion 是否已赋值
                     * 
                     */
                    bool PronCompletionHasBeenSet() const;

                    /**
                     * 获取建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracyfloat）× 完整度（PronCompletionfloat）×（2 - 完整度（PronCompletionfloat）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * @return SuggestedScore 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracyfloat）× 完整度（PronCompletionfloat）×（2 - 完整度（PronCompletionfloat）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * 
                     */
                    double GetSuggestedScore() const;

                    /**
                     * 设置建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracyfloat）× 完整度（PronCompletionfloat）×（2 - 完整度（PronCompletionfloat）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * @param _suggestedScore 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracyfloat）× 完整度（PronCompletionfloat）×（2 - 完整度（PronCompletionfloat）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * 
                     */
                    void SetSuggestedScore(const double& _suggestedScore);

                    /**
                     * 判断参数 SuggestedScore 是否已赋值
                     * @return SuggestedScore 是否已赋值
                     * 
                     */
                    bool SuggestedScoreHasBeenSet() const;

                    /**
                     * 获取匹配候选文本的序号，在句子多分支、情景对 话、段落模式下表示匹配到的文本序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefTextId 匹配候选文本的序号，在句子多分支、情景对 话、段落模式下表示匹配到的文本序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefTextId() const;

                    /**
                     * 设置匹配候选文本的序号，在句子多分支、情景对 话、段落模式下表示匹配到的文本序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refTextId 匹配候选文本的序号，在句子多分支、情景对 话、段落模式下表示匹配到的文本序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefTextId(const int64_t& _refTextId);

                    /**
                     * 判断参数 RefTextId 是否已赋值
                     * @return RefTextId 是否已赋值
                     * 
                     */
                    bool RefTextIdHasBeenSet() const;

                    /**
                     * 获取主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyWordHits 主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetKeyWordHits() const;

                    /**
                     * 设置主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyWordHits 主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyWordHits(const std::vector<double>& _keyWordHits);

                    /**
                     * 判断参数 KeyWordHits 是否已赋值
                     * @return KeyWordHits 是否已赋值
                     * 
                     */
                    bool KeyWordHitsHasBeenSet() const;

                    /**
                     * 获取负向主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnKeyWordHits 负向主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetUnKeyWordHits() const;

                    /**
                     * 设置负向主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unKeyWordHits 负向主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnKeyWordHits(const std::vector<double>& _unKeyWordHits);

                    /**
                     * 判断参数 UnKeyWordHits 是否已赋值
                     * @return UnKeyWordHits 是否已赋值
                     * 
                     */
                    bool UnKeyWordHitsHasBeenSet() const;

                private:

                    /**
                     * 句子序号，在段落、自由说模式下有效，表示断句序号，最后的综合结果的为-1.
                     */
                    int64_t m_sentenceId;
                    bool m_sentenceIdHasBeenSet;

                    /**
                     * 详细发音评估结果
                     */
                    std::vector<WordRsp> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。
                     */
                    double m_pronAccuracy;
                    bool m_pronAccuracyHasBeenSet;

                    /**
                     * 发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     */
                    double m_pronFluency;
                    bool m_pronFluencyHasBeenSet;

                    /**
                     * 发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     */
                    double m_pronCompletion;
                    bool m_pronCompletionHasBeenSet;

                    /**
                     * 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracyfloat）× 完整度（PronCompletionfloat）×（2 - 完整度（PronCompletionfloat）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     */
                    double m_suggestedScore;
                    bool m_suggestedScoreHasBeenSet;

                    /**
                     * 匹配候选文本的序号，在句子多分支、情景对 话、段落模式下表示匹配到的文本序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refTextId;
                    bool m_refTextIdHasBeenSet;

                    /**
                     * 主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_keyWordHits;
                    bool m_keyWordHitsHasBeenSet;

                    /**
                     * 负向主题词命中标志，0表示没命中，1表示命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_unKeyWordHits;
                    bool m_unKeyWordHitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_SENTENCEINFO_H_
