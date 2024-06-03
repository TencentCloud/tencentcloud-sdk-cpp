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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STOPDOCKERCONTAINERSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STOPDOCKERCONTAINERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * StopDockerContainers请求参数结构体
                */
                class StopDockerContainersRequest : public AbstractModel
                {
                public:
                    StopDockerContainersRequest();
                    ~StopDockerContainersRequest() = default;
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
                     * 获取容器ID列表。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * @return ContainerIds 容器ID列表。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置容器ID列表。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * @param _containerIds 容器ID列表。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 容器ID列表。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STOPDOCKERCONTAINERSREQUEST_H_
