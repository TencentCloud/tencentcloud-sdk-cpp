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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/Embellish.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextEmbellish返回参数结构体
                */
                class TextEmbellishResponse : public AbstractModel
                {
                public:
                    TextEmbellishResponse();
                    ~TextEmbellishResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取润色结果列表。
                     * @return EmbellishList 润色结果列表。
                     * 
                     */
                    std::vector<Embellish> GetEmbellishList() const;

                    /**
                     * 判断参数 EmbellishList 是否已赋值
                     * @return EmbellishList 是否已赋值
                     * 
                     */
                    bool EmbellishListHasBeenSet() const;

                private:

                    /**
                     * 润色结果列表。
                     */
                    std::vector<Embellish> m_embellishList;
                    bool m_embellishListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHRESPONSE_H_
