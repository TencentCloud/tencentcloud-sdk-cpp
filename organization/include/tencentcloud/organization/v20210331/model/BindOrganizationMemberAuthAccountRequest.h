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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_BINDORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_BINDORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_

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
                * BindOrganizationMemberAuthAccount请求参数结构体
                */
                class BindOrganizationMemberAuthAccountRequest : public AbstractModel
                {
                public:
                    BindOrganizationMemberAuthAccountRequest();
                    ~BindOrganizationMemberAuthAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取策略ID。可以调用[DescribeOrganizationMemberPolicies](https://cloud.tencent.com/document/product/850/82935)获取
                     * @return PolicyId 策略ID。可以调用[DescribeOrganizationMemberPolicies](https://cloud.tencent.com/document/product/850/82935)获取
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。可以调用[DescribeOrganizationMemberPolicies](https://cloud.tencent.com/document/product/850/82935)获取
                     * @param _policyId 策略ID。可以调用[DescribeOrganizationMemberPolicies](https://cloud.tencent.com/document/product/850/82935)获取
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取组织管理员子账号Uin列表。最大5个
                     * @return OrgSubAccountUins 组织管理员子账号Uin列表。最大5个
                     * 
                     */
                    std::vector<int64_t> GetOrgSubAccountUins() const;

                    /**
                     * 设置组织管理员子账号Uin列表。最大5个
                     * @param _orgSubAccountUins 组织管理员子账号Uin列表。最大5个
                     * 
                     */
                    void SetOrgSubAccountUins(const std::vector<int64_t>& _orgSubAccountUins);

                    /**
                     * 判断参数 OrgSubAccountUins 是否已赋值
                     * @return OrgSubAccountUins 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinsHasBeenSet() const;

                private:

                    /**
                     * 成员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 策略ID。可以调用[DescribeOrganizationMemberPolicies](https://cloud.tencent.com/document/product/850/82935)获取
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 组织管理员子账号Uin列表。最大5个
                     */
                    std::vector<int64_t> m_orgSubAccountUins;
                    bool m_orgSubAccountUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_BINDORGANIZATIONMEMBERAUTHACCOUNTREQUEST_H_
