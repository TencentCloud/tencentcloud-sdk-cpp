/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONNAIRE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONNAIRE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationQuestionAnswer.h>
#include <tencentcloud/adp/v20260520/model/ConversationQuestion.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Questionnaire 问卷信息
                */
                class ConversationQuestionnaire : public AbstractModel
                {
                public:
                    ConversationQuestionnaire();
                    ~ConversationQuestionnaire() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问卷标题</p>
                     * @return Title <p>问卷标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>问卷标题</p>
                     * @param _title <p>问卷标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>答案列表</p>
                     * @return AnswerList <p>答案列表</p>
                     * 
                     */
                    std::vector<ConversationQuestionAnswer> GetAnswerList() const;

                    /**
                     * 设置<p>答案列表</p>
                     * @param _answerList <p>答案列表</p>
                     * 
                     */
                    void SetAnswerList(const std::vector<ConversationQuestionAnswer>& _answerList);

                    /**
                     * 判断参数 AnswerList 是否已赋值
                     * @return AnswerList 是否已赋值
                     * 
                     */
                    bool AnswerListHasBeenSet() const;

                    /**
                     * 获取<p>答案列表</p>
                     * @return Answers <p>答案列表</p>
                     * 
                     */
                    std::vector<ConversationQuestionAnswer> GetAnswers() const;

                    /**
                     * 设置<p>答案列表</p>
                     * @param _answers <p>答案列表</p>
                     * 
                     */
                    void SetAnswers(const std::vector<ConversationQuestionAnswer>& _answers);

                    /**
                     * 判断参数 Answers 是否已赋值
                     * @return Answers 是否已赋值
                     * 
                     */
                    bool AnswersHasBeenSet() const;

                    /**
                     * 获取<p>问题列表</p>
                     * @return QuestionList <p>问题列表</p>
                     * 
                     */
                    std::vector<ConversationQuestion> GetQuestionList() const;

                    /**
                     * 设置<p>问题列表</p>
                     * @param _questionList <p>问题列表</p>
                     * 
                     */
                    void SetQuestionList(const std::vector<ConversationQuestion>& _questionList);

                    /**
                     * 判断参数 QuestionList 是否已赋值
                     * @return QuestionList 是否已赋值
                     * 
                     */
                    bool QuestionListHasBeenSet() const;

                    /**
                     * 获取<p>问题列表</p>
                     * @return Questions <p>问题列表</p>
                     * 
                     */
                    std::vector<ConversationQuestion> GetQuestions() const;

                    /**
                     * 设置<p>问题列表</p>
                     * @param _questions <p>问题列表</p>
                     * 
                     */
                    void SetQuestions(const std::vector<ConversationQuestion>& _questions);

                    /**
                     * 判断参数 Questions 是否已赋值
                     * @return Questions 是否已赋值
                     * 
                     */
                    bool QuestionsHasBeenSet() const;

                private:

                    /**
                     * <p>问卷标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>答案列表</p>
                     */
                    std::vector<ConversationQuestionAnswer> m_answerList;
                    bool m_answerListHasBeenSet;

                    /**
                     * <p>答案列表</p>
                     */
                    std::vector<ConversationQuestionAnswer> m_answers;
                    bool m_answersHasBeenSet;

                    /**
                     * <p>问题列表</p>
                     */
                    std::vector<ConversationQuestion> m_questionList;
                    bool m_questionListHasBeenSet;

                    /**
                     * <p>问题列表</p>
                     */
                    std::vector<ConversationQuestion> m_questions;
                    bool m_questionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONNAIRE_H_
