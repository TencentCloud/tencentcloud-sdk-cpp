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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBMODELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBMODELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库模型配置
                */
                class KBModelConfig : public AbstractModel
                {
                public:
                    KBModelConfig();
                    ~KBModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Embedding 模型</p>
                     * @return EmbeddingModel <p>Embedding 模型</p>
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置<p>Embedding 模型</p>
                     * @param _embeddingModel <p>Embedding 模型</p>
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
                     * 获取<p>QA 抽取模型</p>
                     * @return QaExtractModel <p>QA 抽取模型</p>
                     * 
                     */
                    std::string GetQaExtractModel() const;

                    /**
                     * 设置<p>QA 抽取模型</p>
                     * @param _qaExtractModel <p>QA 抽取模型</p>
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
                     * 获取<p>Schema 生成模型</p>
                     * @return SchemaModel <p>Schema 生成模型</p>
                     * 
                     */
                    std::string GetSchemaModel() const;

                    /**
                     * 设置<p>Schema 生成模型</p>
                     * @param _schemaModel <p>Schema 生成模型</p>
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
                     * <p>Embedding 模型</p>
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * <p>QA 抽取模型</p>
                     */
                    std::string m_qaExtractModel;
                    bool m_qaExtractModelHasBeenSet;

                    /**
                     * <p>Schema 生成模型</p>
                     */
                    std::string m_schemaModel;
                    bool m_schemaModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBMODELCONFIG_H_
