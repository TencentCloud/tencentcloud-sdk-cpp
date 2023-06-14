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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 环境角色集合
                */
                class EnvironmentRole : public AbstractModel
                {
                public:
                    EnvironmentRole();
                    ~EnvironmentRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境（命名空间）。
                     * @return EnvironmentId 环境（命名空间）。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）。
                     * @param _environmentId 环境（命名空间）。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取角色名称。
                     * @return RoleName 角色名称。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称。
                     * @param _roleName 角色名称。
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
                     * 获取授权项，最多只能包含produce、consume两项的非空字符串数组。
                     * @return Permissions 授权项，最多只能包含produce、consume两项的非空字符串数组。
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置授权项，最多只能包含produce、consume两项的非空字符串数组。
                     * @param _permissions 授权项，最多只能包含produce、consume两项的非空字符串数组。
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取角色描述。
                     * @return RoleDescribe 角色描述。
                     * 
                     */
                    std::string GetRoleDescribe() const;

                    /**
                     * 设置角色描述。
                     * @param _roleDescribe 角色描述。
                     * 
                     */
                    void SetRoleDescribe(const std::string& _roleDescribe);

                    /**
                     * 判断参数 RoleDescribe 是否已赋值
                     * @return RoleDescribe 是否已赋值
                     * 
                     */
                    bool RoleDescribeHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 角色名称。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 授权项，最多只能包含produce、consume两项的非空字符串数组。
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * 角色描述。
                     */
                    std::string m_roleDescribe;
                    bool m_roleDescribeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENTROLE_H_
