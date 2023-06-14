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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_VIDEOENHANCE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_VIDEOENHANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/ArtifactReduction.h>
#include <tencentcloud/ie/v20200304/model/Denoising.h>
#include <tencentcloud/ie/v20200304/model/ColorEnhance.h>
#include <tencentcloud/ie/v20200304/model/Sharp.h>
#include <tencentcloud/ie/v20200304/model/FaceProtect.h>
#include <tencentcloud/ie/v20200304/model/ScratchRepair.h>
#include <tencentcloud/ie/v20200304/model/LowLightEnhance.h>
#include <tencentcloud/ie/v20200304/model/VideoSuperResolution.h>
#include <tencentcloud/ie/v20200304/model/VideoRepair.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 画质增强参数信息
                */
                class VideoEnhance : public AbstractModel
                {
                public:
                    VideoEnhance();
                    ~VideoEnhance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取去编码毛刺、伪影参数。
                     * @return ArtifactReduction 去编码毛刺、伪影参数。
                     * 
                     */
                    ArtifactReduction GetArtifactReduction() const;

                    /**
                     * 设置去编码毛刺、伪影参数。
                     * @param _artifactReduction 去编码毛刺、伪影参数。
                     * 
                     */
                    void SetArtifactReduction(const ArtifactReduction& _artifactReduction);

                    /**
                     * 判断参数 ArtifactReduction 是否已赋值
                     * @return ArtifactReduction 是否已赋值
                     * 
                     */
                    bool ArtifactReductionHasBeenSet() const;

                    /**
                     * 获取去噪声参数。
                     * @return Denoising 去噪声参数。
                     * 
                     */
                    Denoising GetDenoising() const;

                    /**
                     * 设置去噪声参数。
                     * @param _denoising 去噪声参数。
                     * 
                     */
                    void SetDenoising(const Denoising& _denoising);

                    /**
                     * 判断参数 Denoising 是否已赋值
                     * @return Denoising 是否已赋值
                     * 
                     */
                    bool DenoisingHasBeenSet() const;

                    /**
                     * 获取颜色增强参数。
                     * @return ColorEnhance 颜色增强参数。
                     * 
                     */
                    ColorEnhance GetColorEnhance() const;

                    /**
                     * 设置颜色增强参数。
                     * @param _colorEnhance 颜色增强参数。
                     * 
                     */
                    void SetColorEnhance(const ColorEnhance& _colorEnhance);

                    /**
                     * 判断参数 ColorEnhance 是否已赋值
                     * @return ColorEnhance 是否已赋值
                     * 
                     */
                    bool ColorEnhanceHasBeenSet() const;

                    /**
                     * 获取细节增强参数。
                     * @return Sharp 细节增强参数。
                     * 
                     */
                    Sharp GetSharp() const;

                    /**
                     * 设置细节增强参数。
                     * @param _sharp 细节增强参数。
                     * 
                     */
                    void SetSharp(const Sharp& _sharp);

                    /**
                     * 判断参数 Sharp 是否已赋值
                     * @return Sharp 是否已赋值
                     * 
                     */
                    bool SharpHasBeenSet() const;

                    /**
                     * 获取超分参数，可选项：2，目前仅支持2倍超分。
注意：此参数已经弃用，超分可以使用VideoSuperResolution参数
                     * @return WdSuperResolution 超分参数，可选项：2，目前仅支持2倍超分。
注意：此参数已经弃用，超分可以使用VideoSuperResolution参数
                     * 
                     */
                    int64_t GetWdSuperResolution() const;

                    /**
                     * 设置超分参数，可选项：2，目前仅支持2倍超分。
注意：此参数已经弃用，超分可以使用VideoSuperResolution参数
                     * @param _wdSuperResolution 超分参数，可选项：2，目前仅支持2倍超分。
注意：此参数已经弃用，超分可以使用VideoSuperResolution参数
                     * 
                     */
                    void SetWdSuperResolution(const int64_t& _wdSuperResolution);

                    /**
                     * 判断参数 WdSuperResolution 是否已赋值
                     * @return WdSuperResolution 是否已赋值
                     * 
                     */
                    bool WdSuperResolutionHasBeenSet() const;

                    /**
                     * 获取人脸保护信息。
                     * @return FaceProtect 人脸保护信息。
                     * 
                     */
                    FaceProtect GetFaceProtect() const;

                    /**
                     * 设置人脸保护信息。
                     * @param _faceProtect 人脸保护信息。
                     * 
                     */
                    void SetFaceProtect(const FaceProtect& _faceProtect);

                    /**
                     * 判断参数 FaceProtect 是否已赋值
                     * @return FaceProtect 是否已赋值
                     * 
                     */
                    bool FaceProtectHasBeenSet() const;

                    /**
                     * 获取插帧，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * @return WdFps 插帧，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    int64_t GetWdFps() const;

                    /**
                     * 设置插帧，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * @param _wdFps 插帧，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    void SetWdFps(const int64_t& _wdFps);

                    /**
                     * 判断参数 WdFps 是否已赋值
                     * @return WdFps 是否已赋值
                     * 
                     */
                    bool WdFpsHasBeenSet() const;

                    /**
                     * 获取去划痕参数
                     * @return ScratchRepair 去划痕参数
                     * 
                     */
                    ScratchRepair GetScratchRepair() const;

                    /**
                     * 设置去划痕参数
                     * @param _scratchRepair 去划痕参数
                     * 
                     */
                    void SetScratchRepair(const ScratchRepair& _scratchRepair);

                    /**
                     * 判断参数 ScratchRepair 是否已赋值
                     * @return ScratchRepair 是否已赋值
                     * 
                     */
                    bool ScratchRepairHasBeenSet() const;

                    /**
                     * 获取低光照增强参数
                     * @return LowLightEnhance 低光照增强参数
                     * 
                     */
                    LowLightEnhance GetLowLightEnhance() const;

                    /**
                     * 设置低光照增强参数
                     * @param _lowLightEnhance 低光照增强参数
                     * 
                     */
                    void SetLowLightEnhance(const LowLightEnhance& _lowLightEnhance);

                    /**
                     * 判断参数 LowLightEnhance 是否已赋值
                     * @return LowLightEnhance 是否已赋值
                     * 
                     */
                    bool LowLightEnhanceHasBeenSet() const;

                    /**
                     * 获取视频超分参数
                     * @return VideoSuperResolution 视频超分参数
                     * 
                     */
                    VideoSuperResolution GetVideoSuperResolution() const;

                    /**
                     * 设置视频超分参数
                     * @param _videoSuperResolution 视频超分参数
                     * 
                     */
                    void SetVideoSuperResolution(const VideoSuperResolution& _videoSuperResolution);

                    /**
                     * 判断参数 VideoSuperResolution 是否已赋值
                     * @return VideoSuperResolution 是否已赋值
                     * 
                     */
                    bool VideoSuperResolutionHasBeenSet() const;

                    /**
                     * 获取视频画质修复参数
                     * @return VideoRepair 视频画质修复参数
                     * 
                     */
                    VideoRepair GetVideoRepair() const;

                    /**
                     * 设置视频画质修复参数
                     * @param _videoRepair 视频画质修复参数
                     * 
                     */
                    void SetVideoRepair(const VideoRepair& _videoRepair);

                    /**
                     * 判断参数 VideoRepair 是否已赋值
                     * @return VideoRepair 是否已赋值
                     * 
                     */
                    bool VideoRepairHasBeenSet() const;

                private:

                    /**
                     * 去编码毛刺、伪影参数。
                     */
                    ArtifactReduction m_artifactReduction;
                    bool m_artifactReductionHasBeenSet;

                    /**
                     * 去噪声参数。
                     */
                    Denoising m_denoising;
                    bool m_denoisingHasBeenSet;

                    /**
                     * 颜色增强参数。
                     */
                    ColorEnhance m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * 细节增强参数。
                     */
                    Sharp m_sharp;
                    bool m_sharpHasBeenSet;

                    /**
                     * 超分参数，可选项：2，目前仅支持2倍超分。
注意：此参数已经弃用，超分可以使用VideoSuperResolution参数
                     */
                    int64_t m_wdSuperResolution;
                    bool m_wdSuperResolutionHasBeenSet;

                    /**
                     * 人脸保护信息。
                     */
                    FaceProtect m_faceProtect;
                    bool m_faceProtectHasBeenSet;

                    /**
                     * 插帧，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     */
                    int64_t m_wdFps;
                    bool m_wdFpsHasBeenSet;

                    /**
                     * 去划痕参数
                     */
                    ScratchRepair m_scratchRepair;
                    bool m_scratchRepairHasBeenSet;

                    /**
                     * 低光照增强参数
                     */
                    LowLightEnhance m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                    /**
                     * 视频超分参数
                     */
                    VideoSuperResolution m_videoSuperResolution;
                    bool m_videoSuperResolutionHasBeenSet;

                    /**
                     * 视频画质修复参数
                     */
                    VideoRepair m_videoRepair;
                    bool m_videoRepairHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_VIDEOENHANCE_H_
