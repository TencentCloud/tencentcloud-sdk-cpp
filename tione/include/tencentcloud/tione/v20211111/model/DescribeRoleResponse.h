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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEROLERESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/AccessRule.h>
#include <tencentcloud/tione/v20211111/model/ResourcePermission.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeRole返回参数结构体
                */
                class DescribeRoleResponse : public AbstractModel
                {
                public:
                    DescribeRoleResponse();
                    ~DescribeRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>角色ID</p>
                     * @return RoleId <p>角色ID</p>
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取<p>角色名称</p>
                     * @return RoleName <p>角色名称</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>角色类型</p>
                     * @return RoleType <p>角色类型</p>
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>权限规则列表</p>
                     * @return AccessRules <p>权限规则列表</p>
                     * 
                     */
                    std::vector<AccessRule> GetAccessRules() const;

                    /**
                     * 判断参数 AccessRules 是否已赋值
                     * @return AccessRules 是否已赋值
                     * 
                     */
                    bool AccessRulesHasBeenSet() const;

                    /**
                     * 获取<p>资源级权限列表</p>
                     * @return ResourcePermissions <p>资源级权限列表</p>
                     * 
                     */
                    std::vector<ResourcePermission> GetResourcePermissions() const;

                    /**
                     * 判断参数 ResourcePermissions 是否已赋值
                     * @return ResourcePermissions 是否已赋值
                     * 
                     */
                    bool ResourcePermissionsHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>角色ID</p>
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>角色名称</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>角色类型</p>
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>权限规则列表</p>
                     */
                    std::vector<AccessRule> m_accessRules;
                    bool m_accessRulesHasBeenSet;

                    /**
                     * <p>资源级权限列表</p>
                     */
                    std::vector<ResourcePermission> m_resourcePermissions;
                    bool m_resourcePermissionsHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEROLERESPONSE_H_
