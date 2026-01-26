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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/Subject.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * AuthorizePrivileges请求参数结构体
                */
                class AuthorizePrivilegesRequest : public AbstractModel
                {
                public:
                    AuthorizePrivilegesRequest();
                    ~AuthorizePrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源数组
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table,，取catalogName.SchemaName.TableName

                     * @return Resources 资源数组
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table,，取catalogName.SchemaName.TableName

                     * 
                     */
                    std::vector<PrivilegeResource> GetResources() const;

                    /**
                     * 设置资源数组
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table,，取catalogName.SchemaName.TableName

                     * @param _resources 资源数组
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table,，取catalogName.SchemaName.TableName

                     * 
                     */
                    void SetResources(const std::vector<PrivilegeResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取授权主体数组，SubjectType及对应SubjectValue取值规则
- User 用户
    - 取自DescribeTenantUserList中的UserId
- Project 项目
    - 取自DescribeUserProjects中的ProjectId
- Role 角色（项目级角色）
    - 先调用DescribeUserProjects获取项目ID（ProjectId），再调用DescribeRoleList中的角色ID（RoleId），拼装为$ProjectId.$ProjectId. RoleId，例如"3085649716411588608.308335260274237440"
- GlobalRole （平台级角色）
    - AllAccountUsers 全部用户
    - 其他ID，取自DescribeTenantRole中的RoleId
                     * @return Subjects 授权主体数组，SubjectType及对应SubjectValue取值规则
- User 用户
    - 取自DescribeTenantUserList中的UserId
- Project 项目
    - 取自DescribeUserProjects中的ProjectId
- Role 角色（项目级角色）
    - 先调用DescribeUserProjects获取项目ID（ProjectId），再调用DescribeRoleList中的角色ID（RoleId），拼装为$ProjectId.$ProjectId. RoleId，例如"3085649716411588608.308335260274237440"
- GlobalRole （平台级角色）
    - AllAccountUsers 全部用户
    - 其他ID，取自DescribeTenantRole中的RoleId
                     * 
                     */
                    std::vector<Subject> GetSubjects() const;

                    /**
                     * 设置授权主体数组，SubjectType及对应SubjectValue取值规则
- User 用户
    - 取自DescribeTenantUserList中的UserId
- Project 项目
    - 取自DescribeUserProjects中的ProjectId
- Role 角色（项目级角色）
    - 先调用DescribeUserProjects获取项目ID（ProjectId），再调用DescribeRoleList中的角色ID（RoleId），拼装为$ProjectId.$ProjectId. RoleId，例如"3085649716411588608.308335260274237440"
- GlobalRole （平台级角色）
    - AllAccountUsers 全部用户
    - 其他ID，取自DescribeTenantRole中的RoleId
                     * @param _subjects 授权主体数组，SubjectType及对应SubjectValue取值规则
- User 用户
    - 取自DescribeTenantUserList中的UserId
- Project 项目
    - 取自DescribeUserProjects中的ProjectId
- Role 角色（项目级角色）
    - 先调用DescribeUserProjects获取项目ID（ProjectId），再调用DescribeRoleList中的角色ID（RoleId），拼装为$ProjectId.$ProjectId. RoleId，例如"3085649716411588608.308335260274237440"
- GlobalRole （平台级角色）
    - AllAccountUsers 全部用户
    - 其他ID，取自DescribeTenantRole中的RoleId
                     * 
                     */
                    void SetSubjects(const std::vector<Subject>& _subjects);

                    /**
                     * 判断参数 Subjects 是否已赋值
                     * @return Subjects 是否已赋值
                     * 
                     */
                    bool SubjectsHasBeenSet() const;

                    /**
                     * 获取权限点，来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的各类Privileges中的NAME
                     * @return Privileges 权限点，来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的各类Privileges中的NAME
                     * 
                     */
                    std::vector<PrivilegeInfo> GetPrivileges() const;

                    /**
                     * 设置权限点，来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的各类Privileges中的NAME
                     * @param _privileges 权限点，来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的各类Privileges中的NAME
                     * 
                     */
                    void SetPrivileges(const std::vector<PrivilegeInfo>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 资源数组
ResourceType：来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的ResourceType，并改为首字母大写，例如METALAKE对应Metalake
ResourceUri，取决于 ResourceType，Metalake时固定为default，其他类别采用catalog的三段式结构，例如
- Metalake，固定为default
- Catalog，取catalogName
- Schema，取catalogName.SchemaName
- Table,，取catalogName.SchemaName.TableName

                     */
                    std::vector<PrivilegeResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 授权主体数组，SubjectType及对应SubjectValue取值规则
- User 用户
    - 取自DescribeTenantUserList中的UserId
- Project 项目
    - 取自DescribeUserProjects中的ProjectId
- Role 角色（项目级角色）
    - 先调用DescribeUserProjects获取项目ID（ProjectId），再调用DescribeRoleList中的角色ID（RoleId），拼装为$ProjectId.$ProjectId. RoleId，例如"3085649716411588608.308335260274237440"
- GlobalRole （平台级角色）
    - AllAccountUsers 全部用户
    - 其他ID，取自DescribeTenantRole中的RoleId
                     */
                    std::vector<Subject> m_subjects;
                    bool m_subjectsHasBeenSet;

                    /**
                     * 权限点，来源于TCCATALOG模块的GetGrantPrivilegesSTD接口中返回的各类Privileges中的NAME
                     */
                    std::vector<PrivilegeInfo> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESREQUEST_H_
