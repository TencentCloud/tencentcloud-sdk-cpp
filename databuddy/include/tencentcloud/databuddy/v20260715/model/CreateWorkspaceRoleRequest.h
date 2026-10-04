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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACEROLEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACEROLEREQUEST_H_

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
                * CreateWorkspaceRole请求参数结构体
                */
                class CreateWorkspaceRoleRequest : public AbstractModel
                {
                public:
                    CreateWorkspaceRoleRequest();
                    ~CreateWorkspaceRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间id</p>
                     * @return WorkspaceId <p>工作空间id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间id</p>
                     * @param _workspaceId <p>工作空间id</p>
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
                     * 获取<p>角色基础信息</p>
                     * @return BasicInfo <p>角色基础信息</p>
                     * 
                     */
                    RoleBasicInfo GetBasicInfo() const;

                    /**
                     * 设置<p>角色基础信息</p>
                     * @param _basicInfo <p>角色基础信息</p>
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
                     * 获取<p>角色权限</p>
                     * @return Permissions <p>角色权限</p>
                     * 
                     */
                    std::vector<RolePermission> GetPermissions() const;

                    /**
                     * 设置<p>角色权限</p>
                     * @param _permissions <p>角色权限</p>
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
                     * <p>工作空间id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>角色基础信息</p>
                     */
                    RoleBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * <p>角色权限</p>
                     */
                    std::vector<RolePermission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKSPACEROLEREQUEST_H_
