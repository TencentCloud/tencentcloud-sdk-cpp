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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioSeparateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioVolumeBalanceInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioBeautifyInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音频增强配置。
                */
                class AudioEnhanceConfig : public AbstractModel
                {
                public:
                    AudioEnhanceConfig();
                    ~AudioEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Denoise 音频降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioDenoiseInfo GetDenoise() const;

                    /**
                     * 设置音频降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _denoise 音频降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDenoise(const AudioDenoiseInfo& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取音频分离配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Separate 音频分离配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioSeparateInfo GetSeparate() const;

                    /**
                     * 设置音频分离配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _separate 音频分离配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeparate(const AudioSeparateInfo& _separate);

                    /**
                     * 判断参数 Separate 是否已赋值
                     * @return Separate 是否已赋值
                     * 
                     */
                    bool SeparateHasBeenSet() const;

                    /**
                     * 获取音量均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeBalance 音量均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioVolumeBalanceInfo GetVolumeBalance() const;

                    /**
                     * 设置音量均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeBalance 音量均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeBalance(const AudioVolumeBalanceInfo& _volumeBalance);

                    /**
                     * 判断参数 VolumeBalance 是否已赋值
                     * @return VolumeBalance 是否已赋值
                     * 
                     */
                    bool VolumeBalanceHasBeenSet() const;

                    /**
                     * 获取音量美化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Beautify 音量美化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioBeautifyInfo GetBeautify() const;

                    /**
                     * 设置音量美化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beautify 音量美化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeautify(const AudioBeautifyInfo& _beautify);

                    /**
                     * 判断参数 Beautify 是否已赋值
                     * @return Beautify 是否已赋值
                     * 
                     */
                    bool BeautifyHasBeenSet() const;

                private:

                    /**
                     * 音频降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioDenoiseInfo m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * 音频分离配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioSeparateInfo m_separate;
                    bool m_separateHasBeenSet;

                    /**
                     * 音量均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioVolumeBalanceInfo m_volumeBalance;
                    bool m_volumeBalanceHasBeenSet;

                    /**
                     * 音量美化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioBeautifyInfo m_beautify;
                    bool m_beautifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOENHANCECONFIG_H_
