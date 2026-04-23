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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEREJECTEDQUESTIONREQUEST_H_

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
                * CreateRejectedQuestion请求参数结构体
                */
                class CreateRejectedQuestionRequest : public AbstractModel
                {
                public:
                    CreateRejectedQuestionRequest();
                    ~CreateRejectedQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID, 获取方式参看如何获取<a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a></p>
                     * @return BotBizId <p>应用ID, 获取方式参看如何获取<a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a></p>
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置<p>应用ID, 获取方式参看如何获取<a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a></p>
                     * @param _botBizId <p>应用ID, 获取方式参看如何获取<a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a></p>
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
                     * 获取<p>拒答问题</p>
                     * @return Question <p>拒答问题</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>拒答问题</p>
                     * @param _question <p>拒答问题</p>
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
                     * 获取<p>拒答问题来源， 1- 来源于不满意回复;  2 - 来源于手动添加</p>
                     * @return BusinessSource <p>拒答问题来源， 1- 来源于不满意回复;  2 - 来源于手动添加</p>
                     * 
                     */
                    uint64_t GetBusinessSource() const;

                    /**
                     * 设置<p>拒答问题来源， 1- 来源于不满意回复;  2 - 来源于手动添加</p>
                     * @param _businessSource <p>拒答问题来源， 1- 来源于不满意回复;  2 - 来源于手动添加</p>
                     * 
                     */
                    void SetBusinessSource(const uint64_t& _businessSource);

                    /**
                     * 判断参数 BusinessSource 是否已赋值
                     * @return BusinessSource 是否已赋值
                     * 
                     */
                    bool BusinessSourceHasBeenSet() const;

                    /**
                     * 获取<p>拒答问题来源的数据源唯一id</p>
                     * @return BusinessId <p>拒答问题来源的数据源唯一id</p>
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置<p>拒答问题来源的数据源唯一id</p>
                     * @param _businessId <p>拒答问题来源的数据源唯一id</p>
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>拒答生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效 默认值：2。</p>
                     * @return EnableScope <p>拒答生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效 默认值：2。</p>
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置<p>拒答生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效 默认值：2。</p>
                     * @param _enableScope <p>拒答生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效 默认值：2。</p>
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID, 获取方式参看如何获取<a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a></p>
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * <p>拒答问题</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>拒答问题来源， 1- 来源于不满意回复;  2 - 来源于手动添加</p>
                     */
                    uint64_t m_businessSource;
                    bool m_businessSourceHasBeenSet;

                    /**
                     * <p>拒答问题来源的数据源唯一id</p>
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>拒答生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效 默认值：2。</p>
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEREJECTEDQUESTIONREQUEST_H_
