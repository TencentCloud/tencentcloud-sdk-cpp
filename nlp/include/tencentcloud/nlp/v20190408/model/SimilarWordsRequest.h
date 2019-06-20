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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSREQUEST_H_

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
                * SimilarWords请求参数结构体
                */
                class SimilarWordsRequest : public AbstractModel
                {
                public:
                    SimilarWordsRequest();
                    ~SimilarWordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的词语（仅支持UTF-8格式，不超过20字）
                     * @return Text 输入的词语（仅支持UTF-8格式，不超过20字）
                     */
                    std::string GetText() const;

                    /**
                     * 设置输入的词语（仅支持UTF-8格式，不超过20字）
                     * @param Text 输入的词语（仅支持UTF-8格式，不超过20字）
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取相似词个数；取值范围：1-200，默认为10；
                     * @return WordNumber 相似词个数；取值范围：1-200，默认为10；
                     */
                    uint64_t GetWordNumber() const;

                    /**
                     * 设置相似词个数；取值范围：1-200，默认为10；
                     * @param WordNumber 相似词个数；取值范围：1-200，默认为10；
                     */
                    void SetWordNumber(const uint64_t& _wordNumber);

                    /**
                     * 判断参数 WordNumber 是否已赋值
                     * @return WordNumber 是否已赋值
                     */
                    bool WordNumberHasBeenSet() const;

                private:

                    /**
                     * 输入的词语（仅支持UTF-8格式，不超过20字）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 相似词个数；取值范围：1-200，默认为10；
                     */
                    uint64_t m_wordNumber;
                    bool m_wordNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SIMILARWORDSREQUEST_H_
