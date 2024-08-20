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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateAIConversation请求参数结构体
                */
                class UpdateAIConversationRequest : public AbstractModel
                {
                public:
                    UpdateAIConversationRequest();
                    ~UpdateAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一标识一个任务
                     * @return TaskId 唯一标识一个任务
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置唯一标识一个任务
                     * @param _taskId 唯一标识一个任务
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
                     * 获取不填写则不进行更新，机器人的欢迎语
                     * @return WelcomeMessage 不填写则不进行更新，机器人的欢迎语
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置不填写则不进行更新，机器人的欢迎语
                     * @param _welcomeMessage 不填写则不进行更新，机器人的欢迎语
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取不填写则不进行更新。智能打断模式，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @return InterruptMode 不填写则不进行更新。智能打断模式，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置不填写则不进行更新。智能打断模式，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @param _interruptMode 不填写则不进行更新。智能打断模式，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    void SetInterruptMode(const uint64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取不填写则不进行更新。InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断
                     * @return InterruptSpeechDuration 不填写则不进行更新。InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置不填写则不进行更新。InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断
                     * @param _interruptSpeechDuration 不填写则不进行更新。InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断
                     * 
                     */
                    void SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取不填写则不进行更新，LLM配置，详情见StartAIConversation接口
                     * @return LLMConfig 不填写则不进行更新，LLM配置，详情见StartAIConversation接口
                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置不填写则不进行更新，LLM配置，详情见StartAIConversation接口
                     * @param _lLMConfig 不填写则不进行更新，LLM配置，详情见StartAIConversation接口
                     * 
                     */
                    void SetLLMConfig(const std::string& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取不填写则不进行更新，TTS配置，详情见StartAIConversation接口
                     * @return TTSConfig 不填写则不进行更新，TTS配置，详情见StartAIConversation接口
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置不填写则不进行更新，TTS配置，详情见StartAIConversation接口
                     * @param _tTSConfig 不填写则不进行更新，TTS配置，详情见StartAIConversation接口
                     * 
                     */
                    void SetTTSConfig(const std::string& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                private:

                    /**
                     * 唯一标识一个任务
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 不填写则不进行更新，机器人的欢迎语
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * 不填写则不进行更新。智能打断模式，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * 不填写则不进行更新。InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * 不填写则不进行更新，LLM配置，详情见StartAIConversation接口
                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 不填写则不进行更新，TTS配置，详情见StartAIConversation接口
                     */
                    std::string m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEAICONVERSATIONREQUEST_H_
