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
                     * 获取<p>自适应码率转码模板，子模板Id。<br>入参时候，填写此字段，表示更新子模板，否则是新增子模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId <p>自适应码率转码模板，子模板Id。<br>入参时候，填写此字段，表示更新子模板，否则是新增子模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>自适应码率转码模板，子模板Id。<br>入参时候，填写此字段，表示更新子模板，否则是新增子模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId <p>自适应码率转码模板，子模板Id。<br>入参时候，填写此字段，表示更新子模板，否则是新增子模板。</p>
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
                     * 获取<p>子模板名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName <p>子模板名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>子模板名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName <p>子模板名称。</p>
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
                     * 获取<p>视频编码：h264/h265/origin，默认origin。</p><p>origin: 保持原始编码格式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vcodec <p>视频编码：h264/h265/origin，默认origin。</p><p>origin: 保持原始编码格式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置<p>视频编码：h264/h265/origin，默认origin。</p><p>origin: 保持原始编码格式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vcodec <p>视频编码：h264/h265/origin，默认origin。</p><p>origin: 保持原始编码格式。</p>
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
                     * 获取<p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBitrate <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置<p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoBitrate <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
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
                     * 获取<p>宽，默认0。<br>范围[0-3000]。<br>数值必须是2的倍数，0是原始宽度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width <p>宽，默认0。<br>范围[0-3000]。<br>数值必须是2的倍数，0是原始宽度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>宽，默认0。<br>范围[0-3000]。<br>数值必须是2的倍数，0是原始宽度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width <p>宽，默认0。<br>范围[0-3000]。<br>数值必须是2的倍数，0是原始宽度。</p>
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
                     * 获取<p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始高度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始高度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始高度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始高度。</p>
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
                     * 获取<p>帧率，默认0。<br>范围0-60fps。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fps <p>帧率，默认0。<br>范围0-60fps。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置<p>帧率，默认0。<br>范围0-60fps。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fps <p>帧率，默认0。<br>范围0-60fps。</p>
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
                     * 获取<p>关键帧间隔，单位：秒。<br>默认原始的间隔。<br>范围2-6。<br>同一个父模板下面的所有子模板，gop必须相等且存在。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gop <p>关键帧间隔，单位：秒。<br>默认原始的间隔。<br>范围2-6。<br>同一个父模板下面的所有子模板，gop必须相等且存在。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置<p>关键帧间隔，单位：秒。<br>默认原始的间隔。<br>范围2-6。<br>同一个父模板下面的所有子模板，gop必须相等且存在。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gop <p>关键帧间隔，单位：秒。<br>默认原始的间隔。<br>范围2-6。<br>同一个父模板下面的所有子模板，gop必须相等且存在。</p>
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
                     * 获取<p>是否保留视频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedVideo <p>是否保留视频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置<p>是否保留视频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needVideo <p>是否保留视频，0：否，1：是。默认1。</p>
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
                     * 获取<p>是否保留音频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedAudio <p>是否保留音频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置<p>是否保留音频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needAudio <p>是否保留音频，0：否，1：是。默认1。</p>
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
                     * 获取<p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BitrateToOrig <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置<p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrateToOrig <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * 获取<p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeightToOrig <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置<p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heightToOrig <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * 获取<p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FpsToOrig <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置<p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fpsToOrig <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * 获取<p>是否以短边作为高度，0：否，1：是。默认0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortEdgeAsHeight <p>是否以短边作为高度，0：否，1：是。默认0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetShortEdgeAsHeight() const;

                    /**
                     * 设置<p>是否以短边作为高度，0：否，1：是。默认0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortEdgeAsHeight <p>是否以短边作为高度，0：否，1：是。默认0。</p>
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
                     * 获取<p>HLS 分片类型。<br>可选值：ts、fmp4。<br>注：编码方式为 H.265 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsContainerFormat <p>HLS 分片类型。<br>可选值：ts、fmp4。<br>注：编码方式为 H.265 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHlsContainerFormat() const;

                    /**
                     * 设置<p>HLS 分片类型。<br>可选值：ts、fmp4。<br>注：编码方式为 H.265 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hlsContainerFormat <p>HLS 分片类型。<br>可选值：ts、fmp4。<br>注：编码方式为 H.265 时生效。</p>
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
                     * 获取<p>编码标签。<br>可选值：hvc1、hev1。<br>注：HLS 分片类型选择 fmp4 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsMp4VideoCodecTag <p>编码标签。<br>可选值：hvc1、hev1。<br>注：HLS 分片类型选择 fmp4 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHlsMp4VideoCodecTag() const;

                    /**
                     * 设置<p>编码标签。<br>可选值：hvc1、hev1。<br>注：HLS 分片类型选择 fmp4 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hlsMp4VideoCodecTag <p>编码标签。<br>可选值：hvc1、hev1。<br>注：HLS 分片类型选择 fmp4 时生效。</p>
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

                    /**
                     * 获取<p>子流音频编码类型。默认为&quot;自动适配&quot;</p>
                     * @return Acodec <p>子流音频编码类型。默认为&quot;自动适配&quot;</p>
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置<p>子流音频编码类型。默认为&quot;自动适配&quot;</p>
                     * @param _acodec <p>子流音频编码类型。默认为&quot;自动适配&quot;</p>
                     * 
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     * 
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取<p>子流音频码率</p><p>单位：Kbps</p>
                     * @return AudioBitrate <p>子流音频码率</p><p>单位：Kbps</p>
                     * 
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置<p>子流音频码率</p><p>单位：Kbps</p>
                     * @param _audioBitrate <p>子流音频码率</p><p>单位：Kbps</p>
                     * 
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     * 
                     */
                    bool AudioBitrateHasBeenSet() const;

                private:

                    /**
                     * <p>自适应码率转码模板，子模板Id。<br>入参时候，填写此字段，表示更新子模板，否则是新增子模板。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>子模板名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>视频编码：h264/h265/origin，默认origin。</p><p>origin: 保持原始编码格式。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * <p>宽，默认0。<br>范围[0-3000]。<br>数值必须是2的倍数，0是原始宽度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始高度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>帧率，默认0。<br>范围0-60fps。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>关键帧间隔，单位：秒。<br>默认原始的间隔。<br>范围2-6。<br>同一个父模板下面的所有子模板，gop必须相等且存在。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * <p>是否保留视频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * <p>是否保留音频，0：否，1：是。默认1。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

                    /**
                     * <p>是否以短边作为高度，0：否，1：是。默认0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shortEdgeAsHeight;
                    bool m_shortEdgeAsHeightHasBeenSet;

                    /**
                     * <p>HLS 分片类型。<br>可选值：ts、fmp4。<br>注：编码方式为 H.265 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hlsContainerFormat;
                    bool m_hlsContainerFormatHasBeenSet;

                    /**
                     * <p>编码标签。<br>可选值：hvc1、hev1。<br>注：HLS 分片类型选择 fmp4 时生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hlsMp4VideoCodecTag;
                    bool m_hlsMp4VideoCodecTagHasBeenSet;

                    /**
                     * <p>子流音频编码类型。默认为&quot;自动适配&quot;</p>
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * <p>子流音频码率</p><p>单位：Kbps</p>
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CHILDTEMPLATEINFO_H_
