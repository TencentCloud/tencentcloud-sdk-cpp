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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 创建 AIGC 声音复刻输出信息。
                */
                class CreateAigcAudioCloneOutput : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneOutput();
                    ~CreateAigcAudioCloneOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID。</p>
                     * @return TaskId <p>任务ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID。</p>
                     * @param _taskId <p>任务ID。</p>
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
                     * 获取<p>处理状态。</p>
                     * @return State <p>处理状态。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>处理状态。</p>
                     * @param _state <p>处理状态。</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义的 voice_id，如果任务失败则不返回。</p>
                     * @return VoiceId <p>用户自定义的 voice_id，如果任务失败则不返回。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>用户自定义的 voice_id，如果任务失败则不返回。</p>
                     * @param _voiceId <p>用户自定义的 voice_id，如果任务失败则不返回。</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>如果请求体中传入了试听文本 text，那么本参数将以链接形式返回试听音频，否则本参数为空值。</p>
                     * @return DemoAudio <p>如果请求体中传入了试听文本 text，那么本参数将以链接形式返回试听音频，否则本参数为空值。</p>
                     * 
                     */
                    std::string GetDemoAudio() const;

                    /**
                     * 设置<p>如果请求体中传入了试听文本 text，那么本参数将以链接形式返回试听音频，否则本参数为空值。</p>
                     * @param _demoAudio <p>如果请求体中传入了试听文本 text，那么本参数将以链接形式返回试听音频，否则本参数为空值。</p>
                     * 
                     */
                    void SetDemoAudio(const std::string& _demoAudio);

                    /**
                     * 判断参数 DemoAudio 是否已赋值
                     * @return DemoAudio 是否已赋值
                     * 
                     */
                    bool DemoAudioHasBeenSet() const;

                    /**
                     * 获取<p>本次调用时传入的透传参数。</p>
                     * @return Payload <p>本次调用时传入的透传参数。</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>本次调用时传入的透传参数。</p>
                     * @param _payload <p>本次调用时传入的透传参数。</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间。</p>
                     * @return CreatedAt <p>任务创建时间。</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>任务创建时间。</p>
                     * @param _createdAt <p>任务创建时间。</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>处理状态。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>用户自定义的 voice_id，如果任务失败则不返回。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>如果请求体中传入了试听文本 text，那么本参数将以链接形式返回试听音频，否则本参数为空值。</p>
                     */
                    std::string m_demoAudio;
                    bool m_demoAudioHasBeenSet;

                    /**
                     * <p>本次调用时传入的透传参数。</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>任务创建时间。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEOUTPUT_H_
