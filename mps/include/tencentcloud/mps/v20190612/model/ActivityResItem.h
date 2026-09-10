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
#include <tencentcloud/mps/v20190612/model/ScheduleExecRuleTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleSmartSubtitleTaskResult.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskResult.h>
#include <tencentcloud/mps/v20190612/model/AIDubbingTaskResult.h>


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
                     * 获取<p>转码任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask <p>转码任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置<p>转码任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeTask <p>转码任务输出</p>
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
                     * 获取<p>转动图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicTask <p>转动图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置<p>转动图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicTask <p>转动图任务输出</p>
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
                     * 获取<p>时间点截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask <p>时间点截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置<p>时间点截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetTask <p>时间点截图任务输出</p>
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
                     * 获取<p>采样截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotTask <p>采样截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置<p>采样截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotTask <p>采样截图任务输出</p>
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
                     * 获取<p>雪碧图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteTask <p>雪碧图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置<p>雪碧图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteTask <p>雪碧图任务输出</p>
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
                     * 获取<p>自适应码流任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingTask <p>自适应码流任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置<p>自适应码流任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingTask <p>自适应码流任务输出</p>
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
                     * 获取<p>识别任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognitionTask <p>识别任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleRecognitionTaskResult GetRecognitionTask() const;

                    /**
                     * 设置<p>识别任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognitionTask <p>识别任务输出</p>
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
                     * 获取<p>审核任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewTask <p>审核任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleReviewTaskResult GetReviewTask() const;

                    /**
                     * 设置<p>审核任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewTask <p>审核任务输出</p>
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
                     * 获取<p>分析任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisTask <p>分析任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleAnalysisTaskResult GetAnalysisTask() const;

                    /**
                     * 设置<p>分析任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisTask <p>分析任务输出</p>
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
                     * 获取<p>媒体质检任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityControlTask <p>媒体质检任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleQualityControlTaskResult GetQualityControlTask() const;

                    /**
                     * 设置<p>媒体质检任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityControlTask <p>媒体质检任务输出</p>
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
                     * 获取<p>条件判断任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecRuleTask <p>条件判断任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleExecRuleTaskResult GetExecRuleTask() const;

                    /**
                     * 设置<p>条件判断任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execRuleTask <p>条件判断任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecRuleTask(const ScheduleExecRuleTaskResult& _execRuleTask);

                    /**
                     * 判断参数 ExecRuleTask 是否已赋值
                     * @return ExecRuleTask 是否已赋值
                     * 
                     */
                    bool ExecRuleTaskHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTask <p>智能字幕任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>智能字幕任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTask <p>智能字幕任务输出</p>
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

                    /**
                     * 获取<p>智能擦除任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartEraseTask <p>智能擦除任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTask() const;

                    /**
                     * 设置<p>智能擦除任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartEraseTask <p>智能擦除任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskResult& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI配音任务输出。</p>
                     * @return AIDubbingTask <p>AI配音任务输出。</p>
                     * 
                     */
                    AIDubbingTaskResult GetAIDubbingTask() const;

                    /**
                     * 设置<p>AI配音任务输出。</p>
                     * @param _aIDubbingTask <p>AI配音任务输出。</p>
                     * 
                     */
                    void SetAIDubbingTask(const AIDubbingTaskResult& _aIDubbingTask);

                    /**
                     * 判断参数 AIDubbingTask 是否已赋值
                     * @return AIDubbingTask 是否已赋值
                     * 
                     */
                    bool AIDubbingTaskHasBeenSet() const;

                private:

                    /**
                     * <p>转码任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * <p>转动图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * <p>时间点截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * <p>采样截图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * <p>雪碧图任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * <p>自适应码流任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * <p>识别任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleRecognitionTaskResult m_recognitionTask;
                    bool m_recognitionTaskHasBeenSet;

                    /**
                     * <p>审核任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleReviewTaskResult m_reviewTask;
                    bool m_reviewTaskHasBeenSet;

                    /**
                     * <p>分析任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleAnalysisTaskResult m_analysisTask;
                    bool m_analysisTaskHasBeenSet;

                    /**
                     * <p>媒体质检任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleQualityControlTaskResult m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * <p>条件判断任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleExecRuleTaskResult m_execRuleTask;
                    bool m_execRuleTaskHasBeenSet;

                    /**
                     * <p>智能字幕任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduleSmartSubtitleTaskResult m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>智能擦除任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseTaskResult m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                    /**
                     * <p>AI配音任务输出。</p>
                     */
                    AIDubbingTaskResult m_aIDubbingTask;
                    bool m_aIDubbingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
