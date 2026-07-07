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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/SecurityPolicyRelations.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyRelations返回参数结构体
                */
                class DescribeSecurityPolicyRelationsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRelationsResponse();
                    ~DescribeSecurityPolicyRelationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全策略关联的监听器列表。返回每个安全策略所关联的 HTTPS 监听器信息。
                     * @return SecurityPolicyRelations 安全策略关联的监听器列表。返回每个安全策略所关联的 HTTPS 监听器信息。
                     * 
                     */
                    std::vector<SecurityPolicyRelations> GetSecurityPolicyRelations() const;

                    /**
                     * 判断参数 SecurityPolicyRelations 是否已赋值
                     * @return SecurityPolicyRelations 是否已赋值
                     * 
                     */
                    bool SecurityPolicyRelationsHasBeenSet() const;

                private:

                    /**
                     * 安全策略关联的监听器列表。返回每个安全策略所关联的 HTTPS 监听器信息。
                     */
                    std::vector<SecurityPolicyRelations> m_securityPolicyRelations;
                    bool m_securityPolicyRelationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSRESPONSE_H_
