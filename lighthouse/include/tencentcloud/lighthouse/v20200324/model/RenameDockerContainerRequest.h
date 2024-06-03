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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENAMEDOCKERCONTAINERREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENAMEDOCKERCONTAINERREQUEST_H_

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
                * RenameDockerContainer请求参数结构体
                */
                class RenameDockerContainerRequest : public AbstractModel
                {
                public:
                    RenameDockerContainerRequest();
                    ~RenameDockerContainerRequest() = default;
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
                     * 获取容器ID。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * @return ContainerId 容器ID。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器ID。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * @param _containerId 容器ID。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取容器新的名称。
                     * @return ContainerName 容器新的名称。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器新的名称。
                     * @param _containerName 容器新的名称。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 容器ID。可通过[DescribeDockerContainers](https://cloud.tencent.com/document/product/1207/95473)接口返回值中的ContainerId获取。
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 容器新的名称。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENAMEDOCKERCONTAINERREQUEST_H_
