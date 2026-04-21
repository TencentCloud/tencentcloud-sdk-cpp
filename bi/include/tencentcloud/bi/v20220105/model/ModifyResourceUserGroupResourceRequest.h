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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserResourceDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyResourceUserGroupResource请求参数结构体
                */
                class ModifyResourceUserGroupResourceRequest : public AbstractModel
                {
                public:
                    ModifyResourceUserGroupResourceRequest();
                    ~ModifyResourceUserGroupResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return UserGroupId 用户id
                     * 
                     */
                    int64_t GetUserGroupId() const;

                    /**
                     * 设置用户id
                     * @param _userGroupId 用户id
                     * 
                     */
                    void SetUserGroupId(const int64_t& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取资源
                     * @return Resource 资源
                     * 
                     */
                    UserResourceDTO GetResource() const;

                    /**
                     * 设置资源
                     * @param _resource 资源
                     * 
                     */
                    void SetResource(const UserResourceDTO& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取实体类
                     * @return EntityIds 实体类
                     * 
                     */
                    std::vector<int64_t> GetEntityIds() const;

                    /**
                     * 设置实体类
                     * @param _entityIds 实体类
                     * 
                     */
                    void SetEntityIds(const std::vector<int64_t>& _entityIds);

                    /**
                     * 判断参数 EntityIds 是否已赋值
                     * @return EntityIds 是否已赋值
                     * 
                     */
                    bool EntityIdsHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用户id
                     */
                    int64_t m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 资源
                     */
                    UserResourceDTO m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 实体类
                     */
                    std::vector<int64_t> m_entityIds;
                    bool m_entityIdsHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_
