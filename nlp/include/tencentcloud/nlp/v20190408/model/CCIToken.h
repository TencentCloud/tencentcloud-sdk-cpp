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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CCITOKEN_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CCITOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 文本纠错结果
                */
                class CCIToken : public AbstractModel
                {
                public:
                    CCIToken();
                    ~CCIToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错别字内容
                     * @return Word 错别字内容
                     */
                    std::string GetWord() const;

                    /**
                     * 设置错别字内容
                     * @param Word 错别字内容
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取错别字的起始位置，从0开始
                     * @return BeginOffset 错别字的起始位置，从0开始
                     */
                    uint64_t GetBeginOffset() const;

                    /**
                     * 设置错别字的起始位置，从0开始
                     * @param BeginOffset 错别字的起始位置，从0开始
                     */
                    void SetBeginOffset(const uint64_t& _beginOffset);

                    /**
                     * 判断参数 BeginOffset 是否已赋值
                     * @return BeginOffset 是否已赋值
                     */
                    bool BeginOffsetHasBeenSet() const;

                    /**
                     * 获取错别字纠错结果
                     * @return CorrectWord 错别字纠错结果
                     */
                    std::string GetCorrectWord() const;

                    /**
                     * 设置错别字纠错结果
                     * @param CorrectWord 错别字纠错结果
                     */
                    void SetCorrectWord(const std::string& _correctWord);

                    /**
                     * 判断参数 CorrectWord 是否已赋值
                     * @return CorrectWord 是否已赋值
                     */
                    bool CorrectWordHasBeenSet() const;

                private:

                    /**
                     * 错别字内容
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 错别字的起始位置，从0开始
                     */
                    uint64_t m_beginOffset;
                    bool m_beginOffsetHasBeenSet;

                    /**
                     * 错别字纠错结果
                     */
                    std::string m_correctWord;
                    bool m_correctWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CCITOKEN_H_
