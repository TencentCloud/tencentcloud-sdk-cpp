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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 问答列表
                */
                class QAList : public AbstractModel
                {
                public:
                    QAList();
                    ~QAList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问答ID
                     * @return QaBizId 问答ID
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置问答ID
                     * @param _qaBizId 问答ID
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取是否采纳
                     * @return IsAccepted 是否采纳
                     * 
                     */
                    bool GetIsAccepted() const;

                    /**
                     * 设置是否采纳
                     * @param _isAccepted 是否采纳
                     * 
                     */
                    void SetIsAccepted(const bool& _isAccepted);

                    /**
                     * 判断参数 IsAccepted 是否已赋值
                     * @return IsAccepted 是否已赋值
                     * 
                     */
                    bool IsAcceptedHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CateBizId 分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID
                     * @param _cateBizId 分类ID
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取问题
                     * @return Question 问题
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题
                     * @param _question 问题
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
                     * 获取答案
                     * @return Answer 答案
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置答案
                     * @param _answer 答案
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                private:

                    /**
                     * 问答ID
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 是否采纳
                     */
                    bool m_isAccepted;
                    bool m_isAcceptedHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 问题
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 答案
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QALIST_H_
