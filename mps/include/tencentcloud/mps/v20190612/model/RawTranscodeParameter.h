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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfig.h>
#include <tencentcloud/mps/v20190612/model/EnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 自定义转码的规格参数。
                */
                class RawTranscodeParameter : public AbstractModel
                {
                public:
                    RawTranscodeParameter();
                    ~RawTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     * @return Container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
                     * @param _container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a。其中，mp3、flac、ogg、m4a 为纯音频文件。
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
                     * 获取是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @return RemoveVideo 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @param _removeVideo 是否去除视频数据，取值：
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
                     * 获取是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @return RemoveAudio 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     * @param _removeAudio 是否去除音频数据，取值：
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
                     * 获取视频流配置参数，当 RemoveVideo 为 0，该字段必填。
                     * @return VideoTemplate 视频流配置参数，当 RemoveVideo 为 0，该字段必填。
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数，当 RemoveVideo 为 0，该字段必填。
                     * @param _videoTemplate 视频流配置参数，当 RemoveVideo 为 0，该字段必填。
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取音频流配置参数，当 RemoveAudio 为 0，该字段必填。
                     * @return AudioTemplate 音频流配置参数，当 RemoveAudio 为 0，该字段必填。
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数，当 RemoveAudio 为 0，该字段必填。
                     * @param _audioTemplate 音频流配置参数，当 RemoveAudio 为 0，该字段必填。
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取极速高清转码参数。
                     * @return TEHDConfig 极速高清转码参数。
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
                     * @param _tEHDConfig 极速高清转码参数。
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取扩展参数，序列化的 json 字符串。
                     * @return StdExtInfo 扩展参数，序列化的 json 字符串。
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置扩展参数，序列化的 json 字符串。
                     * @param _stdExtInfo 扩展参数，序列化的 json 字符串。
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                    /**
                     * 获取音视频增强配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnhanceConfig 音视频增强配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置音视频增强配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enhanceConfig 音视频增强配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnhanceConfig(const EnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

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
默认值：0。
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
默认值：0。
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 视频流配置参数，当 RemoveVideo 为 0，该字段必填。
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 音频流配置参数，当 RemoveAudio 为 0，该字段必填。
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 极速高清转码参数。
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * 扩展参数，序列化的 json 字符串。
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * 音视频增强配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
