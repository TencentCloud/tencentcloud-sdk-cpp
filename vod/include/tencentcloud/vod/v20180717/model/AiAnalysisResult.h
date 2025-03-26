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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskFrameTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskHighlightResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * @return Type 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
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
                     * @param _type 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
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
                     * @return ClassificationTask 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
                     * @param _classificationTask 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
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
                     * @return CoverTask 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
                     * @param _coverTask 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
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
                     * @return TagTask 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
                     * @param _tagTask 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
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
                     * @return FrameTagTask 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
                     * @param _frameTagTask 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
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
                     * 获取视频内容分析智能精彩集锦任务的查询结果，当任务类型为 Highlight 时有效。
                     * @return HighlightTask 视频内容分析智能精彩集锦任务的查询结果，当任务类型为 Highlight 时有效。
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置视频内容分析智能精彩集锦任务的查询结果，当任务类型为 Highlight 时有效。
                     * @param _highlightTask 视频内容分析智能精彩集锦任务的查询结果，当任务类型为 Highlight 时有效。
                     * 
                     */
                    void SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask);

                    /**
                     * 判断参数 HighlightTask 是否已赋值
                     * @return HighlightTask 是否已赋值
                     * 
                     */
                    bool HighlightTaskHasBeenSet() const;

                private:

                    /**
                     * 任务的类型，可以取的值有：
<li>Classification：智能分类</li>
<li>Cover：智能封面</li>
<li>Tag：智能标签</li>
<li>FrameTag：智能按帧标签</li>
<li>Highlight：智能精彩集锦</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频内容分析智能分类任务的查询结果，当任务类型为 Classification 时有效。
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * 视频内容分析智能封面任务的查询结果，当任务类型为 Cover 时有效。
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * 视频内容分析智能标签任务的查询结果，当任务类型为 Tag 时有效。
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * 视频内容分析智能按帧标签任务的查询结果，当任务类型为 FrameTag 时有效。
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * 视频内容分析智能精彩集锦任务的查询结果，当任务类型为 Highlight 时有效。
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
