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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CHILDTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CHILDTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 自适应码率转码模板，子模板，出入参数。
                */
                class ChildTemplateInfo : public AbstractModel
                {
                public:
                    ChildTemplateInfo();
                    ~ChildTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自适应码率转码模板，子模板Id。
入参时候，填写此字段，表示更新子模板，否则是新增子模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 自适应码率转码模板，子模板Id。
入参时候，填写此字段，表示更新子模板，否则是新增子模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置自适应码率转码模板，子模板Id。
入参时候，填写此字段，表示更新子模板，否则是新增子模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 自适应码率转码模板，子模板Id。
入参时候，填写此字段，表示更新子模板，否则是新增子模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取子模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName 子模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置子模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName 子模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取视频编码：h264/h265/origin，默认origin。

origin: 保持原始编码格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vcodec 视频编码：h264/h265/origin，默认origin。

origin: 保持原始编码格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置视频编码：h264/h265/origin，默认origin。

origin: 保持原始编码格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vcodec 视频编码：h264/h265/origin，默认origin。

origin: 保持原始编码格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     * 
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBitrate 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoBitrate 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取宽，默认0。
范围[0-3000]。
数值必须是2的倍数，0是原始宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 宽，默认0。
范围[0-3000]。
数值必须是2的倍数，0是原始宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽，默认0。
范围[0-3000]。
数值必须是2的倍数，0是原始宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 宽，默认0。
范围[0-3000]。
数值必须是2的倍数，0是原始宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取帧率，默认0。
范围0-60fps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fps 帧率，默认0。
范围0-60fps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置帧率，默认0。
范围0-60fps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fps 帧率，默认0。
范围0-60fps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取关键帧间隔，单位：秒。
默认原始的间隔。
范围2-6。
同一个父模板下面的所有子模板，gop必须相等且存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gop 关键帧间隔，单位：秒。
默认原始的间隔。
范围2-6。
同一个父模板下面的所有子模板，gop必须相等且存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置关键帧间隔，单位：秒。
默认原始的间隔。
范围2-6。
同一个父模板下面的所有子模板，gop必须相等且存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gop 关键帧间隔，单位：秒。
默认原始的间隔。
范围2-6。
同一个父模板下面的所有子模板，gop必须相等且存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取是否保留视频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedVideo 是否保留视频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置是否保留视频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needVideo 是否保留视频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNeedVideo(const int64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     * 
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取是否保留音频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedAudio 是否保留音频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置是否保留音频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needAudio 是否保留音频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     * 
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BitrateToOrig 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrateToOrig 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBitrateToOrig(const int64_t& _bitrateToOrig);

                    /**
                     * 判断参数 BitrateToOrig 是否已赋值
                     * @return BitrateToOrig 是否已赋值
                     * 
                     */
                    bool BitrateToOrigHasBeenSet() const;

                    /**
                     * 获取当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeightToOrig 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heightToOrig 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeightToOrig(const int64_t& _heightToOrig);

                    /**
                     * 判断参数 HeightToOrig 是否已赋值
                     * @return HeightToOrig 是否已赋值
                     * 
                     */
                    bool HeightToOrigHasBeenSet() const;

                    /**
                     * 获取当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FpsToOrig 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fpsToOrig 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFpsToOrig(const int64_t& _fpsToOrig);

                    /**
                     * 判断参数 FpsToOrig 是否已赋值
                     * @return FpsToOrig 是否已赋值
                     * 
                     */
                    bool FpsToOrigHasBeenSet() const;

                    /**
                     * 获取是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortEdgeAsHeight 是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetShortEdgeAsHeight() const;

                    /**
                     * 设置是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortEdgeAsHeight 是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortEdgeAsHeight(const int64_t& _shortEdgeAsHeight);

                    /**
                     * 判断参数 ShortEdgeAsHeight 是否已赋值
                     * @return ShortEdgeAsHeight 是否已赋值
                     * 
                     */
                    bool ShortEdgeAsHeightHasBeenSet() const;

                    /**
                     * 获取HLS 分片类型。
可选值：ts、fmp4。
注：编码方式为 H.265 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsContainerFormat HLS 分片类型。
可选值：ts、fmp4。
注：编码方式为 H.265 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHlsContainerFormat() const;

                    /**
                     * 设置HLS 分片类型。
可选值：ts、fmp4。
注：编码方式为 H.265 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hlsContainerFormat HLS 分片类型。
可选值：ts、fmp4。
注：编码方式为 H.265 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHlsContainerFormat(const std::string& _hlsContainerFormat);

                    /**
                     * 判断参数 HlsContainerFormat 是否已赋值
                     * @return HlsContainerFormat 是否已赋值
                     * 
                     */
                    bool HlsContainerFormatHasBeenSet() const;

                    /**
                     * 获取编码标签。
可选值：hvc1、hev1。
注：HLS 分片类型选择 fmp4 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsMp4VideoCodecTag 编码标签。
可选值：hvc1、hev1。
注：HLS 分片类型选择 fmp4 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHlsMp4VideoCodecTag() const;

                    /**
                     * 设置编码标签。
可选值：hvc1、hev1。
注：HLS 分片类型选择 fmp4 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hlsMp4VideoCodecTag 编码标签。
可选值：hvc1、hev1。
注：HLS 分片类型选择 fmp4 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHlsMp4VideoCodecTag(const std::string& _hlsMp4VideoCodecTag);

                    /**
                     * 判断参数 HlsMp4VideoCodecTag 是否已赋值
                     * @return HlsMp4VideoCodecTag 是否已赋值
                     * 
                     */
                    bool HlsMp4VideoCodecTagHasBeenSet() const;

                private:

                    /**
                     * 自适应码率转码模板，子模板Id。
入参时候，填写此字段，表示更新子模板，否则是新增子模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 子模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 视频编码：h264/h265/origin，默认origin。

origin: 保持原始编码格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 宽，默认0。
范围[0-3000]。
数值必须是2的倍数，0是原始宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始高度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 帧率，默认0。
范围0-60fps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 关键帧间隔，单位：秒。
默认原始的间隔。
范围2-6。
同一个父模板下面的所有子模板，gop必须相等且存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 是否保留视频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * 是否保留音频，0：否，1：是。默认1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

                    /**
                     * 是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shortEdgeAsHeight;
                    bool m_shortEdgeAsHeightHasBeenSet;

                    /**
                     * HLS 分片类型。
可选值：ts、fmp4。
注：编码方式为 H.265 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hlsContainerFormat;
                    bool m_hlsContainerFormatHasBeenSet;

                    /**
                     * 编码标签。
可选值：hvc1、hev1。
注：HLS 分片类型选择 fmp4 时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hlsMp4VideoCodecTag;
                    bool m_hlsMp4VideoCodecTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CHILDTEMPLATEINFO_H_
