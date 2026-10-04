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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 实体权限信息，用于在get/list接口中返回当前用户对实体的权限列表
                */
                class PermissionDetail : public AbstractModel
                {
                public:
                    PermissionDetail();
                    ~PermissionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前用户对该实体拥有的权限列表
                     * @return Permissions 当前用户对该实体拥有的权限列表
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置当前用户对该实体拥有的权限列表
                     * @param _permissions 当前用户对该实体拥有的权限列表
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
                     * 获取catalog在工作空间上的权限信息（可选）。取值：WORKSPACE_READONLY（只读）或WORKSPACE_READWRITE（读写）
                     * @return CatalogWorkspacePrivilege catalog在工作空间上的权限信息（可选）。取值：WORKSPACE_READONLY（只读）或WORKSPACE_READWRITE（读写）
                     * 
                     */
                    std::string GetCatalogWorkspacePrivilege() const;

                    /**
                     * 设置catalog在工作空间上的权限信息（可选）。取值：WORKSPACE_READONLY（只读）或WORKSPACE_READWRITE（读写）
                     * @param _catalogWorkspacePrivilege catalog在工作空间上的权限信息（可选）。取值：WORKSPACE_READONLY（只读）或WORKSPACE_READWRITE（读写）
                     * 
                     */
                    void SetCatalogWorkspacePrivilege(const std::string& _catalogWorkspacePrivilege);

                    /**
                     * 判断参数 CatalogWorkspacePrivilege 是否已赋值
                     * @return CatalogWorkspacePrivilege 是否已赋值
                     * 
                     */
                    bool CatalogWorkspacePrivilegeHasBeenSet() const;

                    /**
                     * 获取deny权限总列表（用户deny ∪ 角色deny ∪ 继承deny，已去重，已从Permissions中排除）
                     * @return DenyPrivilegeList deny权限总列表（用户deny ∪ 角色deny ∪ 继承deny，已去重，已从Permissions中排除）
                     * 
                     */
                    std::vector<std::string> GetDenyPrivilegeList() const;

                    /**
                     * 设置deny权限总列表（用户deny ∪ 角色deny ∪ 继承deny，已去重，已从Permissions中排除）
                     * @param _denyPrivilegeList deny权限总列表（用户deny ∪ 角色deny ∪ 继承deny，已去重，已从Permissions中排除）
                     * 
                     */
                    void SetDenyPrivilegeList(const std::vector<std::string>& _denyPrivilegeList);

                    /**
                     * 判断参数 DenyPrivilegeList 是否已赋值
                     * @return DenyPrivilegeList 是否已赋值
                     * 
                     */
                    bool DenyPrivilegeListHasBeenSet() const;

                private:

                    /**
                     * 当前用户对该实体拥有的权限列表
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * catalog在工作空间上的权限信息（可选）。取值：WORKSPACE_READONLY（只读）或WORKSPACE_READWRITE（读写）
                     */
                    std::string m_catalogWorkspacePrivilege;
                    bool m_catalogWorkspacePrivilegeHasBeenSet;

                    /**
                     * deny权限总列表（用户deny ∪ 角色deny ∪ 继承deny，已去重，已从Permissions中排除）
                     */
                    std::vector<std::string> m_denyPrivilegeList;
                    bool m_denyPrivilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_PERMISSIONDETAIL_H_
