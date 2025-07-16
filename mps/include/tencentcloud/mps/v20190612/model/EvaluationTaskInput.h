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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/EvaluationMediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/EvaluationTemplateInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 评测任务输入参数类型
                */
                class EvaluationTaskInput : public AbstractModel
                {
                public:
                    EvaluationTaskInput();
                    ~EvaluationTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评测任务类型，可选 NORMAL、BD_RATE
                     * @return TaskType 评测任务类型，可选 NORMAL、BD_RATE
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置评测任务类型，可选 NORMAL、BD_RATE
                     * @param _taskType 评测任务类型，可选 NORMAL、BD_RATE
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取评测类型，可选 PSNR、SSIM、VMAF、VMAF_NEG
                     * @return EvaluationTypeSet 评测类型，可选 PSNR、SSIM、VMAF、VMAF_NEG
                     * 
                     */
                    std::vector<std::string> GetEvaluationTypeSet() const;

                    /**
                     * 设置评测类型，可选 PSNR、SSIM、VMAF、VMAF_NEG
                     * @param _evaluationTypeSet 评测类型，可选 PSNR、SSIM、VMAF、VMAF_NEG
                     * 
                     */
                    void SetEvaluationTypeSet(const std::vector<std::string>& _evaluationTypeSet);

                    /**
                     * 判断参数 EvaluationTypeSet 是否已赋值
                     * @return EvaluationTypeSet 是否已赋值
                     * 
                     */
                    bool EvaluationTypeSetHasBeenSet() const;

                    /**
                     * 获取评测范围类型，可选 ALL（全部时长）、TIME（指定时长范围）、FRAME（指定帧数范围）
                     * @return EvaluationRangeType 评测范围类型，可选 ALL（全部时长）、TIME（指定时长范围）、FRAME（指定帧数范围）
                     * 
                     */
                    std::string GetEvaluationRangeType() const;

                    /**
                     * 设置评测范围类型，可选 ALL（全部时长）、TIME（指定时长范围）、FRAME（指定帧数范围）
                     * @param _evaluationRangeType 评测范围类型，可选 ALL（全部时长）、TIME（指定时长范围）、FRAME（指定帧数范围）
                     * 
                     */
                    void SetEvaluationRangeType(const std::string& _evaluationRangeType);

                    /**
                     * 判断参数 EvaluationRangeType 是否已赋值
                     * @return EvaluationRangeType 是否已赋值
                     * 
                     */
                    bool EvaluationRangeTypeHasBeenSet() const;

                    /**
                     * 获取对比视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContrastInfoSet 对比视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<MediaInputInfo> GetContrastInfoSet() const;

                    /**
                     * 设置对比视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contrastInfoSet 对比视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetContrastInfoSet(const std::vector<MediaInputInfo>& _contrastInfoSet);

                    /**
                     * 判断参数 ContrastInfoSet 是否已赋值
                     * @return ContrastInfoSet 是否已赋值
                     * @deprecated
                     */
                    bool ContrastInfoSetHasBeenSet() const;

                    /**
                     * 获取对比视频信息。
                     * @return ContrastMediaSet 对比视频信息。
                     * 
                     */
                    std::vector<EvaluationMediaInputInfo> GetContrastMediaSet() const;

                    /**
                     * 设置对比视频信息。
                     * @param _contrastMediaSet 对比视频信息。
                     * 
                     */
                    void SetContrastMediaSet(const std::vector<EvaluationMediaInputInfo>& _contrastMediaSet);

                    /**
                     * 判断参数 ContrastMediaSet 是否已赋值
                     * @return ContrastMediaSet 是否已赋值
                     * 
                     */
                    bool ContrastMediaSetHasBeenSet() const;

                    /**
                     * 获取对比转码模板信息。
                     * @return ContrastTemplateSet 对比转码模板信息。
                     * 
                     */
                    std::vector<EvaluationTemplateInputInfo> GetContrastTemplateSet() const;

                    /**
                     * 设置对比转码模板信息。
                     * @param _contrastTemplateSet 对比转码模板信息。
                     * 
                     */
                    void SetContrastTemplateSet(const std::vector<EvaluationTemplateInputInfo>& _contrastTemplateSet);

                    /**
                     * 判断参数 ContrastTemplateSet 是否已赋值
                     * @return ContrastTemplateSet 是否已赋值
                     * 
                     */
                    bool ContrastTemplateSetHasBeenSet() const;

                    /**
                     * 获取开始评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * @return StartTime 开始评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * @param _startTime 开始评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * @return EndTime 结束评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * @param _endTime 结束评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取评测开始帧，默认从0开始，当 EvaluationRangeType 为FRAME 时有效。
                     * @return StartFrameIndex 评测开始帧，默认从0开始，当 EvaluationRangeType 为FRAME 时有效。
                     * 
                     */
                    uint64_t GetStartFrameIndex() const;

                    /**
                     * 设置评测开始帧，默认从0开始，当 EvaluationRangeType 为FRAME 时有效。
                     * @param _startFrameIndex 评测开始帧，默认从0开始，当 EvaluationRangeType 为FRAME 时有效。
                     * 
                     */
                    void SetStartFrameIndex(const uint64_t& _startFrameIndex);

                    /**
                     * 判断参数 StartFrameIndex 是否已赋值
                     * @return StartFrameIndex 是否已赋值
                     * 
                     */
                    bool StartFrameIndexHasBeenSet() const;

                    /**
                     * 获取评测结束帧，默认为视频中可以参与评测的最后一帧，当 EvaluationRangeType 为 FRAME 时有效。
                     * @return EndFrameIndex 评测结束帧，默认为视频中可以参与评测的最后一帧，当 EvaluationRangeType 为 FRAME 时有效。
                     * 
                     */
                    uint64_t GetEndFrameIndex() const;

                    /**
                     * 设置评测结束帧，默认为视频中可以参与评测的最后一帧，当 EvaluationRangeType 为 FRAME 时有效。
                     * @param _endFrameIndex 评测结束帧，默认为视频中可以参与评测的最后一帧，当 EvaluationRangeType 为 FRAME 时有效。
                     * 
                     */
                    void SetEndFrameIndex(const uint64_t& _endFrameIndex);

                    /**
                     * 判断参数 EndFrameIndex 是否已赋值
                     * @return EndFrameIndex 是否已赋值
                     * 
                     */
                    bool EndFrameIndexHasBeenSet() const;

                    /**
                     * 获取分辨率对齐模式，默认对齐到低分辨率的视频，可选 ALIGN_HIGH_RESOLUTION、ALIGN_LOW_RESOLUTION
                     * @return ResolutionAlignmentMode 分辨率对齐模式，默认对齐到低分辨率的视频，可选 ALIGN_HIGH_RESOLUTION、ALIGN_LOW_RESOLUTION
                     * 
                     */
                    std::string GetResolutionAlignmentMode() const;

                    /**
                     * 设置分辨率对齐模式，默认对齐到低分辨率的视频，可选 ALIGN_HIGH_RESOLUTION、ALIGN_LOW_RESOLUTION
                     * @param _resolutionAlignmentMode 分辨率对齐模式，默认对齐到低分辨率的视频，可选 ALIGN_HIGH_RESOLUTION、ALIGN_LOW_RESOLUTION
                     * 
                     */
                    void SetResolutionAlignmentMode(const std::string& _resolutionAlignmentMode);

                    /**
                     * 判断参数 ResolutionAlignmentMode 是否已赋值
                     * @return ResolutionAlignmentMode 是否已赋值
                     * 
                     */
                    bool ResolutionAlignmentModeHasBeenSet() const;

                    /**
                     * 获取指定码率评测，当评测任务类型为 BD_RATE 有效。
                     * @return BitrateSet 指定码率评测，当评测任务类型为 BD_RATE 有效。
                     * 
                     */
                    std::vector<int64_t> GetBitrateSet() const;

                    /**
                     * 设置指定码率评测，当评测任务类型为 BD_RATE 有效。
                     * @param _bitrateSet 指定码率评测，当评测任务类型为 BD_RATE 有效。
                     * 
                     */
                    void SetBitrateSet(const std::vector<int64_t>& _bitrateSet);

                    /**
                     * 判断参数 BitrateSet 是否已赋值
                     * @return BitrateSet 是否已赋值
                     * 
                     */
                    bool BitrateSetHasBeenSet() const;

                    /**
                     * 获取指定 vcrf 评测，当评测任务类型为 BD_RATE 有效。
                     * @return VCRFSet 指定 vcrf 评测，当评测任务类型为 BD_RATE 有效。
                     * 
                     */
                    std::vector<int64_t> GetVCRFSet() const;

                    /**
                     * 设置指定 vcrf 评测，当评测任务类型为 BD_RATE 有效。
                     * @param _vCRFSet 指定 vcrf 评测，当评测任务类型为 BD_RATE 有效。
                     * 
                     */
                    void SetVCRFSet(const std::vector<int64_t>& _vCRFSet);

                    /**
                     * 判断参数 VCRFSet 是否已赋值
                     * @return VCRFSet 是否已赋值
                     * 
                     */
                    bool VCRFSetHasBeenSet() const;

                private:

                    /**
                     * 评测任务类型，可选 NORMAL、BD_RATE
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 评测类型，可选 PSNR、SSIM、VMAF、VMAF_NEG
                     */
                    std::vector<std::string> m_evaluationTypeSet;
                    bool m_evaluationTypeSetHasBeenSet;

                    /**
                     * 评测范围类型，可选 ALL（全部时长）、TIME（指定时长范围）、FRAME（指定帧数范围）
                     */
                    std::string m_evaluationRangeType;
                    bool m_evaluationRangeTypeHasBeenSet;

                    /**
                     * 对比视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaInputInfo> m_contrastInfoSet;
                    bool m_contrastInfoSetHasBeenSet;

                    /**
                     * 对比视频信息。
                     */
                    std::vector<EvaluationMediaInputInfo> m_contrastMediaSet;
                    bool m_contrastMediaSetHasBeenSet;

                    /**
                     * 对比转码模板信息。
                     */
                    std::vector<EvaluationTemplateInputInfo> m_contrastTemplateSet;
                    bool m_contrastTemplateSetHasBeenSet;

                    /**
                     * 开始评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束评测时间，单位秒，当 EvaluationRangeType 为 TIME 时有效。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 评测开始帧，默认从0开始，当 EvaluationRangeType 为FRAME 时有效。
                     */
                    uint64_t m_startFrameIndex;
                    bool m_startFrameIndexHasBeenSet;

                    /**
                     * 评测结束帧，默认为视频中可以参与评测的最后一帧，当 EvaluationRangeType 为 FRAME 时有效。
                     */
                    uint64_t m_endFrameIndex;
                    bool m_endFrameIndexHasBeenSet;

                    /**
                     * 分辨率对齐模式，默认对齐到低分辨率的视频，可选 ALIGN_HIGH_RESOLUTION、ALIGN_LOW_RESOLUTION
                     */
                    std::string m_resolutionAlignmentMode;
                    bool m_resolutionAlignmentModeHasBeenSet;

                    /**
                     * 指定码率评测，当评测任务类型为 BD_RATE 有效。
                     */
                    std::vector<int64_t> m_bitrateSet;
                    bool m_bitrateSetHasBeenSet;

                    /**
                     * 指定 vcrf 评测，当评测任务类型为 BD_RATE 有效。
                     */
                    std::vector<int64_t> m_vCRFSet;
                    bool m_vCRFSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONTASKINPUT_H_
