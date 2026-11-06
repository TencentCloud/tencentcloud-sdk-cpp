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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationInvokeLLM.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationInvokeTTS.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ControlVoiceConversation请求参数结构体
                */
                class ControlVoiceConversationRequest : public AbstractModel
                {
                public:
                    ControlVoiceConversationRequest();
                    ~ControlVoiceConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @return TaskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @param _taskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
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
                     * 获取<p>控制指令。</p><p>枚举值：</p><ul><li>&quot;Interrupt&quot;： 强制打断</li><li>&quot;invokellm&quot;： 文本注入 LLM：向当前对话上下文注入一段文本，触发一轮 LLM 回复。<code>S2S</code>模式不支持该指令</li><li>invoketts： 文本注入TTS：向当前TTS注入文本，触发TTS播报。<code>S2S</code>模式不支持该指令</li></ul>
                     * @return Command <p>控制指令。</p><p>枚举值：</p><ul><li>&quot;Interrupt&quot;： 强制打断</li><li>&quot;invokellm&quot;： 文本注入 LLM：向当前对话上下文注入一段文本，触发一轮 LLM 回复。<code>S2S</code>模式不支持该指令</li><li>invoketts： 文本注入TTS：向当前TTS注入文本，触发TTS播报。<code>S2S</code>模式不支持该指令</li></ul>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>控制指令。</p><p>枚举值：</p><ul><li>&quot;Interrupt&quot;： 强制打断</li><li>&quot;invokellm&quot;： 文本注入 LLM：向当前对话上下文注入一段文本，触发一轮 LLM 回复。<code>S2S</code>模式不支持该指令</li><li>invoketts： 文本注入TTS：向当前TTS注入文本，触发TTS播报。<code>S2S</code>模式不支持该指令</li></ul>
                     * @param _command <p>控制指令。</p><p>枚举值：</p><ul><li>&quot;Interrupt&quot;： 强制打断</li><li>&quot;invokellm&quot;： 文本注入 LLM：向当前对话上下文注入一段文本，触发一轮 LLM 回复。<code>S2S</code>模式不支持该指令</li><li>invoketts： 文本注入TTS：向当前TTS注入文本，触发TTS播报。<code>S2S</code>模式不支持该指令</li></ul>
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取<p>注入LLM的配置，<code>Command=invokellm</code> 时必填</p>
                     * @return InvokeLLM <p>注入LLM的配置，<code>Command=invokellm</code> 时必填</p>
                     * 
                     */
                    VoiceConversationInvokeLLM GetInvokeLLM() const;

                    /**
                     * 设置<p>注入LLM的配置，<code>Command=invokellm</code> 时必填</p>
                     * @param _invokeLLM <p>注入LLM的配置，<code>Command=invokellm</code> 时必填</p>
                     * 
                     */
                    void SetInvokeLLM(const VoiceConversationInvokeLLM& _invokeLLM);

                    /**
                     * 判断参数 InvokeLLM 是否已赋值
                     * @return InvokeLLM 是否已赋值
                     * 
                     */
                    bool InvokeLLMHasBeenSet() const;

                    /**
                     * 获取<p>注入TTS的配置，<code>Command=invoketts</code> 时必填</p>
                     * @return InvokeTTS <p>注入TTS的配置，<code>Command=invoketts</code> 时必填</p>
                     * 
                     */
                    VoiceConversationInvokeTTS GetInvokeTTS() const;

                    /**
                     * 设置<p>注入TTS的配置，<code>Command=invoketts</code> 时必填</p>
                     * @param _invokeTTS <p>注入TTS的配置，<code>Command=invoketts</code> 时必填</p>
                     * 
                     */
                    void SetInvokeTTS(const VoiceConversationInvokeTTS& _invokeTTS);

                    /**
                     * 判断参数 InvokeTTS 是否已赋值
                     * @return InvokeTTS 是否已赋值
                     * 
                     */
                    bool InvokeTTSHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>控制指令。</p><p>枚举值：</p><ul><li>&quot;Interrupt&quot;： 强制打断</li><li>&quot;invokellm&quot;： 文本注入 LLM：向当前对话上下文注入一段文本，触发一轮 LLM 回复。<code>S2S</code>模式不支持该指令</li><li>invoketts： 文本注入TTS：向当前TTS注入文本，触发TTS播报。<code>S2S</code>模式不支持该指令</li></ul>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>注入LLM的配置，<code>Command=invokellm</code> 时必填</p>
                     */
                    VoiceConversationInvokeLLM m_invokeLLM;
                    bool m_invokeLLMHasBeenSet;

                    /**
                     * <p>注入TTS的配置，<code>Command=invoketts</code> 时必填</p>
                     */
                    VoiceConversationInvokeTTS m_invokeTTS;
                    bool m_invokeTTSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLVOICECONVERSATIONREQUEST_H_
