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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAdaptiveDynamicStreamingTemplate请求参数结构体
                */
                class CreateAdaptiveDynamicStreamingTemplateRequest : public AbstractModel
                {
                public:
                    CreateAdaptiveDynamicStreamingTemplateRequest();
                    ~CreateAdaptiveDynamicStreamingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
                     * @return Format <p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
                     * @param _format <p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
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
                     * 获取<p>自适应转码输出子流参数信息，最多输出10路子流。<br>注意：各个子流的帧率必须保持一致；如果不一致，采用第一个子流的帧率作为输出帧率。</p>
                     * @return StreamInfos <p>自适应转码输出子流参数信息，最多输出10路子流。<br>注意：各个子流的帧率必须保持一致；如果不一致，采用第一个子流的帧率作为输出帧率。</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置<p>自适应转码输出子流参数信息，最多输出10路子流。<br>注意：各个子流的帧率必须保持一致；如果不一致，采用第一个子流的帧率作为输出帧率。</p>
                     * @param _streamInfos <p>自适应转码输出子流参数信息，最多输出10路子流。<br>注意：各个子流的帧率必须保持一致；如果不一致，采用第一个子流的帧率作为输出帧率。</p>
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
                     * 获取<p>模板名称，长度限制：64 个字符。</p>
                     * @return Name <p>模板名称，长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称，长度限制：64 个字符。</p>
                     * @param _name <p>模板名称，长度限制：64 个字符。</p>
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
                     * 获取<p>DRM 方案类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>默认值为空字符串，如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @return DrmType <p>DRM 方案类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>默认值为空字符串，如果取值为空字符串，代表不对视频做 DRM 保护。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置<p>DRM 方案类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>默认值为空字符串，如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @param _drmType <p>DRM 方案类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>默认值为空字符串，如果取值为空字符串，代表不对视频做 DRM 保护。
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
                     * 获取<p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * @return DrmKeyProvider <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * 
                     */
                    std::string GetDrmKeyProvider() const;

                    /**
                     * 设置<p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     * @param _drmKeyProvider <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
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
                     * 获取<p>加密方式，可选值：<br>cbcs：Widevine，FairPlay，WideVine+FairPlay支持；<br>cenc：Widevine支持；   </p><p>若不填<br>FairPlay 默认cbcs;<br>Widevine 默认cenc;<br>WideVine+FairPlay默认cbcs;</p>
                     * @return DrmEncryptType <p>加密方式，可选值：<br>cbcs：Widevine，FairPlay，WideVine+FairPlay支持；<br>cenc：Widevine支持；   </p><p>若不填<br>FairPlay 默认cbcs;<br>Widevine 默认cenc;<br>WideVine+FairPlay默认cbcs;</p>
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置<p>加密方式，可选值：<br>cbcs：Widevine，FairPlay，WideVine+FairPlay支持；<br>cenc：Widevine支持；   </p><p>若不填<br>FairPlay 默认cbcs;<br>Widevine 默认cenc;<br>WideVine+FairPlay默认cbcs;</p>
                     * @param _drmEncryptType <p>加密方式，可选值：<br>cbcs：Widevine，FairPlay，WideVine+FairPlay支持；<br>cenc：Widevine支持；   </p><p>若不填<br>FairPlay 默认cbcs;<br>Widevine 默认cenc;<br>WideVine+FairPlay默认cbcs;</p>
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
                     * 获取<p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * @return DisableHigherVideoBitrate <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置<p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * @param _disableHigherVideoBitrate <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
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
                     * 获取<p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * @return DisableHigherVideoResolution <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置<p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     * @param _disableHigherVideoResolution <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
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
                     * 获取<p>切片类型，当 Format 为 HLS 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>默认值：ts。
                     * @return SegmentType <p>切片类型，当 Format 为 HLS 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>默认值：ts。
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>切片类型，当 Format 为 HLS 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>默认值：ts。
                     * @param _segmentType <p>切片类型，当 Format 为 HLS 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>默认值：ts。
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
                     * <p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>自适应转码输出子流参数信息，最多输出10路子流。<br>注意：各个子流的帧率必须保持一致；如果不一致，采用第一个子流的帧率作为输出帧率。</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模板名称，长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>DRM 方案类型，取值范围：</p><li>SimpleAES</li><li>Widevine</li><li>FairPlay</li><li>Widevine+FairPlay</li>默认值为空字符串，如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * <p>DRM 的密钥提供商，取值范围：</p><li>SDMC：华曦达；</li><li>VOD：云点播。</li>默认为 VOD 。<p>华曦达服务后续逐步下线，请使用VOD DRM加密服务。</p>
                     */
                    std::string m_drmKeyProvider;
                    bool m_drmKeyProviderHasBeenSet;

                    /**
                     * <p>加密方式，可选值：<br>cbcs：Widevine，FairPlay，WideVine+FairPlay支持；<br>cenc：Widevine支持；   </p><p>若不填<br>FairPlay 默认cbcs;<br>Widevine 默认cenc;<br>WideVine+FairPlay默认cbcs;</p>
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                    /**
                     * <p>是否禁止视频低码率转高码率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * <p>是否禁止视频分辨率转高分辨率，取值范围：</p><li>0：否，</li><li>1：是。</li>默认为否。
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

                    /**
                     * <p>模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>切片类型，当 Format 为 HLS 时有效，可选值：</p><li>ts：ts 切片；</li><li>fmp4：fmp4 切片。</li>默认值：ts。
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
