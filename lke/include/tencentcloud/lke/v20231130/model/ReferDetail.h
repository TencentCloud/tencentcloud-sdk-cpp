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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Highlight.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 引用来源详情
                */
                class ReferDetail : public AbstractModel
                {
                public:
                    ReferDetail();
                    ~ReferDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferBizId 引用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReferBizId() const;

                    /**
                     * 设置引用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referBizId 引用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferBizId(const std::string& _referBizId);

                    /**
                     * 判断参数 ReferBizId 是否已赋值
                     * @return ReferBizId 是否已赋值
                     * 
                     */
                    bool ReferBizIdHasBeenSet() const;

                    /**
                     * 获取文档类型 (1 QA, 2 文档段)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocType 文档类型 (1 QA, 2 文档段)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDocType() const;

                    /**
                     * 设置文档类型 (1 QA, 2 文档段)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docType 文档类型 (1 QA, 2 文档段)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocType(const uint64_t& _docType);

                    /**
                     * 判断参数 DocType 是否已赋值
                     * @return DocType 是否已赋值
                     * 
                     */
                    bool DocTypeHasBeenSet() const;

                    /**
                     * 获取文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocName 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docName 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocName(const std::string& _docName);

                    /**
                     * 判断参数 DocName 是否已赋值
                     * @return DocName 是否已赋值
                     * 
                     */
                    bool DocNameHasBeenSet() const;

                    /**
                     * 获取分片内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageContent 分片内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 设置分片内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageContent 分片内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageContent(const std::string& _pageContent);

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 问题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question 问题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer 答案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer 答案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mark 标记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMark() const;

                    /**
                     * 设置标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mark 标记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMark(const uint64_t& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取分片高亮内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Highlights 分片高亮内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Highlight> GetHighlights() const;

                    /**
                     * 设置分片高亮内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlights 分片高亮内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighlights(const std::vector<Highlight>& _highlights);

                    /**
                     * 判断参数 Highlights 是否已赋值
                     * @return Highlights 是否已赋值
                     * 
                     */
                    bool HighlightsHasBeenSet() const;

                    /**
                     * 获取原始内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgData 原始内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 设置原始内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgData 原始内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgData(const std::string& _orgData);

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取页码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageInfos 页码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPageInfos() const;

                    /**
                     * 设置页码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageInfos 页码信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageInfos(const std::vector<uint64_t>& _pageInfos);

                    /**
                     * 判断参数 PageInfos 是否已赋值
                     * @return PageInfos 是否已赋值
                     * 
                     */
                    bool PageInfosHasBeenSet() const;

                    /**
                     * 获取sheet信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SheetInfos sheet信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSheetInfos() const;

                    /**
                     * 设置sheet信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sheetInfos sheet信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSheetInfos(const std::vector<std::string>& _sheetInfos);

                    /**
                     * 判断参数 SheetInfos 是否已赋值
                     * @return SheetInfos 是否已赋值
                     * 
                     */
                    bool SheetInfosHasBeenSet() const;

                    /**
                     * 获取文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取知识库ID
                     * @return KnowledgeBizId 知识库ID
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置知识库ID
                     * @param _knowledgeBizId 知识库ID
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                private:

                    /**
                     * 引用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * 文档类型 (1 QA, 2 文档段)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_docType;
                    bool m_docTypeHasBeenSet;

                    /**
                     * 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * 分片内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * 问题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 答案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 标记
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * 分片高亮内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Highlight> m_highlights;
                    bool m_highlightsHasBeenSet;

                    /**
                     * 原始内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * 页码信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_pageInfos;
                    bool m_pageInfosHasBeenSet;

                    /**
                     * sheet信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sheetInfos;
                    bool m_sheetInfosHasBeenSet;

                    /**
                     * 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 知识库ID
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_
