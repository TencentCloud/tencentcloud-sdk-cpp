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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_SCORECATEGORY_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_SCORECATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/Aspect.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 四个维度的得分
                */
                class ScoreCategory : public AbstractModel
                {
                public:
                    ScoreCategory();
                    ~ScoreCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取词汇项
                     * @return Words 词汇项
                     */
                    Aspect GetWords() const;

                    /**
                     * 设置词汇项
                     * @param Words 词汇项
                     */
                    void SetWords(const Aspect& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取句子项
                     * @return Sentences 句子项
                     */
                    Aspect GetSentences() const;

                    /**
                     * 设置句子项
                     * @param Sentences 句子项
                     */
                    void SetSentences(const Aspect& _sentences);

                    /**
                     * 判断参数 Sentences 是否已赋值
                     * @return Sentences 是否已赋值
                     */
                    bool SentencesHasBeenSet() const;

                    /**
                     * 获取篇章结构
                     * @return Structure 篇章结构
                     */
                    Aspect GetStructure() const;

                    /**
                     * 设置篇章结构
                     * @param Structure 篇章结构
                     */
                    void SetStructure(const Aspect& _structure);

                    /**
                     * 判断参数 Structure 是否已赋值
                     * @return Structure 是否已赋值
                     */
                    bool StructureHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     */
                    Aspect GetContent() const;

                    /**
                     * 设置内容
                     * @param Content 内容
                     */
                    void SetContent(const Aspect& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 词汇项
                     */
                    Aspect m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 句子项
                     */
                    Aspect m_sentences;
                    bool m_sentencesHasBeenSet;

                    /**
                     * 篇章结构
                     */
                    Aspect m_structure;
                    bool m_structureHasBeenSet;

                    /**
                     * 内容
                     */
                    Aspect m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_SCORECATEGORY_H_
