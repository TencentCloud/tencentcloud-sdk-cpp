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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DynamicInstanceGroupSpec
                */
                class DynamicInstanceGroupSpec : public AbstractModel
                {
                public:
                    DynamicInstanceGroupSpec();
                    ~DynamicInstanceGroupSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取group 名称
                     * @return Name group 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置group 名称
                     * @param _name group 名称
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
                     * 获取pod 数量
                     * @return PodCount pod 数量
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置pod 数量
                     * @param _podCount pod 数量
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取最小节点数
                     * @return MinNodes 最小节点数
                     * 
                     */
                    int64_t GetMinNodes() const;

                    /**
                     * 设置最小节点数
                     * @param _minNodes 最小节点数
                     * 
                     */
                    void SetMinNodes(const int64_t& _minNodes);

                    /**
                     * 判断参数 MinNodes 是否已赋值
                     * @return MinNodes 是否已赋值
                     * 
                     */
                    bool MinNodesHasBeenSet() const;

                    /**
                     * 获取最大节点数
                     * @return MaxNodes 最大节点数
                     * 
                     */
                    int64_t GetMaxNodes() const;

                    /**
                     * 设置最大节点数
                     * @param _maxNodes 最大节点数
                     * 
                     */
                    void SetMaxNodes(const int64_t& _maxNodes);

                    /**
                     * 判断参数 MaxNodes 是否已赋值
                     * @return MaxNodes 是否已赋值
                     * 
                     */
                    bool MaxNodesHasBeenSet() const;

                    /**
                     * 获取 是否开启存储配置
                     * @return StorageConfigEnabled  是否开启存储配置
                     * 
                     */
                    bool GetStorageConfigEnabled() const;

                    /**
                     * 设置 是否开启存储配置
                     * @param _storageConfigEnabled  是否开启存储配置
                     * 
                     */
                    void SetStorageConfigEnabled(const bool& _storageConfigEnabled);

                    /**
                     * 判断参数 StorageConfigEnabled 是否已赋值
                     * @return StorageConfigEnabled 是否已赋值
                     * 
                     */
                    bool StorageConfigEnabledHasBeenSet() const;

                    /**
                     * 获取headGroup:head;
workerGroup:worker
                     * @return GroupType headGroup:head;
workerGroup:worker
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置headGroup:head;
workerGroup:worker
                     * @param _groupType headGroup:head;
workerGroup:worker
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取CPU 核数
                     * @return Cpu CPU 核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU 核数
                     * @param _cpu CPU 核数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存(GB)
                     * @return MemSize 内存(GB)
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存(GB)
                     * @param _memSize 内存(GB)
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

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
                     * 获取GPU核数
                     * @return Gpu GPU核数
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置GPU核数
                     * @param _gpu GPU核数
                     * 
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取资源标签
                     * @return ResourceLabels 资源标签
                     * 
                     */
                    std::string GetResourceLabels() const;

                    /**
                     * 设置资源标签
                     * @param _resourceLabels 资源标签
                     * 
                     */
                    void SetResourceLabels(const std::string& _resourceLabels);

                    /**
                     * 判断参数 ResourceLabels 是否已赋值
                     * @return ResourceLabels 是否已赋值
                     * 
                     */
                    bool ResourceLabelsHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return Env 环境变量
                     * 
                     */
                    std::vector<NameValue> GetEnv() const;

                    /**
                     * 设置环境变量
                     * @param _env 环境变量
                     * 
                     */
                    void SetEnv(const std::vector<NameValue>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Labels 标签
                     * 
                     */
                    std::vector<NameValue> GetLabels() const;

                    /**
                     * 设置标签
                     * @param _labels 标签
                     * 
                     */
                    void SetLabels(const std::vector<NameValue>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取容忍度
                     * @return Tolerations 容忍度
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置容忍度
                     * @param _tolerations 容忍度
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取调度策略
                     * @return Scheduler 调度策略
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置调度策略
                     * @param _scheduler 调度策略
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取卷目录
                     * @return PersistentVolume 卷目录
                     * 
                     */
                    PersistentVolume GetPersistentVolume() const;

                    /**
                     * 设置卷目录
                     * @param _persistentVolume 卷目录
                     * 
                     */
                    void SetPersistentVolume(const PersistentVolume& _persistentVolume);

                    /**
                     * 判断参数 PersistentVolume 是否已赋值
                     * @return PersistentVolume 是否已赋值
                     * 
                     */
                    bool PersistentVolumeHasBeenSet() const;

                private:

                    /**
                     * group 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * pod 数量
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * 最小节点数
                     */
                    int64_t m_minNodes;
                    bool m_minNodesHasBeenSet;

                    /**
                     * 最大节点数
                     */
                    int64_t m_maxNodes;
                    bool m_maxNodesHasBeenSet;

                    /**
                     *  是否开启存储配置
                     */
                    bool m_storageConfigEnabled;
                    bool m_storageConfigEnabledHasBeenSet;

                    /**
                     * headGroup:head;
workerGroup:worker
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * CPU 核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存(GB)
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * GPU类型
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * GPU核数
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::string m_resourceLabels;
                    bool m_resourceLabelsHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<NameValue> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<NameValue> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 容忍度
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * 调度策略
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 卷目录
                     */
                    PersistentVolume m_persistentVolume;
                    bool m_persistentVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_
