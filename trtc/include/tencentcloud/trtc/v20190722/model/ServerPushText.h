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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 服务端控制AI对话机器人播报指定文本
                */
                class ServerPushText : public AbstractModel
                {
                public:
                    ServerPushText();
                    ~ServerPushText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务端推送播报文本
                     * @return Text 服务端推送播报文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置服务端推送播报文本
                     * @param _text 服务端推送播报文本
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取是否允许该文本打断机器人说话
                     * @return Interrupt 是否允许该文本打断机器人说话
                     * 
                     */
                    bool GetInterrupt() const;

                    /**
                     * 设置是否允许该文本打断机器人说话
                     * @param _interrupt 是否允许该文本打断机器人说话
                     * 
                     */
                    void SetInterrupt(const bool& _interrupt);

                    /**
                     * 判断参数 Interrupt 是否已赋值
                     * @return Interrupt 是否已赋值
                     * 
                     */
                    bool InterruptHasBeenSet() const;

                    /**
                     * 获取播报完文本后，是否自动关闭对话任务
                     * @return StopAfterPlay 播报完文本后，是否自动关闭对话任务
                     * 
                     */
                    bool GetStopAfterPlay() const;

                    /**
                     * 设置播报完文本后，是否自动关闭对话任务
                     * @param _stopAfterPlay 播报完文本后，是否自动关闭对话任务
                     * 
                     */
                    void SetStopAfterPlay(const bool& _stopAfterPlay);

                    /**
                     * 判断参数 StopAfterPlay 是否已赋值
                     * @return StopAfterPlay 是否已赋值
                     * 
                     */
                    bool StopAfterPlayHasBeenSet() const;

                    /**
                     * 获取服务端推送播报音频
    格式说明：音频以16KHz采样率的单声道格式提供，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * @return Audio 服务端推送播报音频
    格式说明：音频以16KHz采样率的单声道格式提供，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置服务端推送播报音频
    格式说明：音频以16KHz采样率的单声道格式提供，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * @param _audio 服务端推送播报音频
    格式说明：音频以16KHz采样率的单声道格式提供，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * 
                     */
                    void SetAudio(const std::string& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                private:

                    /**
                     * 服务端推送播报文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 是否允许该文本打断机器人说话
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                    /**
                     * 播报完文本后，是否自动关闭对话任务
                     */
                    bool m_stopAfterPlay;
                    bool m_stopAfterPlayHasBeenSet;

                    /**
                     * 服务端推送播报音频
    格式说明：音频以16KHz采样率的单声道格式提供，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
