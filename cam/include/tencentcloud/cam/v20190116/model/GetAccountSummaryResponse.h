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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetAccountSummary返回参数结构体
                */
                class GetAccountSummaryResponse : public AbstractModel
                {
                public:
                    GetAccountSummaryResponse();
                    ~GetAccountSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略数
                     * @return Policies 策略数
                     * 
                     */
                    uint64_t GetPolicies() const;

                    /**
                     * 判断参数 Policies 是否已赋值
                     * @return Policies 是否已赋值
                     * 
                     */
                    bool PoliciesHasBeenSet() const;

                    /**
                     * 获取角色数
                     * @return Roles 角色数
                     * 
                     */
                    uint64_t GetRoles() const;

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取身份提供商数
                     * @return Idps 身份提供商数
                     * @deprecated
                     */
                    uint64_t GetIdps() const;

                    /**
                     * 判断参数 Idps 是否已赋值
                     * @return Idps 是否已赋值
                     * @deprecated
                     */
                    bool IdpsHasBeenSet() const;

                    /**
                     * 获取子账户数
                     * @return User 子账户数
                     * 
                     */
                    uint64_t GetUser() const;

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取分组数
                     * @return Group 分组数
                     * 
                     */
                    uint64_t GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取分组用户总数
                     * @return Member 分组用户总数
                     * 
                     */
                    uint64_t GetMember() const;

                    /**
                     * 判断参数 Member 是否已赋值
                     * @return Member 是否已赋值
                     * 
                     */
                    bool MemberHasBeenSet() const;

                    /**
                     * 获取身份提供商数。
                     * @return IdentityProviders 身份提供商数。
                     * 
                     */
                    uint64_t GetIdentityProviders() const;

                    /**
                     * 判断参数 IdentityProviders 是否已赋值
                     * @return IdentityProviders 是否已赋值
                     * 
                     */
                    bool IdentityProvidersHasBeenSet() const;

                private:

                    /**
                     * 策略数
                     */
                    uint64_t m_policies;
                    bool m_policiesHasBeenSet;

                    /**
                     * 角色数
                     */
                    uint64_t m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * 身份提供商数
                     */
                    uint64_t m_idps;
                    bool m_idpsHasBeenSet;

                    /**
                     * 子账户数
                     */
                    uint64_t m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 分组数
                     */
                    uint64_t m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 分组用户总数
                     */
                    uint64_t m_member;
                    bool m_memberHasBeenSet;

                    /**
                     * 身份提供商数。
                     */
                    uint64_t m_identityProviders;
                    bool m_identityProvidersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETACCOUNTSUMMARYRESPONSE_H_
