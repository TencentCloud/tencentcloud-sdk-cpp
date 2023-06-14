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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODEMEMBERSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODEMEMBERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20181225/model/OrgMember.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * ListOrganizationNodeMembers返回参数结构体
                */
                class ListOrganizationNodeMembersResponse : public AbstractModel
                {
                public:
                    ListOrganizationNodeMembersResponse();
                    ~ListOrganizationNodeMembersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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

                    /**
                     * 获取成员列表
                     * @return Members 成员列表
                     * 
                     */
                    std::vector<OrgMember> GetMembers() const;

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                private:

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 成员列表
                     */
                    std::vector<OrgMember> m_members;
                    bool m_membersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONNODEMEMBERSRESPONSE_H_
