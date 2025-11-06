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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICE_H_

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
                * TTS的声音参数
                */
                class Voice : public AbstractModel
                {
                public:
                    Voice();
                    ~Voice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TTS的声音的ID
                     * @return VoiceId TTS的声音的ID
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置TTS的声音的ID
                     * @param _voiceId TTS的声音的ID
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
                     * 获取语速，范围 0.5-2.0，默认 1.0
                     * @return Speed 语速，范围 0.5-2.0，默认 1.0
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围 0.5-2.0，默认 1.0
                     * @param _speed 语速，范围 0.5-2.0，默认 1.0
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取(0, 10]   默认值1.0 
                     * @return Volume (0, 10]   默认值1.0 
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置(0, 10]   默认值1.0 
                     * @param _volume (0, 10]   默认值1.0 
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取取值[-12,12],默认0
                     * @return Pitch 取值[-12,12],默认0
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置取值[-12,12],默认0
                     * @param _pitch 取值[-12,12],默认0
                     * 
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                private:

                    /**
                     * TTS的声音的ID
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 语速，范围 0.5-2.0，默认 1.0
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * (0, 10]   默认值1.0 
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 取值[-12,12],默认0
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICE_H_
