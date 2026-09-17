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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfigForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自定义视频转码参数。
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
                     * @return Container <p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
                     * @param _container <p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
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
                     * 获取<p>是否去除视频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * @return RemoveVideo <p>是否去除视频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>是否去除视频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * @param _removeVideo <p>是否去除视频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * 
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取<p>是否去除音频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * @return RemoveAudio <p>是否去除音频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>是否去除音频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * @param _removeAudio <p>是否去除音频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     * 
                     */
                    void SetRemoveAudio(const uint64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取<p>视频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoTemplate <p>视频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置<p>视频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoTemplate <p>视频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取<p>音频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioTemplate <p>音频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置<p>音频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioTemplate <p>音频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取<p>极速高清转码配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TEHDConfig <p>极速高清转码配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置<p>极速高清转码配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tEHDConfig <p>极速高清转码配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取<p>标准扩展字段，特殊用途使用。</p>
                     * @return StdExtInfo <p>标准扩展字段，特殊用途使用。</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>标准扩展字段，特殊用途使用。</p>
                     * @param _stdExtInfo <p>标准扩展字段，特殊用途使用。</p>
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>是否去除视频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>是否去除音频数据，取值：<br>&lt;li&gt;0：保留；&lt;\li&gt;<br>&lt;li&gt;1：去除。&lt;\li&gt;</p>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>视频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * <p>音频流配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * <p>极速高清转码配置参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>标准扩展字段，特殊用途使用。</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
