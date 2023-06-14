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
                     * 获取系统播报的问题文本，问题最大长度为150个字符。
                     * @return Question 系统播报的问题文本，问题最大长度为150个字符。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置系统播报的问题文本，问题最大长度为150个字符。
                     * @param _question 系统播报的问题文本，问题最大长度为150个字符。
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
                     * 获取用户答案的标准文本列表，用于识别用户回答的语音与标准文本是否一致。列表长度最大为50，单个答案长度限制10个字符。
                     * @return Answers 用户答案的标准文本列表，用于识别用户回答的语音与标准文本是否一致。列表长度最大为50，单个答案长度限制10个字符。
                     * 
                     */
                    std::vector<std::string> GetAnswers() const;

                    /**
                     * 设置用户答案的标准文本列表，用于识别用户回答的语音与标准文本是否一致。列表长度最大为50，单个答案长度限制10个字符。
                     * @param _answers 用户答案的标准文本列表，用于识别用户回答的语音与标准文本是否一致。列表长度最大为50，单个答案长度限制10个字符。
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
                     * 系统播报的问题文本，问题最大长度为150个字符。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 用户答案的标准文本列表，用于识别用户回答的语音与标准文本是否一致。列表长度最大为50，单个答案长度限制10个字符。
                     */
                    std::vector<std::string> m_answers;
                    bool m_answersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTION_H_
