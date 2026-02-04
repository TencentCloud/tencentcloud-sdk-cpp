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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCUTOUTRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCUTOUTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCutoutInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCutoutOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频智能抠图结果数据结构
                */
                class AiAnalysisTaskCutoutResult : public AbstractModel
                {
                public:
                    AiAnalysisTaskCutoutResult();
                    ~AiAnalysisTaskCutoutResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，有 `PROCESSING`，`SUCCESS` 和 `FAIL` 三种
                     * @return Status 任务状态，有 `PROCESSING`，`SUCCESS` 和 `FAIL` 三种
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 `PROCESSING`，`SUCCESS` 和 `FAIL` 三种
                     * @param _status 任务状态，有 `PROCESSING`，`SUCCESS` 和 `FAIL` 三种
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
                     * 获取错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @return ErrCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @param _errCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
                     * @param _message 错误信息
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
                     * 获取抠图任务输入
                     * @return Input 抠图任务输入
                     * 
                     */
                    AiAnalysisTaskCutoutInput GetInput() const;

                    /**
                     * 设置抠图任务输入
                     * @param _input 抠图任务输入
                     * 
                     */
                    void SetInput(const AiAnalysisTaskCutoutInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取抠图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 抠图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskCutoutOutput GetOutput() const;

                    /**
                     * 设置抠图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 抠图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const AiAnalysisTaskCutoutOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取任务进度
                     * @return Progress 任务进度
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务进度
                     * @param _progress 任务进度
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务开始执行的时间，采用 ISO 日期格式。
                     * @return BeginProcessTime 任务开始执行的时间，采用 ISO 日期格式。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置任务开始执行的时间，采用 ISO 日期格式。
                     * @param _beginProcessTime 任务开始执行的时间，采用 ISO 日期格式。
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务结束执行的时间，采用 ISO 日期格式。
                     * @return FinishTime 任务结束执行的时间，采用 ISO 日期格式。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务结束执行的时间，采用 ISO 日期格式。
                     * @param _finishTime 任务结束执行的时间，采用 ISO 日期格式。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 任务状态，有 `PROCESSING`，`SUCCESS` 和 `FAIL` 三种
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 抠图任务输入
                     */
                    AiAnalysisTaskCutoutInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 抠图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskCutoutOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 任务进度
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务开始执行的时间，采用 ISO 日期格式。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务结束执行的时间，采用 ISO 日期格式。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCUTOUTRESULT_H_
