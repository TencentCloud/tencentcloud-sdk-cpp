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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_

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
                * CreateOrganizationMemberAuthIdentity请求参数结构体
                */
                class CreateOrganizationMemberAuthIdentityRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberAuthIdentityRequest();
                    ~CreateOrganizationMemberAuthIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin列表。最多10个
                     * @return MemberUins 成员Uin列表。最多10个
                     * 
                     */
                    std::vector<uint64_t> GetMemberUins() const;

                    /**
                     * 设置成员Uin列表。最多10个
                     * @param _memberUins 成员Uin列表。最多10个
                     * 
                     */
                    void SetMemberUins(const std::vector<uint64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取身份Id列表。最多5个，可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @return IdentityIds 身份Id列表。最多5个，可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * 
                     */
                    std::vector<uint64_t> GetIdentityIds() const;

                    /**
                     * 设置身份Id列表。最多5个，可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * @param _identityIds 身份Id列表。最多5个，可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     * 
                     */
                    void SetIdentityIds(const std::vector<uint64_t>& _identityIds);

                    /**
                     * 判断参数 IdentityIds 是否已赋值
                     * @return IdentityIds 是否已赋值
                     * 
                     */
                    bool IdentityIdsHasBeenSet() const;

                private:

                    /**
                     * 成员Uin列表。最多10个
                     */
                    std::vector<uint64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * 身份Id列表。最多5个，可以通过[ListOrganizationIdentity](https://cloud.tencent.com/document/product/850/82934)获取
                     */
                    std::vector<uint64_t> m_identityIds;
                    bool m_identityIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
