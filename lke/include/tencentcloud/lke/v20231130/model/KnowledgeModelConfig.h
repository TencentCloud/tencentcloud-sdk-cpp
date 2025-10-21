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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEMODELCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEMODELCONFIG_H_

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
                * 知识库模型设置
                */
                class KnowledgeModelConfig : public AbstractModel
                {
                public:
                    KnowledgeModelConfig();
                    ~KnowledgeModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取向量模型，该字段只有共享知识库有，应用知识库没有
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbeddingModel 向量模型，该字段只有共享知识库有，应用知识库没有
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置向量模型，该字段只有共享知识库有，应用知识库没有
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embeddingModel 向量模型，该字段只有共享知识库有，应用知识库没有
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
                     * 获取问答对生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaExtractModel 问答对生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQaExtractModel() const;

                    /**
                     * 设置问答对生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaExtractModel 问答对生成模型
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
                     * 获取schema生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaModel schema生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaModel() const;

                    /**
                     * 设置schema生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaModel schema生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaModel(const std::string& _schemaModel);

                    /**
                     * 判断参数 SchemaModel 是否已赋值
                     * @return SchemaModel 是否已赋值
                     * 
                     */
                    bool SchemaModelHasBeenSet() const;

                private:

                    /**
                     * 向量模型，该字段只有共享知识库有，应用知识库没有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * 问答对生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qaExtractModel;
                    bool m_qaExtractModelHasBeenSet;

                    /**
                     * schema生成模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaModel;
                    bool m_schemaModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEMODELCONFIG_H_
