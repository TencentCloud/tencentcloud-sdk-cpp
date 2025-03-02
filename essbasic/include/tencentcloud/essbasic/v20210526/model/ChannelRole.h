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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELROLE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/PermissionGroup.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 角色信息
                */
                class ChannelRole : public AbstractModel
                {
                public:
                    ChannelRole();
                    ~ChannelRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色ID,为32位字符串
                     * @return RoleId 角色ID,为32位字符串
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色ID,为32位字符串
                     * @param _roleId 角色ID,为32位字符串
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
                     * 获取角色的名称
                     * @return RoleName 角色的名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色的名称
                     * @param _roleName 角色的名称
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
                     * 获取此角色状态
1: 已经启用
2: 已经禁用
                     * @return RoleStatus 此角色状态
1: 已经启用
2: 已经禁用
                     * 
                     */
                    uint64_t GetRoleStatus() const;

                    /**
                     * 设置此角色状态
1: 已经启用
2: 已经禁用
                     * @param _roleStatus 此角色状态
1: 已经启用
2: 已经禁用
                     * 
                     */
                    void SetRoleStatus(const uint64_t& _roleStatus);

                    /**
                     * 判断参数 RoleStatus 是否已赋值
                     * @return RoleStatus 是否已赋值
                     * 
                     */
                    bool RoleStatusHasBeenSet() const;

                    /**
                     * 获取此角色对应的权限列表
                     * @return PermissionGroups 此角色对应的权限列表
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionGroups() const;

                    /**
                     * 设置此角色对应的权限列表
                     * @param _permissionGroups 此角色对应的权限列表
                     * 
                     */
                    void SetPermissionGroups(const std::vector<PermissionGroup>& _permissionGroups);

                    /**
                     * 判断参数 PermissionGroups 是否已赋值
                     * @return PermissionGroups 是否已赋值
                     * 
                     */
                    bool PermissionGroupsHasBeenSet() const;

                private:

                    /**
                     * 角色ID,为32位字符串
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色的名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 此角色状态
1: 已经启用
2: 已经禁用
                     */
                    uint64_t m_roleStatus;
                    bool m_roleStatusHasBeenSet;

                    /**
                     * 此角色对应的权限列表
                     */
                    std::vector<PermissionGroup> m_permissionGroups;
                    bool m_permissionGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELROLE_H_
