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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSRESPONSE_H_

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
                * SimilarWords返回参数结构体
                */
                class SimilarWordsResponse : public AbstractModel
                {
                public:
                    SimilarWordsResponse();
                    ~SimilarWordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取相似词数组
                     * @return SimilarWords 相似词数组
                     */
                    std::vector<std::string> GetSimilarWords() const;

                    /**
                     * 判断参数 SimilarWords 是否已赋值
                     * @return SimilarWords 是否已赋值
                     */
                    bool SimilarWordsHasBeenSet() const;

                private:

                    /**
                     * 相似词数组
                     */
                    std::vector<std::string> m_similarWords;
                    bool m_similarWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSRESPONSE_H_
