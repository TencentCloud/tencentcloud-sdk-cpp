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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EMBEDDINGOBJECT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EMBEDDINGOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 文本向量化结果
                */
                class EmbeddingObject : public AbstractModel
                {
                public:
                    EmbeddingObject();
                    ~EmbeddingObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入文本在 Inputs 列表中的索引，从 0 开始。
                     * @return Index 输入文本在 Inputs 列表中的索引，从 0 开始。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置输入文本在 Inputs 列表中的索引，从 0 开始。
                     * @param _index 输入文本在 Inputs 列表中的索引，从 0 开始。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取向量化结果，维度由所选模型决定。
                     * @return Embedding 向量化结果，维度由所选模型决定。
                     * 
                     */
                    std::vector<double> GetEmbedding() const;

                    /**
                     * 设置向量化结果，维度由所选模型决定。
                     * @param _embedding 向量化结果，维度由所选模型决定。
                     * 
                     */
                    void SetEmbedding(const std::vector<double>& _embedding);

                    /**
                     * 判断参数 Embedding 是否已赋值
                     * @return Embedding 是否已赋值
                     * 
                     */
                    bool EmbeddingHasBeenSet() const;

                private:

                    /**
                     * 输入文本在 Inputs 列表中的索引，从 0 开始。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 向量化结果，维度由所选模型决定。
                     */
                    std::vector<double> m_embedding;
                    bool m_embeddingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EMBEDDINGOBJECT_H_
