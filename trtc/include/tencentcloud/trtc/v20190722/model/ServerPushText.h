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
    格式说明：音频必须为单声道，采样率必须跟对应TTS的采样率保持一致，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * @return Audio 服务端推送播报音频
    格式说明：音频必须为单声道，采样率必须跟对应TTS的采样率保持一致，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置服务端推送播报音频
    格式说明：音频必须为单声道，采样率必须跟对应TTS的采样率保持一致，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     * @param _audio 服务端推送播报音频
    格式说明：音频必须为单声道，采样率必须跟对应TTS的采样率保持一致，编码为Base64字符串。
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

                    /**
                     * 获取默认为0，仅在Interrupt为false时有效
- 0表示当前有交互发生时，会丢弃Interrupt为false的消息
- 1表示当前有交互发生时，不会丢弃Interrupt为false的消息，而是缓存下来，等待当前交互结束后，再去处理

注意：DropMode为1时，允许缓存多个消息，如果后续出现了打断，缓存的消息会被清空
                     * @return DropMode 默认为0，仅在Interrupt为false时有效
- 0表示当前有交互发生时，会丢弃Interrupt为false的消息
- 1表示当前有交互发生时，不会丢弃Interrupt为false的消息，而是缓存下来，等待当前交互结束后，再去处理

注意：DropMode为1时，允许缓存多个消息，如果后续出现了打断，缓存的消息会被清空
                     * 
                     */
                    uint64_t GetDropMode() const;

                    /**
                     * 设置默认为0，仅在Interrupt为false时有效
- 0表示当前有交互发生时，会丢弃Interrupt为false的消息
- 1表示当前有交互发生时，不会丢弃Interrupt为false的消息，而是缓存下来，等待当前交互结束后，再去处理

注意：DropMode为1时，允许缓存多个消息，如果后续出现了打断，缓存的消息会被清空
                     * @param _dropMode 默认为0，仅在Interrupt为false时有效
- 0表示当前有交互发生时，会丢弃Interrupt为false的消息
- 1表示当前有交互发生时，不会丢弃Interrupt为false的消息，而是缓存下来，等待当前交互结束后，再去处理

注意：DropMode为1时，允许缓存多个消息，如果后续出现了打断，缓存的消息会被清空
                     * 
                     */
                    void SetDropMode(const uint64_t& _dropMode);

                    /**
                     * 判断参数 DropMode 是否已赋值
                     * @return DropMode 是否已赋值
                     * 
                     */
                    bool DropModeHasBeenSet() const;

                    /**
                     * 获取ServerPushText消息的优先级，0表示可被打断，1表示不会被打断。**目前仅支持传入0，如果需要传入1，请提工单联系我们添加权限。**
注意：在接收到Priority=1的消息后，后续其他任何消息都会被忽略（包括Priority=1的消息），直到Priority=1的消息处理结束。该字段可与Interrupt、DropMode字段配合使用。
例子：
- Priority=1、Interrupt=true，会打断现有交互，立刻播报，播报过程中不会被打断
- Priority=1、Interrupt=false、DropMode=1，会等待当前交互结束，再进行播报，播报过程中不会被打断

                     * @return Priority ServerPushText消息的优先级，0表示可被打断，1表示不会被打断。**目前仅支持传入0，如果需要传入1，请提工单联系我们添加权限。**
注意：在接收到Priority=1的消息后，后续其他任何消息都会被忽略（包括Priority=1的消息），直到Priority=1的消息处理结束。该字段可与Interrupt、DropMode字段配合使用。
例子：
- Priority=1、Interrupt=true，会打断现有交互，立刻播报，播报过程中不会被打断
- Priority=1、Interrupt=false、DropMode=1，会等待当前交互结束，再进行播报，播报过程中不会被打断

                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置ServerPushText消息的优先级，0表示可被打断，1表示不会被打断。**目前仅支持传入0，如果需要传入1，请提工单联系我们添加权限。**
注意：在接收到Priority=1的消息后，后续其他任何消息都会被忽略（包括Priority=1的消息），直到Priority=1的消息处理结束。该字段可与Interrupt、DropMode字段配合使用。
例子：
- Priority=1、Interrupt=true，会打断现有交互，立刻播报，播报过程中不会被打断
- Priority=1、Interrupt=false、DropMode=1，会等待当前交互结束，再进行播报，播报过程中不会被打断

                     * @param _priority ServerPushText消息的优先级，0表示可被打断，1表示不会被打断。**目前仅支持传入0，如果需要传入1，请提工单联系我们添加权限。**
注意：在接收到Priority=1的消息后，后续其他任何消息都会被忽略（包括Priority=1的消息），直到Priority=1的消息处理结束。该字段可与Interrupt、DropMode字段配合使用。
例子：
- Priority=1、Interrupt=true，会打断现有交互，立刻播报，播报过程中不会被打断
- Priority=1、Interrupt=false、DropMode=1，会等待当前交互结束，再进行播报，播报过程中不会被打断

                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

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
    格式说明：音频必须为单声道，采样率必须跟对应TTS的采样率保持一致，编码为Base64字符串。
    输入规则：当提供Audio字段时，将不接受Text字段的输入。系统将直接播放Audio字段中的音频内容。
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 默认为0，仅在Interrupt为false时有效
- 0表示当前有交互发生时，会丢弃Interrupt为false的消息
- 1表示当前有交互发生时，不会丢弃Interrupt为false的消息，而是缓存下来，等待当前交互结束后，再去处理

注意：DropMode为1时，允许缓存多个消息，如果后续出现了打断，缓存的消息会被清空
                     */
                    uint64_t m_dropMode;
                    bool m_dropModeHasBeenSet;

                    /**
                     * ServerPushText消息的优先级，0表示可被打断，1表示不会被打断。**目前仅支持传入0，如果需要传入1，请提工单联系我们添加权限。**
注意：在接收到Priority=1的消息后，后续其他任何消息都会被忽略（包括Priority=1的消息），直到Priority=1的消息处理结束。该字段可与Interrupt、DropMode字段配合使用。
例子：
- Priority=1、Interrupt=true，会打断现有交互，立刻播报，播报过程中不会被打断
- Priority=1、Interrupt=false、DropMode=1，会等待当前交互结束，再进行播报，播报过程中不会被打断

                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SERVERPUSHTEXT_H_
