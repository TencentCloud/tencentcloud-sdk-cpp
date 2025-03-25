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
                     * 获取转码模板唯一标识。
                     * @return Definition 转码模板唯一标识。
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置转码模板唯一标识。
                     * @param _definition 转码模板唯一标识。
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
                     * 获取封装格式，取值：mp4、flv、hls、mp3、flac、ogg。
                     * @return Container 封装格式，取值：mp4、flv、hls、mp3、flac、ogg。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，取值：mp4、flv、hls、mp3、flac、ogg。
                     * @param _container 封装格式，取值：mp4、flv、hls、mp3、flac、ogg。
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
                     * 获取转码模板名称。
                     * @return Name 转码模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置转码模板名称。
                     * @param _name 转码模板名称。
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
                     * 获取模板描述信息。
                     * @return Comment 模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息。
                     * @param _comment 模板描述信息。
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
                     * 获取模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
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
                     * 获取是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @return RemoveVideo 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @param _removeVideo 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
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
                     * @return RemoveAudio 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     * @param _removeAudio 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
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
                     * 获取视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。
                     * @return VideoTemplate 视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。
                     * @param _videoTemplate 视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。
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
                     * 获取音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。
                     * @return AudioTemplate 音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。
                     * @param _audioTemplate 音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TEHDConfig 极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tEHDConfig 极速高清转码参数。
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
                     * 获取封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * @return ContainerType 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     * @param _containerType 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
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
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取切片类型，仅当 Container 为 hls 时有效。
                     * @return SegmentType 切片类型，仅当 Container 为 hls 时有效。
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置切片类型，仅当 Container 为 hls 时有效。
                     * @param _segmentType 切片类型，仅当 Container 为 hls 时有效。
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                private:

                    /**
                     * 转码模板唯一标识。
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 封装格式，取值：mp4、flv、hls、mp3、flac、ogg。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 转码模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 模板类型，取值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否去除视频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，取值：
<li>0：保留；</li>
<li>1：去除。</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 视频流配置参数，仅当 RemoveVideo 为 0，该字段有效。
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 音频流配置参数，仅当 RemoveAudio 为 0，该字段有效 。
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式板。</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 切片类型，仅当 Container 为 hls 时有效。
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
