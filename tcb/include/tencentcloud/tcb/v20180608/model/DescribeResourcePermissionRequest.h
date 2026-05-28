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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONREQUEST_H_

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
                * DescribeResourcePermission请求参数结构体
                */
                class DescribeResourcePermissionRequest : public AbstractModel
                {
                public:
                    DescribeResourcePermissionRequest();
                    ~DescribeResourcePermissionRequest() = default;
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
                     * 获取资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表 `<br>`示例值：`table`。
                     * @return ResourceType 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表 `<br>`示例值：`table`。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表 `<br>`示例值：`table`。
                     * @param _resourceType 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表 `<br>`示例值：`table`。
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
                     * 获取资源标识列表。云函数不传或传空数组、云存储传存储桶名、数据库表传表名，不能超过100条。
                     * @return Resources 资源标识列表。云函数不传或传空数组、云存储传存储桶名、数据库表传表名，不能超过100条。
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置资源标识列表。云函数不传或传空数组、云存储传存储桶名、数据库表传表名，不能超过100条。
                     * @param _resources 资源标识列表。云函数不传或传空数组、云存储传存储桶名、数据库表传表名，不能超过100条。
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 资源类型：`function`-云函数、`storage`-云存储、`table`-SQL型数据库表、`collection`-文档型数据库表 `<br>`示例值：`table`。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源标识列表。云函数不传或传空数组、云存储传存储桶名、数据库表传表名，不能超过100条。
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONREQUEST_H_
