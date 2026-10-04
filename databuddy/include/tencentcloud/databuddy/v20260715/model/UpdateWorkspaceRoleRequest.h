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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEROLEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/RolePermission.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateWorkspaceRole请求参数结构体
                */
                class UpdateWorkspaceRoleRequest : public AbstractModel
                {
                public:
                    UpdateWorkspaceRoleRequest();
                    ~UpdateWorkspaceRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间ID
                     * @return WorkspaceId 工作空间ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _workspaceId 工作空间ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取角色信息
                     * @return BasicInfo 角色信息
                     * 
                     */
                    RoleBasicInfo GetBasicInfo() const;

                    /**
                     * 设置角色信息
                     * @param _basicInfo 角色信息
                     * 
                     */
                    void SetBasicInfo(const RoleBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取功能点权限
                     * @return Permissions 功能点权限
                     * 
                     */
                    std::vector<RolePermission> GetPermissions() const;

                    /**
                     * 设置功能点权限
                     * @param _permissions 功能点权限
                     * 
                     */
                    void SetPermissions(const std::vector<RolePermission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 角色信息
                     */
                    RoleBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 功能点权限
                     */
                    std::vector<RolePermission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEROLEREQUEST_H_
