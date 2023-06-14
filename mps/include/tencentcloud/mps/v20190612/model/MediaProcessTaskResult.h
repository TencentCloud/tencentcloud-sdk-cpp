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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKRESULT_H_

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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 任务查询结果类型
                */
                class MediaProcessTaskResult : public AbstractModel
                {
                public:
                    MediaProcessTaskResult();
                    ~MediaProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AnimatedGraphics：转动图</li>
<li>SnapshotByTimeOffset：时间点截图</li>
<li>SampleSnapshot：采样截图</li>
<li>ImageSprites：雪碧图</li>
<li>CoverBySnapshot：截图做封面</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * @return Type 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AnimatedGraphics：转动图</li>
<li>SnapshotByTimeOffset：时间点截图</li>
<li>SampleSnapshot：采样截图</li>
<li>ImageSprites：雪碧图</li>
<li>CoverBySnapshot：截图做封面</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AnimatedGraphics：转动图</li>
<li>SnapshotByTimeOffset：时间点截图</li>
<li>SampleSnapshot：采样截图</li>
<li>ImageSprites：雪碧图</li>
<li>CoverBySnapshot：截图做封面</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * @param _type 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AnimatedGraphics：转动图</li>
<li>SnapshotByTimeOffset：时间点截图</li>
<li>SampleSnapshot：采样截图</li>
<li>ImageSprites：雪碧图</li>
<li>CoverBySnapshot：截图做封面</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取视频转码任务的查询结果，当任务类型为 Transcode 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask 视频转码任务的查询结果，当任务类型为 Transcode 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置视频转码任务的查询结果，当任务类型为 Transcode 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transcodeTask 视频转码任务的查询结果，当任务类型为 Transcode 时有效。
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
                     * 获取视频转动图任务的查询结果，当任务类型为 AnimatedGraphics 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnimatedGraphicTask 视频转动图任务的查询结果，当任务类型为 AnimatedGraphics 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置视频转动图任务的查询结果，当任务类型为 AnimatedGraphics 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _animatedGraphicTask 视频转动图任务的查询结果，当任务类型为 AnimatedGraphics 时有效。
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
                     * 获取对视频按时间点截图任务的查询结果，当任务类型为 SnapshotByTimeOffset 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask 对视频按时间点截图任务的查询结果，当任务类型为 SnapshotByTimeOffset 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置对视频按时间点截图任务的查询结果，当任务类型为 SnapshotByTimeOffset 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotByTimeOffsetTask 对视频按时间点截图任务的查询结果，当任务类型为 SnapshotByTimeOffset 时有效。
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
                     * 获取对视频采样截图任务的查询结果，当任务类型为 SampleSnapshot 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleSnapshotTask 对视频采样截图任务的查询结果，当任务类型为 SampleSnapshot 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置对视频采样截图任务的查询结果，当任务类型为 SampleSnapshot 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleSnapshotTask 对视频采样截图任务的查询结果，当任务类型为 SampleSnapshot 时有效。
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
                     * 获取对视频截雪碧图任务的查询结果，当任务类型为 ImageSprite 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageSpriteTask 对视频截雪碧图任务的查询结果，当任务类型为 ImageSprite 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置对视频截雪碧图任务的查询结果，当任务类型为 ImageSprite 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageSpriteTask 对视频截雪碧图任务的查询结果，当任务类型为 ImageSprite 时有效。
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
                     * 获取转自适应码流任务查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdaptiveDynamicStreamingTask 转自适应码流任务查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置转自适应码流任务查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adaptiveDynamicStreamingTask 转自适应码流任务查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
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

                private:

                    /**
                     * 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AnimatedGraphics：转动图</li>
<li>SnapshotByTimeOffset：时间点截图</li>
<li>SampleSnapshot：采样截图</li>
<li>ImageSprites：雪碧图</li>
<li>CoverBySnapshot：截图做封面</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频转码任务的查询结果，当任务类型为 Transcode 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 视频转动图任务的查询结果，当任务类型为 AnimatedGraphics 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * 对视频按时间点截图任务的查询结果，当任务类型为 SnapshotByTimeOffset 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 对视频采样截图任务的查询结果，当任务类型为 SampleSnapshot 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * 对视频截雪碧图任务的查询结果，当任务类型为 ImageSprite 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * 转自适应码流任务查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKRESULT_H_
