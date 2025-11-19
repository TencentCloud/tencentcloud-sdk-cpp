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
                     * 获取用户Id，和CAM侧Uin匹配
                     * @return UserId 用户Id，和CAM侧Uin匹配
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，和CAM侧Uin匹配
                     * @param _userId 用户Id，和CAM侧Uin匹配
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
                     * 获取解绑的权限集合
                     * @return PolicySet 解绑的权限集合
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置解绑的权限集合
                     * @param _policySet 解绑的权限集合
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
                     * 获取用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）
                     * @return AccountType 用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）
                     * @param _accountType 用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 用户Id，和CAM侧Uin匹配
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 解绑的权限集合
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 用户来源类型TencentAccount（普通腾讯云用户） / EntraAccount（微软用户）
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_
