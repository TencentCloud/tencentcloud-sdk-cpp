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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCONTAINERINSTANCEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCONTAINERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EksCiVolume.h>
#include <tencentcloud/tke/v20180525/model/Container.h>
#include <tencentcloud/tke/v20180525/model/ImageRegistryCredential.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateEKSContainerInstance请求参数结构体
                */
                class UpdateEKSContainerInstanceRequest : public AbstractModel
                {
                public:
                    UpdateEKSContainerInstanceRequest();
                    ~UpdateEKSContainerInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器实例 ID
                     * @return EksCiId 容器实例 ID
                     * 
                     */
                    std::string GetEksCiId() const;

                    /**
                     * 设置容器实例 ID
                     * @param _eksCiId 容器实例 ID
                     * 
                     */
                    void SetEksCiId(const std::string& _eksCiId);

                    /**
                     * 判断参数 EksCiId 是否已赋值
                     * @return EksCiId 是否已赋值
                     * 
                     */
                    bool EksCiIdHasBeenSet() const;

                    /**
                     * 获取实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)
                     * @return RestartPolicy 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)
                     * @param _restartPolicy 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取数据卷，包含NfsVolume数组和CbsVolume数组
                     * @return EksCiVolume 数据卷，包含NfsVolume数组和CbsVolume数组
                     * 
                     */
                    EksCiVolume GetEksCiVolume() const;

                    /**
                     * 设置数据卷，包含NfsVolume数组和CbsVolume数组
                     * @param _eksCiVolume 数据卷，包含NfsVolume数组和CbsVolume数组
                     * 
                     */
                    void SetEksCiVolume(const EksCiVolume& _eksCiVolume);

                    /**
                     * 判断参数 EksCiVolume 是否已赋值
                     * @return EksCiVolume 是否已赋值
                     * 
                     */
                    bool EksCiVolumeHasBeenSet() const;

                    /**
                     * 获取容器组
                     * @return Containers 容器组
                     * 
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器组
                     * @param _containers 容器组
                     * 
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取Init 容器组
                     * @return InitContainers Init 容器组
                     * 
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 设置Init 容器组
                     * @param _initContainers Init 容器组
                     * 
                     */
                    void SetInitContainers(const std::vector<Container>& _initContainers);

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     * 
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取容器实例名称
                     * @return Name 容器实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器实例名称
                     * @param _name 容器实例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取镜像仓库凭证数组
                     * @return ImageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    std::vector<ImageRegistryCredential> GetImageRegistryCredentials() const;

                    /**
                     * 设置镜像仓库凭证数组
                     * @param _imageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    void SetImageRegistryCredentials(const std::vector<ImageRegistryCredential>& _imageRegistryCredentials);

                    /**
                     * 判断参数 ImageRegistryCredentials 是否已赋值
                     * @return ImageRegistryCredentials 是否已赋值
                     * 
                     */
                    bool ImageRegistryCredentialsHasBeenSet() const;

                private:

                    /**
                     * 容器实例 ID
                     */
                    std::string m_eksCiId;
                    bool m_eksCiIdHasBeenSet;

                    /**
                     * 实例重启策略： Always(总是重启)、Never(从不重启)、OnFailure(失败时重启)
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 数据卷，包含NfsVolume数组和CbsVolume数组
                     */
                    EksCiVolume m_eksCiVolume;
                    bool m_eksCiVolumeHasBeenSet;

                    /**
                     * 容器组
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * Init 容器组
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 容器实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 镜像仓库凭证数组
                     */
                    std::vector<ImageRegistryCredential> m_imageRegistryCredentials;
                    bool m_imageRegistryCredentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEKSCONTAINERINSTANCEREQUEST_H_
