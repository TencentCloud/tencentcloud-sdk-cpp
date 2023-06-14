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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATEJOBREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/PredictInput.h>
#include <tencentcloud/tiems/v20190416/model/QuantizationInput.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateJob请求参数结构体
                */
                class CreateJobRequest : public AbstractModel
                {
                public:
                    CreateJobRequest();
                    ~CreateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取使用的资源组 Id，默认使用共享资源组
                     * @return ResourceGroupId 使用的资源组 Id，默认使用共享资源组
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置使用的资源组 Id，默认使用共享资源组
                     * @param _resourceGroupId 使用的资源组 Id，默认使用共享资源组
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
                     * 获取运行集群
                     * @return Cluster 运行集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行集群
                     * @param _cluster 运行集群
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
                     * 获取预测输入
                     * @return PredictInput 预测输入
                     * 
                     */
                    PredictInput GetPredictInput() const;

                    /**
                     * 设置预测输入
                     * @param _predictInput 预测输入
                     * 
                     */
                    void SetPredictInput(const PredictInput& _predictInput);

                    /**
                     * 判断参数 PredictInput 是否已赋值
                     * @return PredictInput 是否已赋值
                     * 
                     */
                    bool PredictInputHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return Description 任务描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
                     * @param _description 任务描述
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
                     * 获取同时处理任务的 Worker 个数
                     * @return WorkerCount 同时处理任务的 Worker 个数
                     * 
                     */
                    uint64_t GetWorkerCount() const;

                    /**
                     * 设置同时处理任务的 Worker 个数
                     * @param _workerCount 同时处理任务的 Worker 个数
                     * 
                     */
                    void SetWorkerCount(const uint64_t& _workerCount);

                    /**
                     * 判断参数 WorkerCount 是否已赋值
                     * @return WorkerCount 是否已赋值
                     * 
                     */
                    bool WorkerCountHasBeenSet() const;

                    /**
                     * 获取使用的配置 Id
                     * @return ConfigId 使用的配置 Id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置使用的配置 Id
                     * @param _configId 使用的配置 Id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

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
                     * 获取量化输入
                     * @return QuantizationInput 量化输入
                     * 
                     */
                    QuantizationInput GetQuantizationInput() const;

                    /**
                     * 设置量化输入
                     * @param _quantizationInput 量化输入
                     * 
                     */
                    void SetQuantizationInput(const QuantizationInput& _quantizationInput);

                    /**
                     * 判断参数 QuantizationInput 是否已赋值
                     * @return QuantizationInput 是否已赋值
                     * 
                     */
                    bool QuantizationInputHasBeenSet() const;

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
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 使用的资源组 Id，默认使用共享资源组
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
                     * 运行集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 预测输入
                     */
                    PredictInput m_predictInput;
                    bool m_predictInputHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 同时处理任务的 Worker 个数
                     */
                    uint64_t m_workerCount;
                    bool m_workerCountHasBeenSet;

                    /**
                     * 使用的配置 Id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

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
                     * GPU类型
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 量化输入
                     */
                    QuantizationInput m_quantizationInput;
                    bool m_quantizationInputHasBeenSet;

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

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATEJOBREQUEST_H_
