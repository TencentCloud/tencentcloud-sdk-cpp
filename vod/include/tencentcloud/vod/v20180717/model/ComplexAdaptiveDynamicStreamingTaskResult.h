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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自适应码流任务信息。
                */
                class ComplexAdaptiveDynamicStreamingTaskResult : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskResult();
                    ~ComplexAdaptiveDynamicStreamingTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：已完成；</li>
<li>FAIL：失败。</li>
                     * @return Status 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：已完成；</li>
<li>FAIL：失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：已完成；</li>
<li>FAIL：失败。</li>
                     * @param _status 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：已完成；</li>
<li>FAIL：失败。</li>
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
                     * 获取错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @return ErrCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @param _errCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
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
                     * 获取转码进度，取值范围 [0-100] 。
                     * @return Progress 转码进度，取值范围 [0-100] 。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置转码进度，取值范围 [0-100] 。
                     * @param _progress 转码进度，取值范围 [0-100] 。
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取自适应码流任务的输入。
                     * @return Input 自适应码流任务的输入。
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTaskInput GetInput() const;

                    /**
                     * 设置自适应码流任务的输入。
                     * @param _input 自适应码流任务的输入。
                     * 
                     */
                    void SetInput(const ComplexAdaptiveDynamicStreamingTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取自适应码流任务的输出。
                     * @return Output 自适应码流任务的输出。
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTaskOutput GetOutput() const;

                    /**
                     * 设置自适应码流任务的输出。
                     * @param _output 自适应码流任务的输出。
                     * 
                     */
                    void SetOutput(const ComplexAdaptiveDynamicStreamingTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：已完成；</li>
<li>FAIL：失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 转码进度，取值范围 [0-100] 。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 自适应码流任务的输入。
                     */
                    ComplexAdaptiveDynamicStreamingTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 自适应码流任务的输出。
                     */
                    ComplexAdaptiveDynamicStreamingTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKRESULT_H_
