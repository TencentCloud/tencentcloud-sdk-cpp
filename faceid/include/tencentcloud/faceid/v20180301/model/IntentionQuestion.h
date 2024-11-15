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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTION_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身过程中播报的问题文本、用户回答的标准文本。
                */
                class IntentionQuestion : public AbstractModel
                {
                public:
                    IntentionQuestion();
                    ~IntentionQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当选择语音问答模式时，系统自动播报的问题文本。
- 最大长度为150个字符。
                     * @return Question 当选择语音问答模式时，系统自动播报的问题文本。
- 最大长度为150个字符。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置当选择语音问答模式时，系统自动播报的问题文本。
- 最大长度为150个字符。
                     * @param _question 当选择语音问答模式时，系统自动播报的问题文本。
- 最大长度为150个字符。
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表。
- 传入后可自动判断用户回答文本是否在标准文本列表中。
- 列表长度最大为50，单个答案长度限制10个字符。
                     * @return Answers 当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表。
- 传入后可自动判断用户回答文本是否在标准文本列表中。
- 列表长度最大为50，单个答案长度限制10个字符。
                     * 
                     */
                    std::vector<std::string> GetAnswers() const;

                    /**
                     * 设置当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表。
- 传入后可自动判断用户回答文本是否在标准文本列表中。
- 列表长度最大为50，单个答案长度限制10个字符。
                     * @param _answers 当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表。
- 传入后可自动判断用户回答文本是否在标准文本列表中。
- 列表长度最大为50，单个答案长度限制10个字符。
                     * 
                     */
                    void SetAnswers(const std::vector<std::string>& _answers);

                    /**
                     * 判断参数 Answers 是否已赋值
                     * @return Answers 是否已赋值
                     * 
                     */
                    bool AnswersHasBeenSet() const;

                private:

                    /**
                     * 当选择语音问答模式时，系统自动播报的问题文本。
- 最大长度为150个字符。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表。
- 传入后可自动判断用户回答文本是否在标准文本列表中。
- 列表长度最大为50，单个答案长度限制10个字符。
                     */
                    std::vector<std::string> m_answers;
                    bool m_answersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTION_H_
