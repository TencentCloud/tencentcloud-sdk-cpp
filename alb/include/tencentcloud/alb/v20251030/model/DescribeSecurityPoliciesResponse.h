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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/SecurityPolicyInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicies返回参数结构体
                */
                class DescribeSecurityPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPoliciesResponse();
                    ~DescribeSecurityPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下一页查询的起始令牌。

- 若返回值不为空，表示还有更多数据，可将此值作为下一次请求的 NextToken 参数继续查询。
- 若返回值为空或未返回此字段，表示已是最后一页。

                     * @return NextToken 下一页查询的起始令牌。

- 若返回值不为空，表示还有更多数据，可将此值作为下一次请求的 NextToken 参数继续查询。
- 若返回值为空或未返回此字段，表示已是最后一页。

                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取安全策略信息列表。包含每个安全策略的详细配置，如策略 ID、名称、TLS 版本、加密套件等。

                     * @return SecurityPolicies 安全策略信息列表。包含每个安全策略的详细配置，如策略 ID、名称、TLS 版本、加密套件等。

                     * 
                     */
                    std::vector<SecurityPolicyInfo> GetSecurityPolicies() const;

                    /**
                     * 判断参数 SecurityPolicies 是否已赋值
                     * @return SecurityPolicies 是否已赋值
                     * 
                     */
                    bool SecurityPoliciesHasBeenSet() const;

                    /**
                     * 获取符合过滤条件的安全策略总数。

**说明：** 此值表示满足查询条件的总记录数，而非本次返回的记录数。可用于计算分页信息。

                     * @return TotalCount 符合过滤条件的安全策略总数。

**说明：** 此值表示满足查询条件的总记录数，而非本次返回的记录数。可用于计算分页信息。

                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 下一页查询的起始令牌。

- 若返回值不为空，表示还有更多数据，可将此值作为下一次请求的 NextToken 参数继续查询。
- 若返回值为空或未返回此字段，表示已是最后一页。

                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 安全策略信息列表。包含每个安全策略的详细配置，如策略 ID、名称、TLS 版本、加密套件等。

                     */
                    std::vector<SecurityPolicyInfo> m_securityPolicies;
                    bool m_securityPoliciesHasBeenSet;

                    /**
                     * 符合过滤条件的安全策略总数。

**说明：** 此值表示满足查询条件的总记录数，而非本次返回的记录数。可用于计算分页信息。

                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESRESPONSE_H_
