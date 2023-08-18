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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/TextGenerationMessage.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TestingTextGeneration请求参数结构体
                */
                class TestingTextGenerationRequest : public AbstractModel
                {
                public:
                    TestingTextGenerationRequest();
                    ~TestingTextGenerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话内容,按对话时间从旧到新在数组中排列。
                     * @return Messages 会话内容,按对话时间从旧到新在数组中排列。
                     * 
                     */
                    std::vector<TextGenerationMessage> GetMessages() const;

                    /**
                     * 设置会话内容,按对话时间从旧到新在数组中排列。
                     * @param _messages 会话内容,按对话时间从旧到新在数组中排列。
                     * 
                     */
                    void SetMessages(const std::vector<TextGenerationMessage>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取模型名称，当前固定为TestingModel
                     * @return Model 模型名称，当前固定为TestingModel
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称，当前固定为TestingModel
                     * @param _model 模型名称，当前固定为TestingModel
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取会话id。
                     * @return QueryId 会话id。
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置会话id。
                     * @param _queryId 会话id。
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                    /**
                     * 获取超参数temperature, 该参数用于控制生成文本中重复内容。取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果。默认为1.0。
                     * @return Temperature 超参数temperature, 该参数用于控制生成文本中重复内容。取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果。默认为1.0。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置超参数temperature, 该参数用于控制生成文本中重复内容。取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果。默认为1.0。
                     * @param _temperature 超参数temperature, 该参数用于控制生成文本中重复内容。取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果。默认为1.0。
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
                     * 获取超参数top_p, 该参数用于控制生成文本的多样性。较小的"top_p"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_p"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果。默认值为1.0。
                     * @return TopP 超参数top_p, 该参数用于控制生成文本的多样性。较小的"top_p"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_p"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果。默认值为1.0。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置超参数top_p, 该参数用于控制生成文本的多样性。较小的"top_p"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_p"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果。默认值为1.0。
                     * @param _topP 超参数top_p, 该参数用于控制生成文本的多样性。较小的"top_p"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_p"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果。默认值为1.0。
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
                     * 获取超参数top_k,该参数用于控制生成文本的多样性和可控性，较小的"top_k"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_k"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[1, 100]，默认值 40。
                     * @return TopK 超参数top_k,该参数用于控制生成文本的多样性和可控性，较小的"top_k"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_k"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[1, 100]，默认值 40。
                     * 
                     */
                    double GetTopK() const;

                    /**
                     * 设置超参数top_k,该参数用于控制生成文本的多样性和可控性，较小的"top_k"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_k"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[1, 100]，默认值 40。
                     * @param _topK 超参数top_k,该参数用于控制生成文本的多样性和可控性，较小的"top_k"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_k"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[1, 100]，默认值 40。
                     * 
                     */
                    void SetTopK(const double& _topK);

                    /**
                     * 判断参数 TopK 是否已赋值
                     * @return TopK 是否已赋值
                     * 
                     */
                    bool TopKHasBeenSet() const;

                    /**
                     * 获取重复惩罚项,该参数用于用于控制生成文本中重复内容。建议范围[1.0, 1.05]非必要不建议使用, 不合理的取值会影响效果。默认为1。
                     * @return RepetitionPenalty 重复惩罚项,该参数用于用于控制生成文本中重复内容。建议范围[1.0, 1.05]非必要不建议使用, 不合理的取值会影响效果。默认为1。
                     * 
                     */
                    double GetRepetitionPenalty() const;

                    /**
                     * 设置重复惩罚项,该参数用于用于控制生成文本中重复内容。建议范围[1.0, 1.05]非必要不建议使用, 不合理的取值会影响效果。默认为1。
                     * @param _repetitionPenalty 重复惩罚项,该参数用于用于控制生成文本中重复内容。建议范围[1.0, 1.05]非必要不建议使用, 不合理的取值会影响效果。默认为1。
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
                     * 获取输出结果最大tokens数量。取值区间为(0, 1024]。默认值为768。
                     * @return OutputSeqLen 输出结果最大tokens数量。取值区间为(0, 1024]。默认值为768。
                     * 
                     */
                    int64_t GetOutputSeqLen() const;

                    /**
                     * 设置输出结果最大tokens数量。取值区间为(0, 1024]。默认值为768。
                     * @param _outputSeqLen 输出结果最大tokens数量。取值区间为(0, 1024]。默认值为768。
                     * 
                     */
                    void SetOutputSeqLen(const int64_t& _outputSeqLen);

                    /**
                     * 判断参数 OutputSeqLen 是否已赋值
                     * @return OutputSeqLen 是否已赋值
                     * 
                     */
                    bool OutputSeqLenHasBeenSet() const;

                    /**
                     * 获取输入文本的最大 tokens 数量。取值区间为(0, 1024]。默认值为256。
                     * @return MaxInputSeqLen 输入文本的最大 tokens 数量。取值区间为(0, 1024]。默认值为256。
                     * 
                     */
                    int64_t GetMaxInputSeqLen() const;

                    /**
                     * 设置输入文本的最大 tokens 数量。取值区间为(0, 1024]。默认值为256。
                     * @param _maxInputSeqLen 输入文本的最大 tokens 数量。取值区间为(0, 1024]。默认值为256。
                     * 
                     */
                    void SetMaxInputSeqLen(const int64_t& _maxInputSeqLen);

                    /**
                     * 判断参数 MaxInputSeqLen 是否已赋值
                     * @return MaxInputSeqLen 是否已赋值
                     * 
                     */
                    bool MaxInputSeqLenHasBeenSet() const;

                private:

                    /**
                     * 会话内容,按对话时间从旧到新在数组中排列。
                     */
                    std::vector<TextGenerationMessage> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 模型名称，当前固定为TestingModel
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 会话id。
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * 超参数temperature, 该参数用于控制生成文本中重复内容。取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果。默认为1.0。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 超参数top_p, 该参数用于控制生成文本的多样性。较小的"top_p"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_p"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果。默认值为1.0。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 超参数top_k,该参数用于控制生成文本的多样性和可控性，较小的"top_k"值会限制模型的选择范围，使生成的文本更加一致和确定性。较大的"top_k"值会扩大选择范围，使生成的文本更加多样化和随机。取值区间为[1, 100]，默认值 40。
                     */
                    double m_topK;
                    bool m_topKHasBeenSet;

                    /**
                     * 重复惩罚项,该参数用于用于控制生成文本中重复内容。建议范围[1.0, 1.05]非必要不建议使用, 不合理的取值会影响效果。默认为1。
                     */
                    double m_repetitionPenalty;
                    bool m_repetitionPenaltyHasBeenSet;

                    /**
                     * 输出结果最大tokens数量。取值区间为(0, 1024]。默认值为768。
                     */
                    int64_t m_outputSeqLen;
                    bool m_outputSeqLenHasBeenSet;

                    /**
                     * 输入文本的最大 tokens 数量。取值区间为(0, 1024]。默认值为256。
                     */
                    int64_t m_maxInputSeqLen;
                    bool m_maxInputSeqLenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONREQUEST_H_
