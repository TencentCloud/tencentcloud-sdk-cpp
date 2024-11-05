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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTask.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>
#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTask2017.h>
#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>
#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTask.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTask.h>
#include <tencentcloud/vod/v20180717/model/QualityEnhanceTask.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail返回参数结构体
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务。</li>
                     * @return TaskType 任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成；</li>
<li>ABORTED：已终止。</li>
                     * @return Status 任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成；</li>
<li>ABORTED：已终止。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return BeginProcessTime 任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return FinishTime 任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureTask 视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProcedureTask GetProcedureTask() const;

                    /**
                     * 判断参数 ProcedureTask 是否已赋值
                     * @return ProcedureTask 是否已赋值
                     * 
                     */
                    bool ProcedureTaskHasBeenSet() const;

                    /**
                     * 获取视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaTask 视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EditMediaTask GetEditMediaTask() const;

                    /**
                     * 判断参数 EditMediaTask 是否已赋值
                     * @return EditMediaTask 是否已赋值
                     * 
                     */
                    bool EditMediaTaskHasBeenSet() const;

                    /**
                     * 获取微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPublishTask 微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatPublishTask GetWechatPublishTask() const;

                    /**
                     * 判断参数 WechatPublishTask 是否已赋值
                     * @return WechatPublishTask 是否已赋值
                     * 
                     */
                    bool WechatPublishTaskHasBeenSet() const;

                    /**
                     * 获取制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComposeMediaTask 制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ComposeMediaTask GetComposeMediaTask() const;

                    /**
                     * 判断参数 ComposeMediaTask 是否已赋值
                     * @return ComposeMediaTask 是否已赋值
                     * 
                     */
                    bool ComposeMediaTaskHasBeenSet() const;

                    /**
                     * 获取视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitMediaTask 视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SplitMediaTask GetSplitMediaTask() const;

                    /**
                     * 判断参数 SplitMediaTask 是否已赋值
                     * @return SplitMediaTask 是否已赋值
                     * 
                     */
                    bool SplitMediaTaskHasBeenSet() const;

                    /**
                     * 获取微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatMiniProgramPublishTask 微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishTask() const;

                    /**
                     * 判断参数 WechatMiniProgramPublishTask 是否已赋值
                     * @return WechatMiniProgramPublishTask 是否已赋值
                     * 
                     */
                    bool WechatMiniProgramPublishTaskHasBeenSet() const;

                    /**
                     * 获取拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PullUploadTask 拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PullUploadTask GetPullUploadTask() const;

                    /**
                     * 判断参数 PullUploadTask 是否已赋值
                     * @return PullUploadTask 是否已赋值
                     * 
                     */
                    bool PullUploadTaskHasBeenSet() const;

                    /**
                     * 获取视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask 视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TranscodeTask2017 GetTranscodeTask() const;

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcatTask 视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConcatTask2017 GetConcatTask() const;

                    /**
                     * 判断参数 ConcatTask 是否已赋值
                     * @return ConcatTask 是否已赋值
                     * 
                     */
                    bool ConcatTaskHasBeenSet() const;

                    /**
                     * 获取视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClipTask 视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClipTask2017 GetClipTask() const;

                    /**
                     * 判断参数 ClipTask 是否已赋值
                     * @return ClipTask 是否已赋值
                     * 
                     */
                    bool ClipTaskHasBeenSet() const;

                    /**
                     * 获取截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateImageSpriteTask 截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteTask() const;

                    /**
                     * 判断参数 CreateImageSpriteTask 是否已赋值
                     * @return CreateImageSpriteTask 是否已赋值
                     * 
                     */
                    bool CreateImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask 视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveWatermarkTask 智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkTask() const;

                    /**
                     * 判断参数 RemoveWatermarkTask 是否已赋值
                     * @return RemoveWatermarkTask 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RebuildMediaTask 音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaTask() const;

                    /**
                     * 判断参数 RebuildMediaTask 是否已赋值
                     * @return RebuildMediaTask 是否已赋值
                     * 
                     */
                    bool RebuildMediaTaskHasBeenSet() const;

                    /**
                     * 获取提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractTraceWatermarkTask 提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkTask() const;

                    /**
                     * 判断参数 ExtractTraceWatermarkTask 是否已赋值
                     * @return ExtractTraceWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractTraceWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractCopyRightWatermarkTask 提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkTask() const;

                    /**
                     * 判断参数 ExtractCopyRightWatermarkTask 是否已赋值
                     * @return ExtractCopyRightWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractCopyRightWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewAudioVideoTask 音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoTask() const;

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                    /**
                     * 获取该字段已无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReduceMediaBitrateTask 该字段已无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateTask() const;

                    /**
                     * 判断参数 ReduceMediaBitrateTask 是否已赋值
                     * @return ReduceMediaBitrateTask 是否已赋值
                     * 
                     */
                    bool ReduceMediaBitrateTaskHasBeenSet() const;

                    /**
                     * 获取获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescribeFileAttributesTask 获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesTask() const;

                    /**
                     * 判断参数 DescribeFileAttributesTask 是否已赋值
                     * @return DescribeFileAttributesTask 是否已赋值
                     * 
                     */
                    bool DescribeFileAttributesTaskHasBeenSet() const;

                    /**
                     * 获取音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityInspectTask 音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityInspectTask GetQualityInspectTask() const;

                    /**
                     * 判断参数 QualityInspectTask 是否已赋值
                     * @return QualityInspectTask 是否已赋值
                     * 
                     */
                    bool QualityInspectTaskHasBeenSet() const;

                    /**
                     * 获取音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEnhanceTask 音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceTask() const;

                    /**
                     * 判断参数 QualityEnhanceTask 是否已赋值
                     * @return QualityEnhanceTask 是否已赋值
                     * 
                     */
                    bool QualityEnhanceTaskHasBeenSet() const;

                    /**
                     * 获取复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexAdaptiveDynamicStreamingTask 复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingTask() const;

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingTaskHasBeenSet() const;

                private:

                    /**
                     * 任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务状态，取值：
<li>WAITING：等待中；</li>
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成；</li>
<li>ABORTED：已终止。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务的创建时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureTask m_procedureTask;
                    bool m_procedureTaskHasBeenSet;

                    /**
                     * 视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * 微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatPublishTask m_wechatPublishTask;
                    bool m_wechatPublishTaskHasBeenSet;

                    /**
                     * 制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTask m_composeMediaTask;
                    bool m_composeMediaTaskHasBeenSet;

                    /**
                     * 视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitMediaTask m_splitMediaTask;
                    bool m_splitMediaTaskHasBeenSet;

                    /**
                     * 微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishTask;
                    bool m_wechatMiniProgramPublishTaskHasBeenSet;

                    /**
                     * 拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PullUploadTask m_pullUploadTask;
                    bool m_pullUploadTaskHasBeenSet;

                    /**
                     * 视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTask2017 m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConcatTask2017 m_concatTask;
                    bool m_concatTaskHasBeenSet;

                    /**
                     * 视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClipTask2017 m_clipTask;
                    bool m_clipTaskHasBeenSet;

                    /**
                     * 截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteTask;
                    bool m_createImageSpriteTaskHasBeenSet;

                    /**
                     * 视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveWatermarkTask m_removeWatermarkTask;
                    bool m_removeWatermarkTaskHasBeenSet;

                    /**
                     * 音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RebuildMediaTask m_rebuildMediaTask;
                    bool m_rebuildMediaTaskHasBeenSet;

                    /**
                     * 提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkTask;
                    bool m_extractTraceWatermarkTaskHasBeenSet;

                    /**
                     * 提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkTask;
                    bool m_extractCopyRightWatermarkTaskHasBeenSet;

                    /**
                     * 音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * 该字段已无效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateTask;
                    bool m_reduceMediaBitrateTaskHasBeenSet;

                    /**
                     * 获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeFileAttributesTask m_describeFileAttributesTask;
                    bool m_describeFileAttributesTaskHasBeenSet;

                    /**
                     * 音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityInspectTask m_qualityInspectTask;
                    bool m_qualityInspectTaskHasBeenSet;

                    /**
                     * 音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityEnhanceTask m_qualityEnhanceTask;
                    bool m_qualityEnhanceTaskHasBeenSet;

                    /**
                     * 复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingTask;
                    bool m_complexAdaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
