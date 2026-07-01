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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_

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
                * 伴生转录TTS的语音参数配置
                */
                class TTSVoice : public AbstractModel
                {
                public:
                    TTSVoice();
                    ~TTSVoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色 ID。对于不同的语言，需要填写特定的音色ID，如下所示：</p><ul><li>中文（&quot;zh&quot;）：男生音色&quot;v-male-s5NqE0rZ&quot;、女生音色&quot;v-female-R2s4N9qJ&quot;。</li><li>英语（&quot;en&quot;）：男生音色&quot;v-male-X6h4TvP9&quot;、女生音色&quot;v-female-P6q9LmR2&quot;。</li><li>日语（&quot;ja&quot;）：男生音色&quot;v-male-J3n8DxK2&quot;、女生音色&quot;v-female-J3k7NxR2&quot;。</li><li>粤语（&quot;yue&quot;）：男生音色&quot;v-male-D7p4XcL2&quot;、女生音色&quot;v-female-C5t1QxH9&quot;。</li><li>印度尼西亚语（&quot;id&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>泰语（&quot;th&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>越南语（&quot;vi&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>马来语（&quot;ms&quot;）：男生音色&quot;v-male-Q6p8ZxL3&quot;、女生音色&quot;v-female-C8k4NxL6&quot;。</li></ul><p>如果缺少满足您需求的音色，请联系我们的技术人员。</p>
                     * @return VoiceId <p>音色 ID。对于不同的语言，需要填写特定的音色ID，如下所示：</p><ul><li>中文（&quot;zh&quot;）：男生音色&quot;v-male-s5NqE0rZ&quot;、女生音色&quot;v-female-R2s4N9qJ&quot;。</li><li>英语（&quot;en&quot;）：男生音色&quot;v-male-X6h4TvP9&quot;、女生音色&quot;v-female-P6q9LmR2&quot;。</li><li>日语（&quot;ja&quot;）：男生音色&quot;v-male-J3n8DxK2&quot;、女生音色&quot;v-female-J3k7NxR2&quot;。</li><li>粤语（&quot;yue&quot;）：男生音色&quot;v-male-D7p4XcL2&quot;、女生音色&quot;v-female-C5t1QxH9&quot;。</li><li>印度尼西亚语（&quot;id&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>泰语（&quot;th&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>越南语（&quot;vi&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>马来语（&quot;ms&quot;）：男生音色&quot;v-male-Q6p8ZxL3&quot;、女生音色&quot;v-female-C8k4NxL6&quot;。</li></ul><p>如果缺少满足您需求的音色，请联系我们的技术人员。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色 ID。对于不同的语言，需要填写特定的音色ID，如下所示：</p><ul><li>中文（&quot;zh&quot;）：男生音色&quot;v-male-s5NqE0rZ&quot;、女生音色&quot;v-female-R2s4N9qJ&quot;。</li><li>英语（&quot;en&quot;）：男生音色&quot;v-male-X6h4TvP9&quot;、女生音色&quot;v-female-P6q9LmR2&quot;。</li><li>日语（&quot;ja&quot;）：男生音色&quot;v-male-J3n8DxK2&quot;、女生音色&quot;v-female-J3k7NxR2&quot;。</li><li>粤语（&quot;yue&quot;）：男生音色&quot;v-male-D7p4XcL2&quot;、女生音色&quot;v-female-C5t1QxH9&quot;。</li><li>印度尼西亚语（&quot;id&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>泰语（&quot;th&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>越南语（&quot;vi&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>马来语（&quot;ms&quot;）：男生音色&quot;v-male-Q6p8ZxL3&quot;、女生音色&quot;v-female-C8k4NxL6&quot;。</li></ul><p>如果缺少满足您需求的音色，请联系我们的技术人员。</p>
                     * @param _voiceId <p>音色 ID。对于不同的语言，需要填写特定的音色ID，如下所示：</p><ul><li>中文（&quot;zh&quot;）：男生音色&quot;v-male-s5NqE0rZ&quot;、女生音色&quot;v-female-R2s4N9qJ&quot;。</li><li>英语（&quot;en&quot;）：男生音色&quot;v-male-X6h4TvP9&quot;、女生音色&quot;v-female-P6q9LmR2&quot;。</li><li>日语（&quot;ja&quot;）：男生音色&quot;v-male-J3n8DxK2&quot;、女生音色&quot;v-female-J3k7NxR2&quot;。</li><li>粤语（&quot;yue&quot;）：男生音色&quot;v-male-D7p4XcL2&quot;、女生音色&quot;v-female-C5t1QxH9&quot;。</li><li>印度尼西亚语（&quot;id&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>泰语（&quot;th&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>越南语（&quot;vi&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>马来语（&quot;ms&quot;）：男生音色&quot;v-male-Q6p8ZxL3&quot;、女生音色&quot;v-female-C8k4NxL6&quot;。</li></ul><p>如果缺少满足您需求的音色，请联系我们的技术人员。</p>
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
                     * 获取<p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0。</p>
                     * @return Speed <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0。</p>
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置<p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0。</p>
                     * @param _speed <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0。</p>
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
                     * 获取<p>音量调节，0 为静音，10 为最大音量，建议保持默认值 1.0，区间：[0, 10]，默认1.0。</p>
                     * @return Volume <p>音量调节，0 为静音，10 为最大音量，建议保持默认值 1.0，区间：[0, 10]，默认1.0。</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>音量调节，0 为静音，10 为最大音量，建议保持默认值 1.0，区间：[0, 10]，默认1.0。</p>
                     * @param _volume <p>音量调节，0 为静音，10 为最大音量，建议保持默认值 1.0，区间：[0, 10]，默认1.0。</p>
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
                     * 获取<p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12]，默认0。</p>
                     * @return Pitch <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12]，默认0。</p>
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置<p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12]，默认0。</p>
                     * @param _pitch <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12]，默认0。</p>
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
                     * <p>音色 ID。对于不同的语言，需要填写特定的音色ID，如下所示：</p><ul><li>中文（&quot;zh&quot;）：男生音色&quot;v-male-s5NqE0rZ&quot;、女生音色&quot;v-female-R2s4N9qJ&quot;。</li><li>英语（&quot;en&quot;）：男生音色&quot;v-male-X6h4TvP9&quot;、女生音色&quot;v-female-P6q9LmR2&quot;。</li><li>日语（&quot;ja&quot;）：男生音色&quot;v-male-J3n8DxK2&quot;、女生音色&quot;v-female-J3k7NxR2&quot;。</li><li>粤语（&quot;yue&quot;）：男生音色&quot;v-male-D7p4XcL2&quot;、女生音色&quot;v-female-C5t1QxH9&quot;。</li><li>印度尼西亚语（&quot;id&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>泰语（&quot;th&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>越南语（&quot;vi&quot;）：男生音色&quot;v-male-B5f2CnS3&quot;、女生音色&quot;v-female-W5n8HgB2&quot;。</li><li>马来语（&quot;ms&quot;）：男生音色&quot;v-male-Q6p8ZxL3&quot;、女生音色&quot;v-female-C8k4NxL6&quot;。</li></ul><p>如果缺少满足您需求的音色，请联系我们的技术人员。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>语速调节，0.5 为半速慢放，2.0 为两倍速快放，1.0 为正常语速，区间：[0.5, 2.0]，默认1.0。</p>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * <p>音量调节，0 为静音，10 为最大音量，建议保持默认值 1.0，区间：[0, 10]，默认1.0。</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>音高调节，负值声音更低沉，正值声音更尖锐，0 为原始音高，区间 [-12, 12]，默认0。</p>
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSVOICE_H_
