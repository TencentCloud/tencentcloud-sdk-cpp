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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUERYREWRITEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUERYREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Message.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * QueryRewrite请求参数结构体
                */
                class QueryRewriteRequest : public AbstractModel
                {
                public:
                    QueryRewriteRequest();
                    ~QueryRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要改写的问题
                     * @return Question 需要改写的问题
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置需要改写的问题
                     * @param _question 需要改写的问题
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
                     * 获取需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入，由于模型字符限制，最多提供4轮对话。
                     * @return Messages 需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入，由于模型字符限制，最多提供4轮对话。
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入，由于模型字符限制，最多提供4轮对话。
                     * @param _messages 需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入，由于模型字符限制，最多提供4轮对话。
                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return Model 模型名称
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称
                     * @param _model 模型名称
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 需要改写的问题
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 需要改写的多轮历史会话，每轮历史对话需要包含user（问）和assistant（答）成对输入，由于模型字符限制，最多提供4轮对话。
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUERYREWRITEREQUEST_H_
