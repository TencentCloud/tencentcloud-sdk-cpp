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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ESConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateSharedKnowledge请求参数结构体
                */
                class CreateSharedKnowledgeRequest : public AbstractModel
                {
                public:
                    CreateSharedKnowledgeRequest();
                    ~CreateSharedKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>共享知识库名称，字符数量范围：[1, 50]</p>
                     * @return KnowledgeName <p>共享知识库名称，字符数量范围：[1, 50]</p>
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置<p>共享知识库名称，字符数量范围：[1, 50]</p>
                     * @param _knowledgeName <p>共享知识库名称，字符数量范围：[1, 50]</p>
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
                     * 获取<p>共享知识库描述，字符数量上限2000</p>
                     * @return KnowledgeDescription <p>共享知识库描述，字符数量上限2000</p>
                     * 
                     */
                    std::string GetKnowledgeDescription() const;

                    /**
                     * 设置<p>共享知识库描述，字符数量上限2000</p>
                     * @param _knowledgeDescription <p>共享知识库描述，字符数量上限2000</p>
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
                     * 获取<p>Embedding模型，字符数量上限128</p>
                     * @return EmbeddingModel <p>Embedding模型，字符数量上限128</p>
                     * @deprecated
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置<p>Embedding模型，字符数量上限128</p>
                     * @param _embeddingModel <p>Embedding模型，字符数量上限128</p>
                     * @deprecated
                     */
                    void SetEmbeddingModel(const std::string& _embeddingModel);

                    /**
                     * 判断参数 EmbeddingModel 是否已赋值
                     * @return EmbeddingModel 是否已赋值
                     * @deprecated
                     */
                    bool EmbeddingModelHasBeenSet() const;

                    /**
                     * 获取<p>共享知识库类型，0普通，1公众号</p>
                     * @return KnowledgeType <p>共享知识库类型，0普通，1公众号</p>
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置<p>共享知识库类型，0普通，1公众号</p>
                     * @param _knowledgeType <p>共享知识库类型，0普通，1公众号</p>
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
                     * 获取<p>ES存储配置</p>
                     * @return EsConfig <p>ES存储配置</p>
                     * 
                     */
                    ESConfig GetEsConfig() const;

                    /**
                     * 设置<p>ES存储配置</p>
                     * @param _esConfig <p>ES存储配置</p>
                     * 
                     */
                    void SetEsConfig(const ESConfig& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                private:

                    /**
                     * <p>共享知识库名称，字符数量范围：[1, 50]</p>
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * <p>共享知识库描述，字符数量上限2000</p>
                     */
                    std::string m_knowledgeDescription;
                    bool m_knowledgeDescriptionHasBeenSet;

                    /**
                     * <p>Embedding模型，字符数量上限128</p>
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * <p>共享知识库类型，0普通，1公众号</p>
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * <p>ES存储配置</p>
                     */
                    ESConfig m_esConfig;
                    bool m_esConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_
