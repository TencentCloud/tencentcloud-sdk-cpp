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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetRole请求参数结构体
                */
                class GetRoleRequest : public AbstractModel
                {
                public:
                    GetRoleRequest();
                    ~GetRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色 ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleId 角色 ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色 ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleId 角色 ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleName 角色名，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleName 角色名，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 角色 ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名，用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEREQUEST_H_
