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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskTranscodeResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskAnimatedGraphicResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskSnapshotByTimeOffsetResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskSampleSnapshotResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskImageSpriteResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskAdaptiveDynamicStreamingResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleRecognitionTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleReviewTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleAnalysisTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleQualityControlTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleSmartSubtitleTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编排子任务输出
                */
                class ActivityResItem : public AbstractModel
                {
                public:
                    ActivityResItem();
                    ~ActivityResItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转码任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask 转码任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置转码任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeTask 转码任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranscodeTask(const MediaProcessTaskTranscodeResult& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取转动图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicTask 转动图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置转动图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicTask 转动图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnimatedGraphicTask(const MediaProcessTaskAnimatedGraphicResult& _animatedGraphicTask);

                    /**
                     * 判断参数 AnimatedGraphicTask 是否已赋值
                     * @return AnimatedGraphicTask 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskHasBeenSet() const;

                    /**
                     * 获取时间点截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask 时间点截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置时间点截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetTask 时间点截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotByTimeOffsetTask(const MediaProcessTaskSnapshotByTimeOffsetResult& _snapshotByTimeOffsetTask);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取采样截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotTask 采样截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置采样截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotTask 采样截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampleSnapshotTask(const MediaProcessTaskSampleSnapshotResult& _sampleSnapshotTask);

                    /**
                     * 判断参数 SampleSnapshotTask 是否已赋值
                     * @return SampleSnapshotTask 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskHasBeenSet() const;

                    /**
                     * 获取雪碧图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteTask 雪碧图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置雪碧图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteTask 雪碧图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageSpriteTask(const MediaProcessTaskImageSpriteResult& _imageSpriteTask);

                    /**
                     * 判断参数 ImageSpriteTask 是否已赋值
                     * @return ImageSpriteTask 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取自适应码流任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingTask 自适应码流任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置自适应码流任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingTask 自适应码流任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const MediaProcessTaskAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取识别任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognitionTask 识别任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleRecognitionTaskResult GetRecognitionTask() const;

                    /**
                     * 设置识别任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognitionTask 识别任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecognitionTask(const ScheduleRecognitionTaskResult& _recognitionTask);

                    /**
                     * 判断参数 RecognitionTask 是否已赋值
                     * @return RecognitionTask 是否已赋值
                     * 
                     */
                    bool RecognitionTaskHasBeenSet() const;

                    /**
                     * 获取审核任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewTask 审核任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleReviewTaskResult GetReviewTask() const;

                    /**
                     * 设置审核任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewTask 审核任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewTask(const ScheduleReviewTaskResult& _reviewTask);

                    /**
                     * 判断参数 ReviewTask 是否已赋值
                     * @return ReviewTask 是否已赋值
                     * 
                     */
                    bool ReviewTaskHasBeenSet() const;

                    /**
                     * 获取分析任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisTask 分析任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleAnalysisTaskResult GetAnalysisTask() const;

                    /**
                     * 设置分析任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisTask 分析任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnalysisTask(const ScheduleAnalysisTaskResult& _analysisTask);

                    /**
                     * 判断参数 AnalysisTask 是否已赋值
                     * @return AnalysisTask 是否已赋值
                     * 
                     */
                    bool AnalysisTaskHasBeenSet() const;

                    /**
                     * 获取媒体质检任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityControlTask 媒体质检任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleQualityControlTaskResult GetQualityControlTask() const;

                    /**
                     * 设置媒体质检任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityControlTask 媒体质检任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityControlTask(const ScheduleQualityControlTaskResult& _qualityControlTask);

                    /**
                     * 判断参数 QualityControlTask 是否已赋值
                     * @return QualityControlTask 是否已赋值
                     * 
                     */
                    bool QualityControlTaskHasBeenSet() const;

                    /**
                     * 获取智能字幕任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTask 智能字幕任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult GetSmartSubtitlesTask() const;

                    /**
                     * 设置智能字幕任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTask 智能字幕任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartSubtitlesTask(const ScheduleSmartSubtitleTaskResult& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                private:

                    /**
                     * 转码任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 转动图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * 时间点截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 采样截图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * 雪碧图任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * 自适应码流任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * 识别任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleRecognitionTaskResult m_recognitionTask;
                    bool m_recognitionTaskHasBeenSet;

                    /**
                     * 审核任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleReviewTaskResult m_reviewTask;
                    bool m_reviewTaskHasBeenSet;

                    /**
                     * 分析任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleAnalysisTaskResult m_analysisTask;
                    bool m_analysisTaskHasBeenSet;

                    /**
                     * 媒体质检任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleQualityControlTaskResult m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * 智能字幕任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleSmartSubtitleTaskResult m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
