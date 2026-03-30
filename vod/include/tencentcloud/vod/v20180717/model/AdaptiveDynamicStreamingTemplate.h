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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AdaptiveStreamTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转自适应码流模板详情
                */
                class AdaptiveDynamicStreamingTemplate : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTemplate();
                    ~AdaptiveDynamicStreamingTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转自适应码流模板唯一标识。</p>
                     * @return Definition <p>转自适应码流模板唯一标识。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>转自适应码流模板唯一标识。</p>
                     * @param _definition <p>转自适应码流模板唯一标识。</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>模板类型，取值范围：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @return Type <p>模板类型，取值范围：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模板类型，取值范围：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     * @param _type <p>模板类型，取值范围：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
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
                     * 获取<p>转自适应码流模板名称。</p>
                     * @return Name <p>转自适应码流模板名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>转自适应码流模板名称。</p>
                     * @param _name <p>转自适应码流模板名称。</p>
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
                     * 获取<p>转自适应码流模板描述信息。</p>
                     * @return Comment <p>转自适应码流模板描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>转自适应码流模板描述信息。</p>
                     * @param _comment <p>转自适应码流模板描述信息。</p>
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
                     * 获取<p>自适应转码格式，取值范围：</p><li>HLS。</li>
                     * @return Format <p>自适应转码格式，取值范围：</p><li>HLS。</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>自适应转码格式，取值范围：</p><li>HLS。</li>
                     * @param _format <p>自适应转码格式，取值范围：</p><li>HLS。</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>DRM 类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @return DrmType <p>DRM 类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>如果取值为空字符串，代表不对视频做 DRM 保护。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置<p>DRM 类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @param _drmType <p>DRM 类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>如果取值为空字符串，代表不对视频做 DRM 保护。
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取<p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认值为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * @return DrmKeyProvider <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认值为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * 
                     */
                    std::string GetDrmKeyProvider() const;

                    /**
                     * 设置<p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认值为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * @param _drmKeyProvider <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认值为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * 
                     */
                    void SetDrmKeyProvider(const std::string& _drmKeyProvider);

                    /**
                     * 判断参数 DrmKeyProvider 是否已赋值
                     * @return DrmKeyProvider 是否已赋值
                     * 
                     */
                    bool DrmKeyProviderHasBeenSet() const;

                    /**
                     * 获取<p>DRM的加密类型，取值范围：{&quot;cbcs&quot;, &quot;cenc&quot;}</p>
                     * @return DrmEncryptType <p>DRM的加密类型，取值范围：{&quot;cbcs&quot;, &quot;cenc&quot;}</p>
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置<p>DRM的加密类型，取值范围：{&quot;cbcs&quot;, &quot;cenc&quot;}</p>
                     * @param _drmEncryptType <p>DRM的加密类型，取值范围：{&quot;cbcs&quot;, &quot;cenc&quot;}</p>
                     * 
                     */
                    void SetDrmEncryptType(const std::string& _drmEncryptType);

                    /**
                     * 判断参数 DrmEncryptType 是否已赋值
                     * @return DrmEncryptType 是否已赋值
                     * 
                     */
                    bool DrmEncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>自适应转码输入流参数信息，最多输入10路流。</p>
                     * @return StreamInfos <p>自适应转码输入流参数信息，最多输入10路流。</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置<p>自适应转码输入流参数信息，最多输入10路流。</p>
                     * @param _streamInfos <p>自适应转码输入流参数信息，最多输入10路流。</p>
                     * 
                     */
                    void SetStreamInfos(const std::vector<AdaptiveStreamTemplate>& _streamInfos);

                    /**
                     * 判断参数 StreamInfos 是否已赋值
                     * @return StreamInfos 是否已赋值
                     * 
                     */
                    bool StreamInfosHasBeenSet() const;

                    /**
                     * 获取<p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * @return DisableHigherVideoBitrate <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置<p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * @param _disableHigherVideoBitrate <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * 
                     */
                    void SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate);

                    /**
                     * 判断参数 DisableHigherVideoBitrate 是否已赋值
                     * @return DisableHigherVideoBitrate 是否已赋值
                     * 
                     */
                    bool DisableHigherVideoBitrateHasBeenSet() const;

                    /**
                     * 获取<p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * @return DisableHigherVideoResolution <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置<p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * @param _disableHigherVideoResolution <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     * 
                     */
                    void SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution);

                    /**
                     * 判断参数 DisableHigherVideoResolution 是否已赋值
                     * @return DisableHigherVideoResolution 是否已赋值
                     * 
                     */
                    bool DisableHigherVideoResolutionHasBeenSet() const;

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
                     * 获取<p>切片类型，仅当 Format 为 HLS 时有效。</p>
                     * @return SegmentType <p>切片类型，仅当 Format 为 HLS 时有效。</p>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>切片类型，仅当 Format 为 HLS 时有效。</p>
                     * @param _segmentType <p>切片类型，仅当 Format 为 HLS 时有效。</p>
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
                     * <p>转自适应码流模板唯一标识。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>模板类型，取值范围：</p><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>转自适应码流模板名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>转自适应码流模板描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>自适应转码格式，取值范围：</p><li>HLS。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>DRM 类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认值为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     */
                    std::string m_drmKeyProvider;
                    bool m_drmKeyProviderHasBeenSet;

                    /**
                     * <p>DRM的加密类型，取值范围：{&quot;cbcs&quot;, &quot;cenc&quot;}</p>
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                    /**
                     * <p>自适应转码输入流参数信息，最多输入10路流。</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

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
                     * <p>切片类型，仅当 Format 为 HLS 时有效。</p>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
