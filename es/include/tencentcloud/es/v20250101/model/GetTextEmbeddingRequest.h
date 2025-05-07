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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETTEXTEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETTEXTEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetTextEmbedding请求参数结构体
                */
                class GetTextEmbeddingRequest : public AbstractModel
                {
                public:
                    GetTextEmbeddingRequest();
                    ~GetTextEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称，可选模型列表：bge-base-zh-v1.5,conan-embedding-v1,bge-m3,KaLM-embedding-multilingual-mini-v1。
                     * @return ModelName 模型名称，可选模型列表：bge-base-zh-v1.5,conan-embedding-v1,bge-m3,KaLM-embedding-multilingual-mini-v1。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，可选模型列表：bge-base-zh-v1.5,conan-embedding-v1,bge-m3,KaLM-embedding-multilingual-mini-v1。
                     * @param _modelName 模型名称，可选模型列表：bge-base-zh-v1.5,conan-embedding-v1,bge-m3,KaLM-embedding-multilingual-mini-v1。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取需进行向量化的文本集。
                     * @return Texts 需进行向量化的文本集。
                     * 
                     */
                    std::vector<std::string> GetTexts() const;

                    /**
                     * 设置需进行向量化的文本集。
                     * @param _texts 需进行向量化的文本集。
                     * 
                     */
                    void SetTexts(const std::vector<std::string>& _texts);

                    /**
                     * 判断参数 Texts 是否已赋值
                     * @return Texts 是否已赋值
                     * 
                     */
                    bool TextsHasBeenSet() const;

                private:

                    /**
                     * 模型名称，可选模型列表：bge-base-zh-v1.5,conan-embedding-v1,bge-m3,KaLM-embedding-multilingual-mini-v1。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 需进行向量化的文本集。
                     */
                    std::vector<std::string> m_texts;
                    bool m_textsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETTEXTEMBEDDINGREQUEST_H_
