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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_ANSWERQUESTIONREQUEST_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_ANSWERQUESTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * AnswerQuestion请求参数结构体
                */
                class AnswerQuestionRequest : public AbstractModel
                {
                public:
                    AnswerQuestionRequest();
                    ~AnswerQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户问题
                     * @return Question 用户问题
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置用户问题
                     * @param _question 用户问题
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
                     * 用户问题
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_ANSWERQUESTIONREQUEST_H_
