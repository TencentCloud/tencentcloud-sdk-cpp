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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeSecurityRules请求参数结构体
                */
                class DescribeSecurityRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityRulesRequest();
                    ~DescribeSecurityRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全规则ID列表。总数不能超过20个。
                     * @return SecurityRuleIds 安全规则ID列表。总数不能超过20个。
                     * 
                     */
                    std::vector<std::string> GetSecurityRuleIds() const;

                    /**
                     * 设置安全规则ID列表。总数不能超过20个。
                     * @param _securityRuleIds 安全规则ID列表。总数不能超过20个。
                     * 
                     */
                    void SetSecurityRuleIds(const std::vector<std::string>& _securityRuleIds);

                    /**
                     * 判断参数 SecurityRuleIds 是否已赋值
                     * @return SecurityRuleIds 是否已赋值
                     * 
                     */
                    bool SecurityRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 安全规则ID列表。总数不能超过20个。
                     */
                    std::vector<std::string> m_securityRuleIds;
                    bool m_securityRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYRULESREQUEST_H_
