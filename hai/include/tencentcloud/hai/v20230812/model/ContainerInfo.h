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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CONTAINERINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CONTAINERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ImageInfo.h>
#include <tencentcloud/hai/v20230812/model/EnvParam.h>
#include <tencentcloud/hai/v20230812/model/StorageInfo.h>
#include <tencentcloud/hai/v20230812/model/ProbeInfo.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 容器信息
                */
                class ContainerInfo : public AbstractModel
                {
                public:
                    ContainerInfo();
                    ~ContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像相关信息</p>
                     * @return Image <p>镜像相关信息</p>
                     * 
                     */
                    ImageInfo GetImage() const;

                    /**
                     * 设置<p>镜像相关信息</p>
                     * @param _image <p>镜像相关信息</p>
                     * 
                     */
                    void SetImage(const ImageInfo& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>服务监听端口</p>
                     * @return Port <p>服务监听端口</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>服务监听端口</p>
                     * @param _port <p>服务监听端口</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>启动命令</p>
                     * @return Scripts <p>启动命令</p>
                     * 
                     */
                    std::vector<std::string> GetScripts() const;

                    /**
                     * 设置<p>启动命令</p>
                     * @param _scripts <p>启动命令</p>
                     * 
                     */
                    void SetScripts(const std::vector<std::string>& _scripts);

                    /**
                     * 判断参数 Scripts 是否已赋值
                     * @return Scripts 是否已赋值
                     * 
                     */
                    bool ScriptsHasBeenSet() const;

                    /**
                     * 获取<p>环境变量列表</p>
                     * @return Envs <p>环境变量列表</p>
                     * 
                     */
                    std::vector<EnvParam> GetEnvs() const;

                    /**
                     * 设置<p>环境变量列表</p>
                     * @param _envs <p>环境变量列表</p>
                     * 
                     */
                    void SetEnvs(const std::vector<EnvParam>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>存储挂载配置</p>
                     * @return Storages <p>存储挂载配置</p>
                     * 
                     */
                    std::vector<StorageInfo> GetStorages() const;

                    /**
                     * 设置<p>存储挂载配置</p>
                     * @param _storages <p>存储挂载配置</p>
                     * 
                     */
                    void SetStorages(const std::vector<StorageInfo>& _storages);

                    /**
                     * 判断参数 Storages 是否已赋值
                     * @return Storages 是否已赋值
                     * 
                     */
                    bool StoragesHasBeenSet() const;

                    /**
                     * 获取<p>探针信息</p>
                     * @return Probe <p>探针信息</p>
                     * 
                     */
                    ProbeInfo GetProbe() const;

                    /**
                     * 设置<p>探针信息</p>
                     * @param _probe <p>探针信息</p>
                     * 
                     */
                    void SetProbe(const ProbeInfo& _probe);

                    /**
                     * 判断参数 Probe 是否已赋值
                     * @return Probe 是否已赋值
                     * 
                     */
                    bool ProbeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像相关信息</p>
                     */
                    ImageInfo m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>服务监听端口</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>启动命令</p>
                     */
                    std::vector<std::string> m_scripts;
                    bool m_scriptsHasBeenSet;

                    /**
                     * <p>环境变量列表</p>
                     */
                    std::vector<EnvParam> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>存储挂载配置</p>
                     */
                    std::vector<StorageInfo> m_storages;
                    bool m_storagesHasBeenSet;

                    /**
                     * <p>探针信息</p>
                     */
                    ProbeInfo m_probe;
                    bool m_probeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CONTAINERINFO_H_
