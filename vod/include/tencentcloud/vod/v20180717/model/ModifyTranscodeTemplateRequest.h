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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyTranscodeTemplate请求参数结构体
                */
                class ModifyTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    ModifyTranscodeTemplateRequest();
                    ~ModifyTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转码模板唯一标识。
                     * @return Definition 转码模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转码模板唯一标识。
                     * @param _definition 转码模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。
                     * @return Container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。
                     * @param _container 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。
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
                     * 获取转码模板名称，长度限制：64 个字符。
                     * @return Name 转码模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置转码模板名称，长度限制：64 个字符。
                     * @param _name 转码模板名称，长度限制：64 个字符。
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
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param _comment 模板描述信息，长度限制：256 个字符。
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
                     * 获取是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
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
<li>0：保留</li>
<li>1：去除</li>
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
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
                     * 获取视频流配置参数。
                     * @return VideoTemplate 视频流配置参数。
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置视频流配置参数。
                     * @param _videoTemplate 视频流配置参数。
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
                     * 获取音频流配置参数。
                     * @return AudioTemplate 音频流配置参数。
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置音频流配置参数。
                     * @param _audioTemplate 音频流配置参数。
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
                     * 获取极速高清转码参数。
                     * @return TEHDConfig 极速高清转码参数。
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
                     * @param _tEHDConfig 极速高清转码参数。
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
                     * 获取切片类型，当 Container 为 hls 时有效，可选值：
<li>ts：ts 切片；</li>
<li>fmp4：fmp4 切片。</li>
                     * @return SegmentType 切片类型，当 Container 为 hls 时有效，可选值：
<li>ts：ts 切片；</li>
<li>fmp4：fmp4 切片。</li>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置切片类型，当 Container 为 hls 时有效，可选值：
<li>ts：ts 切片；</li>
<li>fmp4：fmp4 切片。</li>
                     * @param _segmentType 切片类型，当 Container 为 hls 时有效，可选值：
<li>ts：ts 切片；</li>
<li>fmp4：fmp4 切片。</li>
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
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 转码模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
                     */
                    int64_t m_removeAudio;
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
                     * 切片类型，当 Container 为 hls 时有效，可选值：
<li>ts：ts 切片；</li>
<li>fmp4：fmp4 切片。</li>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_
