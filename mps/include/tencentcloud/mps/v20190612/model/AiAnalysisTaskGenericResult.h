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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能分析通用结果类型
                */
                class AiAnalysisTaskGenericResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskGenericResult();
                    ~AiAnalysisTaskGenericResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * @return Status <p>任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * @param _status <p>任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误码，0：成功，其他值：失败。</p>
                     * @return ErrCode <p>错误码，0：成功，其他值：失败。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码，0：成功，其他值：失败。</p>
                     * @param _errCode <p>错误码，0：成功，其他值：失败。</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _message <p>错误信息。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>智能分析任务输入。</p>
                     * @return Input <p>智能分析任务输入。</p>
                     * 
                     */
                    AiAnalysisTaskGenericInput GetInput() const;

                    /**
                     * 设置<p>智能分析任务输入。</p>
                     * @param _input <p>智能分析任务输入。</p>
                     * 
                     */
                    void SetInput(const AiAnalysisTaskGenericInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>智能分析任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output <p>智能分析任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskGenericOutput GetOutput() const;

                    /**
                     * 设置<p>智能分析任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output <p>智能分析任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskGenericOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码，0：成功，其他值：失败。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>智能分析任务输入。</p>
                     */
                    AiAnalysisTaskGenericInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>智能分析任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskGenericOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKGENERICRESULT_H_
