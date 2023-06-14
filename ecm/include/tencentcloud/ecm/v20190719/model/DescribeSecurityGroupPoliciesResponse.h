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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPPOLICIESRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SecurityGroupPolicySet.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupPolicies返回参数结构体
                */
                class DescribeSecurityGroupPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupPoliciesResponse();
                    ~DescribeSecurityGroupPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组规则集合。
                     * @return SecurityGroupPolicySet 安全组规则集合。
                     * 
                     */
                    SecurityGroupPolicySet GetSecurityGroupPolicySet() const;

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                private:

                    /**
                     * 安全组规则集合。
                     */
                    SecurityGroupPolicySet m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPPOLICIESRESPONSE_H_
