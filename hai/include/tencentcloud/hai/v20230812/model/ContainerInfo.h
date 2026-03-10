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
                     * 获取镜像相关信息
                     * @return Image 镜像相关信息
                     * 
                     */
                    ImageInfo GetImage() const;

                    /**
                     * 设置镜像相关信息
                     * @param _image 镜像相关信息
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
                     * 获取服务监听端口
                     * @return Port 服务监听端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置服务监听端口
                     * @param _port 服务监听端口
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
                     * 获取启动命令
                     * @return Scripts 启动命令
                     * 
                     */
                    std::vector<std::string> GetScripts() const;

                    /**
                     * 设置启动命令
                     * @param _scripts 启动命令
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
                     * 获取环境变量列表
                     * @return Envs 环境变量列表
                     * 
                     */
                    std::vector<EnvParam> GetEnvs() const;

                    /**
                     * 设置环境变量列表
                     * @param _envs 环境变量列表
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
                     * 获取存储挂载配置
                     * @return Storages 存储挂载配置
                     * 
                     */
                    std::vector<StorageInfo> GetStorages() const;

                    /**
                     * 设置存储挂载配置
                     * @param _storages 存储挂载配置
                     * 
                     */
                    void SetStorages(const std::vector<StorageInfo>& _storages);

                    /**
                     * 判断参数 Storages 是否已赋值
                     * @return Storages 是否已赋值
                     * 
                     */
                    bool StoragesHasBeenSet() const;

                private:

                    /**
                     * 镜像相关信息
                     */
                    ImageInfo m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 服务监听端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 启动命令
                     */
                    std::vector<std::string> m_scripts;
                    bool m_scriptsHasBeenSet;

                    /**
                     * 环境变量列表
                     */
                    std::vector<EnvParam> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 存储挂载配置
                     */
                    std::vector<StorageInfo> m_storages;
                    bool m_storagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CONTAINERINFO_H_
