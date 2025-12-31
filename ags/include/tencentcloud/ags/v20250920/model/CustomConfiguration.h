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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/EnvVar.h>
#include <tencentcloud/ags/v20250920/model/PortConfiguration.h>
#include <tencentcloud/ags/v20250920/model/ResourceConfiguration.h>
#include <tencentcloud/ags/v20250920/model/ProbeConfiguration.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱自定义配置
                */
                class CustomConfiguration : public AbstractModel
                {
                public:
                    CustomConfiguration();
                    ~CustomConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像地址
                     * @return Image 镜像地址
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
                     * @param _image 镜像地址
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取镜像仓库类型：`enterprise`、`personal`。
                     * @return ImageRegistryType 镜像仓库类型：`enterprise`、`personal`。
                     * 
                     */
                    std::string GetImageRegistryType() const;

                    /**
                     * 设置镜像仓库类型：`enterprise`、`personal`。
                     * @param _imageRegistryType 镜像仓库类型：`enterprise`、`personal`。
                     * 
                     */
                    void SetImageRegistryType(const std::string& _imageRegistryType);

                    /**
                     * 判断参数 ImageRegistryType 是否已赋值
                     * @return ImageRegistryType 是否已赋值
                     * 
                     */
                    bool ImageRegistryTypeHasBeenSet() const;

                    /**
                     * 获取启动命令
                     * @return Command 启动命令
                     * 
                     */
                    std::vector<std::string> GetCommand() const;

                    /**
                     * 设置启动命令
                     * @param _command 启动命令
                     * 
                     */
                    void SetCommand(const std::vector<std::string>& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取启动参数
                     * @return Args 启动参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置启动参数
                     * @param _args 启动参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return Env 环境变量
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置环境变量
                     * @param _env 环境变量
                     * 
                     */
                    void SetEnv(const std::vector<EnvVar>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取端口配置
                     * @return Ports 端口配置
                     * 
                     */
                    std::vector<PortConfiguration> GetPorts() const;

                    /**
                     * 设置端口配置
                     * @param _ports 端口配置
                     * 
                     */
                    void SetPorts(const std::vector<PortConfiguration>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return Resources 资源配置
                     * 
                     */
                    ResourceConfiguration GetResources() const;

                    /**
                     * 设置资源配置
                     * @param _resources 资源配置
                     * 
                     */
                    void SetResources(const ResourceConfiguration& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取探针配置
                     * @return Probe 探针配置
                     * 
                     */
                    ProbeConfiguration GetProbe() const;

                    /**
                     * 设置探针配置
                     * @param _probe 探针配置
                     * 
                     */
                    void SetProbe(const ProbeConfiguration& _probe);

                    /**
                     * 判断参数 Probe 是否已赋值
                     * @return Probe 是否已赋值
                     * 
                     */
                    bool ProbeHasBeenSet() const;

                private:

                    /**
                     * 镜像地址
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 镜像仓库类型：`enterprise`、`personal`。
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * 启动命令
                     */
                    std::vector<std::string> m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 端口配置
                     */
                    std::vector<PortConfiguration> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 资源配置
                     */
                    ResourceConfiguration m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 探针配置
                     */
                    ProbeConfiguration m_probe;
                    bool m_probeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATION_H_
