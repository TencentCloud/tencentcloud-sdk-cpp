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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CloneVoiceSync返回参数结构体
                */
                class CloneVoiceSyncResponse : public AbstractModel
                {
                public:
                    CloneVoiceSyncResponse();
                    ~CloneVoiceSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>克隆得到的音色</p>
                     * @return VoiceId <p>克隆得到的音色</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>试听音频</p>
                     * @return DemoAudio <p>试听音频</p>
                     * 
                     */
                    std::string GetDemoAudio() const;

                    /**
                     * 判断参数 DemoAudio 是否已赋值
                     * @return DemoAudio 是否已赋值
                     * 
                     */
                    bool DemoAudioHasBeenSet() const;

                    /**
                     * 获取<p>拓展信息</p>
                     * @return ExtInfo <p>拓展信息</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>克隆得到的音色</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>试听音频</p>
                     */
                    std::string m_demoAudio;
                    bool m_demoAudioHasBeenSet;

                    /**
                     * <p>拓展信息</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCRESPONSE_H_
