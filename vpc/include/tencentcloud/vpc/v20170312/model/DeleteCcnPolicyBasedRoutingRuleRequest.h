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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNPOLICYBASEDROUTINGRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNPOLICYBASEDROUTINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteCcnPolicyBasedRoutingRule请求参数结构体
                */
                class DeleteCcnPolicyBasedRoutingRuleRequest : public AbstractModel
                {
                public:
                    DeleteCcnPolicyBasedRoutingRuleRequest();
                    ~DeleteCcnPolicyBasedRoutingRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网ID
                     * @return CcnId 云联网ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID
                     * @param _ccnId 云联网ID
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取策略路由匹配规则ID
                     * @return PolicyBasedRoutingRuleIds 策略路由匹配规则ID
                     * 
                     */
                    std::vector<std::string> GetPolicyBasedRoutingRuleIds() const;

                    /**
                     * 设置策略路由匹配规则ID
                     * @param _policyBasedRoutingRuleIds 策略路由匹配规则ID
                     * 
                     */
                    void SetPolicyBasedRoutingRuleIds(const std::vector<std::string>& _policyBasedRoutingRuleIds);

                    /**
                     * 判断参数 PolicyBasedRoutingRuleIds 是否已赋值
                     * @return PolicyBasedRoutingRuleIds 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 云联网ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 策略路由匹配规则ID
                     */
                    std::vector<std::string> m_policyBasedRoutingRuleIds;
                    bool m_policyBasedRoutingRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNPOLICYBASEDROUTINGRULEREQUEST_H_
