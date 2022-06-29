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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYPRORESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYPRORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/Similarity.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextSimilarityPro返回参数结构体
                */
                class TextSimilarityProResponse : public AbstractModel
                {
                public:
                    TextSimilarityProResponse();
                    ~TextSimilarityProResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取每个目标句子与源句子的相似度分值，按照分值降序排列
                     * @return Similarity 每个目标句子与源句子的相似度分值，按照分值降序排列
                     */
                    std::vector<Similarity> GetSimilarity() const;

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     */
                    bool SimilarityHasBeenSet() const;

                private:

                    /**
                     * 每个目标句子与源句子的相似度分值，按照分值降序排列
                     */
                    std::vector<Similarity> m_similarity;
                    bool m_similarityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYPRORESPONSE_H_
