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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EMBEDDINGOBJECT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EMBEDDINGOBJECT_H_

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
                * 向量
                */
                class EmbeddingObject : public AbstractModel
                {
                public:
                    EmbeddingObject();
                    ~EmbeddingObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取向量
                     * @return Embedding 向量
                     * 
                     */
                    std::vector<double> GetEmbedding() const;

                    /**
                     * 设置向量
                     * @param _embedding 向量
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
                     * 向量
                     */
                    std::vector<double> m_embedding;
                    bool m_embeddingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EMBEDDINGOBJECT_H_
