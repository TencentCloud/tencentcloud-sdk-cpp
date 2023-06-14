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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeAnswerList请求参数结构体
                */
                class DescribeAnswerListRequest : public AbstractModel
                {
                public:
                    DescribeAnswerListRequest();
                    ~DescribeAnswerListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取问题ID
                     * @return QuestionId 问题ID
                     * 
                     */
                    std::string GetQuestionId() const;

                    /**
                     * 设置问题ID
                     * @param _questionId 问题ID
                     * 
                     */
                    void SetQuestionId(const std::string& _questionId);

                    /**
                     * 判断参数 QuestionId 是否已赋值
                     * @return QuestionId 是否已赋值
                     * 
                     */
                    bool QuestionIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return Page 1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置1
                     * @param _page 1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取100
                     * @return Limit 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置100
                     * @param _limit 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 问题ID
                     */
                    std::string m_questionId;
                    bool m_questionIdHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTREQUEST_H_
