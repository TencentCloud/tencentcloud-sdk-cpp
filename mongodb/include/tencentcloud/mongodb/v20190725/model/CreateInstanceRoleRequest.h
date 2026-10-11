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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEROLEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RolePrivilege.h>
#include <tencentcloud/mongodb/v20190725/model/Role.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateInstanceRole请求参数结构体
                */
                class CreateInstanceRoleRequest : public AbstractModel
                {
                public:
                    CreateInstanceRoleRequest();
                    ~CreateInstanceRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>角色名</p>
                     * @return RoleName <p>角色名</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名</p>
                     * @param _roleName <p>角色名</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>角色所属db</p>
                     * @return Database <p>角色所属db</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>角色所属db</p>
                     * @param _database <p>角色所属db</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>权限</p>
                     * @return Privileges <p>权限</p>
                     * 
                     */
                    std::vector<RolePrivilege> GetPrivileges() const;

                    /**
                     * 设置<p>权限</p>
                     * @param _privileges <p>权限</p>
                     * 
                     */
                    void SetPrivileges(const std::vector<RolePrivilege>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取<p>继承角色</p>
                     * @return InheritedRoles <p>继承角色</p>
                     * 
                     */
                    std::vector<Role> GetInheritedRoles() const;

                    /**
                     * 设置<p>继承角色</p>
                     * @param _inheritedRoles <p>继承角色</p>
                     * 
                     */
                    void SetInheritedRoles(const std::vector<Role>& _inheritedRoles);

                    /**
                     * 判断参数 InheritedRoles 是否已赋值
                     * @return InheritedRoles 是否已赋值
                     * 
                     */
                    bool InheritedRolesHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>角色名</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>角色所属db</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>权限</p>
                     */
                    std::vector<RolePrivilege> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * <p>继承角色</p>
                     */
                    std::vector<Role> m_inheritedRoles;
                    bool m_inheritedRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEROLEREQUEST_H_
