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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINER_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Docker容器信息
                */
                class DockerContainer : public AbstractModel
                {
                public:
                    DockerContainer();
                    ~DockerContainer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器ID
                     * @return ContainerId 容器ID
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器ID
                     * @param _containerId 容器ID
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
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器镜像地址
                     * @return ContainerImage 容器镜像地址
                     * 
                     */
                    std::string GetContainerImage() const;

                    /**
                     * 设置容器镜像地址
                     * @param _containerImage 容器镜像地址
                     * 
                     */
                    void SetContainerImage(const std::string& _containerImage);

                    /**
                     * 判断参数 ContainerImage 是否已赋值
                     * @return ContainerImage 是否已赋值
                     * 
                     */
                    bool ContainerImageHasBeenSet() const;

                    /**
                     * 获取容器Command
                     * @return Command 容器Command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置容器Command
                     * @param _command 容器Command
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
                     * 获取容器状态描述
                     * @return Status 容器状态描述
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置容器状态描述
                     * @param _status 容器状态描述
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取容器状态，和docker的容器状态保持一致，当前取值有：created（已创建）、restarting（重启中）、running（运行中）、removing（迁移中）、paused（暂停）、exited（停止）和dead（死亡）

                     * @return State 容器状态，和docker的容器状态保持一致，当前取值有：created（已创建）、restarting（重启中）、running（运行中）、removing（迁移中）、paused（暂停）、exited（停止）和dead（死亡）

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置容器状态，和docker的容器状态保持一致，当前取值有：created（已创建）、restarting（重启中）、running（运行中）、removing（迁移中）、paused（暂停）、exited（停止）和dead（死亡）

                     * @param _state 容器状态，和docker的容器状态保持一致，当前取值有：created（已创建）、restarting（重启中）、running（运行中）、removing（迁移中）、paused（暂停）、exited（停止）和dead（死亡）

                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取容器端口主机端口映射列表
                     * @return PublishPortSet 容器端口主机端口映射列表
                     * 
                     */
                    std::vector<DockerContainerPublishPort> GetPublishPortSet() const;

                    /**
                     * 设置容器端口主机端口映射列表
                     * @param _publishPortSet 容器端口主机端口映射列表
                     * 
                     */
                    void SetPublishPortSet(const std::vector<DockerContainerPublishPort>& _publishPortSet);

                    /**
                     * 判断参数 PublishPortSet 是否已赋值
                     * @return PublishPortSet 是否已赋值
                     * 
                     */
                    bool PublishPortSetHasBeenSet() const;

                    /**
                     * 获取容器挂载本地卷列表
                     * @return VolumeSet 容器挂载本地卷列表
                     * 
                     */
                    std::vector<DockerContainerVolume> GetVolumeSet() const;

                    /**
                     * 设置容器挂载本地卷列表
                     * @param _volumeSet 容器挂载本地卷列表
                     * 
                     */
                    void SetVolumeSet(const std::vector<DockerContainerVolume>& _volumeSet);

                    /**
                     * 判断参数 VolumeSet 是否已赋值
                     * @return VolumeSet 是否已赋值
                     * 
                     */
                    bool VolumeSetHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 容器ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器镜像地址
                     */
                    std::string m_containerImage;
                    bool m_containerImageHasBeenSet;

                    /**
                     * 容器Command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 容器状态描述
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 容器状态，和docker的容器状态保持一致，当前取值有：created（已创建）、restarting（重启中）、running（运行中）、removing（迁移中）、paused（暂停）、exited（停止）和dead（死亡）

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 容器端口主机端口映射列表
                     */
                    std::vector<DockerContainerPublishPort> m_publishPortSet;
                    bool m_publishPortSetHasBeenSet;

                    /**
                     * 容器挂载本地卷列表
                     */
                    std::vector<DockerContainerVolume> m_volumeSet;
                    bool m_volumeSetHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINER_H_
