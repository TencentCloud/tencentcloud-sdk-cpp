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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIRE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIRE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuestionnaireQuestion.h>
#include <tencentcloud/lke/v20231130/model/QuestionnaireQuestionAnswer.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 问卷信息
                */
                class Questionnaire : public AbstractModel
                {
                public:
                    Questionnaire();
                    ~Questionnaire() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问卷的标题</p>
                     * @return Title <p>问卷的标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>问卷的标题</p>
                     * @param _title <p>问卷的标题</p>
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
                     * 获取<p>问卷的问题列表</p>
                     * @return Questions <p>问卷的问题列表</p>
                     * 
                     */
                    std::vector<QuestionnaireQuestion> GetQuestions() const;

                    /**
                     * 设置<p>问卷的问题列表</p>
                     * @param _questions <p>问卷的问题列表</p>
                     * 
                     */
                    void SetQuestions(const std::vector<QuestionnaireQuestion>& _questions);

                    /**
                     * 判断参数 Questions 是否已赋值
                     * @return Questions 是否已赋值
                     * 
                     */
                    bool QuestionsHasBeenSet() const;

                    /**
                     * 获取<p>问卷的答案列表</p>
                     * @return Answers <p>问卷的答案列表</p>
                     * 
                     */
                    std::vector<QuestionnaireQuestionAnswer> GetAnswers() const;

                    /**
                     * 设置<p>问卷的答案列表</p>
                     * @param _answers <p>问卷的答案列表</p>
                     * 
                     */
                    void SetAnswers(const std::vector<QuestionnaireQuestionAnswer>& _answers);

                    /**
                     * 判断参数 Answers 是否已赋值
                     * @return Answers 是否已赋值
                     * 
                     */
                    bool AnswersHasBeenSet() const;

                private:

                    /**
                     * <p>问卷的标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>问卷的问题列表</p>
                     */
                    std::vector<QuestionnaireQuestion> m_questions;
                    bool m_questionsHasBeenSet;

                    /**
                     * <p>问卷的答案列表</p>
                     */
                    std::vector<QuestionnaireQuestionAnswer> m_answers;
                    bool m_answersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIRE_H_
