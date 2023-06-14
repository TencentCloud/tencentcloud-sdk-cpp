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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfo.h>
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
                * 播放器配置详情
                */
                class PlayerConfig : public AbstractModel
                {
                public:
                    PlayerConfig();
                    ~PlayerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放器配置名字。
                     * @return Name 播放器配置名字。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置播放器配置名字。
                     * @param _name 播放器配置名字。
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
                     * 获取播放器配置类型，取值范围：
<li>Preset：系统预置配置；</li>
<li>Custom：用户自定义配置。</li>
                     * @return Type 播放器配置类型，取值范围：
<li>Preset：系统预置配置；</li>
<li>Custom：用户自定义配置。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置播放器配置类型，取值范围：
<li>Preset：系统预置配置；</li>
<li>Custom：用户自定义配置。</li>
                     * @param _type 播放器配置类型，取值范围：
<li>Preset：系统预置配置；</li>
<li>Custom：用户自定义配置。</li>
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
                     * 获取播放的音视频类型，可选值有：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * @return AudioVideoType 播放的音视频类型，可选值有：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置播放的音视频类型，可选值有：
<li>AdaptiveDynamicStream：自适应码流输出；</li>
<li>Transcode：转码输出；</li>
<li>Original：原始音视频。</li>
                     * @param _audioVideoType 播放的音视频类型，可选值有：
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrmStreamingsInfo 允许输出的 DRM 自适应码流模板内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DrmStreamingsInfo GetDrmStreamingsInfo() const;

                    /**
                     * 设置允许输出的 DRM 自适应码流模板内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drmStreamingsInfo 允许输出的 DRM 自适应码流模板内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfo& _drmStreamingsInfo);

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
                     * 获取播放器对不于不同分辨率的子流展示名字。
                     * @return ResolutionNameSet 播放器对不于不同分辨率的子流展示名字。
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNameSet() const;

                    /**
                     * 设置播放器对不于不同分辨率的子流展示名字。
                     * @param _resolutionNameSet 播放器对不于不同分辨率的子流展示名字。
                     * 
                     */
                    void SetResolutionNameSet(const std::vector<ResolutionNameInfo>& _resolutionNameSet);

                    /**
                     * 判断参数 ResolutionNameSet 是否已赋值
                     * @return ResolutionNameSet 是否已赋值
                     * 
                     */
                    bool ResolutionNameSetHasBeenSet() const;

                    /**
                     * 获取播放器配置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return CreateTime 播放器配置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置播放器配置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param _createTime 播放器配置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
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
                     * 获取播放器配置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return UpdateTime 播放器配置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置播放器配置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param _updateTime 播放器配置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
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
                     * 获取播放时使用的域名。值为 Default，表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * @return Domain 播放时使用的域名。值为 Default，表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置播放时使用的域名。值为 Default，表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
                     * @param _domain 播放时使用的域名。值为 Default，表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
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

                private:

                    /**
                     * 播放器配置名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 播放器配置类型，取值范围：
<li>Preset：系统预置配置；</li>
<li>Custom：用户自定义配置。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 播放的音视频类型，可选值有：
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DrmStreamingsInfo m_drmStreamingsInfo;
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
                     * 播放器对不于不同分辨率的子流展示名字。
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNameSet;
                    bool m_resolutionNameSetHasBeenSet;

                    /**
                     * 播放器配置创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 播放器配置最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 播放时使用的域名。值为 Default，表示使用[默认分发配置](https://cloud.tencent.com/document/product/266/33373)中的域名。
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
                     * 模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_
