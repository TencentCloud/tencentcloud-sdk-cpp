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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskFrameTagResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDelLogoResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskSegmentResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHeadTailResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDescriptionResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHorizontalToVerticalResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDubbingResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoRemakeResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoComprehensionResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCutoutResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskReelResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能分析结果
                */
                class AiAnalysisResult : public AbstractModel
                {
                public:
                    AiAnalysisResult();
                    ~AiAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务的类型，可以取的值有：</p><li>Classification：智能分类</li><li>Cover：智能封面</li><li>Tag：智能标签</li><li>FrameTag：智能按帧标签</li><li>Highlight：智能精彩集锦</li><li>DeLogo：智能擦除</li><li>Description：大模型摘要</li><li>Dubbing：智能译制</li><li>VideoRemake: 视频去重</li><li>VideoComprehension: 视频（音频）理解</li><li>Cutout：视频抠图</li><li>Reel：智能成片</li>
                     * @return Type <p>任务的类型，可以取的值有：</p><li>Classification：智能分类</li><li>Cover：智能封面</li><li>Tag：智能标签</li><li>FrameTag：智能按帧标签</li><li>Highlight：智能精彩集锦</li><li>DeLogo：智能擦除</li><li>Description：大模型摘要</li><li>Dubbing：智能译制</li><li>VideoRemake: 视频去重</li><li>VideoComprehension: 视频（音频）理解</li><li>Cutout：视频抠图</li><li>Reel：智能成片</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>任务的类型，可以取的值有：</p><li>Classification：智能分类</li><li>Cover：智能封面</li><li>Tag：智能标签</li><li>FrameTag：智能按帧标签</li><li>Highlight：智能精彩集锦</li><li>DeLogo：智能擦除</li><li>Description：大模型摘要</li><li>Dubbing：智能译制</li><li>VideoRemake: 视频去重</li><li>VideoComprehension: 视频（音频）理解</li><li>Cutout：视频抠图</li><li>Reel：智能成片</li>
                     * @param _type <p>任务的类型，可以取的值有：</p><li>Classification：智能分类</li><li>Cover：智能封面</li><li>Tag：智能标签</li><li>FrameTag：智能按帧标签</li><li>Highlight：智能精彩集锦</li><li>DeLogo：智能擦除</li><li>Description：大模型摘要</li><li>Dubbing：智能译制</li><li>VideoRemake: 视频去重</li><li>VideoComprehension: 视频（音频）理解</li><li>Cutout：视频抠图</li><li>Reel：智能成片</li>
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
                     * 获取<p>视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationTask <p>视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置<p>视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationTask <p>视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask);

                    /**
                     * 判断参数 ClassificationTask 是否已赋值
                     * @return ClassificationTask 是否已赋值
                     * 
                     */
                    bool ClassificationTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverTask <p>视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置<p>视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverTask <p>视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask);

                    /**
                     * 判断参数 CoverTask 是否已赋值
                     * @return CoverTask 是否已赋值
                     * 
                     */
                    bool CoverTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagTask <p>视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置<p>视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagTask <p>视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagTask(const AiAnalysisTaskTagResult& _tagTask);

                    /**
                     * 判断参数 TagTask 是否已赋值
                     * @return TagTask 是否已赋值
                     * 
                     */
                    bool TagTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagTask <p>视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置<p>视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagTask <p>视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask);

                    /**
                     * 判断参数 FrameTagTask 是否已赋值
                     * @return FrameTagTask 是否已赋值
                     * 
                     */
                    bool FrameTagTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighlightTask <p>视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置<p>视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlightTask <p>视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask);

                    /**
                     * 判断参数 HighlightTask 是否已赋值
                     * @return HighlightTask 是否已赋值
                     * 
                     */
                    bool HighlightTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeLogoTask <p>视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskDelLogoResult GetDeLogoTask() const;

                    /**
                     * 设置<p>视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deLogoTask <p>视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeLogoTask(const AiAnalysisTaskDelLogoResult& _deLogoTask);

                    /**
                     * 判断参数 DeLogoTask 是否已赋值
                     * @return DeLogoTask 是否已赋值
                     * 
                     */
                    bool DeLogoTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentTask <p>视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置<p>视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentTask <p>视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentTask(const AiAnalysisTaskSegmentResult& _segmentTask);

                    /**
                     * 判断参数 SegmentTask 是否已赋值
                     * @return SegmentTask 是否已赋值
                     * 
                     */
                    bool SegmentTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadTailTask <p>视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置<p>视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headTailTask <p>视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadTailTask(const AiAnalysisTaskHeadTailResult& _headTailTask);

                    /**
                     * 判断参数 HeadTailTask 是否已赋值
                     * @return HeadTailTask 是否已赋值
                     * 
                     */
                    bool HeadTailTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionTask <p>视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskDescriptionResult GetDescriptionTask() const;

                    /**
                     * 设置<p>视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionTask <p>视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionTask(const AiAnalysisTaskDescriptionResult& _descriptionTask);

                    /**
                     * 判断参数 DescriptionTask 是否已赋值
                     * @return DescriptionTask 是否已赋值
                     * 
                     */
                    bool DescriptionTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorizontalToVerticalTask <p>视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult GetHorizontalToVerticalTask() const;

                    /**
                     * 设置<p>视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _horizontalToVerticalTask <p>视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHorizontalToVerticalTask(const AiAnalysisTaskHorizontalToVerticalResult& _horizontalToVerticalTask);

                    /**
                     * 判断参数 HorizontalToVerticalTask 是否已赋值
                     * @return HorizontalToVerticalTask 是否已赋值
                     * 
                     */
                    bool HorizontalToVerticalTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析译制任务的查询结果，当任务类型为 Dubbing 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DubbingTask <p>视频内容分析译制任务的查询结果，当任务类型为 Dubbing 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskDubbingResult GetDubbingTask() const;

                    /**
                     * 设置<p>视频内容分析译制任务的查询结果，当任务类型为 Dubbing 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dubbingTask <p>视频内容分析译制任务的查询结果，当任务类型为 Dubbing 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDubbingTask(const AiAnalysisTaskDubbingResult& _dubbingTask);

                    /**
                     * 判断参数 DubbingTask 是否已赋值
                     * @return DubbingTask 是否已赋值
                     * 
                     */
                    bool DubbingTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析去重任务的查询结果，当任务类型为 VideoRemake 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoRemakeTask <p>视频内容分析去重任务的查询结果，当任务类型为 VideoRemake 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskVideoRemakeResult GetVideoRemakeTask() const;

                    /**
                     * 设置<p>视频内容分析去重任务的查询结果，当任务类型为 VideoRemake 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoRemakeTask <p>视频内容分析去重任务的查询结果，当任务类型为 VideoRemake 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoRemakeTask(const AiAnalysisTaskVideoRemakeResult& _videoRemakeTask);

                    /**
                     * 判断参数 VideoRemakeTask 是否已赋值
                     * @return VideoRemakeTask 是否已赋值
                     * 
                     */
                    bool VideoRemakeTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频（音频）理解任务的查询结果，当任务类型为 VideoComprehension 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoComprehensionTask <p>视频（音频）理解任务的查询结果，当任务类型为 VideoComprehension 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionResult GetVideoComprehensionTask() const;

                    /**
                     * 设置<p>视频（音频）理解任务的查询结果，当任务类型为 VideoComprehension 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoComprehensionTask <p>视频（音频）理解任务的查询结果，当任务类型为 VideoComprehension 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoComprehensionTask(const AiAnalysisTaskVideoComprehensionResult& _videoComprehensionTask);

                    /**
                     * 判断参数 VideoComprehensionTask 是否已赋值
                     * @return VideoComprehensionTask 是否已赋值
                     * 
                     */
                    bool VideoComprehensionTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析智能抠图任务的查询结果，当任务类型为Cutout时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CutoutTask <p>视频内容分析智能抠图任务的查询结果，当任务类型为Cutout时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskCutoutResult GetCutoutTask() const;

                    /**
                     * 设置<p>视频内容分析智能抠图任务的查询结果，当任务类型为Cutout时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cutoutTask <p>视频内容分析智能抠图任务的查询结果，当任务类型为Cutout时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCutoutTask(const AiAnalysisTaskCutoutResult& _cutoutTask);

                    /**
                     * 判断参数 CutoutTask 是否已赋值
                     * @return CutoutTask 是否已赋值
                     * 
                     */
                    bool CutoutTaskHasBeenSet() const;

                    /**
                     * 获取<p>视频内容分析AI解说二创任务的查询结果，当任务类型为Reel时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReelTask <p>视频内容分析AI解说二创任务的查询结果，当任务类型为Reel时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskReelResult GetReelTask() const;

                    /**
                     * 设置<p>视频内容分析AI解说二创任务的查询结果，当任务类型为Reel时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reelTask <p>视频内容分析AI解说二创任务的查询结果，当任务类型为Reel时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReelTask(const AiAnalysisTaskReelResult& _reelTask);

                    /**
                     * 判断参数 ReelTask 是否已赋值
                     * @return ReelTask 是否已赋值
                     * 
                     */
                    bool ReelTaskHasBeenSet() const;

                    /**
                     * 获取<p>智能分析通用任务的查询结果，当任务类型为Generic时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GenericTask <p>智能分析通用任务的查询结果，当任务类型为Generic时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskGenericResult GetGenericTask() const;

                    /**
                     * 设置<p>智能分析通用任务的查询结果，当任务类型为Generic时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _genericTask <p>智能分析通用任务的查询结果，当任务类型为Generic时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGenericTask(const AiAnalysisTaskGenericResult& _genericTask);

                    /**
                     * 判断参数 GenericTask 是否已赋值
                     * @return GenericTask 是否已赋值
                     * 
                     */
                    bool GenericTaskHasBeenSet() const;

                private:

                    /**
                     * <p>任务的类型，可以取的值有：</p><li>Classification：智能分类</li><li>Cover：智能封面</li><li>Tag：智能标签</li><li>FrameTag：智能按帧标签</li><li>Highlight：智能精彩集锦</li><li>DeLogo：智能擦除</li><li>Description：大模型摘要</li><li>Dubbing：智能译制</li><li>VideoRemake: 视频去重</li><li>VideoComprehension: 视频（音频）理解</li><li>Cutout：视频抠图</li><li>Reel：智能成片</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * <p>视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * <p>视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * <p>视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * <p>视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                    /**
                     * <p>视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskDelLogoResult m_deLogoTask;
                    bool m_deLogoTaskHasBeenSet;

                    /**
                     * <p>视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * <p>视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * <p>视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskDescriptionResult m_descriptionTask;
                    bool m_descriptionTaskHasBeenSet;

                    /**
                     * <p>视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHorizontalToVerticalResult m_horizontalToVerticalTask;
                    bool m_horizontalToVerticalTaskHasBeenSet;

                    /**
                     * <p>视频内容分析译制任务的查询结果，当任务类型为 Dubbing 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskDubbingResult m_dubbingTask;
                    bool m_dubbingTaskHasBeenSet;

                    /**
                     * <p>视频内容分析去重任务的查询结果，当任务类型为 VideoRemake 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskVideoRemakeResult m_videoRemakeTask;
                    bool m_videoRemakeTaskHasBeenSet;

                    /**
                     * <p>视频（音频）理解任务的查询结果，当任务类型为 VideoComprehension 时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskVideoComprehensionResult m_videoComprehensionTask;
                    bool m_videoComprehensionTaskHasBeenSet;

                    /**
                     * <p>视频内容分析智能抠图任务的查询结果，当任务类型为Cutout时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskCutoutResult m_cutoutTask;
                    bool m_cutoutTaskHasBeenSet;

                    /**
                     * <p>视频内容分析AI解说二创任务的查询结果，当任务类型为Reel时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskReelResult m_reelTask;
                    bool m_reelTaskHasBeenSet;

                    /**
                     * <p>智能分析通用任务的查询结果，当任务类型为Generic时有效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskGenericResult m_genericTask;
                    bool m_genericTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
