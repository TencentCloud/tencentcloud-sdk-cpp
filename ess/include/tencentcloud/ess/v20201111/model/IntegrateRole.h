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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATEROLE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATEROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/PermissionGroup.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 企业角色数据信息
                */
                class IntegrateRole : public AbstractModel
                {
                public:
                    IntegrateRole();
                    ~IntegrateRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色id
                     * @return RoleId 角色id
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色id
                     * @param _roleId 角色id
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
                     * 获取角色名
                     * @return RoleName 角色名
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名
                     * @param _roleName 角色名
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
                     * 获取角色状态，1-启用，2-禁用
                     * @return RoleStatus 角色状态，1-启用，2-禁用
                     * 
                     */
                    uint64_t GetRoleStatus() const;

                    /**
                     * 设置角色状态，1-启用，2-禁用
                     * @param _roleStatus 角色状态，1-启用，2-禁用
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
                     * 获取是否是集团角色，true-是，false-否
                     * @return IsGroupRole 是否是集团角色，true-是，false-否
                     * 
                     */
                    bool GetIsGroupRole() const;

                    /**
                     * 设置是否是集团角色，true-是，false-否
                     * @param _isGroupRole 是否是集团角色，true-是，false-否
                     * 
                     */
                    void SetIsGroupRole(const bool& _isGroupRole);

                    /**
                     * 判断参数 IsGroupRole 是否已赋值
                     * @return IsGroupRole 是否已赋值
                     * 
                     */
                    bool IsGroupRoleHasBeenSet() const;

                    /**
                     * 获取管辖的子企业列表
                     * @return SubOrgIdList 管辖的子企业列表
                     * 
                     */
                    std::vector<std::string> GetSubOrgIdList() const;

                    /**
                     * 设置管辖的子企业列表
                     * @param _subOrgIdList 管辖的子企业列表
                     * 
                     */
                    void SetSubOrgIdList(const std::vector<std::string>& _subOrgIdList);

                    /**
                     * 判断参数 SubOrgIdList 是否已赋值
                     * @return SubOrgIdList 是否已赋值
                     * 
                     */
                    bool SubOrgIdListHasBeenSet() const;

                    /**
                     * 获取权限树
                     * @return PermissionGroups 权限树
                     * 
                     */
                    std::vector<PermissionGroup> GetPermissionGroups() const;

                    /**
                     * 设置权限树
                     * @param _permissionGroups 权限树
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
                     * 角色id
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色状态，1-启用，2-禁用
                     */
                    uint64_t m_roleStatus;
                    bool m_roleStatusHasBeenSet;

                    /**
                     * 是否是集团角色，true-是，false-否
                     */
                    bool m_isGroupRole;
                    bool m_isGroupRoleHasBeenSet;

                    /**
                     * 管辖的子企业列表
                     */
                    std::vector<std::string> m_subOrgIdList;
                    bool m_subOrgIdListHasBeenSet;

                    /**
                     * 权限树
                     */
                    std::vector<PermissionGroup> m_permissionGroups;
                    bool m_permissionGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATEROLE_H_
