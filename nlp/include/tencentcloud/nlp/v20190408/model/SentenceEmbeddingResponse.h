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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * SentenceEmbedding返回参数结构体
                */
                class SentenceEmbeddingResponse : public AbstractModel
                {
                public:
                    SentenceEmbeddingResponse();
                    ~SentenceEmbeddingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取句向量数组
                     * @return Vector 句向量数组
                     */
                    std::vector<double> GetVector() const;

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     */
                    bool VectorHasBeenSet() const;

                    /**
                     * 获取句向量的维度
                     * @return Dimension 句向量的维度
                     */
                    uint64_t GetDimension() const;

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     */
                    bool DimensionHasBeenSet() const;

                private:

                    /**
                     * 句向量数组
                     */
                    std::vector<double> m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * 句向量的维度
                     */
                    uint64_t m_dimension;
                    bool m_dimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGRESPONSE_H_
