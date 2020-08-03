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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLiveTranscodeTemplate请求参数结构体
                */
                class CreateLiveTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveTranscodeTemplateRequest();
                    ~CreateLiveTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称，例：900 900p 仅支持字母和数字的组合。
                     * @return TemplateName 模板名称，例：900 900p 仅支持字母和数字的组合。
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称，例：900 900p 仅支持字母和数字的组合。
                     * @param TemplateName 模板名称，例：900 900p 仅支持字母和数字的组合。
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取视频码率。范围：100-8000。
注意：码率必须是100的倍数。
                     * @return VideoBitrate 视频码率。范围：100-8000。
注意：码率必须是100的倍数。
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置视频码率。范围：100-8000。
注意：码率必须是100的倍数。
                     * @param VideoBitrate 视频码率。范围：100-8000。
注意：码率必须是100的倍数。
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取视频编码：h264/h265，默认h264。
                     * @return Vcodec 视频编码：h264/h265，默认h264。
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置视频编码：h264/h265，默认h264。
                     * @param Vcodec 视频编码：h264/h265，默认h264。
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取音频编码：aac，默认原始音频格式。
注意：当前该参数未生效，待后续支持！
                     * @return Acodec 音频编码：aac，默认原始音频格式。
注意：当前该参数未生效，待后续支持！
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置音频编码：aac，默认原始音频格式。
注意：当前该参数未生效，待后续支持！
                     * @param Acodec 音频编码：aac，默认原始音频格式。
注意：当前该参数未生效，待后续支持！
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取音频码率：默认0。0-500。
                     * @return AudioBitrate 音频码率：默认0。0-500。
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置音频码率：默认0。0-500。
                     * @param AudioBitrate 音频码率：默认0。0-500。
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取模板描述。
                     * @return Description 模板描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述。
                     * @param Description 模板描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取宽，默认0。
范围[0-3000]
                     * @return Width 宽，默认0。
范围[0-3000]
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽，默认0。
范围[0-3000]
                     * @param Width 宽，默认0。
范围[0-3000]
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取是否保留视频，0：否，1：是。默认1。
                     * @return NeedVideo 是否保留视频，0：否，1：是。默认1。
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置是否保留视频，0：否，1：是。默认1。
                     * @param NeedVideo 是否保留视频，0：否，1：是。默认1。
                     */
                    void SetNeedVideo(const int64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取是否保留音频，0：否，1：是。默认1。
                     * @return NeedAudio 是否保留音频，0：否，1：是。默认1。
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置是否保留音频，0：否，1：是。默认1。
                     * @param NeedAudio 是否保留音频，0：否，1：是。默认1。
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取高，默认0。
范围[0-3000]
                     * @return Height 高，默认0。
范围[0-3000]
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高，默认0。
范围[0-3000]
                     * @param Height 高，默认0。
范围[0-3000]
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取帧率，默认0。
                     * @return Fps 帧率，默认0。
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置帧率，默认0。
                     * @param Fps 帧率，默认0。
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取关键帧间隔，单位：秒。默认原始的间隔
                     * @return Gop 关键帧间隔，单位：秒。默认原始的间隔
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置关键帧间隔，单位：秒。默认原始的间隔
                     * @param Gop 关键帧间隔，单位：秒。默认原始的间隔
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取是否旋转，0：否，1：是。默认0。
                     * @return Rotate 是否旋转，0：否，1：是。默认0。
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置是否旋转，0：否，1：是。默认0。
                     * @param Rotate 是否旋转，0：否，1：是。默认0。
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取编码质量：
baseline/main/high。默认baseline
                     * @return Profile 编码质量：
baseline/main/high。默认baseline
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置编码质量：
baseline/main/high。默认baseline
                     * @param Profile 编码质量：
baseline/main/high。默认baseline
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取是否不超过原始码率，0：否，1：是。默认0。
                     * @return BitrateToOrig 是否不超过原始码率，0：否，1：是。默认0。
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置是否不超过原始码率，0：否，1：是。默认0。
                     * @param BitrateToOrig 是否不超过原始码率，0：否，1：是。默认0。
                     */
                    void SetBitrateToOrig(const int64_t& _bitrateToOrig);

                    /**
                     * 判断参数 BitrateToOrig 是否已赋值
                     * @return BitrateToOrig 是否已赋值
                     */
                    bool BitrateToOrigHasBeenSet() const;

                    /**
                     * 获取是否不超过原始高，0：否，1：是。默认0。
                     * @return HeightToOrig 是否不超过原始高，0：否，1：是。默认0。
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置是否不超过原始高，0：否，1：是。默认0。
                     * @param HeightToOrig 是否不超过原始高，0：否，1：是。默认0。
                     */
                    void SetHeightToOrig(const int64_t& _heightToOrig);

                    /**
                     * 判断参数 HeightToOrig 是否已赋值
                     * @return HeightToOrig 是否已赋值
                     */
                    bool HeightToOrigHasBeenSet() const;

                    /**
                     * 获取是否不超过原始帧率，0：否，1：是。默认0。
                     * @return FpsToOrig 是否不超过原始帧率，0：否，1：是。默认0。
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置是否不超过原始帧率，0：否，1：是。默认0。
                     * @param FpsToOrig 是否不超过原始帧率，0：否，1：是。默认0。
                     */
                    void SetFpsToOrig(const int64_t& _fpsToOrig);

                    /**
                     * 判断参数 FpsToOrig 是否已赋值
                     * @return FpsToOrig 是否已赋值
                     */
                    bool FpsToOrigHasBeenSet() const;

                    /**
                     * 获取是否是极速高清模板，0：否，1：是。默认0。
                     * @return AiTransCode 是否是极速高清模板，0：否，1：是。默认0。
                     */
                    int64_t GetAiTransCode() const;

                    /**
                     * 设置是否是极速高清模板，0：否，1：是。默认0。
                     * @param AiTransCode 是否是极速高清模板，0：否，1：是。默认0。
                     */
                    void SetAiTransCode(const int64_t& _aiTransCode);

                    /**
                     * 判断参数 AiTransCode 是否已赋值
                     * @return AiTransCode 是否已赋值
                     */
                    bool AiTransCodeHasBeenSet() const;

                    /**
                     * 获取极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     * @return AdaptBitratePercent 极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     */
                    double GetAdaptBitratePercent() const;

                    /**
                     * 设置极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     * @param AdaptBitratePercent 极速高清视频码率压缩比。
极速高清目标码率=VideoBitrate * (1-AdaptBitratePercent)

取值范围：0.0到0.5
                     */
                    void SetAdaptBitratePercent(const double& _adaptBitratePercent);

                    /**
                     * 判断参数 AdaptBitratePercent 是否已赋值
                     * @return AdaptBitratePercent 是否已赋值
                     */
                    bool AdaptBitratePercentHasBeenSet() const;

                private:

                    /**
                     * 模板名称，例：900 900p 仅支持字母和数字的组合。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 视频码率。范围：100-8000。
注意：码率必须是100的倍数。
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 视频编码：h264/h265，默认h264。
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * 音频编码：aac，默认原始音频格式。
注意：当前该参数未生效，待后续支持！
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * 音频码率：默认0。0-500。
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * 模板描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 宽，默认0。
范围[0-3000]
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 是否保留视频，0：否，1：是。默认1。
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * 是否保留音频，0：否，1：是。默认1。
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * 高，默认0。
范围[0-3000]
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 帧率，默认0。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 关键帧间隔，单位：秒。默认原始的间隔
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 是否旋转，0：否，1：是。默认0。
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
                     * 是否不超过原始码率，0：否，1：是。默认0。
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * 是否不超过原始高，0：否，1：是。默认0。
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * 是否不超过原始帧率，0：否，1：是。默认0。
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
