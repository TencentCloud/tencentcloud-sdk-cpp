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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESET_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 视频编码配置
                */
                class VideoEncodingPreset : public AbstractModel
                {
                public:
                    VideoEncodingPreset();
                    ~VideoEncodingPreset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取配置名。
                     * @return Name 配置名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名。
                     * @param _name 配置名。
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
                     * @return Container 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
                     * @param _container 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
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
                     * 获取视频编码配置中的视频设置。
                     * @return VideoSetting 视频编码配置中的视频设置。
                     * 
                     */
                    VideoEncodingPresetVideoSetting GetVideoSetting() const;

                    /**
                     * 设置视频编码配置中的视频设置。
                     * @param _videoSetting 视频编码配置中的视频设置。
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
                     * 获取视频编码配置中的音频设置。
                     * @return AudioSetting 视频编码配置中的音频设置。
                     * 
                     */
                    VideoEncodingPresetAudioSetting GetAudioSetting() const;

                    /**
                     * 设置视频编码配置中的音频设置。
                     * @param _audioSetting 视频编码配置中的音频设置。
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
                     * 配置 ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 封装格式，可选值：
<li>mp4 ；</li>
<li>mov 。</li>
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
                     * 视频编码配置中的视频设置。
                     */
                    VideoEncodingPresetVideoSetting m_videoSetting;
                    bool m_videoSettingHasBeenSet;

                    /**
                     * 视频编码配置中的音频设置。
                     */
                    VideoEncodingPresetAudioSetting m_audioSetting;
                    bool m_audioSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESET_H_
