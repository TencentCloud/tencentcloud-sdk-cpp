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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ResolutionNameInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifySuperPlayerConfig请求参数结构体
                */
                class ModifySuperPlayerConfigRequest : public AbstractModel
                {
                public:
                    ModifySuperPlayerConfigRequest();
                    ~ModifySuperPlayerConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放器配置名称。
                     * @return Name 播放器配置名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置播放器配置名称。
                     * @param _name 播放器配置名称。
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
                     * 获取播放的音视频类型，可选值：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * @return AudioVideoType 播放的音视频类型，可选值：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置播放的音视频类型，可选值：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * @param _audioVideoType 播放的音视频类型，可选值：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取播放 DRM 保护的自适应码流开关：
<li>ON：开启，表示仅播放 DRM  保护的自适应码流输出；</li>
<li>OFF：关闭，表示播放未加密的自适应码流输出。</li>
                     * @return DrmSwitch 播放 DRM 保护的自适应码流开关：
<li>ON：开启，表示仅播放 DRM  保护的自适应码流输出；</li>
<li>OFF：关闭，表示播放未加密的自适应码流输出。</li>
                     * 
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置播放 DRM 保护的自适应码流开关：
<li>ON：开启，表示仅播放 DRM  保护的自适应码流输出；</li>
<li>OFF：关闭，表示播放未加密的自适应码流输出。</li>
                     * @param _drmSwitch 播放 DRM 保护的自适应码流开关：
<li>ON：开启，表示仅播放 DRM  保护的自适应码流输出；</li>
<li>OFF：关闭，表示播放未加密的自适应码流输出。</li>
                     * 
                     */
                    void SetDrmSwitch(const std::string& _drmSwitch);

                    /**
                     * 判断参数 DrmSwitch 是否已赋值
                     * @return DrmSwitch 是否已赋值
                     * 
                     */
                    bool DrmSwitchHasBeenSet() const;

                    /**
                     * 获取允许输出的未加密的自适应码流模板 ID。
                     * @return AdaptiveDynamicStreamingDefinition 允许输出的未加密的自适应码流模板 ID。
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置允许输出的未加密的自适应码流模板 ID。
                     * @param _adaptiveDynamicStreamingDefinition 允许输出的未加密的自适应码流模板 ID。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取允许输出的 DRM 自适应码流模板内容。
                     * @return DrmStreamingsInfo 允许输出的 DRM 自适应码流模板内容。
                     * 
                     */
                    DrmStreamingsInfoForUpdate GetDrmStreamingsInfo() const;

                    /**
                     * 设置允许输出的 DRM 自适应码流模板内容。
                     * @param _drmStreamingsInfo 允许输出的 DRM 自适应码流模板内容。
                     * 
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfoForUpdate& _drmStreamingsInfo);

                    /**
                     * 判断参数 DrmStreamingsInfo 是否已赋值
                     * @return DrmStreamingsInfo 是否已赋值
                     * 
                     */
                    bool DrmStreamingsInfoHasBeenSet() const;

                    /**
                     * 获取允许输出的转码模板 ID。
                     * @return TranscodeDefinition 允许输出的转码模板 ID。
                     * 
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置允许输出的转码模板 ID。
                     * @param _transcodeDefinition 允许输出的转码模板 ID。
                     * 
                     */
                    void SetTranscodeDefinition(const uint64_t& _transcodeDefinition);

                    /**
                     * 判断参数 TranscodeDefinition 是否已赋值
                     * @return TranscodeDefinition 是否已赋值
                     * 
                     */
                    bool TranscodeDefinitionHasBeenSet() const;

                    /**
                     * 获取允许输出的雪碧图模板 ID。
                     * @return ImageSpriteDefinition 允许输出的雪碧图模板 ID。
                     * 
                     */
                    uint64_t GetImageSpriteDefinition() const;

                    /**
                     * 设置允许输出的雪碧图模板 ID。
                     * @param _imageSpriteDefinition 允许输出的雪碧图模板 ID。
                     * 
                     */
                    void SetImageSpriteDefinition(const uint64_t& _imageSpriteDefinition);

                    /**
                     * 判断参数 ImageSpriteDefinition 是否已赋值
                     * @return ImageSpriteDefinition 是否已赋值
                     * 
                     */
                    bool ImageSpriteDefinitionHasBeenSet() const;

                    /**
                     * 获取播放器对于不同分辨率的子流展示名字。
                     * @return ResolutionNames 播放器对于不同分辨率的子流展示名字。
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNames() const;

                    /**
                     * 设置播放器对于不同分辨率的子流展示名字。
                     * @param _resolutionNames 播放器对于不同分辨率的子流展示名字。
                     * 
                     */
                    void SetResolutionNames(const std::vector<ResolutionNameInfo>& _resolutionNames);

                    /**
                     * 判断参数 ResolutionNames 是否已赋值
                     * @return ResolutionNames 是否已赋值
                     * 
                     */
                    bool ResolutionNamesHasBeenSet() const;

                    /**
                     * 获取播放时使用的域名。填 Default 表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * @return Domain 播放时使用的域名。填 Default 表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置播放时使用的域名。填 Default 表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * @param _domain 播放时使用的域名。填 Default 表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取播放时使用的 Scheme。取值范围：
<li>Default：使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的 Scheme；</li>
<li>HTTP；</li>
<li>HTTPS。</li>
                     * @return Scheme 播放时使用的 Scheme。取值范围：
<li>Default：使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的 Scheme；</li>
<li>HTTP；</li>
<li>HTTPS。</li>
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置播放时使用的 Scheme。取值范围：
<li>Default：使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的 Scheme；</li>
<li>HTTP；</li>
<li>HTTPS。</li>
                     * @param _scheme 播放时使用的 Scheme。取值范围：
<li>Default：使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的 Scheme；</li>
<li>HTTP；</li>
<li>HTTPS。</li>
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

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

                private:

                    /**
                     * 播放器配置名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 播放的音视频类型，可选值：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * 播放 DRM 保护的自适应码流开关：
<li>ON：开启，表示仅播放 DRM  保护的自适应码流输出；</li>
<li>OFF：关闭，表示播放未加密的自适应码流输出。</li>
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * 允许输出的未加密的自适应码流模板 ID。
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * 允许输出的 DRM 自适应码流模板内容。
                     */
                    DrmStreamingsInfoForUpdate m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * 允许输出的转码模板 ID。
                     */
                    uint64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * 允许输出的雪碧图模板 ID。
                     */
                    uint64_t m_imageSpriteDefinition;
                    bool m_imageSpriteDefinitionHasBeenSet;

                    /**
                     * 播放器对于不同分辨率的子流展示名字。
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNames;
                    bool m_resolutionNamesHasBeenSet;

                    /**
                     * 播放时使用的域名。填 Default 表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 播放时使用的 Scheme。取值范围：
<li>Default：使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的 Scheme；</li>
<li>HTTP；</li>
<li>HTTPS。</li>
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_
