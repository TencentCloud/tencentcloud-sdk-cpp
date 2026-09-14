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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CategoryPath.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeScope.h>
#include <tencentcloud/adp/v20260520/model/QALifecycle.h>
#include <tencentcloud/adp/v20260520/model/QAMetadata.h>
#include <tencentcloud/adp/v20260520/model/QAOperator.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestionStat.h>
#include <tencentcloud/adp/v20260520/model/QASourceInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA 摘要信息
                */
                class QASummary : public AbstractModel
                {
                public:
                    QASummary();
                    ~QASummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryPath <p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CategoryPath GetCategoryPath() const;

                    /**
                     * 设置<p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryPath <p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryPath(const CategoryPath& _categoryPath);

                    /**
                     * 判断参数 CategoryPath 是否已赋值
                     * @return CategoryPath 是否已赋值
                     * 
                     */
                    bool CategoryPathHasBeenSet() const;

                    /**
                     * 获取<p>知识生效范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeScope <p>知识生效范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeScope GetKnowledgeScope() const;

                    /**
                     * 设置<p>知识生效范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeScope <p>知识生效范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeScope(const KnowledgeScope& _knowledgeScope);

                    /**
                     * 判断参数 KnowledgeScope 是否已赋值
                     * @return KnowledgeScope 是否已赋值
                     * 
                     */
                    bool KnowledgeScopeHasBeenSet() const;

                    /**
                     * 获取<p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lifecycle <p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QALifecycle GetLifecycle() const;

                    /**
                     * 设置<p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycle <p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycle(const QALifecycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取<p>元信息（问题/答案/大小统计）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>元信息（问题/答案/大小统计）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QAMetadata GetMetadata() const;

                    /**
                     * 设置<p>元信息（问题/答案/大小统计）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>元信息（问题/答案/大小统计）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const QAMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>操作者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorInfo <p>操作者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QAOperator GetOperatorInfo() const;

                    /**
                     * 设置<p>操作者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorInfo <p>操作者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorInfo(const QAOperator& _operatorInfo);

                    /**
                     * 判断参数 OperatorInfo 是否已赋值
                     * @return OperatorInfo 是否已赋值
                     * 
                     */
                    bool OperatorInfoHasBeenSet() const;

                    /**
                     * 获取<p>QA ID</p>
                     * @return QaId <p>QA ID</p>
                     * 
                     */
                    std::string GetQaId() const;

                    /**
                     * 设置<p>QA ID</p>
                     * @param _qaId <p>QA ID</p>
                     * 
                     */
                    void SetQaId(const std::string& _qaId);

                    /**
                     * 判断参数 QaId 是否已赋值
                     * @return QaId 是否已赋值
                     * 
                     */
                    bool QaIdHasBeenSet() const;

                    /**
                     * 获取<p>相似问统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimilarQuestion <p>相似问统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SimilarQuestionStat GetSimilarQuestion() const;

                    /**
                     * 设置<p>相似问统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similarQuestion <p>相似问统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilarQuestion(const SimilarQuestionStat& _similarQuestion);

                    /**
                     * 判断参数 SimilarQuestion 是否已赋值
                     * @return SimilarQuestion 是否已赋值
                     * 
                     */
                    bool SimilarQuestionHasBeenSet() const;

                    /**
                     * 获取<p>来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceInfo <p>来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QASourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceInfo <p>来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceInfo(const QASourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CategoryPath m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * <p>知识生效范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeScope m_knowledgeScope;
                    bool m_knowledgeScopeHasBeenSet;

                    /**
                     * <p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QALifecycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>元信息（问题/答案/大小统计）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QAMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>操作者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QAOperator m_operatorInfo;
                    bool m_operatorInfoHasBeenSet;

                    /**
                     * <p>QA ID</p>
                     */
                    std::string m_qaId;
                    bool m_qaIdHasBeenSet;

                    /**
                     * <p>相似问统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SimilarQuestionStat m_similarQuestion;
                    bool m_similarQuestionHasBeenSet;

                    /**
                     * <p>来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QASourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_
