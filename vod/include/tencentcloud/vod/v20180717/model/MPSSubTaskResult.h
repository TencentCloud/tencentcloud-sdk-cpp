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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS 具体子任务查询结果类型。
                */
                class MPSSubTaskResult : public AbstractModel
                {
                public:
                    MPSSubTaskResult();
                    ~MPSSubTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型。MPS 的 WorkflowTask 结构中的具体子任务类型。取值：<li>AiAnalysis.DeLogo：智能擦除任务。</li><li>MediaProcess.Transcode：音视频增强任务。</li>
                     * @return TaskType 任务类型。MPS 的 WorkflowTask 结构中的具体子任务类型。取值：<li>AiAnalysis.DeLogo：智能擦除任务。</li><li>MediaProcess.Transcode：音视频增强任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。MPS 的 WorkflowTask 结构中的具体子任务类型。取值：<li>AiAnalysis.DeLogo：智能擦除任务。</li><li>MediaProcess.Transcode：音视频增强任务。</li>
                     * @param _taskType 任务类型。MPS 的 WorkflowTask 结构中的具体子任务类型。取值：<li>AiAnalysis.DeLogo：智能擦除任务。</li><li>MediaProcess.Transcode：音视频增强任务。</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务状态。有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态。有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param _status 任务状态。有 PROCESSING，SUCCESS 和 FAIL 三种。
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
                     * 获取错误码。返回0时成功，其他值为失败。
                     * @return ErrCode 错误码。返回0时成功，其他值为失败。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置错误码。返回0时成功，其他值为失败。
                     * @param _errCode 错误码。返回0时成功，其他值为失败。
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

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
                     * 获取MPS 视频处理任务输入。该字段对应 MPS 任务返回中的 Input 结果，以 JSON 格式返回。
                     * @return Input MPS 视频处理任务输入。该字段对应 MPS 任务返回中的 Input 结果，以 JSON 格式返回。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置MPS 视频处理任务输入。该字段对应 MPS 任务返回中的 Input 结果，以 JSON 格式返回。
                     * @param _input MPS 视频处理任务输入。该字段对应 MPS 任务返回中的 Input 结果，以 JSON 格式返回。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取MPS 视频处理任务输出。
                     * @return Output MPS 视频处理任务输出。
                     * 
                     */
                    MPSTaskOutput GetOutput() const;

                    /**
                     * 设置MPS 视频处理任务输出。
                     * @param _output MPS 视频处理任务输出。
                     * 
                     */
                    void SetOutput(const MPSTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 任务类型。MPS 的 WorkflowTask 结构中的具体子任务类型。取值：<li>AiAnalysis.DeLogo：智能擦除任务。</li><li>MediaProcess.Transcode：音视频增强任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务状态。有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码。返回0时成功，其他值为失败。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * MPS 视频处理任务输入。该字段对应 MPS 任务返回中的 Input 结果，以 JSON 格式返回。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * MPS 视频处理任务输出。
                     */
                    MPSTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
