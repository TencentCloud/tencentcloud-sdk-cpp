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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTaskInput.h>
#include <tencentcloud/vod/v20180717/model/MediaTranscodeItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转码任务结果类型
                */
                class MediaProcessTaskTranscodeResult : public AbstractModel
                {
                public:
                    MediaProcessTaskTranscodeResult();
                    ~MediaProcessTaskTranscodeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码，0 表示成功，其他值表示失败：
<li>40000：输入参数不合法，请检查输入参数；</li>
<li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li>
<li>70000：内部服务错误，建议重试。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 错误码，0 表示成功，其他值表示失败：
<li>40000：输入参数不合法，请检查输入参数；</li>
<li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li>
<li>70000：内部服务错误，建议重试。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，0 表示成功，其他值表示失败：
<li>40000：输入参数不合法，请检查输入参数；</li>
<li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li>
<li>70000：内部服务错误，建议重试。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrCode 错误码，0 表示成功，其他值表示失败：
<li>40000：输入参数不合法，请检查输入参数；</li>
<li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li>
<li>70000：内部服务错误，建议重试。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取转码任务的输入。
                     * @return Input 转码任务的输入。
                     */
                    TranscodeTaskInput GetInput() const;

                    /**
                     * 设置转码任务的输入。
                     * @param Input 转码任务的输入。
                     */
                    void SetInput(const TranscodeTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取转码任务的输出。
                     * @return Output 转码任务的输出。
                     */
                    MediaTranscodeItem GetOutput() const;

                    /**
                     * 设置转码任务的输出。
                     * @param Output 转码任务的输出。
                     */
                    void SetOutput(const MediaTranscodeItem& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，0 表示成功，其他值表示失败：
<li>40000：输入参数不合法，请检查输入参数；</li>
<li>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；</li>
<li>70000：内部服务错误，建议重试。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 转码任务的输入。
                     */
                    TranscodeTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 转码任务的输出。
                     */
                    MediaTranscodeItem m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKTRANSCODERESULT_H_
