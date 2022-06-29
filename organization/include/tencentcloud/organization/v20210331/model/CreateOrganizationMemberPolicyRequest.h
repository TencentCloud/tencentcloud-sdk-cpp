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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateOrganizationMemberPolicy请求参数结构体
                */
                class CreateOrganizationMemberPolicyRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberPolicyRequest();
                    ~CreateOrganizationMemberPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param MemberUin 成员Uin。
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取策略名。
                     * @return PolicyName 策略名。
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名。
                     * @param PolicyName 策略名。
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取身份ID。
                     * @return IdentityId 身份ID。
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。
                     * @param IdentityId 身份ID。
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取描述。
                     * @return Description 描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param Description 描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 成员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 策略名。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 身份ID。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERPOLICYREQUEST_H_
