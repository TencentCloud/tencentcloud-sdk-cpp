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
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPS.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsync.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTask.h>


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
                     * 获取<p>任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务；</li><li>ProcessMediaByMPS：MPS 视频处理任务；</li><li>AigcImageTask：AIGC 生图任务；</li><li>SceneAigcImageTask：场景化 AIGC 生图任务；</li><li>AigcVideoTask：AIGC 生视频任务；</li><li>ImportMediaKnowledge：导入媒体知识任务。</li><li>SceneAigcVideoTask：场景化 AIGC 生视频任务；</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> CreateAigcAdvancedCustomElementTask：创建自定义主体任务</li><li>CreateAigcCustomVoiceTask：创建自定义音色任务</li><li>CreateAigcSubjectTask：创建主体任务</li><li>AigcVideoRedrawTask：AIGC 视频转绘任务</li></p>
                     * @return TaskType <p>任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务；</li><li>ProcessMediaByMPS：MPS 视频处理任务；</li><li>AigcImageTask：AIGC 生图任务；</li><li>SceneAigcImageTask：场景化 AIGC 生图任务；</li><li>AigcVideoTask：AIGC 生视频任务；</li><li>ImportMediaKnowledge：导入媒体知识任务。</li><li>SceneAigcVideoTask：场景化 AIGC 生视频任务；</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> CreateAigcAdvancedCustomElementTask：创建自定义主体任务</li><li>CreateAigcCustomVoiceTask：创建自定义音色任务</li><li>CreateAigcSubjectTask：创建主体任务</li><li>AigcVideoRedrawTask：AIGC 视频转绘任务</li></p>
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
                     * 获取<p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成；</li><li>ABORTED：已终止。</li>
                     * @return Status <p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成；</li><li>ABORTED：已终止。</li>
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
                     * 获取<p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
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
                     * 获取<p>任务开始执行的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return BeginProcessTime <p>任务开始执行的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
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
                     * 获取<p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return FinishTime <p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
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
                     * 获取<p>视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureTask <p>视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。</p>
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
                     * 获取<p>视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditMediaTask <p>视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。</p>
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
                     * 获取<p>微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatPublishTask <p>微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。</p>
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
                     * 获取<p>制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComposeMediaTask <p>制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。</p>
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
                     * 获取<p>视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitMediaTask <p>视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。</p>
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
                     * 获取<p>微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatMiniProgramPublishTask <p>微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。</p>
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
                     * 获取<p>拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PullUploadTask <p>拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。</p>
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
                     * 获取<p>视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranscodeTask <p>视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。</p>
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
                     * 获取<p>视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcatTask <p>视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。</p>
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
                     * 获取<p>视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClipTask <p>视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。</p>
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
                     * 获取<p>截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateImageSpriteTask <p>截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。</p>
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
                     * 获取<p>视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotByTimeOffsetTask <p>视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。</p>
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
                     * 获取<p>智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveWatermarkTask <p>智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。</p>
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
                     * 获取<p>音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RebuildMediaTask <p>音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。</p>
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
                     * 获取<p>提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractTraceWatermarkTask <p>提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。</p>
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
                     * 获取<p>提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractCopyRightWatermarkTask <p>提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。</p>
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
                     * 获取<p>音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewAudioVideoTask <p>音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。</p>
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
                     * 获取<p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReduceMediaBitrateTask <p>该字段已无效。</p>
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
                     * 获取<p>获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescribeFileAttributesTask <p>获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。</p>
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
                     * 获取<p>音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityInspectTask <p>音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。</p>
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
                     * 获取<p>音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEnhanceTask <p>音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。</p>
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
                     * 获取<p>复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexAdaptiveDynamicStreamingTask <p>复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。</p>
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

                    /**
                     * 获取<p>MPS 视频处理任务信息，仅当 TaskType 为 ProcessMediaByMPS，该字段有值。</p>
                     * @return ProcessMediaByMPSTask <p>MPS 视频处理任务信息，仅当 TaskType 为 ProcessMediaByMPS，该字段有值。</p>
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSTask() const;

                    /**
                     * 判断参数 ProcessMediaByMPSTask 是否已赋值
                     * @return ProcessMediaByMPSTask 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生图任务信息，仅当 TaskType 为 AigcImageTask，该字段有值。</p>
                     * @return AigcImageTask <p>AIGC 生图任务信息，仅当 TaskType 为 AigcImageTask，该字段有值。</p>
                     * 
                     */
                    AigcImageTask GetAigcImageTask() const;

                    /**
                     * 判断参数 AigcImageTask 是否已赋值
                     * @return AigcImageTask 是否已赋值
                     * 
                     */
                    bool AigcImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生视频任务信息，仅当 TaskType 为 AigcVideoTask，该字段有值。</p>
                     * @return AigcVideoTask <p>AIGC 生视频任务信息，仅当 TaskType 为 AigcVideoTask，该字段有值。</p>
                     * 
                     */
                    AigcVideoTask GetAigcVideoTask() const;

                    /**
                     * 判断参数 AigcVideoTask 是否已赋值
                     * @return AigcVideoTask 是否已赋值
                     * 
                     */
                    bool AigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>媒体导入知识库任务信息，仅当 TaskType 为 ImportMediaKnowledge，该字段有值。</p>
                     * @return ImportMediaKnowledge <p>媒体导入知识库任务信息，仅当 TaskType 为 ImportMediaKnowledge，该字段有值。</p>
                     * 
                     */
                    ImportMediaKnowledgeTask GetImportMediaKnowledge() const;

                    /**
                     * 判断参数 ImportMediaKnowledge 是否已赋值
                     * @return ImportMediaKnowledge 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeHasBeenSet() const;

                    /**
                     * 获取<p>场景化 AIGC 生图任务信息，仅当 TaskType 为 SceneAigcImageTask，该字段有值。</p>
                     * @return SceneAigcImageTask <p>场景化 AIGC 生图任务信息，仅当 TaskType 为 SceneAigcImageTask，该字段有值。</p>
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageTask() const;

                    /**
                     * 判断参数 SceneAigcImageTask 是否已赋值
                     * @return SceneAigcImageTask 是否已赋值
                     * 
                     */
                    bool SceneAigcImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>场景化 AIGC 生视频任务信息，仅当 TaskType 为 SceneAigcVideoTask，该字段有值。</p>
                     * @return SceneAigcVideoTask <p>场景化 AIGC 生视频任务信息，仅当 TaskType 为 SceneAigcVideoTask，该字段有值。</p>
                     * 
                     */
                    SceneAigcVideoTask GetSceneAigcVideoTask() const;

                    /**
                     * 判断参数 SceneAigcVideoTask 是否已赋值
                     * @return SceneAigcVideoTask 是否已赋值
                     * 
                     */
                    bool SceneAigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>图像异步处理任务信息，仅当 TaskType 为 ProcessImageAsync，该字段有值。</p>
                     * @return ProcessImageAsyncTask <p>图像异步处理任务信息，仅当 TaskType 为 ProcessImageAsync，该字段有值。</p>
                     * 
                     */
                    ProcessImageAsync GetProcessImageAsyncTask() const;

                    /**
                     * 判断参数 ProcessImageAsyncTask 是否已赋值
                     * @return ProcessImageAsyncTask 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>提取数字水印任务信息，仅当 TaskType 为 ExtractBlindWatermark，该字段有值。</p>
                     * @return ExtractBlindWatermarkTask <p>提取数字水印任务信息，仅当 TaskType 为 ExtractBlindWatermark，该字段有值。</p>
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkTask() const;

                    /**
                     * 判断参数 ExtractBlindWatermarkTask 是否已赋值
                     * @return ExtractBlindWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取<p>创建自定义主体信息，仅当 TaskType 为 CreateAigcAdvancedCustomElement，该字段有值。</p>
                     * @return CreateAigcAdvancedCustomElementTask <p>创建自定义主体信息，仅当 TaskType 为 CreateAigcAdvancedCustomElement，该字段有值。</p>
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementTask() const;

                    /**
                     * 判断参数 CreateAigcAdvancedCustomElementTask 是否已赋值
                     * @return CreateAigcAdvancedCustomElementTask 是否已赋值
                     * 
                     */
                    bool CreateAigcAdvancedCustomElementTaskHasBeenSet() const;

                    /**
                     * 获取<p>创建自定义音色信息，仅当 TaskType 为 CreateAigcCustomVoice，该字段有值。</p>
                     * @return CreateAigcCustomVoiceTask <p>创建自定义音色信息，仅当 TaskType 为 CreateAigcCustomVoice，该字段有值。</p>
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceTask() const;

                    /**
                     * 判断参数 CreateAigcCustomVoiceTask 是否已赋值
                     * @return CreateAigcCustomVoiceTask 是否已赋值
                     * 
                     */
                    bool CreateAigcCustomVoiceTaskHasBeenSet() const;

                    /**
                     * 获取<p>创建主体信息，仅当 TaskType 为 CreateAigcSubject，该字段有值。</p>
                     * @return CreateAigcSubjectTask <p>创建主体信息，仅当 TaskType 为 CreateAigcSubject，该字段有值。</p>
                     * 
                     */
                    CreateAigcSubjectTask GetCreateAigcSubjectTask() const;

                    /**
                     * 判断参数 CreateAigcSubjectTask 是否已赋值
                     * @return CreateAigcSubjectTask 是否已赋值
                     * 
                     */
                    bool CreateAigcSubjectTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 视频转绘信息，仅当 TaskType 为AigcVideoRedrawTask，该字段有值。</p>
                     * @return AigcVideoRedrawTask <p>AIGC 视频转绘信息，仅当 TaskType 为AigcVideoRedrawTask，该字段有值。</p>
                     * 
                     */
                    AigcVideoRedrawTask GetAigcVideoRedrawTask() const;

                    /**
                     * 判断参数 AigcVideoRedrawTask 是否已赋值
                     * @return AigcVideoRedrawTask 是否已赋值
                     * 
                     */
                    bool AigcVideoRedrawTaskHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型，取值：<li>Procedure：视频处理任务；</li><li>EditMedia：视频编辑任务；</li><li>SplitMedia：视频拆条任务；</li><li>ComposeMedia：制作媒体文件任务；</li><li>WechatPublish：微信发布任务；</li><li>WechatMiniProgramPublish：微信小程序视频发布任务；</li><li>PullUpload：拉取上传媒体文件任务；</li><li>FastClipMedia：快速剪辑任务；</li><li>RemoveWatermarkTask：智能去除水印任务；</li><li>DescribeFileAttributesTask：获取文件属性任务；</li><li>RebuildMedia：音画质重生任务（不推荐使用）；</li><li>ReviewAudioVideo：音视频审核任务；</li><li>ExtractTraceWatermark：提取溯源水印任务；</li><li>ExtractCopyRightWatermark：提取版权水印任务；</li><li>QualityInspect：音画质检测任务；</li><li>QualityEnhance：音画质重生任务；</li><li>ComplexAdaptiveDynamicStreaming：复杂自适应码流任务；</li><li>ProcessMediaByMPS：MPS 视频处理任务；</li><li>AigcImageTask：AIGC 生图任务；</li><li>SceneAigcImageTask：场景化 AIGC 生图任务；</li><li>AigcVideoTask：AIGC 生视频任务；</li><li>ImportMediaKnowledge：导入媒体知识任务。</li><li>SceneAigcVideoTask：场景化 AIGC 生视频任务；</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> ExtractBlindWatermark：提取数字水印任务。</li><li> CreateAigcAdvancedCustomElementTask：创建自定义主体任务</li><li>CreateAigcCustomVoiceTask：创建自定义音色任务</li><li>CreateAigcSubjectTask：创建主体任务</li><li>AigcVideoRedrawTask：AIGC 视频转绘任务</li></p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成；</li><li>ABORTED：已终止。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务开始执行的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * <p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>视频处理任务信息，仅当 TaskType 为 Procedure，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureTask m_procedureTask;
                    bool m_procedureTaskHasBeenSet;

                    /**
                     * <p>视频编辑任务信息，仅当 TaskType 为 EditMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * <p>微信发布任务信息，仅当 TaskType 为 WechatPublish，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatPublishTask m_wechatPublishTask;
                    bool m_wechatPublishTaskHasBeenSet;

                    /**
                     * <p>制作媒体文件任务信息，仅当 TaskType 为 ComposeMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTask m_composeMediaTask;
                    bool m_composeMediaTaskHasBeenSet;

                    /**
                     * <p>视频拆条任务信息，仅当 TaskType 为 SplitMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SplitMediaTask m_splitMediaTask;
                    bool m_splitMediaTaskHasBeenSet;

                    /**
                     * <p>微信小程序发布任务信息，仅当 TaskType 为 WechatMiniProgramPublish，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishTask;
                    bool m_wechatMiniProgramPublishTaskHasBeenSet;

                    /**
                     * <p>拉取上传媒体文件任务信息，仅当 TaskType 为 PullUpload，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PullUploadTask m_pullUploadTask;
                    bool m_pullUploadTaskHasBeenSet;

                    /**
                     * <p>视频转码任务信息，仅当 TaskType 为 Transcode，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TranscodeTask2017 m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * <p>视频拼接任务信息，仅当 TaskType 为 Concat，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConcatTask2017 m_concatTask;
                    bool m_concatTaskHasBeenSet;

                    /**
                     * <p>视频剪辑任务信息，仅当 TaskType 为 Clip，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClipTask2017 m_clipTask;
                    bool m_clipTaskHasBeenSet;

                    /**
                     * <p>截取雪碧图任务信息，仅当 TaskType 为 ImageSprite，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteTask;
                    bool m_createImageSpriteTaskHasBeenSet;

                    /**
                     * <p>视频指定时间点截图任务信息，仅当 TaskType 为 SnapshotByTimeOffset，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * <p>智能去除水印任务信息，仅当 TaskType 为 RemoveWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveWatermarkTask m_removeWatermarkTask;
                    bool m_removeWatermarkTaskHasBeenSet;

                    /**
                     * <p>音画质重生任务信息，仅当 TaskType 为 RebuildMedia，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RebuildMediaTask m_rebuildMediaTask;
                    bool m_rebuildMediaTaskHasBeenSet;

                    /**
                     * <p>提取溯源水印任务信息，仅当 TaskType 为 ExtractTraceWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkTask;
                    bool m_extractTraceWatermarkTaskHasBeenSet;

                    /**
                     * <p>提取版权水印任务信息，仅当 TaskType 为 ExtractCopyRightWatermark，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkTask;
                    bool m_extractCopyRightWatermarkTaskHasBeenSet;

                    /**
                     * <p>音视频审核任务信息，仅当 TaskType 为 ReviewAudioVideo，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>该字段已无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateTask;
                    bool m_reduceMediaBitrateTaskHasBeenSet;

                    /**
                     * <p>获取文件属性任务信息，仅当 TaskType 为 DescribeFileAttributes，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeFileAttributesTask m_describeFileAttributesTask;
                    bool m_describeFileAttributesTaskHasBeenSet;

                    /**
                     * <p>音画质检测任务信息，仅当 TaskType 为 QualityInspect 时该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityInspectTask m_qualityInspectTask;
                    bool m_qualityInspectTaskHasBeenSet;

                    /**
                     * <p>音画质重生任务信息，仅当 TaskType 为 QualityEnhance，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityEnhanceTask m_qualityEnhanceTask;
                    bool m_qualityEnhanceTaskHasBeenSet;

                    /**
                     * <p>复杂自适应码流任务信息，仅当 TaskType 为 ComplexAdaptiveDynamicStreaming，该字段有值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingTask;
                    bool m_complexAdaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * <p>MPS 视频处理任务信息，仅当 TaskType 为 ProcessMediaByMPS，该字段有值。</p>
                     */
                    ProcessMediaByMPS m_processMediaByMPSTask;
                    bool m_processMediaByMPSTaskHasBeenSet;

                    /**
                     * <p>AIGC 生图任务信息，仅当 TaskType 为 AigcImageTask，该字段有值。</p>
                     */
                    AigcImageTask m_aigcImageTask;
                    bool m_aigcImageTaskHasBeenSet;

                    /**
                     * <p>AIGC 生视频任务信息，仅当 TaskType 为 AigcVideoTask，该字段有值。</p>
                     */
                    AigcVideoTask m_aigcVideoTask;
                    bool m_aigcVideoTaskHasBeenSet;

                    /**
                     * <p>媒体导入知识库任务信息，仅当 TaskType 为 ImportMediaKnowledge，该字段有值。</p>
                     */
                    ImportMediaKnowledgeTask m_importMediaKnowledge;
                    bool m_importMediaKnowledgeHasBeenSet;

                    /**
                     * <p>场景化 AIGC 生图任务信息，仅当 TaskType 为 SceneAigcImageTask，该字段有值。</p>
                     */
                    SceneAigcImageTask m_sceneAigcImageTask;
                    bool m_sceneAigcImageTaskHasBeenSet;

                    /**
                     * <p>场景化 AIGC 生视频任务信息，仅当 TaskType 为 SceneAigcVideoTask，该字段有值。</p>
                     */
                    SceneAigcVideoTask m_sceneAigcVideoTask;
                    bool m_sceneAigcVideoTaskHasBeenSet;

                    /**
                     * <p>图像异步处理任务信息，仅当 TaskType 为 ProcessImageAsync，该字段有值。</p>
                     */
                    ProcessImageAsync m_processImageAsyncTask;
                    bool m_processImageAsyncTaskHasBeenSet;

                    /**
                     * <p>提取数字水印任务信息，仅当 TaskType 为 ExtractBlindWatermark，该字段有值。</p>
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkTask;
                    bool m_extractBlindWatermarkTaskHasBeenSet;

                    /**
                     * <p>创建自定义主体信息，仅当 TaskType 为 CreateAigcAdvancedCustomElement，该字段有值。</p>
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementTask;
                    bool m_createAigcAdvancedCustomElementTaskHasBeenSet;

                    /**
                     * <p>创建自定义音色信息，仅当 TaskType 为 CreateAigcCustomVoice，该字段有值。</p>
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceTask;
                    bool m_createAigcCustomVoiceTaskHasBeenSet;

                    /**
                     * <p>创建主体信息，仅当 TaskType 为 CreateAigcSubject，该字段有值。</p>
                     */
                    CreateAigcSubjectTask m_createAigcSubjectTask;
                    bool m_createAigcSubjectTaskHasBeenSet;

                    /**
                     * <p>AIGC 视频转绘信息，仅当 TaskType 为AigcVideoRedrawTask，该字段有值。</p>
                     */
                    AigcVideoRedrawTask m_aigcVideoRedrawTask;
                    bool m_aigcVideoRedrawTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
