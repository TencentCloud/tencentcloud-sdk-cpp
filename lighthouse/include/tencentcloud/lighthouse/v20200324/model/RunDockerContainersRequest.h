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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RUNDOCKERCONTAINERSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RUNDOCKERCONTAINERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerConfiguration.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * RunDockerContainers请求参数结构体
                */
                class RunDockerContainersRequest : public AbstractModel
                {
                public:
                    RunDockerContainersRequest();
                    ~RunDockerContainersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
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
                     * 获取要创建的容器列表。
                     * @return Containers 要创建的容器列表。
                     * 
                     */
                    std::vector<DockerContainerConfiguration> GetContainers() const;

                    /**
                     * 设置要创建的容器列表。
                     * @param _containers 要创建的容器列表。
                     * 
                     */
                    void SetContainers(const std::vector<DockerContainerConfiguration>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要创建的容器列表。
                     */
                    std::vector<DockerContainerConfiguration> m_containers;
                    bool m_containersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RUNDOCKERCONTAINERSREQUEST_H_
