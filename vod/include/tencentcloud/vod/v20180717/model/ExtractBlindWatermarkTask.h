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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkInputInfo.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 提取视频数字水印任务信息
                */
                class ExtractBlindWatermarkTask : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkTask();
                    ~ExtractBlindWatermarkTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体处理任务 ID。
                     * @return TaskId 媒体处理任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置媒体处理任务 ID。
                     * @param _taskId 媒体处理任务 ID。
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
                     * 获取任务流状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @return Status 任务流状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务流状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @param _status 任务流状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
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
                     * 获取错误码，0 表示成功，其他值表示失败。
                     * @return ErrCode 错误码，0 表示成功，其他值表示失败。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，0 表示成功，其他值表示失败。
                     * @param _errCode 错误码，0 表示成功，其他值表示失败。
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
                     * 获取提取数字水印的文件输入信息。
                     * @return InputInfo 提取数字水印的文件输入信息。
                     * 
                     */
                    ExtractBlindWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置提取数字水印的文件输入信息。
                     * @param _inputInfo 提取数字水印的文件输入信息。
                     * 
                     */
                    void SetInputInfo(const ExtractBlindWatermarkInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li> <li>blind-ab：ab版权数字水印；</li>
                     * @return Type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li> <li>blind-ab：ab版权数字水印；</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li> <li>blind-ab：ab版权数字水印；</li>
                     * @param _type 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li> <li>blind-ab：ab版权数字水印；</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取标记是否检测到水印，如果该参数为true， Result字段将返回水印提取结果，如果该参数为false，Result字段不会返回。
                     * @return IsDetected 标记是否检测到水印，如果该参数为true， Result字段将返回水印提取结果，如果该参数为false，Result字段不会返回。
                     * 
                     */
                    bool GetIsDetected() const;

                    /**
                     * 设置标记是否检测到水印，如果该参数为true， Result字段将返回水印提取结果，如果该参数为false，Result字段不会返回。
                     * @param _isDetected 标记是否检测到水印，如果该参数为true， Result字段将返回水印提取结果，如果该参数为false，Result字段不会返回。
                     * 
                     */
                    void SetIsDetected(const bool& _isDetected);

                    /**
                     * 判断参数 IsDetected 是否已赋值
                     * @return IsDetected 是否已赋值
                     * 
                     */
                    bool IsDetectedHasBeenSet() const;

                    /**
                     * 获取提取出的数字水印内容，当没有检测到水印时该字段不会返回。
                     * @return Result 提取出的数字水印内容，当没有检测到水印时该字段不会返回。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置提取出的数字水印内容，当没有检测到水印时该字段不会返回。
                     * @param _result 提取出的数字水印内容，当没有检测到水印时该字段不会返回。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取溯源水印提取出的播放者的 ID，以十六进制表示，共6位。
                     * @return ResultUV 溯源水印提取出的播放者的 ID，以十六进制表示，共6位。
                     * 
                     */
                    std::string GetResultUV() const;

                    /**
                     * 设置溯源水印提取出的播放者的 ID，以十六进制表示，共6位。
                     * @param _resultUV 溯源水印提取出的播放者的 ID，以十六进制表示，共6位。
                     * 
                     */
                    void SetResultUV(const std::string& _resultUV);

                    /**
                     * 判断参数 ResultUV 是否已赋值
                     * @return ResultUV 是否已赋值
                     * 
                     */
                    bool ResultUVHasBeenSet() const;

                    /**
                     * 获取提取数字水印配置。
                     * @return ExtractBlindWatermarkConfig 提取数字水印配置。
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置提取数字水印配置。
                     * @param _extractBlindWatermarkConfig 提取数字水印配置。
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 媒体处理任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务流状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，0 表示成功，其他值表示失败。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 提取数字水印的文件输入信息。
                     */
                    ExtractBlindWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 数字水印类型，可选值：<li>blind-basic：基础版权数字水印；</li> <li>blind-ab：ab版权数字水印；</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标记是否检测到水印，如果该参数为true， Result字段将返回水印提取结果，如果该参数为false，Result字段不会返回。
                     */
                    bool m_isDetected;
                    bool m_isDetectedHasBeenSet;

                    /**
                     * 提取出的数字水印内容，当没有检测到水印时该字段不会返回。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 溯源水印提取出的播放者的 ID，以十六进制表示，共6位。
                     */
                    std::string m_resultUV;
                    bool m_resultUVHasBeenSet;

                    /**
                     * 提取数字水印配置。
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，任务流状态变更回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 用于去重的识别码，如果七天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKTASK_H_
