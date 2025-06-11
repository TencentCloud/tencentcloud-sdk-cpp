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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEBASEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 共享知识库基础信息
                */
                class KnowledgeBaseInfo : public AbstractModel
                {
                public:
                    KnowledgeBaseInfo();
                    ~KnowledgeBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享知识库业务ID
                     * @return KnowledgeBizId 共享知识库业务ID
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置共享知识库业务ID
                     * @param _knowledgeBizId 共享知识库业务ID
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取共享知识库名称
                     * @return KnowledgeName 共享知识库名称
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置共享知识库名称
                     * @param _knowledgeName 共享知识库名称
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                    /**
                     * 获取共享知识库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeDescription 共享知识库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeDescription() const;

                    /**
                     * 设置共享知识库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeDescription 共享知识库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeDescription(const std::string& _knowledgeDescription);

                    /**
                     * 判断参数 KnowledgeDescription 是否已赋值
                     * @return KnowledgeDescription 是否已赋值
                     * 
                     */
                    bool KnowledgeDescriptionHasBeenSet() const;

                    /**
                     * 获取Embedding模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbeddingModel Embedding模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置Embedding模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embeddingModel Embedding模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbeddingModel(const std::string& _embeddingModel);

                    /**
                     * 判断参数 EmbeddingModel 是否已赋值
                     * @return EmbeddingModel 是否已赋值
                     * 
                     */
                    bool EmbeddingModelHasBeenSet() const;

                    /**
                     * 获取问答提取模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaExtractModel 问答提取模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQaExtractModel() const;

                    /**
                     * 设置问答提取模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaExtractModel 问答提取模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaExtractModel(const std::string& _qaExtractModel);

                    /**
                     * 判断参数 QaExtractModel 是否已赋值
                     * @return QaExtractModel 是否已赋值
                     * 
                     */
                    bool QaExtractModelHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 共享知识库业务ID
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 共享知识库名称
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * 共享知识库描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeDescription;
                    bool m_knowledgeDescriptionHasBeenSet;

                    /**
                     * Embedding模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * 问答提取模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qaExtractModel;
                    bool m_qaExtractModelHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEBASEINFO_H_
