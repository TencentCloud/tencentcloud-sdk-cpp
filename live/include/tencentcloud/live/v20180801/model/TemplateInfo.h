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
                     * 获取视频编码：h264/h265/origin，默认h264。

origin: 保持原始编码格式
                     * @return Vcodec 视频编码：h264/h265/origin，默认h264。

origin: 保持原始编码格式
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置视频编码：h264/h265/origin，默认h264。

origin: 保持原始编码格式
                     * @param _vcodec 视频编码：h264/h265/origin，默认h264。

origin: 保持原始编码格式
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
                     * @return VideoBitrate 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
                     * @param _videoBitrate 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
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
                     * 获取音频编码：aac，默认aac。
注意：当前该参数未生效，待后续支持！
                     * @return Acodec 音频编码：aac，默认aac。
注意：当前该参数未生效，待后续支持！
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置音频编码：aac，默认aac。
注意：当前该参数未生效，待后续支持！
                     * @param _acodec 音频编码：aac，默认aac。
注意：当前该参数未生效，待后续支持！
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
                     * 获取音频码率。取值范围：0kbps - 500kbps。
默认0。
                     * @return AudioBitrate 音频码率。取值范围：0kbps - 500kbps。
默认0。
                     * 
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置音频码率。取值范围：0kbps - 500kbps。
默认0。
                     * @param _audioBitrate 音频码率。取值范围：0kbps - 500kbps。
默认0。
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
                     * 获取宽，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     * @return Width 宽，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     * @param _width 宽，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
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
数值必须是2的倍数，0是原始宽度
                     * @return Height 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     * @param _height 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
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
范围0-60fps
                     * @return Fps 帧率，默认0。
范围0-60fps
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置帧率，默认0。
范围0-60fps
                     * @param _fps 帧率，默认0。
范围0-60fps
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
默认原始的间隔
范围2-6
                     * @return Gop 关键帧间隔，单位：秒。
默认原始的间隔
范围2-6
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置关键帧间隔，单位：秒。
默认原始的间隔
范围2-6
                     * @param _gop 关键帧间隔，单位：秒。
默认原始的间隔
范围2-6
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
                     * 获取旋转角度，默认0。
可取值：0，90，180，270
                     * @return Rotate 旋转角度，默认0。
可取值：0，90，180，270
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置旋转角度，默认0。
可取值：0，90，180，270
                     * @param _rotate 旋转角度，默认0。
可取值：0，90，180，270
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
                     * 获取编码质量：
baseline/main/high。默认baseline
                     * @return Profile 编码质量：
baseline/main/high。默认baseline
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置编码质量：
baseline/main/high。默认baseline
                     * @param _profile 编码质量：
baseline/main/high。默认baseline
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
                     * 获取当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
                     * @return BitrateToOrig 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
                     * 
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
                     * @param _bitrateToOrig 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
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
                     * @return HeightToOrig 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
                     * 
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
                     * @param _heightToOrig 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
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
                     * @return FpsToOrig 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
                     * 
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
                     * @param _fpsToOrig 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
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
                     * 获取是否保留视频。0：否，1：是。
                     * @return NeedVideo 是否保留视频。0：否，1：是。
                     * 
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置是否保留视频。0：否，1：是。
                     * @param _needVideo 是否保留视频。0：否，1：是。
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
                     * 获取是否保留音频。0：否，1：是。
                     * @return NeedAudio 是否保留音频。0：否，1：是。
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置是否保留音频。0：否，1：是。
                     * @param _needAudio 是否保留音频。0：否，1：是。
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
                     * 获取模板 ID。
                     * @return TemplateId 模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板 ID。
                     * @param _templateId 模板 ID。
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
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
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
                     * 获取模板描述。
                     * @return Description 模板描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述。
                     * @param _description 模板描述。
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
                     * 获取是否是极速高清模板，0：否，1：是。默认0。
                     * @return AiTransCode 是否是极速高清模板，0：否，1：是。默认0。
                     * 
                     */
                    int64_t GetAiTransCode() const;

                    /**
                     * 设置是否是极速高清模板，0：否，1：是。默认0。
                     * @param _aiTransCode 是否是极速高清模板，0：否，1：是。默认0。
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
                     * 获取极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     * @return AdaptBitratePercent 极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     * 
                     */
                    double GetAdaptBitratePercent() const;

                    /**
                     * 设置极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     * @param _adaptBitratePercent 极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
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
                     * 获取DRM 加密类型，可选值：fairplay、normalaes、widevine。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DRMType DRM 加密类型，可选值：fairplay、normalaes、widevine。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDRMType() const;

                    /**
                     * 设置DRM 加密类型，可选值：fairplay、normalaes、widevine。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dRMType DRM 加密类型，可选值：fairplay、normalaes、widevine。
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
                     * 获取DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DRMTracks DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDRMTracks() const;

                    /**
                     * 设置DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dRMTracks DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。
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
                     * 获取是否创建自适应码率，默认值 0。
0：否。
1：是。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdaptiveBitRate 是否创建自适应码率，默认值 0。
0：否。
1：是。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAdaptiveBitRate() const;

                    /**
                     * 设置是否创建自适应码率，默认值 0。
0：否。
1：是。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAdaptiveBitRate 是否创建自适应码率，默认值 0。
0：否。
1：是。
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
                     * 获取自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveChildren 自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChildTemplateInfo> GetAdaptiveChildren() const;

                    /**
                     * 设置自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveChildren 自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。
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

                private:

                    /**
                     * 视频编码：h264/h265/origin，默认h264。

origin: 保持原始编码格式
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * 视频码率。范围：0kbps - 8000kbps。
0为保持原始码率。
注: 转码模板有码率唯一要求，最终保存的码率可能与输入码率有所差别。
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 音频编码：aac，默认aac。
注意：当前该参数未生效，待后续支持！
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * 音频码率。取值范围：0kbps - 500kbps。
默认0。
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * 宽，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高，默认0。
范围[0-3000]
数值必须是2的倍数，0是原始宽度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 帧率，默认0。
范围0-60fps
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 关键帧间隔，单位：秒。
默认原始的间隔
范围2-6
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 旋转角度，默认0。
可取值：0，90，180，270
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * 编码质量：
baseline/main/high。默认baseline
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 当设置的码率>原始码率时，是否以原始码率为准。
0：否， 1：是
默认 0。
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * 当设置的高度>原始高度时，是否以原始高度为准。
0：否， 1：是
默认 0。
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * 当设置的帧率>原始帧率时，是否以原始帧率为准。
0：否， 1：是
默认 0。
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

                    /**
                     * 是否保留视频。0：否，1：是。
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * 是否保留音频。0：否，1：是。
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * 模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否是极速高清模板，0：否，1：是。默认0。
                     */
                    int64_t m_aiTransCode;
                    bool m_aiTransCodeHasBeenSet;

                    /**
                     * 极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     */
                    double m_adaptBitratePercent;
                    bool m_adaptBitratePercentHasBeenSet;

                    /**
                     * 是否以短边作为高度，0：否，1：是。默认0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shortEdgeAsHeight;
                    bool m_shortEdgeAsHeightHasBeenSet;

                    /**
                     * DRM 加密类型，可选值：fairplay、normalaes、widevine。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dRMType;
                    bool m_dRMTypeHasBeenSet;

                    /**
                     * DRM 加密项，多个用|分割，可选值：AUDIO、SD、HD、UHD1、UHD2，后四个为一组，同组中的内容只能选一个。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dRMTracks;
                    bool m_dRMTracksHasBeenSet;

                    /**
                     * 是否创建自适应码率，默认值 0。
0：否。
1：是。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdaptiveBitRate;
                    bool m_isAdaptiveBitRateHasBeenSet;

                    /**
                     * 自适应码率，子转码模板信息，当 IsAdaptiveBitRate 为 1 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChildTemplateInfo> m_adaptiveChildren;
                    bool m_adaptiveChildrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
