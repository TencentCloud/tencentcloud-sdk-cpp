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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Role.h>
#include <tencentcloud/mongodb/v20190725/model/Auth.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateInstanceUser请求参数结构体
                */
                class CreateInstanceUserRequest : public AbstractModel
                {
                public:
                    CreateInstanceUserRequest();
                    ~CreateInstanceUserRequest() = default;
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>加密后的密码（与Password二选一）</p>
                     * @return EncryptedPassword <p>加密后的密码（与Password二选一）</p>
                     * 
                     */
                    std::string GetEncryptedPassword() const;

                    /**
                     * 设置<p>加密后的密码（与Password二选一）</p>
                     * @param _encryptedPassword <p>加密后的密码（与Password二选一）</p>
                     * 
                     */
                    void SetEncryptedPassword(const std::string& _encryptedPassword);

                    /**
                     * 判断参数 EncryptedPassword 是否已赋值
                     * @return EncryptedPassword 是否已赋值
                     * 
                     */
                    bool EncryptedPasswordHasBeenSet() const;

                    /**
                     * 获取<p>认证数据库（用户所属数据库）</p>
                     * @return Database <p>认证数据库（用户所属数据库）</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>认证数据库（用户所属数据库）</p>
                     * @param _database <p>认证数据库（用户所属数据库）</p>
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
                     * 获取<p>角色列表（新方式，可包含内置角色和自定义角色）</p>
                     * @return Roles <p>角色列表（新方式，可包含内置角色和自定义角色）</p>
                     * 
                     */
                    std::vector<Role> GetRoles() const;

                    /**
                     * 设置<p>角色列表（新方式，可包含内置角色和自定义角色）</p>
                     * @param _roles <p>角色列表（新方式，可包含内置角色和自定义角色）</p>
                     * 
                     */
                    void SetRoles(const std::vector<Role>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>权限列表（旧方式）</p>
                     * @return AuthRole <p>权限列表（旧方式）</p>
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置<p>权限列表（旧方式）</p>
                     * @param _authRole <p>权限列表（旧方式）</p>
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                    /**
                     * 获取<p>自定义描述</p>
                     * @return Description <p>自定义描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>自定义描述</p>
                     * @param _description <p>自定义描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启密码轮转（0-不开启，1-开启）</p>
                     * @return EnablePasswordRotation <p>是否开启密码轮转（0-不开启，1-开启）</p>
                     * 
                     */
                    int64_t GetEnablePasswordRotation() const;

                    /**
                     * 设置<p>是否开启密码轮转（0-不开启，1-开启）</p>
                     * @param _enablePasswordRotation <p>是否开启密码轮转（0-不开启，1-开启）</p>
                     * 
                     */
                    void SetEnablePasswordRotation(const int64_t& _enablePasswordRotation);

                    /**
                     * 判断参数 EnablePasswordRotation 是否已赋值
                     * @return EnablePasswordRotation 是否已赋值
                     * 
                     */
                    bool EnablePasswordRotationHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>加密后的密码（与Password二选一）</p>
                     */
                    std::string m_encryptedPassword;
                    bool m_encryptedPasswordHasBeenSet;

                    /**
                     * <p>认证数据库（用户所属数据库）</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>角色列表（新方式，可包含内置角色和自定义角色）</p>
                     */
                    std::vector<Role> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>权限列表（旧方式）</p>
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * <p>自定义描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否开启密码轮转（0-不开启，1-开启）</p>
                     */
                    int64_t m_enablePasswordRotation;
                    bool m_enablePasswordRotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEINSTANCEUSERREQUEST_H_
