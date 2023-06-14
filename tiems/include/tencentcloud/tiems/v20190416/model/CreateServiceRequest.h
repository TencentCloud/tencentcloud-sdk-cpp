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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Scaler.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateService请求参数结构体
                */
                class CreateServiceRequest : public AbstractModel
                {
                public:
                    CreateServiceRequest();
                    ~CreateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩缩容配置
                     * @return Scaler 扩缩容配置
                     * 
                     */
                    Scaler GetScaler() const;

                    /**
                     * 设置扩缩容配置
                     * @param _scaler 扩缩容配置
                     * 
                     */
                    void SetScaler(const Scaler& _scaler);

                    /**
                     * 判断参数 Scaler 是否已赋值
                     * @return Scaler 是否已赋值
                     * 
                     */
                    bool ScalerHasBeenSet() const;

                    /**
                     * 获取服务配置Id
                     * @return ServiceConfigId 服务配置Id
                     * 
                     */
                    std::string GetServiceConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param _serviceConfigId 服务配置Id
                     * 
                     */
                    void SetServiceConfigId(const std::string& _serviceConfigId);

                    /**
                     * 判断参数 ServiceConfigId 是否已赋值
                     * @return ServiceConfigId 是否已赋值
                     * 
                     */
                    bool ServiceConfigIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param _name 服务名称
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
                     * 获取扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * @return ScaleMode 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * @param _scaleMode 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     * 
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     * 
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取部署要使用的资源组Id，默认为共享资源组
                     * @return ResourceGroupId 部署要使用的资源组Id，默认为共享资源组
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置部署要使用的资源组Id，默认为共享资源组
                     * @param _resourceGroupId 部署要使用的资源组Id，默认为共享资源组
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/1000核；范围[100, 256000]
                     * @return Cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核；范围[100, 256000]
                     * @param _cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存配置, 单位为1M；范围[100, 256000]
                     * @return Memory 内存配置, 单位为1M；范围[100, 256000]
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M；范围[100, 256000]
                     * @param _memory 内存配置, 单位为1M；范围[100, 256000]
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取集群，不填则使用默认集群
                     * @return Cluster 集群，不填则使用默认集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群，不填则使用默认集群
                     * @param _cluster 集群，不填则使用默认集群
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取默认为空，表示不需要鉴权，TOKEN 表示选择 Token 鉴权方式
                     * @return Authentication 默认为空，表示不需要鉴权，TOKEN 表示选择 Token 鉴权方式
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置默认为空，表示不需要鉴权，TOKEN 表示选择 Token 鉴权方式
                     * @param _authentication 默认为空，表示不需要鉴权，TOKEN 表示选择 Token 鉴权方式
                     * 
                     */
                    void SetAuthentication(const std::string& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
                     * @return Gpu GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
                     * @param _gpu GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
                     * 
                     */
                    void SetGpu(const uint64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取显存配置, 单位为1M，范围 [0, 256000]
                     * @return GpuMemory 显存配置, 单位为1M，范围 [0, 256000]
                     * 
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M，范围 [0, 256000]
                     * @param _gpuMemory 显存配置, 单位为1M，范围 [0, 256000]
                     * 
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     * 
                     */
                    bool GpuMemoryHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取GPU类型
                     * @return GpuType GPU类型
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU类型
                     * @param _gpuType GPU类型
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取Cls日志主题ID
                     * @return LogTopicId Cls日志主题ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Cls日志主题ID
                     * @param _logTopicId Cls日志主题ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * 扩缩容配置
                     */
                    Scaler m_scaler;
                    bool m_scalerHasBeenSet;

                    /**
                     * 服务配置Id
                     */
                    std::string m_serviceConfigId;
                    bool m_serviceConfigIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩缩容方式，支持AUTO, MANUAL，分别表示自动扩缩容和手动扩缩容
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 部署要使用的资源组Id，默认为共享资源组
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/1000核；范围[100, 256000]
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置, 单位为1M；范围[100, 256000]
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 集群，不填则使用默认集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 默认为空，表示不需要鉴权，TOKEN 表示选择 Token 鉴权方式
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 显存配置, 单位为1M，范围 [0, 256000]
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * GPU类型
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * Cls日志主题ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICEREQUEST_H_
