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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DetachUserPolicy请求参数结构体
                */
                class DetachUserPolicyRequest : public AbstractModel
                {
                public:
                    DetachUserPolicyRequest();
                    ~DetachUserPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户Id，和CAM侧Uin匹配</p>
                     * @return UserId <p>用户Id，和CAM侧Uin匹配</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户Id，和CAM侧Uin匹配</p>
                     * @param _userId <p>用户Id，和CAM侧Uin匹配</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>解绑的权限集合</p>
                     * @return PolicySet <p>解绑的权限集合</p>
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置<p>解绑的权限集合</p>
                     * @param _policySet <p>解绑的权限集合</p>
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取<p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * @return AccountType <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置<p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * @param _accountType <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>要授权的策略列表</p>
                     * @return PolicyIds <p>要授权的策略列表</p>
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置<p>要授权的策略列表</p>
                     * @param _policyIds <p>要授权的策略列表</p>
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>用户Id，和CAM侧Uin匹配</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>解绑的权限集合</p>
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * <p>用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）</p>
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>要授权的策略列表</p>
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_
