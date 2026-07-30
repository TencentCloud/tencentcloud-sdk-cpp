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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_

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
                * ModifyAdaptiveDynamicStreamingTemplate请求参数结构体
                */
                class ModifyAdaptiveDynamicStreamingTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAdaptiveDynamicStreamingTemplateRequest();
                    ~ModifyAdaptiveDynamicStreamingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自适应转码模板唯一标识。</p>
                     * @return Definition <p>自适应转码模板唯一标识。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>自适应转码模板唯一标识。</p>
                     * @param _definition <p>自适应转码模板唯一标识。</p>
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
                     * 获取<p>自适应转码输入流参数信息，最多输入10路流。<br>注意：各个流的帧率必须保持一致；如果不一致，采用第一个流的帧率作为输出帧率。</p>
                     * @return StreamInfos <p>自适应转码输入流参数信息，最多输入10路流。<br>注意：各个流的帧率必须保持一致；如果不一致，采用第一个流的帧率作为输出帧率。</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStreamInfos() const;

                    /**
                     * 设置<p>自适应转码输入流参数信息，最多输入10路流。<br>注意：各个流的帧率必须保持一致；如果不一致，采用第一个流的帧率作为输出帧率。</p>
                     * @param _streamInfos <p>自适应转码输入流参数信息，最多输入10路流。<br>注意：各个流的帧率必须保持一致；如果不一致，采用第一个流的帧率作为输出帧率。</p>
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
                     * 获取<p>分片类型，可选值：<br>ts: HLS，内部映射为ts-segment</p><p>mp4: HLS/DASH，HLS情况下内部映射为mp4-mp4-segment，DASH情况下内部映射为mp4-mp4-byterange</p><p>ts-segment：HLS+TS 切片</p><p>ts-byterange：HLS+TS byte range</p><p>mp4-segment：HLS+MP4 切片</p><p>mp4-byterange：HLS+MP4 byte range</p><p>ts-packed-audio：HLS+TS+Packed Audio 切片</p><p>mp4-packed-audio：HLS+MP4+Packed Audio 切片</p><p>ts-ts-segment：HLS+TS+TS 切片</p><p>ts-ts-byterange：HLS+TS+TS byte range</p><p>mp4-mp4-segment：HLS+MP4+MP4 切片</p><p>mp4-mp4-byterange：HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange：HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange：HLS+MP4+Packed Audio byte range<br> 默认值：ts-segment 注：自适应码流的分片格式以此字段为准。DASH格式下SegmentType只能为mp4-mp4-byterange。</p><p>FairPlay：只能用于HLS，切片格式只能是mp4或mp4-mp4-segment Widevine：可以用于HLS和DASH，HLS下切片格式只能是mp4或mp4-mp4-segment，DASH下切片格式只能是mp4或mp4-mp4-byterange Widevine+FairPlay: 只能用于HLS，切片格式只能是mp4或mp4-mp4-segment</p>
                     * @return SegmentType <p>分片类型，可选值：<br>ts: HLS，内部映射为ts-segment</p><p>mp4: HLS/DASH，HLS情况下内部映射为mp4-mp4-segment，DASH情况下内部映射为mp4-mp4-byterange</p><p>ts-segment：HLS+TS 切片</p><p>ts-byterange：HLS+TS byte range</p><p>mp4-segment：HLS+MP4 切片</p><p>mp4-byterange：HLS+MP4 byte range</p><p>ts-packed-audio：HLS+TS+Packed Audio 切片</p><p>mp4-packed-audio：HLS+MP4+Packed Audio 切片</p><p>ts-ts-segment：HLS+TS+TS 切片</p><p>ts-ts-byterange：HLS+TS+TS byte range</p><p>mp4-mp4-segment：HLS+MP4+MP4 切片</p><p>mp4-mp4-byterange：HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange：HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange：HLS+MP4+Packed Audio byte range<br> 默认值：ts-segment 注：自适应码流的分片格式以此字段为准。DASH格式下SegmentType只能为mp4-mp4-byterange。</p><p>FairPlay：只能用于HLS，切片格式只能是mp4或mp4-mp4-segment Widevine：可以用于HLS和DASH，HLS下切片格式只能是mp4或mp4-mp4-segment，DASH下切片格式只能是mp4或mp4-mp4-byterange Widevine+FairPlay: 只能用于HLS，切片格式只能是mp4或mp4-mp4-segment</p>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>分片类型，可选值：<br>ts: HLS，内部映射为ts-segment</p><p>mp4: HLS/DASH，HLS情况下内部映射为mp4-mp4-segment，DASH情况下内部映射为mp4-mp4-byterange</p><p>ts-segment：HLS+TS 切片</p><p>ts-byterange：HLS+TS byte range</p><p>mp4-segment：HLS+MP4 切片</p><p>mp4-byterange：HLS+MP4 byte range</p><p>ts-packed-audio：HLS+TS+Packed Audio 切片</p><p>mp4-packed-audio：HLS+MP4+Packed Audio 切片</p><p>ts-ts-segment：HLS+TS+TS 切片</p><p>ts-ts-byterange：HLS+TS+TS byte range</p><p>mp4-mp4-segment：HLS+MP4+MP4 切片</p><p>mp4-mp4-byterange：HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange：HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange：HLS+MP4+Packed Audio byte range<br> 默认值：ts-segment 注：自适应码流的分片格式以此字段为准。DASH格式下SegmentType只能为mp4-mp4-byterange。</p><p>FairPlay：只能用于HLS，切片格式只能是mp4或mp4-mp4-segment Widevine：可以用于HLS和DASH，HLS下切片格式只能是mp4或mp4-mp4-segment，DASH下切片格式只能是mp4或mp4-mp4-byterange Widevine+FairPlay: 只能用于HLS，切片格式只能是mp4或mp4-mp4-segment</p>
                     * @param _segmentType <p>分片类型，可选值：<br>ts: HLS，内部映射为ts-segment</p><p>mp4: HLS/DASH，HLS情况下内部映射为mp4-mp4-segment，DASH情况下内部映射为mp4-mp4-byterange</p><p>ts-segment：HLS+TS 切片</p><p>ts-byterange：HLS+TS byte range</p><p>mp4-segment：HLS+MP4 切片</p><p>mp4-byterange：HLS+MP4 byte range</p><p>ts-packed-audio：HLS+TS+Packed Audio 切片</p><p>mp4-packed-audio：HLS+MP4+Packed Audio 切片</p><p>ts-ts-segment：HLS+TS+TS 切片</p><p>ts-ts-byterange：HLS+TS+TS byte range</p><p>mp4-mp4-segment：HLS+MP4+MP4 切片</p><p>mp4-mp4-byterange：HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange：HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange：HLS+MP4+Packed Audio byte range<br> 默认值：ts-segment 注：自适应码流的分片格式以此字段为准。DASH格式下SegmentType只能为mp4-mp4-byterange。</p><p>FairPlay：只能用于HLS，切片格式只能是mp4或mp4-mp4-segment Widevine：可以用于HLS和DASH，HLS下切片格式只能是mp4或mp4-mp4-segment，DASH下切片格式只能是mp4或mp4-mp4-byterange Widevine+FairPlay: 只能用于HLS，切片格式只能是mp4或mp4-mp4-segment</p>
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
                     * 获取<p>切片平均时长。</p><p>取值范围：[1, 10]</p><p>单位：秒</p>
                     * @return SegmentDuration <p>切片平均时长。</p><p>取值范围：[1, 10]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetSegmentDuration() const;

                    /**
                     * 设置<p>切片平均时长。</p><p>取值范围：[1, 10]</p><p>单位：秒</p>
                     * @param _segmentDuration <p>切片平均时长。</p><p>取值范围：[1, 10]</p><p>单位：秒</p>
                     * 
                     */
                    void SetSegmentDuration(const int64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                private:

                    /**
                     * <p>自适应转码模板唯一标识。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

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
                     * <p>自适应转码格式，取值范围：</p><li>HLS；</li><li>MPEG-DASH。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

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
                     * <p>自适应转码输入流参数信息，最多输入10路流。<br>注意：各个流的帧率必须保持一致；如果不一致，采用第一个流的帧率作为输出帧率。</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * <p>模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>分片类型，可选值：<br>ts: HLS，内部映射为ts-segment</p><p>mp4: HLS/DASH，HLS情况下内部映射为mp4-mp4-segment，DASH情况下内部映射为mp4-mp4-byterange</p><p>ts-segment：HLS+TS 切片</p><p>ts-byterange：HLS+TS byte range</p><p>mp4-segment：HLS+MP4 切片</p><p>mp4-byterange：HLS+MP4 byte range</p><p>ts-packed-audio：HLS+TS+Packed Audio 切片</p><p>mp4-packed-audio：HLS+MP4+Packed Audio 切片</p><p>ts-ts-segment：HLS+TS+TS 切片</p><p>ts-ts-byterange：HLS+TS+TS byte range</p><p>mp4-mp4-segment：HLS+MP4+MP4 切片</p><p>mp4-mp4-byterange：HLS/DASH+MP4+MP4 byte range</p><p>ts-packed-audio-byterange：HLS+TS+Packed Audio byte range</p><p>mp4-packed-audio-byterange：HLS+MP4+Packed Audio byte range<br> 默认值：ts-segment 注：自适应码流的分片格式以此字段为准。DASH格式下SegmentType只能为mp4-mp4-byterange。</p><p>FairPlay：只能用于HLS，切片格式只能是mp4或mp4-mp4-segment Widevine：可以用于HLS和DASH，HLS下切片格式只能是mp4或mp4-mp4-segment，DASH下切片格式只能是mp4或mp4-mp4-byterange Widevine+FairPlay: 只能用于HLS，切片格式只能是mp4或mp4-mp4-segment</p>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * <p>切片平均时长。</p><p>取值范围：[1, 10]</p><p>单位：秒</p>
                     */
                    int64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYADAPTIVEDYNAMICSTREAMINGTEMPLATEREQUEST_H_
