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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_RETRIEVESIMILARWORDSREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_RETRIEVESIMILARWORDSREQUEST_H_

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
                * RetrieveSimilarWords请求参数结构体
                */
                class RetrieveSimilarWordsRequest : public AbstractModel
                {
                public:
                    RetrieveSimilarWordsRequest();
                    ~RetrieveSimilarWordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的词语。（仅支持UTF-8格式，不超过10字符）
                     * @return Text 输入的词语。（仅支持UTF-8格式，不超过10字符）
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置输入的词语。（仅支持UTF-8格式，不超过10字符）
                     * @param _text 输入的词语。（仅支持UTF-8格式，不超过10字符）
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取召回的相似词个数，取值范围为1-20。
                     * @return Number 召回的相似词个数，取值范围为1-20。
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置召回的相似词个数，取值范围为1-20。
                     * @param _number 召回的相似词个数，取值范围为1-20。
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 输入的词语。（仅支持UTF-8格式，不超过10字符）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 召回的相似词个数，取值范围为1-20。
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_RETRIEVESIMILARWORDSREQUEST_H_
