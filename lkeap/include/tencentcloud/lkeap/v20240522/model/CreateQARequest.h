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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEQAREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * CreateQA请求参数结构体
                */
                class CreateQARequest : public AbstractModel
                {
                public:
                    CreateQARequest();
                    ~CreateQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取知识库ID
                     * @return KnowledgeBaseId 知识库ID
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库ID
                     * @param _knowledgeBaseId 知识库ID
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取问题，最大1000个英文字符
                     * @return Question 问题，最大1000个英文字符
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题，最大1000个英文字符
                     * @param _question 问题，最大1000个英文字符
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
                     * 获取答案，最大4000个英文字符
                     * @return Answer 答案，最大4000个英文字符
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置答案，最大4000个英文字符
                     * @param _answer 答案，最大4000个英文字符
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取属性标签
                     * @return AttributeLabels 属性标签
                     * 
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabels() const;

                    /**
                     * 设置属性标签
                     * @param _attributeLabels 属性标签
                     * 
                     */
                    void SetAttributeLabels(const std::vector<AttributeLabelReferItem>& _attributeLabels);

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                private:

                    /**
                     * 知识库ID
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 问题，最大1000个英文字符
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 答案，最大4000个英文字符
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 属性标签
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEQAREQUEST_H_
