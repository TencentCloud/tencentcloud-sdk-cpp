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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPASSWORDPOLICYRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPASSWORDPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstancePasswordPolicy返回参数结构体
                */
                class DescribeInstancePasswordPolicyResponse : public AbstractModel
                {
                public:
                    DescribeInstancePasswordPolicyResponse();
                    ~DescribeInstancePasswordPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例密码复杂度策略。</p>
                     * @return PasswordPolicy <p>实例密码复杂度策略。</p>
                     * 
                     */
                    PasswordPolicy GetPasswordPolicy() const;

                    /**
                     * 判断参数 PasswordPolicy 是否已赋值
                     * @return PasswordPolicy 是否已赋值
                     * 
                     */
                    bool PasswordPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>实例密码复杂度策略。</p>
                     */
                    PasswordPolicy m_passwordPolicy;
                    bool m_passwordPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEPASSWORDPOLICYRESPONSE_H_
