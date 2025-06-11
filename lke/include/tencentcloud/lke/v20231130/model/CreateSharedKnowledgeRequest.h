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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSharedKnowledge请求参数结构体
                */
                class CreateSharedKnowledgeRequest : public AbstractModel
                {
                public:
                    CreateSharedKnowledgeRequest();
                    ~CreateSharedKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享知识库名称，字符数量范围：[1, 50]
                     * @return KnowledgeName 共享知识库名称，字符数量范围：[1, 50]
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置共享知识库名称，字符数量范围：[1, 50]
                     * @param _knowledgeName 共享知识库名称，字符数量范围：[1, 50]
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
                     * 获取共享知识库描述，字符数量上限2000
                     * @return KnowledgeDescription 共享知识库描述，字符数量上限2000
                     * 
                     */
                    std::string GetKnowledgeDescription() const;

                    /**
                     * 设置共享知识库描述，字符数量上限2000
                     * @param _knowledgeDescription 共享知识库描述，字符数量上限2000
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
                     * 获取Embedding模型，字符数量上限128
                     * @return EmbeddingModel Embedding模型，字符数量上限128
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置Embedding模型，字符数量上限128
                     * @param _embeddingModel Embedding模型，字符数量上限128
                     * 
                     */
                    void SetEmbeddingModel(const std::string& _embeddingModel);

                    /**
                     * 判断参数 EmbeddingModel 是否已赋值
                     * @return EmbeddingModel 是否已赋值
                     * 
                     */
                    bool EmbeddingModelHasBeenSet() const;

                private:

                    /**
                     * 共享知识库名称，字符数量范围：[1, 50]
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * 共享知识库描述，字符数量上限2000
                     */
                    std::string m_knowledgeDescription;
                    bool m_knowledgeDescriptionHasBeenSet;

                    /**
                     * Embedding模型，字符数量上限128
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATESHAREDKNOWLEDGEREQUEST_H_
