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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_

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
                * DeleteOrganizationMemberAuthIdentity请求参数结构体
                */
                class DeleteOrganizationMemberAuthIdentityRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationMemberAuthIdentityRequest();
                    ~DeleteOrganizationMemberAuthIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取身份ID。可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @return IdentityId 身份ID。可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @param _identityId 身份ID。可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
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
                     * 成员Uin。
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 身份ID。可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DELETEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
