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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserIdAndUserName.h>
#include <tencentcloud/bi/v20220105/model/UserInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateUserRole请求参数结构体
                */
                class CreateUserRoleRequest : public AbstractModel
                {
                public:
                    CreateUserRoleRequest();
                    ~CreateUserRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色ID列表
                     * @return RoleIdList 角色ID列表
                     * 
                     */
                    std::vector<int64_t> GetRoleIdList() const;

                    /**
                     * 设置角色ID列表
                     * @param _roleIdList 角色ID列表
                     * 
                     */
                    void SetRoleIdList(const std::vector<int64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取用户列表（废弃）
                     * @return UserList 用户列表（废弃）
                     * @deprecated
                     */
                    std::vector<UserIdAndUserName> GetUserList() const;

                    /**
                     * 设置用户列表（废弃）
                     * @param _userList 用户列表（废弃）
                     * @deprecated
                     */
                    void SetUserList(const std::vector<UserIdAndUserName>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * @deprecated
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取用户列表（新）
                     * @return UserInfoList 用户列表（新）
                     * 
                     */
                    std::vector<UserInfo> GetUserInfoList() const;

                    /**
                     * 设置用户列表（新）
                     * @param _userInfoList 用户列表（新）
                     * 
                     */
                    void SetUserInfoList(const std::vector<UserInfo>& _userInfoList);

                    /**
                     * 判断参数 UserInfoList 是否已赋值
                     * @return UserInfoList 是否已赋值
                     * 
                     */
                    bool UserInfoListHasBeenSet() const;

                    /**
                     * 获取用户组id列表
                     * @return UserGroups 用户组id列表
                     * 
                     */
                    std::vector<uint64_t> GetUserGroups() const;

                    /**
                     * 设置用户组id列表
                     * @param _userGroups 用户组id列表
                     * 
                     */
                    void SetUserGroups(const std::vector<uint64_t>& _userGroups);

                    /**
                     * 判断参数 UserGroups 是否已赋值
                     * @return UserGroups 是否已赋值
                     * 
                     */
                    bool UserGroupsHasBeenSet() const;

                private:

                    /**
                     * 角色ID列表
                     */
                    std::vector<int64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * 用户列表（废弃）
                     */
                    std::vector<UserIdAndUserName> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * 用户列表（新）
                     */
                    std::vector<UserInfo> m_userInfoList;
                    bool m_userInfoListHasBeenSet;

                    /**
                     * 用户组id列表
                     */
                    std::vector<uint64_t> m_userGroups;
                    bool m_userGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEREQUEST_H_
