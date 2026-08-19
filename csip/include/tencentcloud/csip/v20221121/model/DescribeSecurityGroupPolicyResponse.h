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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SecurityGroupPolicyItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupPolicy返回参数结构体
                */
                class DescribeSecurityGroupPolicyResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupPolicyResponse();
                    ~DescribeSecurityGroupPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取关联安全组ID集合
                     * @return SecurityGroupIDList 关联安全组ID集合
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDList() const;

                    /**
                     * 判断参数 SecurityGroupIDList 是否已赋值
                     * @return SecurityGroupIDList 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDListHasBeenSet() const;

                    /**
                     * 获取出站规则
                     * @return Egress 出站规则
                     * 
                     */
                    std::vector<SecurityGroupPolicyItem> GetEgress() const;

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取入站规则
                     * @return Ingress 入站规则
                     * 
                     */
                    std::vector<SecurityGroupPolicyItem> GetIngress() const;

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                private:

                    /**
                     * 关联安全组ID集合
                     */
                    std::vector<std::string> m_securityGroupIDList;
                    bool m_securityGroupIDListHasBeenSet;

                    /**
                     * 出站规则
                     */
                    std::vector<SecurityGroupPolicyItem> m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 入站规则
                     */
                    std::vector<SecurityGroupPolicyItem> m_ingress;
                    bool m_ingressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYRESPONSE_H_
