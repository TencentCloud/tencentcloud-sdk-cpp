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
                * TTS的声音参数配置
                */
                class Voice : public AbstractModel
                {
                public:
                    Voice();
                    ~Voice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色 ID，可从音色列表获取，或使用声音克隆生成的自定义音色 ID</p>
                     * @return VoiceId <p>音色 ID，可从音色列表获取，或使用声音克隆生成的自定义音色 ID</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色 ID，可从音色列表获取，或使用声音克隆生成的自定义音色 ID</p>
                     * @param _voiceId <p>音色 ID，可从音色列表获取，或使用声音克隆生成的自定义音色 ID</p>
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
                     * 获取<p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0</p>
                     * @return Speed <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0</p>
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置<p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0</p>
                     * @param _speed <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0</p>
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
                     * 获取<p>音量调节，默认1.0，10 为最大音量，建议保持默认值 1.0，区间：(0, 10]</p>
                     * @return Volume <p>音量调节，默认1.0，10 为最大音量，建议保持默认值 1.0，区间：(0, 10]</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>音量调节，默认1.0，10 为最大音量，建议保持默认值 1.0，区间：(0, 10]</p>
                     * @param _volume <p>音量调节，默认1.0，10 为最大音量，建议保持默认值 1.0，区间：(0, 10]</p>
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
                     * 获取<p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12],  默认0</p>
                     * @return Pitch <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12],  默认0</p>
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置<p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12],  默认0</p>
                     * @param _pitch <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12],  默认0</p>
                     * 
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取<p>情绪控制，目前仅flow_01_ex模型支持</p><p>枚举值：</p><ul><li>happy： 高兴</li><li>sad： 悲伤</li><li>angry： 愤怒</li><li>fearful： 害怕</li><li>disgusted： 厌恶</li><li>surprised： 惊讶</li><li>calm： 中性</li><li>fluent： 生动</li><li>whisper： 低语</li></ul>
                     * @return Emotion <p>情绪控制，目前仅flow_01_ex模型支持</p><p>枚举值：</p><ul><li>happy： 高兴</li><li>sad： 悲伤</li><li>angry： 愤怒</li><li>fearful： 害怕</li><li>disgusted： 厌恶</li><li>surprised： 惊讶</li><li>calm： 中性</li><li>fluent： 生动</li><li>whisper： 低语</li></ul>
                     * 
                     */
                    std::string GetEmotion() const;

                    /**
                     * 设置<p>情绪控制，目前仅flow_01_ex模型支持</p><p>枚举值：</p><ul><li>happy： 高兴</li><li>sad： 悲伤</li><li>angry： 愤怒</li><li>fearful： 害怕</li><li>disgusted： 厌恶</li><li>surprised： 惊讶</li><li>calm： 中性</li><li>fluent： 生动</li><li>whisper： 低语</li></ul>
                     * @param _emotion <p>情绪控制，目前仅flow_01_ex模型支持</p><p>枚举值：</p><ul><li>happy： 高兴</li><li>sad： 悲伤</li><li>angry： 愤怒</li><li>fearful： 害怕</li><li>disgusted： 厌恶</li><li>surprised： 惊讶</li><li>calm： 中性</li><li>fluent： 生动</li><li>whisper： 低语</li></ul>
                     * 
                     */
                    void SetEmotion(const std::string& _emotion);

                    /**
                     * 判断参数 Emotion 是否已赋值
                     * @return Emotion 是否已赋值
                     * 
                     */
                    bool EmotionHasBeenSet() const;

                private:

                    /**
                     * <p>音色 ID，可从音色列表获取，或使用声音克隆生成的自定义音色 ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0</p>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * <p>音量调节，默认1.0，10 为最大音量，建议保持默认值 1.0，区间：(0, 10]</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12],  默认0</p>
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * <p>情绪控制，目前仅flow_01_ex模型支持</p><p>枚举值：</p><ul><li>happy： 高兴</li><li>sad： 悲伤</li><li>angry： 愤怒</li><li>fearful： 害怕</li><li>disgusted： 厌恶</li><li>surprised： 惊讶</li><li>calm： 中性</li><li>fluent： 生动</li><li>whisper： 低语</li></ul>
                     */
                    std::string m_emotion;
                    bool m_emotionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICE_H_
