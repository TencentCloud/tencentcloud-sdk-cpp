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
                     * 获取任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
<li>DeLogo：智能擦除</li>
<li>Description：大模型摘要</li>
                     * @return Type 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
<li>DeLogo：智能擦除</li>
<li>Description：大模型摘要</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
<li>DeLogo：智能擦除</li>
<li>Description：大模型摘要</li>
                     * @param _type 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
<li>DeLogo：智能擦除</li>
<li>Description：大模型摘要</li>
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
                     * 获取视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationTask 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationTask 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
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
                     * 获取视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverTask 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverTask 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
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
                     * 获取视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagTask 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagTask 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
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
                     * 获取视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagTask 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagTask 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
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
                     * 获取视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighlightTask 视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlightTask 视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。
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
                     * 获取视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeLogoTask 视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskDelLogoResult GetDeLogoTask() const;

                    /**
                     * 设置视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deLogoTask 视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。
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
                     * 获取视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentTask 视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentTask 视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。
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
                     * 获取视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadTailTask 视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headTailTask 视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。
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
                     * 获取视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionTask 视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskDescriptionResult GetDescriptionTask() const;

                    /**
                     * 设置视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionTask 视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。
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
                     * 获取视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HorizontalToVerticalTask 视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult GetHorizontalToVerticalTask() const;

                    /**
                     * 设置视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _horizontalToVerticalTask 视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。
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

                private:

                    /**
                     * 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
<li>DeLogo：智能擦除</li>
<li>Description：大模型摘要</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * 视频内容分析集锦任务的查询结果，当任务类型为 Highlight时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                    /**
                     * 视频内容分析智能擦除任务的查询结果，当任务类型为 DeLogo 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskDelLogoResult m_deLogoTask;
                    bool m_deLogoTaskHasBeenSet;

                    /**
                     * 视频内容分析拆条任务的查询结果，当任务类型为 SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * 视频内容分析片头片尾任务的查询结果，当任务类型为 HeadTailRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * 视频内容分析摘要任务的查询结果，当任务类型为 Description 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskDescriptionResult m_descriptionTask;
                    bool m_descriptionTaskHasBeenSet;

                    /**
                     * 视频内容分析横转竖任务的查询结果，当任务类型为 HorizontalToVertical 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskHorizontalToVerticalResult m_horizontalToVerticalTask;
                    bool m_horizontalToVerticalTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
