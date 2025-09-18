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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceSupportFeature请求参数结构体
                */
                class DescribeInstanceSupportFeatureRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSupportFeatureRequest();
                    ~DescribeInstanceSupportFeatureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取支持查询的功能特性如下所示。
- read-local-node-only：就近接入。
- multi-account：多账号管理。
- auto-failback：故障恢复场景，主节点是否开启自动回切。
                     * @return FeatureName 支持查询的功能特性如下所示。
- read-local-node-only：就近接入。
- multi-account：多账号管理。
- auto-failback：故障恢复场景，主节点是否开启自动回切。
                     * 
                     */
                    std::string GetFeatureName() const;

                    /**
                     * 设置支持查询的功能特性如下所示。
- read-local-node-only：就近接入。
- multi-account：多账号管理。
- auto-failback：故障恢复场景，主节点是否开启自动回切。
                     * @param _featureName 支持查询的功能特性如下所示。
- read-local-node-only：就近接入。
- multi-account：多账号管理。
- auto-failback：故障恢复场景，主节点是否开启自动回切。
                     * 
                     */
                    void SetFeatureName(const std::string& _featureName);

                    /**
                     * 判断参数 FeatureName 是否已赋值
                     * @return FeatureName 是否已赋值
                     * 
                     */
                    bool FeatureNameHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 支持查询的功能特性如下所示。
- read-local-node-only：就近接入。
- multi-account：多账号管理。
- auto-failback：故障恢复场景，主节点是否开启自动回切。
                     */
                    std::string m_featureName;
                    bool m_featureNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
