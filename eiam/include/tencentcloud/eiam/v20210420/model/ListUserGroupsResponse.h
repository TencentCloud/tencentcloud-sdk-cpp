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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserGroupInformation.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroups返回参数结构体
                */
                class ListUserGroupsResponse : public AbstractModel
                {
                public:
                    ListUserGroupsResponse();
                    ~ListUserGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的用户组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupList 返回的用户组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserGroupInformation> GetUserGroupList() const;

                    /**
                     * 判断参数 UserGroupList 是否已赋值
                     * @return UserGroupList 是否已赋值
                     * 
                     */
                    bool UserGroupListHasBeenSet() const;

                    /**
                     * 获取返回的用户组信息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 返回的用户组信息总数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 返回的用户组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserGroupInformation> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                    /**
                     * 返回的用户组信息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_
