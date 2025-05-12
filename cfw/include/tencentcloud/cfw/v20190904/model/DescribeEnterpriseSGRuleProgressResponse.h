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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESGRULEPROGRESSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESGRULEPROGRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSGRuleProgress返回参数结构体
                */
                class DescribeEnterpriseSGRuleProgressResponse : public AbstractModel
                {
                public:
                    DescribeEnterpriseSGRuleProgressResponse();
                    ~DescribeEnterpriseSGRuleProgressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0-100，代表下发进度百分比
                     * @return Progress 0-100，代表下发进度百分比
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取是否用户中止 用户中止返回true
                     * @return UserStopped 是否用户中止 用户中止返回true
                     * 
                     */
                    bool GetUserStopped() const;

                    /**
                     * 判断参数 UserStopped 是否已赋值
                     * @return UserStopped 是否已赋值
                     * 
                     */
                    bool UserStoppedHasBeenSet() const;

                private:

                    /**
                     * 0-100，代表下发进度百分比
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 是否用户中止 用户中止返回true
                     */
                    bool m_userStopped;
                    bool m_userStoppedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESGRULEPROGRESSRESPONSE_H_
