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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体质检任务参数信息
                */
                class QualityControlInfo : public AbstractModel
                {
                public:
                    QualityControlInfo();
                    ~QualityControlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对流进行截图的间隔ms，默认1000ms
                     * @return Interval 对流进行截图的间隔ms，默认1000ms
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置对流进行截图的间隔ms，默认1000ms
                     * @param _interval 对流进行截图的间隔ms，默认1000ms
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取是否保存截图
                     * @return VideoShot 是否保存截图
                     * 
                     */
                    bool GetVideoShot() const;

                    /**
                     * 设置是否保存截图
                     * @param _videoShot 是否保存截图
                     * 
                     */
                    void SetVideoShot(const bool& _videoShot);

                    /**
                     * 判断参数 VideoShot 是否已赋值
                     * @return VideoShot 是否已赋值
                     * 
                     */
                    bool VideoShotHasBeenSet() const;

                    /**
                     * 获取是否检测抖动重影
                     * @return Jitter 是否检测抖动重影
                     * 
                     */
                    bool GetJitter() const;

                    /**
                     * 设置是否检测抖动重影
                     * @param _jitter 是否检测抖动重影
                     * 
                     */
                    void SetJitter(const bool& _jitter);

                    /**
                     * 判断参数 Jitter 是否已赋值
                     * @return Jitter 是否已赋值
                     * 
                     */
                    bool JitterHasBeenSet() const;

                    /**
                     * 获取是否检测模糊
                     * @return Blur 是否检测模糊
                     * 
                     */
                    bool GetBlur() const;

                    /**
                     * 设置是否检测模糊
                     * @param _blur 是否检测模糊
                     * 
                     */
                    void SetBlur(const bool& _blur);

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                    /**
                     * 获取是否检测低光照、过曝
                     * @return AbnormalLighting 是否检测低光照、过曝
                     * 
                     */
                    bool GetAbnormalLighting() const;

                    /**
                     * 设置是否检测低光照、过曝
                     * @param _abnormalLighting 是否检测低光照、过曝
                     * 
                     */
                    void SetAbnormalLighting(const bool& _abnormalLighting);

                    /**
                     * 判断参数 AbnormalLighting 是否已赋值
                     * @return AbnormalLighting 是否已赋值
                     * 
                     */
                    bool AbnormalLightingHasBeenSet() const;

                    /**
                     * 获取是否检测花屏
                     * @return CrashScreen 是否检测花屏
                     * 
                     */
                    bool GetCrashScreen() const;

                    /**
                     * 设置是否检测花屏
                     * @param _crashScreen 是否检测花屏
                     * 
                     */
                    void SetCrashScreen(const bool& _crashScreen);

                    /**
                     * 判断参数 CrashScreen 是否已赋值
                     * @return CrashScreen 是否已赋值
                     * 
                     */
                    bool CrashScreenHasBeenSet() const;

                    /**
                     * 获取是否检测黑边、白边、黑屏、白屏、绿屏
                     * @return BlackWhiteEdge 是否检测黑边、白边、黑屏、白屏、绿屏
                     * 
                     */
                    bool GetBlackWhiteEdge() const;

                    /**
                     * 设置是否检测黑边、白边、黑屏、白屏、绿屏
                     * @param _blackWhiteEdge 是否检测黑边、白边、黑屏、白屏、绿屏
                     * 
                     */
                    void SetBlackWhiteEdge(const bool& _blackWhiteEdge);

                    /**
                     * 判断参数 BlackWhiteEdge 是否已赋值
                     * @return BlackWhiteEdge 是否已赋值
                     * 
                     */
                    bool BlackWhiteEdgeHasBeenSet() const;

                    /**
                     * 获取是否检测噪点
                     * @return Noise 是否检测噪点
                     * 
                     */
                    bool GetNoise() const;

                    /**
                     * 设置是否检测噪点
                     * @param _noise 是否检测噪点
                     * 
                     */
                    void SetNoise(const bool& _noise);

                    /**
                     * 判断参数 Noise 是否已赋值
                     * @return Noise 是否已赋值
                     * 
                     */
                    bool NoiseHasBeenSet() const;

                    /**
                     * 获取是否检测马赛克
                     * @return Mosaic 是否检测马赛克
                     * 
                     */
                    bool GetMosaic() const;

                    /**
                     * 设置是否检测马赛克
                     * @param _mosaic 是否检测马赛克
                     * 
                     */
                    void SetMosaic(const bool& _mosaic);

                    /**
                     * 判断参数 Mosaic 是否已赋值
                     * @return Mosaic 是否已赋值
                     * 
                     */
                    bool MosaicHasBeenSet() const;

                    /**
                     * 获取是否检测二维码，包括小程序码、条形码
                     * @return QRCode 是否检测二维码，包括小程序码、条形码
                     * 
                     */
                    bool GetQRCode() const;

                    /**
                     * 设置是否检测二维码，包括小程序码、条形码
                     * @param _qRCode 是否检测二维码，包括小程序码、条形码
                     * 
                     */
                    void SetQRCode(const bool& _qRCode);

                    /**
                     * 判断参数 QRCode 是否已赋值
                     * @return QRCode 是否已赋值
                     * 
                     */
                    bool QRCodeHasBeenSet() const;

                    /**
                     * 获取是否开启画面质量评价
                     * @return QualityEvaluation 是否开启画面质量评价
                     * 
                     */
                    bool GetQualityEvaluation() const;

                    /**
                     * 设置是否开启画面质量评价
                     * @param _qualityEvaluation 是否开启画面质量评价
                     * 
                     */
                    void SetQualityEvaluation(const bool& _qualityEvaluation);

                    /**
                     * 判断参数 QualityEvaluation 是否已赋值
                     * @return QualityEvaluation 是否已赋值
                     * 
                     */
                    bool QualityEvaluationHasBeenSet() const;

                    /**
                     * 获取画面质量评价过滤阈值，结果只返回低于阈值的时间段，默认60
                     * @return QualityEvalScore 画面质量评价过滤阈值，结果只返回低于阈值的时间段，默认60
                     * 
                     */
                    uint64_t GetQualityEvalScore() const;

                    /**
                     * 设置画面质量评价过滤阈值，结果只返回低于阈值的时间段，默认60
                     * @param _qualityEvalScore 画面质量评价过滤阈值，结果只返回低于阈值的时间段，默认60
                     * 
                     */
                    void SetQualityEvalScore(const uint64_t& _qualityEvalScore);

                    /**
                     * 判断参数 QualityEvalScore 是否已赋值
                     * @return QualityEvalScore 是否已赋值
                     * 
                     */
                    bool QualityEvalScoreHasBeenSet() const;

                    /**
                     * 获取是否检测视频音频，包含静音、低音、爆音
                     * @return Voice 是否检测视频音频，包含静音、低音、爆音
                     * 
                     */
                    bool GetVoice() const;

                    /**
                     * 设置是否检测视频音频，包含静音、低音、爆音
                     * @param _voice 是否检测视频音频，包含静音、低音、爆音
                     * 
                     */
                    void SetVoice(const bool& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                private:

                    /**
                     * 对流进行截图的间隔ms，默认1000ms
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 是否保存截图
                     */
                    bool m_videoShot;
                    bool m_videoShotHasBeenSet;

                    /**
                     * 是否检测抖动重影
                     */
                    bool m_jitter;
                    bool m_jitterHasBeenSet;

                    /**
                     * 是否检测模糊
                     */
                    bool m_blur;
                    bool m_blurHasBeenSet;

                    /**
                     * 是否检测低光照、过曝
                     */
                    bool m_abnormalLighting;
                    bool m_abnormalLightingHasBeenSet;

                    /**
                     * 是否检测花屏
                     */
                    bool m_crashScreen;
                    bool m_crashScreenHasBeenSet;

                    /**
                     * 是否检测黑边、白边、黑屏、白屏、绿屏
                     */
                    bool m_blackWhiteEdge;
                    bool m_blackWhiteEdgeHasBeenSet;

                    /**
                     * 是否检测噪点
                     */
                    bool m_noise;
                    bool m_noiseHasBeenSet;

                    /**
                     * 是否检测马赛克
                     */
                    bool m_mosaic;
                    bool m_mosaicHasBeenSet;

                    /**
                     * 是否检测二维码，包括小程序码、条形码
                     */
                    bool m_qRCode;
                    bool m_qRCodeHasBeenSet;

                    /**
                     * 是否开启画面质量评价
                     */
                    bool m_qualityEvaluation;
                    bool m_qualityEvaluationHasBeenSet;

                    /**
                     * 画面质量评价过滤阈值，结果只返回低于阈值的时间段，默认60
                     */
                    uint64_t m_qualityEvalScore;
                    bool m_qualityEvalScoreHasBeenSet;

                    /**
                     * 是否检测视频音频，包含静音、低音、爆音
                     */
                    bool m_voice;
                    bool m_voiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFO_H_
