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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20181225/model/OrgInvitation.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * ListOrganizationInvitations返回参数结构体
                */
                class ListOrganizationInvitationsResponse : public AbstractModel
                {
                public:
                    ListOrganizationInvitationsResponse();
                    ~ListOrganizationInvitationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取邀请信息列表
                     * @return Invitations 邀请信息列表
                     * 
                     */
                    std::vector<OrgInvitation> GetInvitations() const;

                    /**
                     * 判断参数 Invitations 是否已赋值
                     * @return Invitations 是否已赋值
                     * 
                     */
                    bool InvitationsHasBeenSet() const;

                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 邀请信息列表
                     */
                    std::vector<OrgInvitation> m_invitations;
                    bool m_invitationsHasBeenSet;

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSRESPONSE_H_
