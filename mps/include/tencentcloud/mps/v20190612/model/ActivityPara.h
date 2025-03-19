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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TranscodeTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AnimatedGraphicTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SampleSnapshotTaskInput.h>
#include <tencentcloud/mps/v20190612/model/ImageSpriteTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编排原子任务
                */
                class ActivityPara : public AbstractModel
                {
                public:
                    ActivityPara();
                    ~ActivityPara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频转码任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask 视频转码任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TranscodeTaskInput GetTranscodeTask() const;

                    /**
                     * 设置视频转码任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeTask 视频转码任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranscodeTask(const TranscodeTaskInput& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取视频转动图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicTask 视频转动图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AnimatedGraphicTaskInput GetAnimatedGraphicTask() const;

                    /**
                     * 设置视频转动图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicTask 视频转动图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnimatedGraphicTask(const AnimatedGraphicTaskInput& _animatedGraphicTask);

                    /**
                     * 判断参数 AnimatedGraphicTask 是否已赋值
                     * @return AnimatedGraphicTask 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskHasBeenSet() const;

                    /**
                     * 获取视频按时间点截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask 视频按时间点截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SnapshotByTimeOffsetTaskInput GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置视频按时间点截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetTask 视频按时间点截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotByTimeOffsetTask(const SnapshotByTimeOffsetTaskInput& _snapshotByTimeOffsetTask);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取视频采样截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotTask 视频采样截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SampleSnapshotTaskInput GetSampleSnapshotTask() const;

                    /**
                     * 设置视频采样截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotTask 视频采样截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampleSnapshotTask(const SampleSnapshotTaskInput& _sampleSnapshotTask);

                    /**
                     * 判断参数 SampleSnapshotTask 是否已赋值
                     * @return SampleSnapshotTask 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskHasBeenSet() const;

                    /**
                     * 获取视频截雪碧图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteTask 视频截雪碧图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageSpriteTaskInput GetImageSpriteTask() const;

                    /**
                     * 设置视频截雪碧图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteTask 视频截雪碧图任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageSpriteTask(const ImageSpriteTaskInput& _imageSpriteTask);

                    /**
                     * 判断参数 ImageSpriteTask 是否已赋值
                     * @return ImageSpriteTask 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取转自适应码流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingTask 转自适应码流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdaptiveDynamicStreamingTaskInput GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置转自适应码流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingTask 转自适应码流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const AdaptiveDynamicStreamingTaskInput& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiContentReviewTask 视频内容审核类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置视频内容审核类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiContentReviewTask 视频内容审核类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取视频内容分析类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiAnalysisTask 视频内容分析类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置视频内容分析类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiAnalysisTask 视频内容分析类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取视频内容识别类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiRecognitionTask 视频内容识别类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置视频内容识别类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiRecognitionTask 视频内容识别类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取媒体质检任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityControlTask 媒体质检任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiQualityControlTaskInput GetQualityControlTask() const;

                    /**
                     * 设置媒体质检任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityControlTask 媒体质检任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityControlTask(const AiQualityControlTaskInput& _qualityControlTask);

                    /**
                     * 判断参数 QualityControlTask 是否已赋值
                     * @return QualityControlTask 是否已赋值
                     * 
                     */
                    bool QualityControlTaskHasBeenSet() const;

                    /**
                     * 获取智能字幕任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTask 智能字幕任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置智能字幕任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTask 智能字幕任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                private:

                    /**
                     * 视频转码任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTaskInput m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 视频转动图任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AnimatedGraphicTaskInput m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * 视频按时间点截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTaskInput m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 视频采样截图任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SampleSnapshotTaskInput m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * 视频截雪碧图任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageSpriteTaskInput m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * 转自适应码流任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdaptiveDynamicStreamingTaskInput m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * 视频内容审核类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * 视频内容分析类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * 视频内容识别类型任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 媒体质检任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiQualityControlTaskInput m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * 智能字幕任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
