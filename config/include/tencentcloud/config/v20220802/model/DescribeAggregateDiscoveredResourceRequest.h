/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATEDISCOVEREDRESOURCEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATEDISCOVEREDRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeAggregateDiscoveredResource请求参数结构体
                */
                class DescribeAggregateDiscoveredResourceRequest : public AbstractModel
                {
                public:
                    DescribeAggregateDiscoveredResourceRequest();
                    ~DescribeAggregateDiscoveredResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

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
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取资源所属用户ID
                     * @return ResourceOwnerId 资源所属用户ID
                     * 
                     */
                    uint64_t GetResourceOwnerId() const;

                    /**
                     * 设置资源所属用户ID
                     * @param _resourceOwnerId 资源所属用户ID
                     * 
                     */
                    void SetResourceOwnerId(const uint64_t& _resourceOwnerId);

                    /**
                     * 判断参数 ResourceOwnerId 是否已赋值
                     * @return ResourceOwnerId 是否已赋值
                     * 
                     */
                    bool ResourceOwnerIdHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 资源所属用户ID
                     */
                    uint64_t m_resourceOwnerId;
                    bool m_resourceOwnerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEAGGREGATEDISCOVEREDRESOURCEREQUEST_H_
