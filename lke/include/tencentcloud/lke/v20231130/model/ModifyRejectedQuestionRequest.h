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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRejectedQuestion请求参数结构体
                */
                class ModifyRejectedQuestionRequest : public AbstractModel
                {
                public:
                    ModifyRejectedQuestionRequest();
                    ~ModifyRejectedQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取拒答问题


                     * @return Question 拒答问题


                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置拒答问题


                     * @param _question 拒答问题


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
                     * 获取拒答问题来源的数据源唯一id



                     * @return RejectedBizId 拒答问题来源的数据源唯一id



                     * 
                     */
                    std::string GetRejectedBizId() const;

                    /**
                     * 设置拒答问题来源的数据源唯一id



                     * @param _rejectedBizId 拒答问题来源的数据源唯一id



                     * 
                     */
                    void SetRejectedBizId(const std::string& _rejectedBizId);

                    /**
                     * 判断参数 RejectedBizId 是否已赋值
                     * @return RejectedBizId 是否已赋值
                     * 
                     */
                    bool RejectedBizIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 拒答问题


                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 拒答问题来源的数据源唯一id



                     */
                    std::string m_rejectedBizId;
                    bool m_rejectedBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYREJECTEDQUESTIONREQUEST_H_
