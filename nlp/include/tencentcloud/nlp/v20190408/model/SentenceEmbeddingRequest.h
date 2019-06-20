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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGREQUEST_H_

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
                * SentenceEmbedding请求参数结构体
                */
                class SentenceEmbeddingRequest : public AbstractModel
                {
                public:
                    SentenceEmbeddingRequest();
                    ~SentenceEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的文本（仅支持UTF-8格式，不超过500字）
                     * @return Text 输入的文本（仅支持UTF-8格式，不超过500字）
                     */
                    std::string GetText() const;

                    /**
                     * 设置输入的文本（仅支持UTF-8格式，不超过500字）
                     * @param Text 输入的文本（仅支持UTF-8格式，不超过500字）
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 输入的文本（仅支持UTF-8格式，不超过500字）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCEEMBEDDINGREQUEST_H_
