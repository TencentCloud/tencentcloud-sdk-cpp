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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GrantMemberProjectRole请求参数结构体
                */
                class GrantMemberProjectRoleRequest : public AbstractModel
                {
                public:
                    GrantMemberProjectRoleRequest();
                    ~GrantMemberProjectRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return UserUin 用户id
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户id
                     * @param _userUin 用户id
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取角色id列表，目前支持的项目角色有
- 308335260274237440 (项目管理员)
- 308335260676890624 (数据工程师)
- 308335260844662784 (运维工程师)
- 308335260945326080 (普通成员)
                     * @return RoleIds 角色id列表，目前支持的项目角色有
- 308335260274237440 (项目管理员)
- 308335260676890624 (数据工程师)
- 308335260844662784 (运维工程师)
- 308335260945326080 (普通成员)
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置角色id列表，目前支持的项目角色有
- 308335260274237440 (项目管理员)
- 308335260676890624 (数据工程师)
- 308335260844662784 (运维工程师)
- 308335260945326080 (普通成员)
                     * @param _roleIds 角色id列表，目前支持的项目角色有
- 308335260274237440 (项目管理员)
- 308335260676890624 (数据工程师)
- 308335260844662784 (运维工程师)
- 308335260945326080 (普通成员)
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用户id
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 角色id列表，目前支持的项目角色有
- 308335260274237440 (项目管理员)
- 308335260676890624 (数据工程师)
- 308335260844662784 (运维工程师)
- 308335260945326080 (普通成员)
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GRANTMEMBERPROJECTROLEREQUEST_H_
