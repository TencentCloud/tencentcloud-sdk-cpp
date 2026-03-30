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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfig.h>
#include <tencentcloud/vod/v20180717/model/EnhanceConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转码模板详情
                */
                class TranscodeTemplate : public AbstractModel
                {
                public:
                    TranscodeTemplate();
                    ~TranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转码模板唯一标识。</p>
                     * @return Definition <p>转码模板唯一标识。</p>
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置<p>转码模板唯一标识。</p>
                     * @param _definition <p>转码模板唯一标识。</p>
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>封装格式，取值：mp4、flv、hls、mp3、flac、ogg。</p>
                     * @return Container <p>封装格式，取值：mp4、flv、hls、mp3、flac、ogg。</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>封装格式，取值：mp4、flv、hls、mp3、flac、ogg。</p>
                     * @param _container <p>封装格式，取值：mp4、flv、hls、mp3、flac、ogg。</p>
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
                     * 获取<p>转码模板名称。</p>
                     * @return Name <p>转码模板名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>转码模板名称。</p>
                     * @param _name <p>转码模板名称。</p>
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
                     * 获取<p>模板描述信息。</p>
                     * @return Comment <p>模板描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>模板描述信息。</p>
                     * @param _comment <p>模板描述信息。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>模板类型，取值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @return Type <p>模板类型，取值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模板类型，取值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @param _type <p>模板类型，取值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否去除视频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * @return RemoveVideo <p>是否去除视频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>是否去除视频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * @param _removeVideo <p>是否去除视频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
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
                     * 获取<p>是否去除音频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * @return RemoveAudio <p>是否去除音频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>是否去除音频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     * @param _removeAudio <p>是否去除音频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
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
                     * 获取<p>视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。</p>
                     * @return VideoTemplate <p>视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。</p>
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置<p>视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。</p>
                     * @param _videoTemplate <p>视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。</p>
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
                     * 获取<p>音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。</p>
                     * @return AudioTemplate <p>音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。</p>
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置<p>音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。</p>
                     * @param _audioTemplate <p>音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。</p>
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
                     * 获取<p>极速高清转码参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TEHDConfig <p>极速高清转码参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置<p>极速高清转码参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tEHDConfig <p>极速高清转码参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>音视频增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnhanceConfig <p>音视频增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>音视频增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enhanceConfig <p>音视频增强配置。</p>
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

                    /**
                     * 获取<p>封装格式过滤条件，可选值：</p><li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li><li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * @return ContainerType <p>封装格式过滤条件，可选值：</p><li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li><li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置<p>封装格式过滤条件，可选值：</p><li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li><li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * @param _containerType <p>封装格式过滤条件，可选值：</p><li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li><li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * 
                     */
                    void SetContainerType(const std::string& _containerType);

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _createTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return UpdateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _updateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>切片类型，仅当 Container 为 hls 时有效。</p>
                     * @return SegmentType <p>切片类型，仅当 Container 为 hls 时有效。</p>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>切片类型，仅当 Container 为 hls 时有效。</p>
                     * @param _segmentType <p>切片类型，仅当 Container 为 hls 时有效。</p>
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数。</p>
                     * @return StdExtInfo <p>扩展参数。</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>扩展参数。</p>
                     * @param _stdExtInfo <p>扩展参数。</p>
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
                     * <p>转码模板唯一标识。</p>
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>封装格式，取值：mp4、flv、hls、mp3、flac、ogg。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>转码模板名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模板描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>模板类型，取值：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否去除视频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>是否去除音频数据，取值：</p><li>0：保留；</li><li>1：去除。</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。</p>
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * <p>音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。</p>
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * <p>极速高清转码参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>音视频增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>封装格式过滤条件，可选值：</p><li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li><li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>切片类型，仅当 Container 为 hls 时有效。</p>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * <p>扩展参数。</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
