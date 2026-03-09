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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceInput.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 创建自定义音色任务信息。
                */
                class CreateAigcCustomVoiceTask : public AbstractModel
                {
                public:
                    CreateAigcCustomVoiceTask();
                    ~CreateAigcCustomVoiceTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID。</p>
                     * @return TaskId <p>任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。</p>
                     * @param _taskId <p>任务 ID。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * @return Status <p>任务状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * @param _status <p>任务状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
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
                     * 获取<p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * @return ErrCode <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * @param _errCode <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
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
                     * 获取<p>扩展错误码。空字符串表示成功，其它值表示失败。</p>
                     * @return ErrCodeExt <p>扩展错误码。空字符串表示成功，其它值表示失败。</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>扩展错误码。空字符串表示成功，其它值表示失败。</p>
                     * @param _errCodeExt <p>扩展错误码。空字符串表示成功，其它值表示失败。</p>
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
                     * 获取<p>任务进度，取值范围 [0-100] 。</p>
                     * @return Progress <p>任务进度，取值范围 [0-100] 。</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>任务进度，取值范围 [0-100] 。</p>
                     * @param _progress <p>任务进度，取值范围 [0-100] 。</p>
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
                     * 获取<p>创建 AIGC 自定义音色输入信息。</p>
                     * @return Input <p>创建 AIGC 自定义音色输入信息。</p>
                     * 
                     */
                    CreateAigcCustomVoiceInput GetInput() const;

                    /**
                     * 设置<p>创建 AIGC 自定义音色输入信息。</p>
                     * @param _input <p>创建 AIGC 自定义音色输入信息。</p>
                     * 
                     */
                    void SetInput(const CreateAigcCustomVoiceInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>创建 AIGC 自定义音色输出信息。</p>
                     * @return Output <p>创建 AIGC 自定义音色输出信息。</p>
                     * 
                     */
                    CreateAigcCustomVoiceOutput GetOutput() const;

                    /**
                     * 设置<p>创建 AIGC 自定义音色输出信息。</p>
                     * @param _output <p>创建 AIGC 自定义音色输出信息。</p>
                     * 
                     */
                    void SetOutput(const CreateAigcCustomVoiceOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>扩展错误码。空字符串表示成功，其它值表示失败。</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>任务进度，取值范围 [0-100] 。</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>创建 AIGC 自定义音色输入信息。</p>
                     */
                    CreateAigcCustomVoiceInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>创建 AIGC 自定义音色输出信息。</p>
                     */
                    CreateAigcCustomVoiceOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICETASK_H_
