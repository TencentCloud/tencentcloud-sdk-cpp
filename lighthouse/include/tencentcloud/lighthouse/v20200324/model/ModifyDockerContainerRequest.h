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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDOCKERCONTAINERREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDOCKERCONTAINERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/ContainerEnv.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerPublishPort.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerVolume.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyDockerContainer请求参数结构体
                */
                class ModifyDockerContainerRequest : public AbstractModel
                {
                public:
                    ModifyDockerContainerRequest();
                    ~ModifyDockerContainerRequest() = default;
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
                     * 获取环境变量列表
                     * @return Envs 环境变量列表
                     * 
                     */
                    std::vector<ContainerEnv> GetEnvs() const;

                    /**
                     * 设置环境变量列表
                     * @param _envs 环境变量列表
                     * 
                     */
                    void SetEnvs(const std::vector<ContainerEnv>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取容器端口主机端口映射列表
                     * @return PublishPorts 容器端口主机端口映射列表
                     * 
                     */
                    std::vector<DockerContainerPublishPort> GetPublishPorts() const;

                    /**
                     * 设置容器端口主机端口映射列表
                     * @param _publishPorts 容器端口主机端口映射列表
                     * 
                     */
                    void SetPublishPorts(const std::vector<DockerContainerPublishPort>& _publishPorts);

                    /**
                     * 判断参数 PublishPorts 是否已赋值
                     * @return PublishPorts 是否已赋值
                     * 
                     */
                    bool PublishPortsHasBeenSet() const;

                    /**
                     * 获取容器加载本地卷列表
                     * @return Volumes 容器加载本地卷列表
                     * 
                     */
                    std::vector<DockerContainerVolume> GetVolumes() const;

                    /**
                     * 设置容器加载本地卷列表
                     * @param _volumes 容器加载本地卷列表
                     * 
                     */
                    void SetVolumes(const std::vector<DockerContainerVolume>& _volumes);

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     * 
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取运行的命令
                     * @return Command 运行的命令
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置运行的命令
                     * @param _command 运行的命令
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取容器重启策略，对应docker "--restart"参数。

枚举值:
no: 不自动重启。默认策略。
on-failure[:max-retries]: 当容器退出码非0时重启容器。使用max-retries限制重启次数，比如on-failure:10，限制最多重启10次。
always: 只要容器退出就重启。
unless-stopped: 始终重新启动容器，包括在守护进程启动时，除非容器在 Docker 守护进程停止之前进入停止状态。
                     * @return RestartPolicy 容器重启策略，对应docker "--restart"参数。

枚举值:
no: 不自动重启。默认策略。
on-failure[:max-retries]: 当容器退出码非0时重启容器。使用max-retries限制重启次数，比如on-failure:10，限制最多重启10次。
always: 只要容器退出就重启。
unless-stopped: 始终重新启动容器，包括在守护进程启动时，除非容器在 Docker 守护进程停止之前进入停止状态。
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置容器重启策略，对应docker "--restart"参数。

枚举值:
no: 不自动重启。默认策略。
on-failure[:max-retries]: 当容器退出码非0时重启容器。使用max-retries限制重启次数，比如on-failure:10，限制最多重启10次。
always: 只要容器退出就重启。
unless-stopped: 始终重新启动容器，包括在守护进程启动时，除非容器在 Docker 守护进程停止之前进入停止状态。
                     * @param _restartPolicy 容器重启策略，对应docker "--restart"参数。

枚举值:
no: 不自动重启。默认策略。
on-failure[:max-retries]: 当容器退出码非0时重启容器。使用max-retries限制重启次数，比如on-failure:10，限制最多重启10次。
always: 只要容器退出就重启。
unless-stopped: 始终重新启动容器，包括在守护进程启动时，除非容器在 Docker 守护进程停止之前进入停止状态。
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

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
                     * 环境变量列表
                     */
                    std::vector<ContainerEnv> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 容器端口主机端口映射列表
                     */
                    std::vector<DockerContainerPublishPort> m_publishPorts;
                    bool m_publishPortsHasBeenSet;

                    /**
                     * 容器加载本地卷列表
                     */
                    std::vector<DockerContainerVolume> m_volumes;
                    bool m_volumesHasBeenSet;

                    /**
                     * 运行的命令
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 容器重启策略，对应docker "--restart"参数。

枚举值:
no: 不自动重启。默认策略。
on-failure[:max-retries]: 当容器退出码非0时重启容器。使用max-retries限制重启次数，比如on-failure:10，限制最多重启10次。
always: 只要容器退出就重启。
unless-stopped: 始终重新启动容器，包括在守护进程启动时，除非容器在 Docker 守护进程停止之前进入停止状态。
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDOCKERCONTAINERREQUEST_H_
