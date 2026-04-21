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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ResourceListDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyResourceUserGroup请求参数结构体
                */
                class ModifyResourceUserGroupRequest : public AbstractModel
                {
                public:
                    ModifyResourceUserGroupRequest();
                    ~ModifyResourceUserGroupRequest() = default;
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
                     * 获取用户组id集合
                     * @return UserGroupIds 用户组id集合
                     * 
                     */
                    std::vector<int64_t> GetUserGroupIds() const;

                    /**
                     * 设置用户组id集合
                     * @param _userGroupIds 用户组id集合
                     * 
                     */
                    void SetUserGroupIds(const std::vector<int64_t>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取操作的资源权限
                     * @return Resource 操作的资源权限
                     * 
                     */
                    ResourceListDTO GetResource() const;

                    /**
                     * 设置操作的资源权限
                     * @param _resource 操作的资源权限
                     * 
                     */
                    void SetResource(const ResourceListDTO& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

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

                    /**
                     * 获取是否查询所有孩子节点
                     * @return QueryChildren 是否查询所有孩子节点
                     * 
                     */
                    bool GetQueryChildren() const;

                    /**
                     * 设置是否查询所有孩子节点
                     * @param _queryChildren 是否查询所有孩子节点
                     * 
                     */
                    void SetQueryChildren(const bool& _queryChildren);

                    /**
                     * 判断参数 QueryChildren 是否已赋值
                     * @return QueryChildren 是否已赋值
                     * 
                     */
                    bool QueryChildrenHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用户组id集合
                     */
                    std::vector<int64_t> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * 操作的资源权限
                     */
                    ResourceListDTO m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 是否查询所有孩子节点
                     */
                    bool m_queryChildren;
                    bool m_queryChildrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPREQUEST_H_
