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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroupsOfUser返回参数结构体
                */
                class ListUserGroupsOfUserResponse : public AbstractModel
                {
                public:
                    ListUserGroupsOfUserResponse();
                    ~ListUserGroupsOfUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取用户所属的用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupIds 用户所属的用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取用户ID，是用户的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户ID，是用户的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 用户所属的用户组ID列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * 用户ID，是用户的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERRESPONSE_H_
