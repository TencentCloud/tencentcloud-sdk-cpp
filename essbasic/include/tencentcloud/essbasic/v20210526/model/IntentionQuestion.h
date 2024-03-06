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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。当前仅支持1轮问答。
                */
                class IntentionQuestion : public AbstractModel
                {
                public:
                    IntentionQuestion();
                    ~IntentionQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当选择语音问答模式时，系统自动播报的问题文本，最大长度为150个字符。
                     * @return Question 当选择语音问答模式时，系统自动播报的问题文本，最大长度为150个字符。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置当选择语音问答模式时，系统自动播报的问题文本，最大长度为150个字符。
                     * @param _question 当选择语音问答模式时，系统自动播报的问题文本，最大长度为150个字符。
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
                     * 获取 当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表，传入后可自动判断用户回答文本是否在标准文本列表中。
                     * @return Answers  当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表，传入后可自动判断用户回答文本是否在标准文本列表中。
                     * 
                     */
                    std::vector<std::string> GetAnswers() const;

                    /**
                     * 设置 当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表，传入后可自动判断用户回答文本是否在标准文本列表中。
                     * @param _answers  当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表，传入后可自动判断用户回答文本是否在标准文本列表中。
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
                     * 当选择语音问答模式时，系统自动播报的问题文本，最大长度为150个字符。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     *  当选择语音问答模式时，用于判断用户回答是否通过的标准答案列表，传入后可自动判断用户回答文本是否在标准文本列表中。
                     */
                    std::vector<std::string> m_answers;
                    bool m_answersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTION_H_
