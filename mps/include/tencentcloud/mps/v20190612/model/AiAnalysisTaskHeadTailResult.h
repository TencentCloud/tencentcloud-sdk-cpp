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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHeadTailInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHeadTailOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 片头片尾结果类型
                */
                class AiAnalysisTaskHeadTailResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskHeadTailResult();
                    ~AiAnalysisTaskHeadTailResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param _status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
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
                     * 获取错误码，0：成功，其他值：失败。
                     * @return ErrCode 错误码，0：成功，其他值：失败。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，0：成功，其他值：失败。
                     * @param _errCode 错误码，0：成功，其他值：失败。
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
                     * 获取错误信息。
                     * @return Message 错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _message 错误信息。
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
                     * 获取片头片尾任务输入。
                     * @return Input 片头片尾任务输入。
                     * 
                     */
                    AiAnalysisTaskHeadTailInput GetInput() const;

                    /**
                     * 设置片头片尾任务输入。
                     * @param _input 片头片尾任务输入。
                     * 
                     */
                    void SetInput(const AiAnalysisTaskHeadTailInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取片头片尾任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 片头片尾任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHeadTailOutput GetOutput() const;

                    /**
                     * 设置片头片尾任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 片头片尾任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskHeadTailOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，0：成功，其他值：失败。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 片头片尾任务输入。
                     */
                    AiAnalysisTaskHeadTailInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 片头片尾任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHeadTailOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILRESULT_H_
