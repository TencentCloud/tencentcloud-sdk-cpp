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
#include <tencentcloud/vod/v20180717/model/EnhanceConfigForUpdate.h>


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
                     * 获取<p>转码模板唯一标识。</p>
                     * @return Definition <p>转码模板唯一标识。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>转码模板唯一标识。</p>
                     * @param _definition <p>转码模板唯一标识。</p>
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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>转码模板名称，长度限制：64 个字符。</p>
                     * @return Name <p>转码模板名称，长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>转码模板名称，长度限制：64 个字符。</p>
                     * @param _name <p>转码模板名称，长度限制：64 个字符。</p>
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
                     * 获取<p>模板描述信息，长度限制：256 个字符。</p>
                     * @return Comment <p>模板描述信息，长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>模板描述信息，长度限制：256 个字符。</p>
                     * @param _comment <p>模板描述信息，长度限制：256 个字符。</p>
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
                     * 获取<p>是否去除视频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * @return RemoveVideo <p>是否去除视频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>是否去除视频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * @param _removeVideo <p>是否去除视频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
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
                     * 获取<p>是否去除音频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * @return RemoveAudio <p>是否去除音频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>是否去除音频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     * @param _removeAudio <p>是否去除音频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
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
                     * 获取<p>视频流配置参数。</p>
                     * @return VideoTemplate <p>视频流配置参数。</p>
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置<p>视频流配置参数。</p>
                     * @param _videoTemplate <p>视频流配置参数。</p>
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
                     * @return AudioTemplate <p>音频流配置参数。</p>
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置<p>音频流配置参数。</p>
                     * @param _audioTemplate <p>音频流配置参数。</p>
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
                     * 获取<p>极速高清转码参数。</p>
                     * @return TEHDConfig <p>极速高清转码参数。</p>
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置<p>极速高清转码参数。</p>
                     * @param _tEHDConfig <p>极速高清转码参数。</p>
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
                     * 获取<p>音视频增强配置。</p>
                     * @return EnhanceConfig <p>音视频增强配置。</p>
                     * 
                     */
                    EnhanceConfigForUpdate GetEnhanceConfig() const;

                    /**
                     * 设置<p>音视频增强配置。</p>
                     * @param _enhanceConfig <p>音视频增强配置。</p>
                     * 
                     */
                    void SetEnhanceConfig(const EnhanceConfigForUpdate& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>切片类型，当 Container 为 hls 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>
                     * @return SegmentType <p>切片类型，当 Container 为 hls 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>切片类型，当 Container 为 hls 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>
                     * @param _segmentType <p>切片类型，当 Container 为 hls 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>
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
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>封装格式，可选值：mp4、flv、hls、mp3、flac、ogg、m4a、wav。其中，mp3、flac、ogg、m4a、wav 为纯音频文件。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>转码模板名称，长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>是否去除视频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>是否去除音频数据，可选值：</p><li>0：保留</li><li>1：去除</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>视频流配置参数。</p>
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * <p>音频流配置参数。</p>
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * <p>极速高清转码参数。</p>
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>音视频增强配置。</p>
                     */
                    EnhanceConfigForUpdate m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>切片类型，当 Container 为 hls 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_
