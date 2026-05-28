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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_RESOURCEPERMISSION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_RESOURCEPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源权限
                */
                class ResourcePermission : public AbstractModel
                {
                public:
                    ResourcePermission();
                    ~ResourcePermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型。
                     * @return ResourceType 资源类型。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型。
                     * @param _resourceType 资源类型。
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
                     * 获取资源标识
                     * @return Resource 资源标识
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源标识
                     * @param _resource 资源标识
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
                     * 获取权限级别。取值：READONLY、PRIVATE、ADMINWRITE、ADMINONLY、CUSTOM。
                     * @return Permission 权限级别。取值：READONLY、PRIVATE、ADMINWRITE、ADMINONLY、CUSTOM。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置权限级别。取值：READONLY、PRIVATE、ADMINWRITE、ADMINONLY、CUSTOM。
                     * @param _permission 权限级别。取值：READONLY、PRIVATE、ADMINWRITE、ADMINONLY、CUSTOM。
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
                     * 获取自定义安全规则配置，当 Permission 为 CUSTOM 时返回。
                     * @return SecurityRule 自定义安全规则配置，当 Permission 为 CUSTOM 时返回。
                     * 
                     */
                    std::string GetSecurityRule() const;

                    /**
                     * 设置自定义安全规则配置，当 Permission 为 CUSTOM 时返回。
                     * @param _securityRule 自定义安全规则配置，当 Permission 为 CUSTOM 时返回。
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
                     * 资源类型。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源标识
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 权限级别。取值：READONLY、PRIVATE、ADMINWRITE、ADMINONLY、CUSTOM。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 自定义安全规则配置，当 Permission 为 CUSTOM 时返回。
                     */
                    std::string m_securityRule;
                    bool m_securityRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_RESOURCEPERMISSION_H_
