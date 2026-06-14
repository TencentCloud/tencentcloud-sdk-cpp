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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_

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
                * CreateUserRoleProject请求参数结构体
                */
                class CreateUserRoleProjectRequest : public AbstractModel
                {
                public:
                    CreateUserRoleProjectRequest();
                    ~CreateUserRoleProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>角色ID列表</p>
                     * @return RoleIdList <p>角色ID列表</p>
                     * 
                     */
                    std::vector<int64_t> GetRoleIdList() const;

                    /**
                     * 设置<p>角色ID列表</p>
                     * @param _roleIdList <p>角色ID列表</p>
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
                     * 获取<p>用户列表（废弃）</p>
                     * @return UserList <p>用户列表（废弃）</p>
                     * @deprecated
                     */
                    std::vector<UserIdAndUserName> GetUserList() const;

                    /**
                     * 设置<p>用户列表（废弃）</p>
                     * @param _userList <p>用户列表（废弃）</p>
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
                     * 获取<p>用户列表（新）</p>
                     * @return UserInfoList <p>用户列表（新）</p>
                     * 
                     */
                    std::vector<UserInfo> GetUserInfoList() const;

                    /**
                     * 设置<p>用户列表（新）</p>
                     * @param _userInfoList <p>用户列表（新）</p>
                     * 
                     */
                    void SetUserInfoList(const std::vector<UserInfo>& _userInfoList);

                    /**
                     * 判断参数 UserInfoList 是否已赋值
                     * @return UserInfoList 是否已赋值
                     * 
                     */
                    bool UserInfoListHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>角色ID列表</p>
                     */
                    std::vector<int64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * <p>用户列表（废弃）</p>
                     */
                    std::vector<UserIdAndUserName> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * <p>用户列表（新）</p>
                     */
                    std::vector<UserInfo> m_userInfoList;
                    bool m_userInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERROLEPROJECTREQUEST_H_
