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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDSCORE_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDSCORE_H_

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
                * 关键词得分
                */
                class KeywordScore : public AbstractModel
                {
                public:
                    KeywordScore();
                    ~KeywordScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
                     * @return PronAccuracy 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
                     * 
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 设置发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
                     * @param _pronAccuracy 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
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
                     * 获取详细发音评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Words 详细发音评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WordRsp> GetWords() const;

                    /**
                     * 设置详细发音评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _words 详细发音评估结果
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * @return SuggestedScore 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * 
                     */
                    double GetSuggestedScore() const;

                    /**
                     * 设置建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * @param _suggestedScore 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * 
                     */
                    void SetSuggestedScore(const double& _suggestedScore);

                    /**
                     * 判断参数 SuggestedScore 是否已赋值
                     * @return SuggestedScore 是否已赋值
                     * 
                     */
                    bool SuggestedScoreHasBeenSet() const;

                private:

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
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
                     * 详细发音评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WordRsp> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     */
                    double m_suggestedScore;
                    bool m_suggestedScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDSCORE_H_
