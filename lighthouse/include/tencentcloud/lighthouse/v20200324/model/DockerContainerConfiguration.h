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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Docker容器创建时的配置
                */
                class DockerContainerConfiguration : public AbstractModel
                {
                public:
                    DockerContainerConfiguration();
                    ~DockerContainerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取容器重启策略。
- no -默认策略，在容器退出时不重启容器
- on-failure -在容器非正常退出时（退出状态非0），才会重启容器
- on-failure:3 -在容器非正常退出时重启容器，最多重启3次
- always -在容器退出时总是重启容器
                     * @return RestartPolicy 容器重启策略。
- no -默认策略，在容器退出时不重启容器
- on-failure -在容器非正常退出时（退出状态非0），才会重启容器
- on-failure:3 -在容器非正常退出时重启容器，最多重启3次
- always -在容器退出时总是重启容器
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置容器重启策略。
- no -默认策略，在容器退出时不重启容器
- on-failure -在容器非正常退出时（退出状态非0），才会重启容器
- on-failure:3 -在容器非正常退出时重启容器，最多重启3次
- always -在容器退出时总是重启容器
                     * @param _restartPolicy 容器重启策略。
- no -默认策略，在容器退出时不重启容器
- on-failure -在容器非正常退出时（退出状态非0），才会重启容器
- on-failure:3 -在容器非正常退出时重启容器，最多重启3次
- always -在容器退出时总是重启容器
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
                     * 容器镜像地址
                     */
                    std::string m_containerImage;
                    bool m_containerImageHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

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
                     * 容器重启策略。
- no -默认策略，在容器退出时不重启容器
- on-failure -在容器非正常退出时（退出状态非0），才会重启容器
- on-failure:3 -在容器非正常退出时重启容器，最多重启3次
- always -在容器退出时总是重启容器
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_
