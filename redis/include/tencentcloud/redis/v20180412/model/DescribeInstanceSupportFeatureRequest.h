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
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
示例值：crs-asdasdas
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
示例值：crs-asdasdas
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
示例值：crs-asdasdas
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
示例值：crs-asdasdas
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
                     * 获取功能特性名称
- read-local-node-only 就近接入功能
- multi-account 多账号功能
                     * @return FeatureName 功能特性名称
- read-local-node-only 就近接入功能
- multi-account 多账号功能
                     * 
                     */
                    std::string GetFeatureName() const;

                    /**
                     * 设置功能特性名称
- read-local-node-only 就近接入功能
- multi-account 多账号功能
                     * @param _featureName 功能特性名称
- read-local-node-only 就近接入功能
- multi-account 多账号功能
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
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)在实例列表复制实例 ID。
示例值：crs-asdasdas
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 功能特性名称
- read-local-node-only 就近接入功能
- multi-account 多账号功能
                     */
                    std::string m_featureName;
                    bool m_featureNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
