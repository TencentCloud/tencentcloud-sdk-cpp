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
                     * 获取词汇维度
                     * @return Words 词汇维度
                     * 
                     */
                    Aspect GetWords() const;

                    /**
                     * 设置词汇维度
                     * @param _words 词汇维度
                     * 
                     */
                    void SetWords(const Aspect& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取句子维度
                     * @return Sentences 句子维度
                     * 
                     */
                    Aspect GetSentences() const;

                    /**
                     * 设置句子维度
                     * @param _sentences 句子维度
                     * 
                     */
                    void SetSentences(const Aspect& _sentences);

                    /**
                     * 判断参数 Sentences 是否已赋值
                     * @return Sentences 是否已赋值
                     * 
                     */
                    bool SentencesHasBeenSet() const;

                    /**
                     * 获取篇章结构维度
                     * @return Structure 篇章结构维度
                     * 
                     */
                    Aspect GetStructure() const;

                    /**
                     * 设置篇章结构维度
                     * @param _structure 篇章结构维度
                     * 
                     */
                    void SetStructure(const Aspect& _structure);

                    /**
                     * 判断参数 Structure 是否已赋值
                     * @return Structure 是否已赋值
                     * 
                     */
                    bool StructureHasBeenSet() const;

                    /**
                     * 获取内容维度
                     * @return Content 内容维度
                     * 
                     */
                    Aspect GetContent() const;

                    /**
                     * 设置内容维度
                     * @param _content 内容维度
                     * 
                     */
                    void SetContent(const Aspect& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取维度得分
                     * @return Score 维度得分
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置维度得分
                     * @param _score 维度得分
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取维度分数占比
                     * @return Percentage 维度分数占比
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置维度分数占比
                     * @param _percentage 维度分数占比
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                private:

                    /**
                     * 词汇维度
                     */
                    Aspect m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * 句子维度
                     */
                    Aspect m_sentences;
                    bool m_sentencesHasBeenSet;

                    /**
                     * 篇章结构维度
                     */
                    Aspect m_structure;
                    bool m_structureHasBeenSet;

                    /**
                     * 内容维度
                     */
                    Aspect m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 维度得分
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 维度分数占比
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_SCORECATEGORY_H_
