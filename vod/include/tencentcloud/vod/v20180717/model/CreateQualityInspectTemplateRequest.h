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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/JitterConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlurConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AbnormalLightingConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/CrashScreenConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlackWhiteEdgeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/NoiseConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/MosaicConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QRCodeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/VoiceConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QualityEvaluationConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateQualityInspectTemplate请求参数结构体
                */
                class CreateQualityInspectTemplateRequest : public AbstractModel
                {
                public:
                    CreateQualityInspectTemplateRequest();
                    ~CreateQualityInspectTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取音画质检测模板名称。
                     * @return Name 音画质检测模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置音画质检测模板名称。
                     * @param _name 音画质检测模板名称。
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
                     * 获取音画质检测模板描述。
                     * @return Comment 音画质检测模板描述。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置音画质检测模板描述。
                     * @param _comment 音画质检测模板描述。
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
                     * 获取截帧间隔，单位为秒，最小值为 1。当不填时，默认截帧间隔为 1 秒。
                     * @return ScreenshotInterval 截帧间隔，单位为秒，最小值为 1。当不填时，默认截帧间隔为 1 秒。
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截帧间隔，单位为秒，最小值为 1。当不填时，默认截帧间隔为 1 秒。
                     * @param _screenshotInterval 截帧间隔，单位为秒，最小值为 1。当不填时，默认截帧间隔为 1 秒。
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取视频画面抖动重影检测的控制参数。
                     * @return JitterConfigure 视频画面抖动重影检测的控制参数。
                     * 
                     */
                    JitterConfigureInfo GetJitterConfigure() const;

                    /**
                     * 设置视频画面抖动重影检测的控制参数。
                     * @param _jitterConfigure 视频画面抖动重影检测的控制参数。
                     * 
                     */
                    void SetJitterConfigure(const JitterConfigureInfo& _jitterConfigure);

                    /**
                     * 判断参数 JitterConfigure 是否已赋值
                     * @return JitterConfigure 是否已赋值
                     * 
                     */
                    bool JitterConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面模糊检测的控制参数。
                     * @return BlurConfigure 视频画面模糊检测的控制参数。
                     * 
                     */
                    BlurConfigureInfo GetBlurConfigure() const;

                    /**
                     * 设置视频画面模糊检测的控制参数。
                     * @param _blurConfigure 视频画面模糊检测的控制参数。
                     * 
                     */
                    void SetBlurConfigure(const BlurConfigureInfo& _blurConfigure);

                    /**
                     * 判断参数 BlurConfigure 是否已赋值
                     * @return BlurConfigure 是否已赋值
                     * 
                     */
                    bool BlurConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面低光、过曝检测的控制参数。
                     * @return AbnormalLightingConfigure 视频画面低光、过曝检测的控制参数。
                     * 
                     */
                    AbnormalLightingConfigureInfo GetAbnormalLightingConfigure() const;

                    /**
                     * 设置视频画面低光、过曝检测的控制参数。
                     * @param _abnormalLightingConfigure 视频画面低光、过曝检测的控制参数。
                     * 
                     */
                    void SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfo& _abnormalLightingConfigure);

                    /**
                     * 判断参数 AbnormalLightingConfigure 是否已赋值
                     * @return AbnormalLightingConfigure 是否已赋值
                     * 
                     */
                    bool AbnormalLightingConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面花屏检测的控制参数。
                     * @return CrashScreenConfigure 视频画面花屏检测的控制参数。
                     * 
                     */
                    CrashScreenConfigureInfo GetCrashScreenConfigure() const;

                    /**
                     * 设置视频画面花屏检测的控制参数。
                     * @param _crashScreenConfigure 视频画面花屏检测的控制参数。
                     * 
                     */
                    void SetCrashScreenConfigure(const CrashScreenConfigureInfo& _crashScreenConfigure);

                    /**
                     * 判断参数 CrashScreenConfigure 是否已赋值
                     * @return CrashScreenConfigure 是否已赋值
                     * 
                     */
                    bool CrashScreenConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面黑边、白边、黑屏、白屏检测的控制参数。
                     * @return BlackWhiteEdgeConfigure 视频画面黑边、白边、黑屏、白屏检测的控制参数。
                     * 
                     */
                    BlackWhiteEdgeConfigureInfo GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置视频画面黑边、白边、黑屏、白屏检测的控制参数。
                     * @param _blackWhiteEdgeConfigure 视频画面黑边、白边、黑屏、白屏检测的控制参数。
                     * 
                     */
                    void SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfo& _blackWhiteEdgeConfigure);

                    /**
                     * 判断参数 BlackWhiteEdgeConfigure 是否已赋值
                     * @return BlackWhiteEdgeConfigure 是否已赋值
                     * 
                     */
                    bool BlackWhiteEdgeConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面噪点检测的控制参数。
                     * @return NoiseConfigure 视频画面噪点检测的控制参数。
                     * 
                     */
                    NoiseConfigureInfo GetNoiseConfigure() const;

                    /**
                     * 设置视频画面噪点检测的控制参数。
                     * @param _noiseConfigure 视频画面噪点检测的控制参数。
                     * 
                     */
                    void SetNoiseConfigure(const NoiseConfigureInfo& _noiseConfigure);

                    /**
                     * 判断参数 NoiseConfigure 是否已赋值
                     * @return NoiseConfigure 是否已赋值
                     * 
                     */
                    bool NoiseConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面马赛克检测的控制参数。
                     * @return MosaicConfigure 视频画面马赛克检测的控制参数。
                     * 
                     */
                    MosaicConfigureInfo GetMosaicConfigure() const;

                    /**
                     * 设置视频画面马赛克检测的控制参数。
                     * @param _mosaicConfigure 视频画面马赛克检测的控制参数。
                     * 
                     */
                    void SetMosaicConfigure(const MosaicConfigureInfo& _mosaicConfigure);

                    /**
                     * 判断参数 MosaicConfigure 是否已赋值
                     * @return MosaicConfigure 是否已赋值
                     * 
                     */
                    bool MosaicConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面二维码检测的控制参数。
                     * @return QRCodeConfigure 视频画面二维码检测的控制参数。
                     * 
                     */
                    QRCodeConfigureInfo GetQRCodeConfigure() const;

                    /**
                     * 设置视频画面二维码检测的控制参数。
                     * @param _qRCodeConfigure 视频画面二维码检测的控制参数。
                     * 
                     */
                    void SetQRCodeConfigure(const QRCodeConfigureInfo& _qRCodeConfigure);

                    /**
                     * 判断参数 QRCodeConfigure 是否已赋值
                     * @return QRCodeConfigure 是否已赋值
                     * 
                     */
                    bool QRCodeConfigureHasBeenSet() const;

                    /**
                     * 获取音频（静音、低音、爆音）检测的控制参数。
                     * @return VoiceConfigure 音频（静音、低音、爆音）检测的控制参数。
                     * 
                     */
                    VoiceConfigureInfo GetVoiceConfigure() const;

                    /**
                     * 设置音频（静音、低音、爆音）检测的控制参数。
                     * @param _voiceConfigure 音频（静音、低音、爆音）检测的控制参数。
                     * 
                     */
                    void SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure);

                    /**
                     * 判断参数 VoiceConfigure 是否已赋值
                     * @return VoiceConfigure 是否已赋值
                     * 
                     */
                    bool VoiceConfigureHasBeenSet() const;

                    /**
                     * 获取视频画面质量评价的控制参数。
                     * @return QualityEvaluationConfigure 视频画面质量评价的控制参数。
                     * 
                     */
                    QualityEvaluationConfigureInfo GetQualityEvaluationConfigure() const;

                    /**
                     * 设置视频画面质量评价的控制参数。
                     * @param _qualityEvaluationConfigure 视频画面质量评价的控制参数。
                     * 
                     */
                    void SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfo& _qualityEvaluationConfigure);

                    /**
                     * 判断参数 QualityEvaluationConfigure 是否已赋值
                     * @return QualityEvaluationConfigure 是否已赋值
                     * 
                     */
                    bool QualityEvaluationConfigureHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 音画质检测模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 音画质检测模板描述。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 截帧间隔，单位为秒，最小值为 1。当不填时，默认截帧间隔为 1 秒。
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 视频画面抖动重影检测的控制参数。
                     */
                    JitterConfigureInfo m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * 视频画面模糊检测的控制参数。
                     */
                    BlurConfigureInfo m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * 视频画面低光、过曝检测的控制参数。
                     */
                    AbnormalLightingConfigureInfo m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * 视频画面花屏检测的控制参数。
                     */
                    CrashScreenConfigureInfo m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * 视频画面黑边、白边、黑屏、白屏检测的控制参数。
                     */
                    BlackWhiteEdgeConfigureInfo m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * 视频画面噪点检测的控制参数。
                     */
                    NoiseConfigureInfo m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * 视频画面马赛克检测的控制参数。
                     */
                    MosaicConfigureInfo m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * 视频画面二维码检测的控制参数。
                     */
                    QRCodeConfigureInfo m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * 音频（静音、低音、爆音）检测的控制参数。
                     */
                    VoiceConfigureInfo m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * 视频画面质量评价的控制参数。
                     */
                    QualityEvaluationConfigureInfo m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_
