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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ChildTemplateInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 转码模板信息。
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频编码：h264/h265/origin，默认h264。</p><p>origin: 保持原始编码格式</p>
                     * @return Vcodec <p>视频编码：h264/h265/origin，默认h264。</p><p>origin: 保持原始编码格式</p>
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置<p>视频编码：h264/h265/origin，默认h264。</p><p>origin: 保持原始编码格式</p>
                     * @param _vcodec <p>视频编码：h264/h265/origin，默认h264。</p><p>origin: 保持原始编码格式</p>
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
                     * @return VideoBitrate <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置<p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
                     * @param _videoBitrate <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
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
                     * 获取<p>音频编码：aac，默认aac。<br>注意：当前该参数未生效，待后续支持！</p>
                     * @return Acodec <p>音频编码：aac，默认aac。<br>注意：当前该参数未生效，待后续支持！</p>
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置<p>音频编码：aac，默认aac。<br>注意：当前该参数未生效，待后续支持！</p>
                     * @param _acodec <p>音频编码：aac，默认aac。<br>注意：当前该参数未生效，待后续支持！</p>
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
                     * 获取<p>音频码率。取值范围：0kbps - 500kbps。<br>默认0。</p>
                     * @return AudioBitrate <p>音频码率。取值范围：0kbps - 500kbps。<br>默认0。</p>
                     * 
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置<p>音频码率。取值范围：0kbps - 500kbps。<br>默认0。</p>
                     * @param _audioBitrate <p>音频码率。取值范围：0kbps - 500kbps。<br>默认0。</p>
                     * 
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     * 
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取<p>宽，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * @return Width <p>宽，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>宽，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * @param _width <p>宽，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
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
                     * 获取<p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * @return Height <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     * @param _height <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
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
                     * 获取<p>帧率，默认0。<br>范围0-60fps</p>
                     * @return Fps <p>帧率，默认0。<br>范围0-60fps</p>
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置<p>帧率，默认0。<br>范围0-60fps</p>
                     * @param _fps <p>帧率，默认0。<br>范围0-60fps</p>
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
                     * 获取<p>关键帧间隔，单位：秒。<br>默认原始的间隔<br>范围2-6</p>
                     * @return Gop <p>关键帧间隔，单位：秒。<br>默认原始的间隔<br>范围2-6</p>
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置<p>关键帧间隔，单位：秒。<br>默认原始的间隔<br>范围2-6</p>
                     * @param _gop <p>关键帧间隔，单位：秒。<br>默认原始的间隔<br>范围2-6</p>
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
                     * 获取<p>旋转角度，默认0。<br>可取值：0，90，180，270</p>
                     * @return Rotate <p>旋转角度，默认0。<br>可取值：0，90，180，270</p>
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置<p>旋转角度，默认0。<br>可取值：0，90，180，270</p>
                     * @param _rotate <p>旋转角度，默认0。<br>可取值：0，90，180，270</p>
                     * 
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取<p>编码质量：<br>baseline/main/high。默认baseline</p>
                     * @return Profile <p>编码质量：<br>baseline/main/high。默认baseline</p>
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置<p>编码质量：<br>baseline/main/high。默认baseline</p>
                     * @param _profile <p>编码质量：<br>baseline/main/high。默认baseline</p>
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
                     * @return BitrateToOrig <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
                     * 
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置<p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
                     * @param _bitrateToOrig <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * @return HeightToOrig <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
                     * 
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置<p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
                     * @param _heightToOrig <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * @return FpsToOrig <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
                     * 
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置<p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
                     * @param _fpsToOrig <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
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
                     * 获取<p>是否保留视频。0：否，1：是。</p>
                     * @return NeedVideo <p>是否保留视频。0：否，1：是。</p>
                     * 
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置<p>是否保留视频。0：否，1：是。</p>
                     * @param _needVideo <p>是否保留视频。0：否，1：是。</p>
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
                     * 获取<p>是否保留音频。0：否，1：是。</p>
                     * @return NeedAudio <p>是否保留音频。0：否，1：是。</p>
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置<p>是否保留音频。0：否，1：是。</p>
                     * @param _needAudio <p>是否保留音频。0：否，1：是。</p>
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
                     * 获取<p>模板 ID。</p>
                     * @return TemplateId <p>模板 ID。</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>模板 ID。</p>
                     * @param _templateId <p>模板 ID。</p>
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
                     * 获取<p>模板名称。</p>
                     * @return TemplateName <p>模板名称。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。</p>
                     * @param _templateName <p>模板名称。</p>
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
                     * 获取<p>模板描述。</p>
                     * @return Description <p>模板描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模板描述。</p>
                     * @param _description <p>模板描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>是否是极速高清模板，0：否，1：是。默认0。</p>
                     * @return AiTransCode <p>是否是极速高清模板，0：否，1：是。默认0。</p>
                     * 
                     */
                    int64_t GetAiTransCode() const;

                    /**
                     * 设置<p>是否是极速高清模板，0：否，1：是。默认0。</p>
                     * @param _aiTransCode <p>是否是极速高清模板，0：否，1：是。默认0。</p>
                     * 
                     */
                    void SetAiTransCode(const int64_t& _aiTransCode);

                    /**
                     * 判断参数 AiTransCode 是否已赋值
                     * @return AiTransCode 是否已赋值
                     * 
                     */
                    bool AiTransCodeHasBeenSet() const;

                    /**
                     * 获取<p>极速高清视频码率压缩比。<br>极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)</p><p>取值范围：0.0到0.5</p>
                     * @return AdaptBitratePercent <p>极速高清视频码率压缩比。<br>极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)</p><p>取值范围：0.0到0.5</p>
                     * 
                     */
                    double GetAdaptBitratePercent() const;

                    /**
                     * 设置<p>极速高清视频码率压缩比。<br>极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)</p><p>取值范围：0.0到0.5</p>
                     * @param _adaptBitratePercent <p>极速高清视频码率压缩比。<br>极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)</p><p>取值范围：0.0到0.5</p>
                     * 
                     */
                    void SetAdaptBitratePercent(const double& _adaptBitratePercent);

                    /**
                     * 判断参数 AdaptBitratePercent 是否已赋值
                     * @return AdaptBitratePercent 是否已赋值
                     * 
                     */
                    bool AdaptBitratePercentHasBeenSet() const;

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
                     * 获取<p>DRM 加密类型，可选值：fairplay、normalaes、widevine。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DRMType <p>DRM 加密类型，可选值：fairplay、normalaes、widevine。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDRMType() const;

                    /**
                     * 设置<p>DRM 加密类型，可选值：fairplay、normalaes、widevine。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dRMType <p>DRM 加密类型，可选值：fairplay、normalaes、widevine。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDRMType(const std::string& _dRMType);

                    /**
                     * 判断参数 DRMType 是否已赋值
                     * @return DRMType 是否已赋值
                     * 
                     */
                    bool DRMTypeHasBeenSet() const;

                    /**
                     * 获取<p>DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DRMTracks <p>DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDRMTracks() const;

                    /**
                     * 设置<p>DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dRMTracks <p>DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDRMTracks(const std::string& _dRMTracks);

                    /**
                     * 判断参数 DRMTracks 是否已赋值
                     * @return DRMTracks 是否已赋值
                     * 
                     */
                    bool DRMTracksHasBeenSet() const;

                    /**
                     * 获取<p>是否创建自适应码率，默认值 0。<br>0：否。<br>1：是。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdaptiveBitRate <p>是否创建自适应码率，默认值 0。<br>0：否。<br>1：是。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAdaptiveBitRate() const;

                    /**
                     * 设置<p>是否创建自适应码率，默认值 0。<br>0：否。<br>1：是。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAdaptiveBitRate <p>是否创建自适应码率，默认值 0。<br>0：否。<br>1：是。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAdaptiveBitRate(const int64_t& _isAdaptiveBitRate);

                    /**
                     * 判断参数 IsAdaptiveBitRate 是否已赋值
                     * @return IsAdaptiveBitRate 是否已赋值
                     * 
                     */
                    bool IsAdaptiveBitRateHasBeenSet() const;

                    /**
                     * 获取<p>自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveChildren <p>自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChildTemplateInfo> GetAdaptiveChildren() const;

                    /**
                     * 设置<p>自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveChildren <p>自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdaptiveChildren(const std::vector<ChildTemplateInfo>& _adaptiveChildren);

                    /**
                     * 判断参数 AdaptiveChildren 是否已赋值
                     * @return AdaptiveChildren 是否已赋值
                     * 
                     */
                    bool AdaptiveChildrenHasBeenSet() const;

                    /**
                     * 获取<p>是否按需转码，0 否，1 是。</p>
                     * @return AudienceDrivenTranscode <p>是否按需转码，0 否，1 是。</p>
                     * 
                     */
                    int64_t GetAudienceDrivenTranscode() const;

                    /**
                     * 设置<p>是否按需转码，0 否，1 是。</p>
                     * @param _audienceDrivenTranscode <p>是否按需转码，0 否，1 是。</p>
                     * 
                     */
                    void SetAudienceDrivenTranscode(const int64_t& _audienceDrivenTranscode);

                    /**
                     * 判断参数 AudienceDrivenTranscode 是否已赋值
                     * @return AudienceDrivenTranscode 是否已赋值
                     * 
                     */
                    bool AudienceDrivenTranscodeHasBeenSet() const;

                    /**
                     * 获取<p>按需转码人数阈值。</p>
                     * @return AudienceThreshold <p>按需转码人数阈值。</p>
                     * 
                     */
                    int64_t GetAudienceThreshold() const;

                    /**
                     * 设置<p>按需转码人数阈值。</p>
                     * @param _audienceThreshold <p>按需转码人数阈值。</p>
                     * 
                     */
                    void SetAudienceThreshold(const int64_t& _audienceThreshold);

                    /**
                     * 判断参数 AudienceThreshold 是否已赋值
                     * @return AudienceThreshold 是否已赋值
                     * 
                     */
                    bool AudienceThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>视频编码：h264/h265/origin，默认h264。</p><p>origin: 保持原始编码格式</p>
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * <p>视频码率。范围：0kbps - 8000kbps。<br>0为保持原始码率。<br>注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。</p>
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * <p>音频编码：aac，默认aac。<br>注意：当前该参数未生效，待后续支持！</p>
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * <p>音频码率。取值范围：0kbps - 500kbps。<br>默认0。</p>
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * <p>宽，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>高，默认0。<br>范围[0-3000]<br>数值必须是2的倍数，0是原始宽度</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>帧率，默认0。<br>范围0-60fps</p>
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>关键帧间隔，单位：秒。<br>默认原始的间隔<br>范围2-6</p>
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * <p>旋转角度，默认0。<br>可取值：0，90，180，270</p>
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * <p>编码质量：<br>baseline/main/high。默认baseline</p>
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>当设置的码率&gt;原始码率时，是否以原始码率为准。<br>0：否， 1：是<br>默认 0。</p>
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * <p>当设置的高度&gt;原始高度时，是否以原始高度为准。<br>0：否， 1：是<br>默认 0。</p>
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * <p>当设置的帧率&gt;原始帧率时，是否以原始帧率为准。<br>0：否， 1：是<br>默认 0。</p>
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

                    /**
                     * <p>是否保留视频。0：否，1：是。</p>
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * <p>是否保留音频。0：否，1：是。</p>
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * <p>模板 ID。</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名称。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>模板描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否是极速高清模板，0：否，1：是。默认0。</p>
                     */
                    int64_t m_aiTransCode;
                    bool m_aiTransCodeHasBeenSet;

                    /**
                     * <p>极速高清视频码率压缩比。<br>极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)</p><p>取值范围：0.0到0.5</p>
                     */
                    double m_adaptBitratePercent;
                    bool m_adaptBitratePercentHasBeenSet;

                    /**
                     * <p>是否以短边作为高度，0：否，1：是。默认0。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shortEdgeAsHeight;
                    bool m_shortEdgeAsHeightHasBeenSet;

                    /**
                     * <p>DRM 加密类型，可选值：fairplay、normalaes、widevine。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dRMType;
                    bool m_dRMTypeHasBeenSet;

                    /**
                     * <p>DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dRMTracks;
                    bool m_dRMTracksHasBeenSet;

                    /**
                     * <p>是否创建自适应码率，默认值 0。<br>0：否。<br>1：是。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdaptiveBitRate;
                    bool m_isAdaptiveBitRateHasBeenSet;

                    /**
                     * <p>自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChildTemplateInfo> m_adaptiveChildren;
                    bool m_adaptiveChildrenHasBeenSet;

                    /**
                     * <p>是否按需转码，0 否，1 是。</p>
                     */
                    int64_t m_audienceDrivenTranscode;
                    bool m_audienceDrivenTranscodeHasBeenSet;

                    /**
                     * <p>按需转码人数阈值。</p>
                     */
                    int64_t m_audienceThreshold;
                    bool m_audienceThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
