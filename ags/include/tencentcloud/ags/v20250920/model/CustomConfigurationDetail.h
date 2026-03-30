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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATIONDETAIL_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATIONDETAIL_H_

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
#include <tencentcloud/ags/v20250920/model/DNSConfig.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱自定义配置详细信息
                */
                class CustomConfigurationDetail : public AbstractModel
                {
                public:
                    CustomConfigurationDetail();
                    ~CustomConfigurationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _image <p>镜像地址</p>
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
                     * 获取<p>镜像仓库类型：<code>TCR</code>、<code>CCR</code>。</p>
                     * @return ImageRegistryType <p>镜像仓库类型：<code>TCR</code>、<code>CCR</code>。</p>
                     * 
                     */
                    std::string GetImageRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型：<code>TCR</code>、<code>CCR</code>。</p>
                     * @param _imageRegistryType <p>镜像仓库类型：<code>TCR</code>、<code>CCR</code>。</p>
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
                     * 获取<p>镜像 Digest</p>
                     * @return ImageDigest <p>镜像 Digest</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置<p>镜像 Digest</p>
                     * @param _imageDigest <p>镜像 Digest</p>
                     * 
                     */
                    void SetImageDigest(const std::string& _imageDigest);

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取<p>启动命令</p>
                     * @return Command <p>启动命令</p>
                     * 
                     */
                    std::vector<std::string> GetCommand() const;

                    /**
                     * 设置<p>启动命令</p>
                     * @param _command <p>启动命令</p>
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
                     * 获取<p>启动参数</p>
                     * @return Args <p>启动参数</p>
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置<p>启动参数</p>
                     * @param _args <p>启动参数</p>
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
                     * 获取<p>环境变量</p>
                     * @return Env <p>环境变量</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _env <p>环境变量</p>
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
                     * 获取<p>端口配置</p>
                     * @return Ports <p>端口配置</p>
                     * 
                     */
                    std::vector<PortConfiguration> GetPorts() const;

                    /**
                     * 设置<p>端口配置</p>
                     * @param _ports <p>端口配置</p>
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
                     * 获取<p>资源配置</p>
                     * @return Resources <p>资源配置</p>
                     * 
                     */
                    ResourceConfiguration GetResources() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _resources <p>资源配置</p>
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
                     * 获取<p>探针配置</p>
                     * @return Probe <p>探针配置</p>
                     * 
                     */
                    ProbeConfiguration GetProbe() const;

                    /**
                     * 设置<p>探针配置</p>
                     * @param _probe <p>探针配置</p>
                     * 
                     */
                    void SetProbe(const ProbeConfiguration& _probe);

                    /**
                     * 判断参数 Probe 是否已赋值
                     * @return Probe 是否已赋值
                     * 
                     */
                    bool ProbeHasBeenSet() const;

                    /**
                     * 获取<p>沙箱 DNS 配置</p>
                     * @return DNSConfig <p>沙箱 DNS 配置</p>
                     * 
                     */
                    DNSConfig GetDNSConfig() const;

                    /**
                     * 设置<p>沙箱 DNS 配置</p>
                     * @param _dNSConfig <p>沙箱 DNS 配置</p>
                     * 
                     */
                    void SetDNSConfig(const DNSConfig& _dNSConfig);

                    /**
                     * 判断参数 DNSConfig 是否已赋值
                     * @return DNSConfig 是否已赋值
                     * 
                     */
                    bool DNSConfigHasBeenSet() const;

                private:

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像仓库类型：<code>TCR</code>、<code>CCR</code>。</p>
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * <p>镜像 Digest</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>启动命令</p>
                     */
                    std::vector<std::string> m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>启动参数</p>
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>端口配置</p>
                     */
                    std::vector<PortConfiguration> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    ResourceConfiguration m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>探针配置</p>
                     */
                    ProbeConfiguration m_probe;
                    bool m_probeHasBeenSet;

                    /**
                     * <p>沙箱 DNS 配置</p>
                     */
                    DNSConfig m_dNSConfig;
                    bool m_dNSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CUSTOMCONFIGURATIONDETAIL_H_
