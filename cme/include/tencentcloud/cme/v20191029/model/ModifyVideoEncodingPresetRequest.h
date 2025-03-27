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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MODIFYVIDEOENCODINGPRESETREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MODIFYVIDEOENCODINGPRESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetVideoSettingForUpdate.h>
#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetAudioSettingForUpdate.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ModifyVideoEncodingPreset请求参数结构体
                */
                class ModifyVideoEncodingPresetRequest : public AbstractModel
                {
                public:
                    ModifyVideoEncodingPresetRequest();
                    ~ModifyVideoEncodingPresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取配置 ID。
                     * @return Id 配置 ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置 ID。
                     * @param _id 配置 ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取更改后的视频编码配置名，不填则不修改。
                     * @return Name 更改后的视频编码配置名，不填则不修改。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置更改后的视频编码配置名，不填则不修改。
                     * @param _name 更改后的视频编码配置名，不填则不修改。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取更改后的编码配置的视频设置。
                     * @return VideoSetting 更改后的编码配置的视频设置。
                     * 
                     */
                    VideoEncodingPresetVideoSettingForUpdate GetVideoSetting() const;

                    /**
                     * 设置更改后的编码配置的视频设置。
                     * @param _videoSetting 更改后的编码配置的视频设置。
                     * 
                     */
                    void SetVideoSetting(const VideoEncodingPresetVideoSettingForUpdate& _videoSetting);

                    /**
                     * 判断参数 VideoSetting 是否已赋值
                     * @return VideoSetting 是否已赋值
                     * 
                     */
                    bool VideoSettingHasBeenSet() const;

                    /**
                     * 获取更改后的编码配置的音频设置。
                     * @return AudioSetting 更改后的编码配置的音频设置。
                     * 
                     */
                    VideoEncodingPresetAudioSettingForUpdate GetAudioSetting() const;

                    /**
                     * 设置更改后的编码配置的音频设置。
                     * @param _audioSetting 更改后的编码配置的音频设置。
                     * 
                     */
                    void SetAudioSetting(const VideoEncodingPresetAudioSettingForUpdate& _audioSetting);

                    /**
                     * 判断参数 AudioSetting 是否已赋值
                     * @return AudioSetting 是否已赋值
                     * 
                     */
                    bool AudioSettingHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 配置 ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 更改后的视频编码配置名，不填则不修改。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 更改后的编码配置的视频设置。
                     */
                    VideoEncodingPresetVideoSettingForUpdate m_videoSetting;
                    bool m_videoSettingHasBeenSet;

                    /**
                     * 更改后的编码配置的音频设置。
                     */
                    VideoEncodingPresetAudioSettingForUpdate m_audioSetting;
                    bool m_audioSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MODIFYVIDEOENCODINGPRESETREQUEST_H_
