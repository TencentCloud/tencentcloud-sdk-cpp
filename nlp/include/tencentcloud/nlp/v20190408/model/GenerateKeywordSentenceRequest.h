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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCEREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCEREQUEST_H_

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
                * GenerateKeywordSentence请求参数结构体
                */
                class GenerateKeywordSentenceRequest : public AbstractModel
                {
                public:
                    GenerateKeywordSentenceRequest();
                    ~GenerateKeywordSentenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成句子的关键词，关键词个数需不超过4个，中文关键词长度应不超过10字符，英文关键词长度不超过3个单词。关键词中不可包含标点符号。
                     * @return WordList 生成句子的关键词，关键词个数需不超过4个，中文关键词长度应不超过10字符，英文关键词长度不超过3个单词。关键词中不可包含标点符号。
                     * 
                     */
                    std::vector<std::string> GetWordList() const;

                    /**
                     * 设置生成句子的关键词，关键词个数需不超过4个，中文关键词长度应不超过10字符，英文关键词长度不超过3个单词。关键词中不可包含标点符号。
                     * @param _wordList 生成句子的关键词，关键词个数需不超过4个，中文关键词长度应不超过10字符，英文关键词长度不超过3个单词。关键词中不可包含标点符号。
                     * 
                     */
                    void SetWordList(const std::vector<std::string>& _wordList);

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     * 
                     */
                    bool WordListHasBeenSet() const;

                    /**
                     * 获取返回生成句子的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @return Number 返回生成句子的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置返回生成句子的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @param _number 返回生成句子的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取指定生成句子的领域，支持领域如下：
general：通用领域，支持中英文
academic：学术领域，仅支持英文
默认为general（通用领域）。
                     * @return Domain 指定生成句子的领域，支持领域如下：
general：通用领域，支持中英文
academic：学术领域，仅支持英文
默认为general（通用领域）。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定生成句子的领域，支持领域如下：
general：通用领域，支持中英文
academic：学术领域，仅支持英文
默认为general（通用领域）。
                     * @param _domain 指定生成句子的领域，支持领域如下：
general：通用领域，支持中英文
academic：学术领域，仅支持英文
默认为general（通用领域）。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 生成句子的关键词，关键词个数需不超过4个，中文关键词长度应不超过10字符，英文关键词长度不超过3个单词。关键词中不可包含标点符号。
                     */
                    std::vector<std::string> m_wordList;
                    bool m_wordListHasBeenSet;

                    /**
                     * 返回生成句子的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 指定生成句子的领域，支持领域如下：
general：通用领域，支持中英文
academic：学术领域，仅支持英文
默认为general（通用领域）。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_GENERATEKEYWORDSENTENCEREQUEST_H_
