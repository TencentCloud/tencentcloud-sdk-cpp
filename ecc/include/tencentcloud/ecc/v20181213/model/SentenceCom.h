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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCECOM_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCECOM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/SentenceSuggest.h>
#include <tencentcloud/ecc/v20181213/model/SentenceItem.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 批改结果按句点评的详细信息
                */
                class SentenceCom : public AbstractModel
                {
                public:
                    SentenceCom();
                    ~SentenceCom() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取句子错误纠正信息
                     * @return Suggestions 句子错误纠正信息
                     * 
                     */
                    std::vector<SentenceSuggest> GetSuggestions() const;

                    /**
                     * 设置句子错误纠正信息
                     * @param _suggestions 句子错误纠正信息
                     * 
                     */
                    void SetSuggestions(const std::vector<SentenceSuggest>& _suggestions);

                    /**
                     * 判断参数 Suggestions 是否已赋值
                     * @return Suggestions 是否已赋值
                     * 
                     */
                    bool SuggestionsHasBeenSet() const;

                    /**
                     * 获取句子信息
                     * @return Sentence 句子信息
                     * 
                     */
                    SentenceItem GetSentence() const;

                    /**
                     * 设置句子信息
                     * @param _sentence 句子信息
                     * 
                     */
                    void SetSentence(const SentenceItem& _sentence);

                    /**
                     * 判断参数 Sentence 是否已赋值
                     * @return Sentence 是否已赋值
                     * 
                     */
                    bool SentenceHasBeenSet() const;

                private:

                    /**
                     * 句子错误纠正信息
                     */
                    std::vector<SentenceSuggest> m_suggestions;
                    bool m_suggestionsHasBeenSet;

                    /**
                     * 句子信息
                     */
                    SentenceItem m_sentence;
                    bool m_sentenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCECOM_H_
