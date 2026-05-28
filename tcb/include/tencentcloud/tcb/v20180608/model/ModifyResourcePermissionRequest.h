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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYRESOURCEPERMISSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYRESOURCEPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyResourcePermission请求参数结构体
                */
                class ModifyResourcePermissionRequest : public AbstractModel
                {
                public:
                    ModifyResourcePermissionRequest();
                    ~ModifyResourcePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID
                     * @return EnvId 环境 ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 ID
                     * @param _envId 环境 ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表。
                     * @return ResourceType 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表。
                     * @param _resourceType 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表。
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
                     * 获取权限级别。可选值：- SQL型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限 。- 文档型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限；`CUSTOM`-自定义安全规则 。- 云函数：`CUSTOM`-自定义安全规则 。- 云存储（权限标签）：`READONLY`-所有用户可读，仅创建者和管理员可写；`PRIVATE`-仅创建者及管理员可读写；`ADMINWRITE`-所有用户可读，仅管理员可写；`ADMINONLY`-仅管理员可读写；`CUSTOM`-自定义安全规则。
                     * @return Permission 权限级别。可选值：- SQL型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限 。- 文档型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限；`CUSTOM`-自定义安全规则 。- 云函数：`CUSTOM`-自定义安全规则 。- 云存储（权限标签）：`READONLY`-所有用户可读，仅创建者和管理员可写；`PRIVATE`-仅创建者及管理员可读写；`ADMINWRITE`-所有用户可读，仅管理员可写；`ADMINONLY`-仅管理员可读写；`CUSTOM`-自定义安全规则。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置权限级别。可选值：- SQL型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限 。- 文档型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限；`CUSTOM`-自定义安全规则 。- 云函数：`CUSTOM`-自定义安全规则 。- 云存储（权限标签）：`READONLY`-所有用户可读，仅创建者和管理员可写；`PRIVATE`-仅创建者及管理员可读写；`ADMINWRITE`-所有用户可读，仅管理员可写；`ADMINONLY`-仅管理员可读写；`CUSTOM`-自定义安全规则。
                     * @param _permission 权限级别。可选值：- SQL型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限 。- 文档型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限；`CUSTOM`-自定义安全规则 。- 云函数：`CUSTOM`-自定义安全规则 。- 云存储（权限标签）：`READONLY`-所有用户可读，仅创建者和管理员可写；`PRIVATE`-仅创建者及管理员可读写；`ADMINWRITE`-所有用户可读，仅管理员可写；`ADMINONLY`-仅管理员可读写；`CUSTOM`-自定义安全规则。
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取资源标识。云函数可不传、云存储传存储桶名、数据库表传表名。
                     * @return Resource 资源标识。云函数可不传、云存储传存储桶名、数据库表传表名。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源标识。云函数可不传、云存储传存储桶名、数据库表传表名。
                     * @param _resource 资源标识。云函数可不传、云存储传存储桶名、数据库表传表名。
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取自定义安全规则配置，当Permission为 `CUSTOM`时必传。JSON字符串格式的规则表达式。配置参考：[云函数安全规则](https://docs.cloudbase.net/cloud-function/security-rules)、[云存储安全规则](https://docs.cloudbase.net/storage/security-rules)、[文档型数据库安全规则](https://docs.cloudbase.net/database/security-rules)。
                     * @return SecurityRule 自定义安全规则配置，当Permission为 `CUSTOM`时必传。JSON字符串格式的规则表达式。配置参考：[云函数安全规则](https://docs.cloudbase.net/cloud-function/security-rules)、[云存储安全规则](https://docs.cloudbase.net/storage/security-rules)、[文档型数据库安全规则](https://docs.cloudbase.net/database/security-rules)。
                     * 
                     */
                    std::string GetSecurityRule() const;

                    /**
                     * 设置自定义安全规则配置，当Permission为 `CUSTOM`时必传。JSON字符串格式的规则表达式。配置参考：[云函数安全规则](https://docs.cloudbase.net/cloud-function/security-rules)、[云存储安全规则](https://docs.cloudbase.net/storage/security-rules)、[文档型数据库安全规则](https://docs.cloudbase.net/database/security-rules)。
                     * @param _securityRule 自定义安全规则配置，当Permission为 `CUSTOM`时必传。JSON字符串格式的规则表达式。配置参考：[云函数安全规则](https://docs.cloudbase.net/cloud-function/security-rules)、[云存储安全规则](https://docs.cloudbase.net/storage/security-rules)、[文档型数据库安全规则](https://docs.cloudbase.net/database/security-rules)。
                     * 
                     */
                    void SetSecurityRule(const std::string& _securityRule);

                    /**
                     * 判断参数 SecurityRule 是否已赋值
                     * @return SecurityRule 是否已赋值
                     * 
                     */
                    bool SecurityRuleHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 权限级别。可选值：- SQL型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限 。- 文档型数据库表：`READONLY`-读取全部数据，修改本人数据；`PRIVATE`-读取和修改本人数据；`ADMINWRITE`-读取全部数据，不可修改数据；`ADMINONLY`-无权限；`CUSTOM`-自定义安全规则 。- 云函数：`CUSTOM`-自定义安全规则 。- 云存储（权限标签）：`READONLY`-所有用户可读，仅创建者和管理员可写；`PRIVATE`-仅创建者及管理员可读写；`ADMINWRITE`-所有用户可读，仅管理员可写；`ADMINONLY`-仅管理员可读写；`CUSTOM`-自定义安全规则。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 资源标识。云函数可不传、云存储传存储桶名、数据库表传表名。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 自定义安全规则配置，当Permission为 `CUSTOM`时必传。JSON字符串格式的规则表达式。配置参考：[云函数安全规则](https://docs.cloudbase.net/cloud-function/security-rules)、[云存储安全规则](https://docs.cloudbase.net/storage/security-rules)、[文档型数据库安全规则](https://docs.cloudbase.net/database/security-rules)。
                     */
                    std::string m_securityRule;
                    bool m_securityRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYRESOURCEPERMISSIONREQUEST_H_
