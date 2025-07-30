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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESUBACCOUNTLOGINIPPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESUBACCOUNTLOGINIPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/IpPolicy.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateSubAccountLoginIpPolicy请求参数结构体
                */
                class CreateSubAccountLoginIpPolicyRequest : public AbstractModel
                {
                public:
                    CreateSubAccountLoginIpPolicyRequest();
                    ~CreateSubAccountLoginIpPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP策略集合
                     * @return IpPolicies IP策略集合
                     * 
                     */
                    std::vector<IpPolicy> GetIpPolicies() const;

                    /**
                     * 设置IP策略集合
                     * @param _ipPolicies IP策略集合
                     * 
                     */
                    void SetIpPolicies(const std::vector<IpPolicy>& _ipPolicies);

                    /**
                     * 判断参数 IpPolicies 是否已赋值
                     * @return IpPolicies 是否已赋值
                     * 
                     */
                    bool IpPoliciesHasBeenSet() const;

                    /**
                     * 获取审批人类型，目前支持的类型有：SubAccountLoginLimitApproval（子账号登录限制审批）
                     * @return ApproverType 审批人类型，目前支持的类型有：SubAccountLoginLimitApproval（子账号登录限制审批）
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置审批人类型，目前支持的类型有：SubAccountLoginLimitApproval（子账号登录限制审批）
                     * @param _approverType 审批人类型，目前支持的类型有：SubAccountLoginLimitApproval（子账号登录限制审批）
                     * 
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取被添加为协助审批人的账号ID数组
                     * @return ApproverUin 被添加为协助审批人的账号ID数组
                     * 
                     */
                    std::vector<uint64_t> GetApproverUin() const;

                    /**
                     * 设置被添加为协助审批人的账号ID数组
                     * @param _approverUin 被添加为协助审批人的账号ID数组
                     * 
                     */
                    void SetApproverUin(const std::vector<uint64_t>& _approverUin);

                    /**
                     * 判断参数 ApproverUin 是否已赋值
                     * @return ApproverUin 是否已赋值
                     * 
                     */
                    bool ApproverUinHasBeenSet() const;

                    /**
                     * 获取是否禁用策略：0：不禁用，1：禁用
                     * @return DisablePolicy 是否禁用策略：0：不禁用，1：禁用
                     * 
                     */
                    uint64_t GetDisablePolicy() const;

                    /**
                     * 设置是否禁用策略：0：不禁用，1：禁用
                     * @param _disablePolicy 是否禁用策略：0：不禁用，1：禁用
                     * 
                     */
                    void SetDisablePolicy(const uint64_t& _disablePolicy);

                    /**
                     * 判断参数 DisablePolicy 是否已赋值
                     * @return DisablePolicy 是否已赋值
                     * 
                     */
                    bool DisablePolicyHasBeenSet() const;

                    /**
                     * 获取策略类型：1：更新IP策略，2：设置异地登录校验校验规则
                     * @return PolicyType 策略类型：1：更新IP策略，2：设置异地登录校验校验规则
                     * 
                     */
                    uint64_t GetPolicyType() const;

                    /**
                     * 设置策略类型：1：更新IP策略，2：设置异地登录校验校验规则
                     * @param _policyType 策略类型：1：更新IP策略，2：设置异地登录校验校验规则
                     * 
                     */
                    void SetPolicyType(const uint64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                private:

                    /**
                     * IP策略集合
                     */
                    std::vector<IpPolicy> m_ipPolicies;
                    bool m_ipPoliciesHasBeenSet;

                    /**
                     * 审批人类型，目前支持的类型有：SubAccountLoginLimitApproval（子账号登录限制审批）
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 被添加为协助审批人的账号ID数组
                     */
                    std::vector<uint64_t> m_approverUin;
                    bool m_approverUinHasBeenSet;

                    /**
                     * 是否禁用策略：0：不禁用，1：禁用
                     */
                    uint64_t m_disablePolicy;
                    bool m_disablePolicyHasBeenSet;

                    /**
                     * 策略类型：1：更新IP策略，2：设置异地登录校验校验规则
                     */
                    uint64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESUBACCOUNTLOGINIPPOLICYREQUEST_H_
