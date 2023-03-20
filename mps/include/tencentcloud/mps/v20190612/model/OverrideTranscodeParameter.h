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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfigForUpdate.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 自定义转码的规格参数。用于覆盖模板中对应参数值。
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     * @return Container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     * @param Container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @return RemoveVideo 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @param RemoveVideo 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @return RemoveAudio 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @param RemoveAudio 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    void SetRemoveAudio(const uint64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取视频流配置参数。
                     * @return VideoTemplate 视频流配置参数。
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数。
                     * @param VideoTemplate 视频流配置参数。
                     */
                    void SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取音频流配置参数。
                     * @return AudioTemplate 音频流配置参数。
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数。
                     * @param AudioTemplate 音频流配置参数。
                     */
                    void SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取极速高清转码参数。
                     * @return TEHDConfig 极速高清转码参数。
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
                     * @param TEHDConfig 极速高清转码参数。
                     */
                    void SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取字幕流配置参数。
                     * @return SubtitleTemplate 字幕流配置参数。
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置字幕流配置参数。
                     * @param SubtitleTemplate 字幕流配置参数。
                     */
                    void SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate);

                    /**
                     * 判断参数 SubtitleTemplate 是否已赋值
                     * @return SubtitleTemplate 是否已赋值
                     */
                    bool SubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取外挂音轨参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddonAudioStream 外挂音轨参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaInputInfo> GetAddonAudioStream() const;

                    /**
                     * 设置外挂音轨参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddonAudioStream 外挂音轨参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddonAudioStream(const std::vector<MediaInputInfo>& _addonAudioStream);

                    /**
                     * 判断参数 AddonAudioStream 是否已赋值
                     * @return AddonAudioStream 是否已赋值
                     */
                    bool AddonAudioStreamHasBeenSet() const;

                private:

                    /**
                     * 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 视频流配置参数。
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 音频流配置参数。
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 极速高清转码参数。
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * 字幕流配置参数。
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * 外挂音轨参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaInputInfo> m_addonAudioStream;
                    bool m_addonAudioStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_
