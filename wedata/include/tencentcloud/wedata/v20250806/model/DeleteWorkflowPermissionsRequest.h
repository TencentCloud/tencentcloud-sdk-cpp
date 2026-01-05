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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DeleteWorkflowPermission.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * DeleteWorkflowPermissions请求参数结构体
                */
                class DeleteWorkflowPermissionsRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowPermissionsRequest();
                    ~DeleteWorkflowPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取授权实体ID
                     * @return EntityId 授权实体ID
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置授权实体ID
                     * @param _entityId 授权实体ID
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取授权实体类型,folder/workflow
                     * @return EntityType 授权实体类型,folder/workflow
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置授权实体类型,folder/workflow
                     * @param _entityType 授权实体类型,folder/workflow
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取删除权限数组
                     * @return DeletePermissionList 删除权限数组
                     * 
                     */
                    std::vector<DeleteWorkflowPermission> GetDeletePermissionList() const;

                    /**
                     * 设置删除权限数组
                     * @param _deletePermissionList 删除权限数组
                     * 
                     */
                    void SetDeletePermissionList(const std::vector<DeleteWorkflowPermission>& _deletePermissionList);

                    /**
                     * 判断参数 DeletePermissionList 是否已赋值
                     * @return DeletePermissionList 是否已赋值
                     * 
                     */
                    bool DeletePermissionListHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 授权实体ID
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 授权实体类型,folder/workflow
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 删除权限数组
                     */
                    std::vector<DeleteWorkflowPermission> m_deletePermissionList;
                    bool m_deletePermissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSIONSREQUEST_H_
