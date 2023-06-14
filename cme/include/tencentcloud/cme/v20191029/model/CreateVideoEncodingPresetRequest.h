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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CREATEVIDEOENCODINGPRESETREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CREATEVIDEOENCODINGPRESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetVideoSetting.h>
#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetAudioSetting.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * CreateVideoEncodingPreset请求参数结构体
                */
                class CreateVideoEncodingPresetRequest : public AbstractModel
                {
                public:
                    CreateVideoEncodingPresetRequest();
                    ~CreateVideoEncodingPresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param _platform 平台名称，指定访问的平台。
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
                     * 获取配置名，可用来简单描述该配置的作用。
                     * @return Name 配置名，可用来简单描述该配置的作用。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名，可用来简单描述该配置的作用。
                     * @param _name 配置名，可用来简单描述该配置的作用。
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
                     * 获取封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
默认值：mp4。
                     * @return Container 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
默认值：mp4。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
默认值：mp4。
                     * @param _container 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
默认值：mp4。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

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
                     * 获取编码配置的视频设置。默认值参考VideoEncodingPresetVideoSetting 定义。
                     * @return VideoSetting 编码配置的视频设置。默认值参考VideoEncodingPresetVideoSetting 定义。
                     * 
                     */
                    VideoEncodingPresetVideoSetting GetVideoSetting() const;

                    /**
                     * 设置编码配置的视频设置。默认值参考VideoEncodingPresetVideoSetting 定义。
                     * @param _videoSetting 编码配置的视频设置。默认值参考VideoEncodingPresetVideoSetting 定义。
                     * 
                     */
                    void SetVideoSetting(const VideoEncodingPresetVideoSetting& _videoSetting);

                    /**
                     * 判断参数 VideoSetting 是否已赋值
                     * @return VideoSetting 是否已赋值
                     * 
                     */
                    bool VideoSettingHasBeenSet() const;

                    /**
                     * 获取编码配置的音频设置。默认值参考VideoEncodingPresetAudioSetting 定义。
                     * @return AudioSetting 编码配置的音频设置。默认值参考VideoEncodingPresetAudioSetting 定义。
                     * 
                     */
                    VideoEncodingPresetAudioSetting GetAudioSetting() const;

                    /**
                     * 设置编码配置的音频设置。默认值参考VideoEncodingPresetAudioSetting 定义。
                     * @param _audioSetting 编码配置的音频设置。默认值参考VideoEncodingPresetAudioSetting 定义。
                     * 
                     */
                    void SetAudioSetting(const VideoEncodingPresetAudioSetting& _audioSetting);

                    /**
                     * 判断参数 AudioSetting 是否已赋值
                     * @return AudioSetting 是否已赋值
                     * 
                     */
                    bool AudioSettingHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 配置名，可用来简单描述该配置的作用。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
默认值：mp4。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

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
                     * 编码配置的视频设置。默认值参考VideoEncodingPresetVideoSetting 定义。
                     */
                    VideoEncodingPresetVideoSetting m_videoSetting;
                    bool m_videoSettingHasBeenSet;

                    /**
                     * 编码配置的音频设置。默认值参考VideoEncodingPresetAudioSetting 定义。
                     */
                    VideoEncodingPresetAudioSetting m_audioSetting;
                    bool m_audioSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATEVIDEOENCODINGPRESETREQUEST_H_
