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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSRESPONSE_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/soe/v20180724/model/WordRsp.h>
#include <tencentcloud/soe/v20180724/model/SentenceInfo.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TransmitOralProcess返回参数结构体
                */
                class TransmitOralProcessResponse : public AbstractModel
                {
                public:
                    TransmitOralProcessResponse();
                    ~TransmitOralProcessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
                     * @return PronAccuracy 发音精准度，取值范围[-1, 100]，当取-1时指完全不匹配，当为句子模式时，是所有已识别单词准确度的加权平均值，在reftext中但未识别出来的词不计入分数中。当为流式模式且请求中IsEnd未置1时，取值无意义。
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 判断参数 PronAccuracy 是否已赋值
                     * @return PronAccuracy 是否已赋值
                     */
                    bool PronAccuracyHasBeenSet() const;

                    /**
                     * 获取发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @return PronFluency 发音流利度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     */
                    double GetPronFluency() const;

                    /**
                     * 判断参数 PronFluency 是否已赋值
                     * @return PronFluency 是否已赋值
                     */
                    bool PronFluencyHasBeenSet() const;

                    /**
                     * 获取发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     * @return PronCompletion 发音完整度，取值范围[0, 1]，当为词模式时，取值无意义；当为流式模式且请求中IsEnd未置1时，取值无意义
                     */
                    double GetPronCompletion() const;

                    /**
                     * 判断参数 PronCompletion 是否已赋值
                     * @return PronCompletion 是否已赋值
                     */
                    bool PronCompletionHasBeenSet() const;

                    /**
                     * 获取详细发音评估结果
                     * @return Words 详细发音评估结果
                     */
                    std::vector<WordRsp> GetWords() const;

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取语音段唯一标识，一段语音一个SessionId
                     * @return SessionId 语音段唯一标识，一段语音一个SessionId
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取保存语音音频文件下载地址
                     * @return AudioUrl 保存语音音频文件下载地址
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取断句中间结果，中间结果是局部最优而非全局最优的结果，所以中间结果有可能和最终整体结果对应部分不一致；中间结果的输出便于客户端UI更新；待用户发音完全结束后，系统会给出一个综合所有句子的整体结果。
                     * @return SentenceInfoSet 断句中间结果，中间结果是局部最优而非全局最优的结果，所以中间结果有可能和最终整体结果对应部分不一致；中间结果的输出便于客户端UI更新；待用户发音完全结束后，系统会给出一个综合所有句子的整体结果。
                     */
                    std::vector<SentenceInfo> GetSentenceInfoSet() const;

                    /**
                     * 判断参数 SentenceInfoSet 是否已赋值
                     * @return SentenceInfoSet 是否已赋值
                     */
                    bool SentenceInfoSetHasBeenSet() const;

                    /**
                     * 获取评估 session 状态，“Evaluating"：评估中、"Failed"：评估失败、"Finished"：评估完成
                     * @return Status 评估 session 状态，“Evaluating"：评估中、"Failed"：评估失败、"Finished"：评估完成
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     * @return SuggestedScore 建议评分，取值范围[0,100]，评分方式为建议评分 = 准确度（PronAccuracy）× 完整度（PronCompletion）×（2 - 完整度（PronCompletion）），如若评分策略不符合请参考Words数组中的详细分数自定义评分逻辑。
                     */
                    double GetSuggestedScore() const;

                    /**
                     * 判断参数 SuggestedScore 是否已赋值
                     * @return SuggestedScore 是否已赋值
                     */
                    bool SuggestedScoreHasBeenSet() const;

                private:

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
                     */
                    std::vector<WordRsp> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 语音段唯一标识，一段语音一个SessionId
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 保存语音音频文件下载地址
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 断句中间结果，中间结果是局部最优而非全局最优的结果，所以中间结果有可能和最终整体结果对应部分不一致；中间结果的输出便于客户端UI更新；待用户发音完全结束后，系统会给出一个综合所有句子的整体结果。
                     */
                    std::vector<SentenceInfo> m_sentenceInfoSet;
                    bool m_sentenceInfoSetHasBeenSet;

                    /**
                     * 评估 session 状态，“Evaluating"：评估中、"Failed"：评估失败、"Finished"：评估完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSRESPONSE_H_
