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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFOTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFOTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/QualityControlResultItems.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体质检结果信息
                */
                class QualityControlInfoTaskResult : public AbstractModel
                {
                public:
                    QualityControlInfoTaskResult();
                    ~QualityControlInfoTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取质检任务 ID
                     * @return TaskId 质检任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置质检任务 ID
                     * @param _taskId 质检任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取质检任务状态。
1：执行中；2：成功；3：失败
                     * @return Status 质检任务状态。
1：执行中；2：成功；3：失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置质检任务状态。
1：执行中；2：成功；3：失败
                     * @param _status 质检任务状态。
1：执行中；2：成功；3：失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取表示处理进度百分比
                     * @return Progress 表示处理进度百分比
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置表示处理进度百分比
                     * @param _progress 表示处理进度百分比
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取处理时长(s)
                     * @return UsedTime 处理时长(s)
                     * 
                     */
                    uint64_t GetUsedTime() const;

                    /**
                     * 设置处理时长(s)
                     * @param _usedTime 处理时长(s)
                     * 
                     */
                    void SetUsedTime(const uint64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取计费时长(s)
                     * @return Duration 计费时长(s)
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置计费时长(s)
                     * @param _duration 计费时长(s)
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取为true时表示视频无音频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoAudio 为true时表示视频无音频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置为true时表示视频无音频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noAudio 为true时表示视频无音频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoAudio(const bool& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取为true时表示视频无视频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoVideo 为true时表示视频无视频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置为true时表示视频无视频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noVideo 为true时表示视频无视频轨
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoVideo(const bool& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取视频无参考质量打分，百分制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEvaluationScore 视频无参考质量打分，百分制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置视频无参考质量打分，百分制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityEvaluationScore 视频无参考质量打分，百分制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取视频画面无参考评分低于阈值的时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEvaluationResults 视频画面无参考评分低于阈值的时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetQualityEvaluationResults() const;

                    /**
                     * 设置视频画面无参考评分低于阈值的时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityEvaluationResults 视频画面无参考评分低于阈值的时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityEvaluationResults(const std::vector<QualityControlResultItems>& _qualityEvaluationResults);

                    /**
                     * 判断参数 QualityEvaluationResults 是否已赋值
                     * @return QualityEvaluationResults 是否已赋值
                     * 
                     */
                    bool QualityEvaluationResultsHasBeenSet() const;

                    /**
                     * 获取视频画面抖动时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JitterResults 视频画面抖动时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetJitterResults() const;

                    /**
                     * 设置视频画面抖动时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jitterResults 视频画面抖动时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJitterResults(const std::vector<QualityControlResultItems>& _jitterResults);

                    /**
                     * 判断参数 JitterResults 是否已赋值
                     * @return JitterResults 是否已赋值
                     * 
                     */
                    bool JitterResultsHasBeenSet() const;

                    /**
                     * 获取视频画面模糊时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlurResults 视频画面模糊时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetBlurResults() const;

                    /**
                     * 设置视频画面模糊时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blurResults 视频画面模糊时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlurResults(const std::vector<QualityControlResultItems>& _blurResults);

                    /**
                     * 判断参数 BlurResults 是否已赋值
                     * @return BlurResults 是否已赋值
                     * 
                     */
                    bool BlurResultsHasBeenSet() const;

                    /**
                     * 获取视频画面低光、过曝时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbnormalLightingResults 视频画面低光、过曝时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetAbnormalLightingResults() const;

                    /**
                     * 设置视频画面低光、过曝时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormalLightingResults 视频画面低光、过曝时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormalLightingResults(const std::vector<QualityControlResultItems>& _abnormalLightingResults);

                    /**
                     * 判断参数 AbnormalLightingResults 是否已赋值
                     * @return AbnormalLightingResults 是否已赋值
                     * 
                     */
                    bool AbnormalLightingResultsHasBeenSet() const;

                    /**
                     * 获取视频画面花屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrashScreenResults 视频画面花屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetCrashScreenResults() const;

                    /**
                     * 设置视频画面花屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crashScreenResults 视频画面花屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrashScreenResults(const std::vector<QualityControlResultItems>& _crashScreenResults);

                    /**
                     * 判断参数 CrashScreenResults 是否已赋值
                     * @return CrashScreenResults 是否已赋值
                     * 
                     */
                    bool CrashScreenResultsHasBeenSet() const;

                    /**
                     * 获取视频画面黑边、白边、黑屏、白屏、纯色屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlackWhiteEdgeResults 视频画面黑边、白边、黑屏、白屏、纯色屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetBlackWhiteEdgeResults() const;

                    /**
                     * 设置视频画面黑边、白边、黑屏、白屏、纯色屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blackWhiteEdgeResults 视频画面黑边、白边、黑屏、白屏、纯色屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlackWhiteEdgeResults(const std::vector<QualityControlResultItems>& _blackWhiteEdgeResults);

                    /**
                     * 判断参数 BlackWhiteEdgeResults 是否已赋值
                     * @return BlackWhiteEdgeResults 是否已赋值
                     * 
                     */
                    bool BlackWhiteEdgeResultsHasBeenSet() const;

                    /**
                     * 获取视频画面有噪点时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoiseResults 视频画面有噪点时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetNoiseResults() const;

                    /**
                     * 设置视频画面有噪点时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noiseResults 视频画面有噪点时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoiseResults(const std::vector<QualityControlResultItems>& _noiseResults);

                    /**
                     * 判断参数 NoiseResults 是否已赋值
                     * @return NoiseResults 是否已赋值
                     * 
                     */
                    bool NoiseResultsHasBeenSet() const;

                    /**
                     * 获取视频画面有马赛克时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MosaicResults 视频画面有马赛克时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetMosaicResults() const;

                    /**
                     * 设置视频画面有马赛克时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mosaicResults 视频画面有马赛克时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMosaicResults(const std::vector<QualityControlResultItems>& _mosaicResults);

                    /**
                     * 判断参数 MosaicResults 是否已赋值
                     * @return MosaicResults 是否已赋值
                     * 
                     */
                    bool MosaicResultsHasBeenSet() const;

                    /**
                     * 获取视频画面有二维码的时间段，包括小程序码、条形码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QRCodeResults 视频画面有二维码的时间段，包括小程序码、条形码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetQRCodeResults() const;

                    /**
                     * 设置视频画面有二维码的时间段，包括小程序码、条形码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qRCodeResults 视频画面有二维码的时间段，包括小程序码、条形码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQRCodeResults(const std::vector<QualityControlResultItems>& _qRCodeResults);

                    /**
                     * 判断参数 QRCodeResults 是否已赋值
                     * @return QRCodeResults 是否已赋值
                     * 
                     */
                    bool QRCodeResultsHasBeenSet() const;

                    /**
                     * 获取视频音频异常时间段，包括静音、低音、爆音
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceResults 视频音频异常时间段，包括静音、低音、爆音
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResultItems> GetVoiceResults() const;

                    /**
                     * 设置视频音频异常时间段，包括静音、低音、爆音
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceResults 视频音频异常时间段，包括静音、低音、爆音
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceResults(const std::vector<QualityControlResultItems>& _voiceResults);

                    /**
                     * 判断参数 VoiceResults 是否已赋值
                     * @return VoiceResults 是否已赋值
                     * 
                     */
                    bool VoiceResultsHasBeenSet() const;

                    /**
                     * 获取任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode 任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 质检任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 质检任务状态。
1：执行中；2：成功；3：失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 表示处理进度百分比
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 处理时长(s)
                     */
                    uint64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * 计费时长(s)
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 为true时表示视频无音频轨
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * 为true时表示视频无视频轨
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * 视频无参考质量打分，百分制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * 视频画面无参考评分低于阈值的时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_qualityEvaluationResults;
                    bool m_qualityEvaluationResultsHasBeenSet;

                    /**
                     * 视频画面抖动时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_jitterResults;
                    bool m_jitterResultsHasBeenSet;

                    /**
                     * 视频画面模糊时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_blurResults;
                    bool m_blurResultsHasBeenSet;

                    /**
                     * 视频画面低光、过曝时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_abnormalLightingResults;
                    bool m_abnormalLightingResultsHasBeenSet;

                    /**
                     * 视频画面花屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_crashScreenResults;
                    bool m_crashScreenResultsHasBeenSet;

                    /**
                     * 视频画面黑边、白边、黑屏、白屏、纯色屏时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_blackWhiteEdgeResults;
                    bool m_blackWhiteEdgeResultsHasBeenSet;

                    /**
                     * 视频画面有噪点时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_noiseResults;
                    bool m_noiseResultsHasBeenSet;

                    /**
                     * 视频画面有马赛克时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_mosaicResults;
                    bool m_mosaicResultsHasBeenSet;

                    /**
                     * 视频画面有二维码的时间段，包括小程序码、条形码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_qRCodeResults;
                    bool m_qRCodeResultsHasBeenSet;

                    /**
                     * 视频音频异常时间段，包括静音、低音、爆音
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResultItems> m_voiceResults;
                    bool m_voiceResultsHasBeenSet;

                    /**
                     * 任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLINFOTASKRESULT_H_
