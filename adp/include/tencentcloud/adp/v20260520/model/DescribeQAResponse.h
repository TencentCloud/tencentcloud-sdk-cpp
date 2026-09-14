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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/QASegmentHighlight.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestion.h>
#include <tencentcloud/adp/v20260520/model/QASummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeQA返回参数结构体
                */
                class DescribeQAResponse : public AbstractModel
                {
                public:
                    DescribeQAResponse();
                    ~DescribeQAResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分片高亮信息</p>
                     * @return HighlightList <p>分片高亮信息</p>
                     * 
                     */
                    std::vector<QASegmentHighlight> GetHighlightList() const;

                    /**
                     * 判断参数 HighlightList 是否已赋值
                     * @return HighlightList 是否已赋值
                     * 
                     */
                    bool HighlightListHasBeenSet() const;

                    /**
                     * 获取<p>分片内容</p>
                     * @return PageContent <p>分片内容</p>
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取<p>问题描述</p>
                     * @return QuestionDescription <p>问题描述</p>
                     * 
                     */
                    std::string GetQuestionDescription() const;

                    /**
                     * 判断参数 QuestionDescription 是否已赋值
                     * @return QuestionDescription 是否已赋值
                     * 
                     */
                    bool QuestionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>相似问列表</p>
                     * @return SimilarQuestionList <p>相似问列表</p>
                     * 
                     */
                    std::vector<SimilarQuestion> GetSimilarQuestionList() const;

                    /**
                     * 判断参数 SimilarQuestionList 是否已赋值
                     * @return SimilarQuestionList 是否已赋值
                     * 
                     */
                    bool SimilarQuestionListHasBeenSet() const;

                    /**
                     * 获取<p>基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary <p>基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QASummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * <p>分片高亮信息</p>
                     */
                    std::vector<QASegmentHighlight> m_highlightList;
                    bool m_highlightListHasBeenSet;

                    /**
                     * <p>分片内容</p>
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * <p>问题描述</p>
                     */
                    std::string m_questionDescription;
                    bool m_questionDescriptionHasBeenSet;

                    /**
                     * <p>相似问列表</p>
                     */
                    std::vector<SimilarQuestion> m_similarQuestionList;
                    bool m_similarQuestionListHasBeenSet;

                    /**
                     * <p>基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QASummary m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_
