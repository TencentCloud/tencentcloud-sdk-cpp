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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSAUTHPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSAUTHPOLICYREQUEST_H_

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
                * DescribeOrganizationMembersAuthPolicy请求参数结构体
                */
                class DescribeOrganizationMembersAuthPolicyRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMembersAuthPolicyRequest();
                    ~DescribeOrganizationMembersAuthPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量。取值是limit的整数倍。默认值 : 0。</p>
                     * @return Offset <p>偏移量。取值是limit的整数倍。默认值 : 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。取值是limit的整数倍。默认值 : 0。</p>
                     * @param _offset <p>偏移量。取值是limit的整数倍。默认值 : 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>限制数目。取值范围：1~50。默认值：10。</p>
                     * @return Limit <p>限制数目。取值范围：1~50。默认值：10。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制数目。取值范围：1~50。默认值：10。</p>
                     * @param _limit <p>限制数目。取值范围：1~50。默认值：10。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>成员uin。</p>
                     * @return MemberUin <p>成员uin。</p>
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置<p>成员uin。</p>
                     * @param _memberUin <p>成员uin。</p>
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
                     * 获取<p>集团管理员子账号uin。</p>
                     * @return OrgSubAccountUin <p>集团管理员子账号uin。</p>
                     * 
                     */
                    int64_t GetOrgSubAccountUin() const;

                    /**
                     * 设置<p>集团管理员子账号uin。</p>
                     * @param _orgSubAccountUin <p>集团管理员子账号uin。</p>
                     * 
                     */
                    void SetOrgSubAccountUin(const int64_t& _orgSubAccountUin);

                    /**
                     * 判断参数 OrgSubAccountUin 是否已赋值
                     * @return OrgSubAccountUin 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>成员访问策略Id。</p>
                     * @return PolicyId <p>成员访问策略Id。</p>
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置<p>成员访问策略Id。</p>
                     * @param _policyId <p>成员访问策略Id。</p>
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量。取值是limit的整数倍。默认值 : 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制数目。取值范围：1~50。默认值：10。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>成员uin。</p>
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * <p>集团管理员子账号uin。</p>
                     */
                    int64_t m_orgSubAccountUin;
                    bool m_orgSubAccountUinHasBeenSet;

                    /**
                     * <p>成员访问策略Id。</p>
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSAUTHPOLICYREQUEST_H_
