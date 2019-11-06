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
#include <tencentcloud/vod/v20180717/model/VideoTrackTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTrackTemplateInfo.h>


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
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流模板唯一标识。
                     * @param Definition 转自适应码流模板唯一标识。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param Type 模板类型，取值范围：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取转自适应码流模板名称。
                     * @return Name 转自适应码流模板名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置转自适应码流模板名称。
                     * @param Name 转自适应码流模板名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取转自适应码流模板描述信息。
                     * @return Comment 转自适应码流模板描述信息。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置转自适应码流模板描述信息。
                     * @param Comment 转自适应码流模板描述信息。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取打包类型，取值范围：
<li>hls；</li>
<li>dash。</li>
                     * @return PackageType 打包类型，取值范围：
<li>hls；</li>
<li>dash。</li>
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置打包类型，取值范围：
<li>hls；</li>
<li>dash。</li>
                     * @param PackageType 打包类型，取值范围：
<li>hls；</li>
<li>dash。</li>
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取DRM 类型，取值范围：
<li>FairPlay；</li>
<li>SimpleAES；</li>
<li>Widevine。</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @return DrmType DRM 类型，取值范围：
<li>FairPlay；</li>
<li>SimpleAES；</li>
<li>Widevine。</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置DRM 类型，取值范围：
<li>FairPlay；</li>
<li>SimpleAES；</li>
<li>Widevine。</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     * @param DrmType DRM 类型，取值范围：
<li>FairPlay；</li>
<li>SimpleAES；</li>
<li>Widevine。</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取视频轨模板列表。
                     * @return VideoTrackTemplateSet 视频轨模板列表。
                     */
                    std::vector<VideoTrackTemplateInfo> GetVideoTrackTemplateSet() const;

                    /**
                     * 设置视频轨模板列表。
                     * @param VideoTrackTemplateSet 视频轨模板列表。
                     */
                    void SetVideoTrackTemplateSet(const std::vector<VideoTrackTemplateInfo>& _videoTrackTemplateSet);

                    /**
                     * 判断参数 VideoTrackTemplateSet 是否已赋值
                     * @return VideoTrackTemplateSet 是否已赋值
                     */
                    bool VideoTrackTemplateSetHasBeenSet() const;

                    /**
                     * 获取音频轨模板列表。
                     * @return AudioTrackTemplateSet 音频轨模板列表。
                     */
                    std::vector<AudioTrackTemplateInfo> GetAudioTrackTemplateSet() const;

                    /**
                     * 设置音频轨模板列表。
                     * @param AudioTrackTemplateSet 音频轨模板列表。
                     */
                    void SetAudioTrackTemplateSet(const std::vector<AudioTrackTemplateInfo>& _audioTrackTemplateSet);

                    /**
                     * 判断参数 AudioTrackTemplateSet 是否已赋值
                     * @return AudioTrackTemplateSet 是否已赋值
                     */
                    bool AudioTrackTemplateSetHasBeenSet() const;

                    /**
                     * 获取是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return DisableHigherVideoBitrate 是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t GetDisableHigherVideoBitrate() const;

                    /**
                     * 设置是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param DisableHigherVideoBitrate 是否禁止视频低码率转高码率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    void SetDisableHigherVideoBitrate(const uint64_t& _disableHigherVideoBitrate);

                    /**
                     * 判断参数 DisableHigherVideoBitrate 是否已赋值
                     * @return DisableHigherVideoBitrate 是否已赋值
                     */
                    bool DisableHigherVideoBitrateHasBeenSet() const;

                    /**
                     * 获取是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return DisableHigherVideoResolution 是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t GetDisableHigherVideoResolution() const;

                    /**
                     * 设置是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param DisableHigherVideoResolution 是否禁止视频分辨率转高分辨率，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    void SetDisableHigherVideoResolution(const uint64_t& _disableHigherVideoResolution);

                    /**
                     * 判断参数 DisableHigherVideoResolution 是否已赋值
                     * @return DisableHigherVideoResolution 是否已赋值
                     */
                    bool DisableHigherVideoResolutionHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 打包类型，取值范围：
<li>hls；</li>
<li>dash。</li>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * DRM 类型，取值范围：
<li>FairPlay；</li>
<li>SimpleAES；</li>
<li>Widevine。</li>
如果取值为空字符串，代表不对视频做 DRM 保护。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 视频轨模板列表。
                     */
                    std::vector<VideoTrackTemplateInfo> m_videoTrackTemplateSet;
                    bool m_videoTrackTemplateSetHasBeenSet;

                    /**
                     * 音频轨模板列表。
                     */
                    std::vector<AudioTrackTemplateInfo> m_audioTrackTemplateSet;
                    bool m_audioTrackTemplateSetHasBeenSet;

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
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTEMPLATE_H_
