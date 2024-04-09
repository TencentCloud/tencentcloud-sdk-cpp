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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_

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
                * DescribeOrganizationMemberAuthIdentities请求参数结构体
                */
                class DescribeOrganizationMemberAuthIdentitiesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberAuthIdentitiesRequest();
                    ~DescribeOrganizationMemberAuthIdentitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量。取值是limit的整数倍，默认值 : 0
                     * @return Offset 偏移量。取值是limit的整数倍，默认值 : 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍，默认值 : 0
                     * @param _offset 偏移量。取值是limit的整数倍，默认值 : 0
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
                     * 获取限制数目。取值范围：1~50，默认值：10
                     * @return Limit 限制数目。取值范围：1~50，默认值：10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50，默认值：10
                     * @param _limit 限制数目。取值范围：1~50，默认值：10
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
                     * 获取组织成员Uin。入参MemberUin与IdentityId至少填写一个
                     * @return MemberUin 组织成员Uin。入参MemberUin与IdentityId至少填写一个
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置组织成员Uin。入参MemberUin与IdentityId至少填写一个
                     * @param _memberUin 组织成员Uin。入参MemberUin与IdentityId至少填写一个
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
                     * 获取身份ID。入参MemberUin与IdentityId至少填写一个, 可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @return IdentityId 身份ID。入参MemberUin与IdentityId至少填写一个, 可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。入参MemberUin与IdentityId至少填写一个, 可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @param _identityId 身份ID。入参MemberUin与IdentityId至少填写一个, 可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * 
                     */
                    void SetIdentityId(const uint64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                private:

                    /**
                     * 偏移量。取值是limit的整数倍，默认值 : 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50，默认值：10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 组织成员Uin。入参MemberUin与IdentityId至少填写一个
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 身份ID。入参MemberUin与IdentityId至少填写一个, 可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
