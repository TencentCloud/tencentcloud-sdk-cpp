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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 账号信息
                */
                class InstanceUserInfo : public AbstractModel
                {
                public:
                    InstanceUserInfo();
                    ~InstanceUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>认证数据库</p>
                     * @return Database <p>认证数据库</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>认证数据库</p>
                     * @param _database <p>认证数据库</p>
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
                     * 获取<p>角色列表（新方式）</p>
                     * @return Roles <p>角色列表（新方式）</p>
                     * 
                     */
                    std::vector<Role> GetRoles() const;

                    /**
                     * 设置<p>角色列表（新方式）</p>
                     * @param _roles <p>角色列表（新方式）</p>
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
                     * 获取<p>权限列表（老方式）</p>
                     * @return AuthRole <p>权限列表（老方式）</p>
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置<p>权限列表（老方式）</p>
                     * @param _authRole <p>权限列表（老方式）</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>控制台密码更新时间</p>
                     * @return ConsolePassUpdateTime <p>控制台密码更新时间</p>
                     * 
                     */
                    std::string GetConsolePassUpdateTime() const;

                    /**
                     * 设置<p>控制台密码更新时间</p>
                     * @param _consolePassUpdateTime <p>控制台密码更新时间</p>
                     * 
                     */
                    void SetConsolePassUpdateTime(const std::string& _consolePassUpdateTime);

                    /**
                     * 判断参数 ConsolePassUpdateTime 是否已赋值
                     * @return ConsolePassUpdateTime 是否已赋值
                     * 
                     */
                    bool ConsolePassUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启密码轮转</p>
                     * @return EnablePasswordRotation <p>是否开启密码轮转</p>
                     * 
                     */
                    int64_t GetEnablePasswordRotation() const;

                    /**
                     * 设置<p>是否开启密码轮转</p>
                     * @param _enablePasswordRotation <p>是否开启密码轮转</p>
                     * 
                     */
                    void SetEnablePasswordRotation(const int64_t& _enablePasswordRotation);

                    /**
                     * 判断参数 EnablePasswordRotation 是否已赋值
                     * @return EnablePasswordRotation 是否已赋值
                     * 
                     */
                    bool EnablePasswordRotationHasBeenSet() const;

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

                private:

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>认证数据库</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>角色列表（新方式）</p>
                     */
                    std::vector<Role> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>权限列表（老方式）</p>
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>控制台密码更新时间</p>
                     */
                    std::string m_consolePassUpdateTime;
                    bool m_consolePassUpdateTimeHasBeenSet;

                    /**
                     * <p>是否开启密码轮转</p>
                     */
                    int64_t m_enablePasswordRotation;
                    bool m_enablePasswordRotationHasBeenSet;

                    /**
                     * <p>自定义描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_
