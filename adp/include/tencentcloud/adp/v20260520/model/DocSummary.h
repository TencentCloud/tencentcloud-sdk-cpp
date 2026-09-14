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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CategoryPath.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeScope.h>
#include <tencentcloud/adp/v20260520/model/DocLifecycle.h>
#include <tencentcloud/adp/v20260520/model/DocMetadata.h>
#include <tencentcloud/adp/v20260520/model/DocOperator.h>
#include <tencentcloud/adp/v20260520/model/DocTaskStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档摘要信息
                */
                class DocSummary : public AbstractModel
                {
                public:
                    DocSummary();
                    ~DocSummary() = default;
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
                     * 获取<p>文档 ID</p>
                     * @return DocId <p>文档 ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>文档 ID</p>
                     * @param _docId <p>文档 ID</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>知识生效范围（聚合生效作用域 + 标签条件）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeScope <p>知识生效范围（聚合生效作用域 + 标签条件）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeScope GetKnowledgeScope() const;

                    /**
                     * 设置<p>知识生效范围（聚合生效作用域 + 标签条件）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeScope <p>知识生效范围（聚合生效作用域 + 标签条件）</p>
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
                    DocLifecycle GetLifecycle() const;

                    /**
                     * 设置<p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycle <p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycle(const DocLifecycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取<p>元信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>元信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocMetadata GetMetadata() const;

                    /**
                     * 设置<p>元信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>元信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const DocMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>操作者信息（聚合修改人 + 操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorInfo <p>操作者信息（聚合修改人 + 操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocOperator GetOperatorInfo() const;

                    /**
                     * 设置<p>操作者信息（聚合修改人 + 操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorInfo <p>操作者信息（聚合修改人 + 操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorInfo(const DocOperator& _operatorInfo);

                    /**
                     * 判断参数 OperatorInfo 是否已赋值
                     * @return OperatorInfo 是否已赋值
                     * 
                     */
                    bool OperatorInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus <p>任务状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocTaskStatus GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus <p>任务状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const DocTaskStatus& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * <p>所属分类路径（包含分类 ID、从根节点开始的分类 ID 路径和分类名称路径）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CategoryPath m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * <p>文档 ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>知识生效范围（聚合生效作用域 + 标签条件）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeScope m_knowledgeScope;
                    bool m_knowledgeScopeHasBeenSet;

                    /**
                     * <p>生命周期信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocLifecycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>元信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>操作者信息（聚合修改人 + 操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocOperator m_operatorInfo;
                    bool m_operatorInfoHasBeenSet;

                    /**
                     * <p>任务状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocTaskStatus m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_
