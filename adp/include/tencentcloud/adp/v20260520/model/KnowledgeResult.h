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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SearchResultPayload.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestionExtra.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeSnippetProfile.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeSource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 单条检索结果
                */
                class KnowledgeResult : public AbstractModel
                {
                public:
                    KnowledgeResult();
                    ~KnowledgeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>置信度</p>
                     * @return Confidence <p>置信度</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>置信度</p>
                     * @param _confidence <p>置信度</p>
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
                     * 获取<p>命中知识类型：1=问答，2=文档片段，3=数据库，4=图谱<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>问答</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>文档片段</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>数据库</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>图谱</td></tr></tbody></table></p>
                     * @return KnowledgeType <p>命中知识类型：1=问答，2=文档片段，3=数据库，4=图谱<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>问答</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>文档片段</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>数据库</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>图谱</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置<p>命中知识类型：1=问答，2=文档片段，3=数据库，4=图谱<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>问答</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>文档片段</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>数据库</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>图谱</td></tr></tbody></table></p>
                     * @param _knowledgeType <p>命中知识类型：1=问答，2=文档片段，3=数据库，4=图谱<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>问答</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>文档片段</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>数据库</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>图谱</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKnowledgeType(const int64_t& _knowledgeType);

                    /**
                     * 判断参数 KnowledgeType 是否已赋值
                     * @return KnowledgeType 是否已赋值
                     * 
                     */
                    bool KnowledgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>召回类型列表</p>
                     * @return RecallTypeList <p>召回类型列表</p>
                     * 
                     */
                    std::vector<int64_t> GetRecallTypeList() const;

                    /**
                     * 设置<p>召回类型列表</p>
                     * @param _recallTypeList <p>召回类型列表</p>
                     * 
                     */
                    void SetRecallTypeList(const std::vector<int64_t>& _recallTypeList);

                    /**
                     * 判断参数 RecallTypeList 是否已赋值
                     * @return RecallTypeList 是否已赋值
                     * 
                     */
                    bool RecallTypeListHasBeenSet() const;

                    /**
                     * 获取<p>结果负载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultPayload <p>结果负载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchResultPayload GetResultPayload() const;

                    /**
                     * 设置<p>结果负载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultPayload <p>结果负载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultPayload(const SearchResultPayload& _resultPayload);

                    /**
                     * 判断参数 ResultPayload 是否已赋值
                     * @return ResultPayload 是否已赋值
                     * 
                     */
                    bool ResultPayloadHasBeenSet() const;

                    /**
                     * 获取<p>检索结果类型<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>普通检索结果</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql 结果</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * @return ResultType <p>检索结果类型<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>普通检索结果</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql 结果</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置<p>检索结果类型<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>普通检索结果</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql 结果</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * @param _resultType <p>检索结果类型<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>普通检索结果</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql 结果</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    void SetResultType(const int64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>相似问额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimilarQuestionExtra <p>相似问额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SimilarQuestionExtra GetSimilarQuestionExtra() const;

                    /**
                     * 设置<p>相似问额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similarQuestionExtra <p>相似问额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilarQuestionExtra(const SimilarQuestionExtra& _similarQuestionExtra);

                    /**
                     * 判断参数 SimilarQuestionExtra 是否已赋值
                     * @return SimilarQuestionExtra 是否已赋值
                     * 
                     */
                    bool SimilarQuestionExtraHasBeenSet() const;

                    /**
                     * 获取<p>知识片段基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnippetProfile <p>知识片段基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeSnippetProfile GetSnippetProfile() const;

                    /**
                     * 设置<p>知识片段基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snippetProfile <p>知识片段基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnippetProfile(const KnowledgeSnippetProfile& _snippetProfile);

                    /**
                     * 判断参数 SnippetProfile 是否已赋值
                     * @return SnippetProfile 是否已赋值
                     * 
                     */
                    bool SnippetProfileHasBeenSet() const;

                    /**
                     * 获取<p>知识来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceInfo <p>知识来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeSource GetSourceInfo() const;

                    /**
                     * 设置<p>知识来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceInfo <p>知识来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceInfo(const KnowledgeSource& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>置信度</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>命中知识类型：1=问答，2=文档片段，3=数据库，4=图谱<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>问答</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>文档片段</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>数据库</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>图谱</td></tr></tbody></table></p>
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * <p>召回类型列表</p>
                     */
                    std::vector<int64_t> m_recallTypeList;
                    bool m_recallTypeListHasBeenSet;

                    /**
                     * <p>结果负载</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchResultPayload m_resultPayload;
                    bool m_resultPayloadHasBeenSet;

                    /**
                     * <p>检索结果类型<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>普通检索结果</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql 结果</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>相似问额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SimilarQuestionExtra m_similarQuestionExtra;
                    bool m_similarQuestionExtraHasBeenSet;

                    /**
                     * <p>知识片段基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeSnippetProfile m_snippetProfile;
                    bool m_snippetProfileHasBeenSet;

                    /**
                     * <p>知识来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeSource m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_
