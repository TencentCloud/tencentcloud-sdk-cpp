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
                     * 获取转自适应码流模板唯一标识。
                     * @return Definition 转自适应码流模板唯一标识。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流模板唯一标识。
                     * @param _definition 转自适应码流模板唯一标识。
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
                     * 获取模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型，取值范围：
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
                     * 获取转自适应码流模板名称。
                     * @return Name 转自适应码流模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置转自适应码流模板名称。
                     * @param _name 转自适应码流模板名称。
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
                     * 获取转自适应码流模板描述信息。
                     * @return Comment 转自适应码流模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置转自适应码流模板描述信息。
                     * @param _comment 转自适应码流模板描述信息。
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
                     * 获取自适应转码格式，取值范围：
<li>HLS。</li>
                     * @return Format 自适应转码格式，取值范围：
<li>HLS。</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置自适应转码格式，取值范围：
<li>HLS。</li>
                     * @param _format 自适应转码格式，取值范围：
<li>HLS。</li>
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
                     * 获取DRM 类型，取值范围：
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @return DrmType DRM 类型，取值范围：
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置DRM 类型，取值范围：
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @param _drmType DRM 类型，取值范围：
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
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
                     * 获取DRM 的密钥提供商，取值范围：
<li>SDMC：华曦达；</li>
<li>VOD：云点播。</li>
默认值为 VOD 。
                     * @return DrmKeyProvider DRM 的密钥提供商，取值范围：
<li>SDMC：华曦达；</li>
<li>VOD：云点播。</li>
默认值为 VOD 。
                     * 
                     */
                    std::string GetDrmKeyProvider() const;

                    /**
                     * 设置DRM 的密钥提供商，取值范围：
<li>SDMC：华曦达；</li>
<li>VOD：云点播。</li>
默认值为 VOD 。
                     * @param _drmKeyProvider DRM 的密钥提供商，取值范围：
<li>SDMC：华曦达；</li>
<li>VOD：云点播。</li>
默认值为 VOD 。
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
                     * 获取自适应转码输入流参数信息，最多输入10路流。
                     * @return StreamInfos 自适应转码输入流参数信息，最多输入10路流。
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置自适应转码输入流参数信息，最多输入10路流。
                     * @param _streamInfos 自适应转码输入流参数信息，最多输入10路流。
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
                     * 获取是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return DisableHigherVideoBitrate 是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param _disableHigherVideoBitrate 是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
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
                     * 获取是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return DisableHigherVideoResolution 是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param _disableHigherVideoResolution 是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
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
                     * 获取切片类型，仅当 Format 为 HLS 时有效。
                     * @return SegmentType 切片类型，仅当 Format 为 HLS 时有效。
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置切片类型，仅当 Format 为 HLS 时有效。
                     * @param _segmentType 切片类型，仅当 Format 为 HLS 时有效。
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
                     * 转自适应码流模板唯一标识。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 转自适应码流模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 转自适应码流模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 自适应转码格式，取值范围：
<li>HLS。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * DRM 类型，取值范围：
<li>SimpleAES</li>
<li>Widevine</li>
<li>FairPlay</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * DRM 的密钥提供商，取值范围：
<li>SDMC：华曦达；</li>
<li>VOD：云点播。</li>
默认值为 VOD 。
                     */
                    std::string m_drmKeyProvider;
                    bool m_drmKeyProviderHasBeenSet;

                    /**
                     * 自适应转码输入流参数信息，最多输入10路流。
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * 是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t m_disableHigherVideoBitrate;
                    bool m_disableHigherVideoBitrateHasBeenSet;

                    /**
                     * 是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t m_disableHigherVideoResolution;
                    bool m_disableHigherVideoResolutionHasBeenSet;

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
                     * 切片类型，仅当 Format 为 HLS 时有效。
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
