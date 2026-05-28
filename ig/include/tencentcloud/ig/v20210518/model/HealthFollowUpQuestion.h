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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_HEALTHFOLLOWUPQUESTION_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_HEALTHFOLLOWUPQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 症状自查追问问题
                */
                class HealthFollowUpQuestion : public AbstractModel
                {
                public:
                    HealthFollowUpQuestion();
                    ~HealthFollowUpQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>追问类型</p>
                     * @return PromptType <p>追问类型</p>
                     * 
                     */
                    std::string GetPromptType() const;

                    /**
                     * 设置<p>追问类型</p>
                     * @param _promptType <p>追问类型</p>
                     * 
                     */
                    void SetPromptType(const std::string& _promptType);

                    /**
                     * 判断参数 PromptType 是否已赋值
                     * @return PromptType 是否已赋值
                     * 
                     */
                    bool PromptTypeHasBeenSet() const;

                    /**
                     * 获取<p>追问选项列表</p>
                     * @return Choices <p>追问选项列表</p>
                     * 
                     */
                    std::vector<std::string> GetChoices() const;

                    /**
                     * 设置<p>追问选项列表</p>
                     * @param _choices <p>追问选项列表</p>
                     * 
                     */
                    void SetChoices(const std::vector<std::string>& _choices);

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取<p>追问题型，单选或多选</p>
                     * @return QuestionType <p>追问题型，单选或多选</p>
                     * 
                     */
                    std::string GetQuestionType() const;

                    /**
                     * 设置<p>追问题型，单选或多选</p>
                     * @param _questionType <p>追问题型，单选或多选</p>
                     * 
                     */
                    void SetQuestionType(const std::string& _questionType);

                    /**
                     * 判断参数 QuestionType 是否已赋值
                     * @return QuestionType 是否已赋值
                     * 
                     */
                    bool QuestionTypeHasBeenSet() const;

                    /**
                     * 获取<p>追问特殊类型，如部位题、时间题</p>
                     * @return SpecialType <p>追问特殊类型，如部位题、时间题</p>
                     * 
                     */
                    std::string GetSpecialType() const;

                    /**
                     * 设置<p>追问特殊类型，如部位题、时间题</p>
                     * @param _specialType <p>追问特殊类型，如部位题、时间题</p>
                     * 
                     */
                    void SetSpecialType(const std::string& _specialType);

                    /**
                     * 判断参数 SpecialType 是否已赋值
                     * @return SpecialType 是否已赋值
                     * 
                     */
                    bool SpecialTypeHasBeenSet() const;

                    /**
                     * 获取<p>追问问题内容</p>
                     * @return Question <p>追问问题内容</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>追问问题内容</p>
                     * @param _question <p>追问问题内容</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                private:

                    /**
                     * <p>追问类型</p>
                     */
                    std::string m_promptType;
                    bool m_promptTypeHasBeenSet;

                    /**
                     * <p>追问选项列表</p>
                     */
                    std::vector<std::string> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * <p>追问题型，单选或多选</p>
                     */
                    std::string m_questionType;
                    bool m_questionTypeHasBeenSet;

                    /**
                     * <p>追问特殊类型，如部位题、时间题</p>
                     */
                    std::string m_specialType;
                    bool m_specialTypeHasBeenSet;

                    /**
                     * <p>追问问题内容</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_HEALTHFOLLOWUPQUESTION_H_
