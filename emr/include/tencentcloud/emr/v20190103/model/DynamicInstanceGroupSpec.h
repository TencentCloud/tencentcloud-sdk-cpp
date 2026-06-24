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
                     * 获取<p>group 名称</p>
                     * @return Name <p>group 名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>group 名称</p>
                     * @param _name <p>group 名称</p>
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
                     * 获取<p>pod 数量</p>
                     * @return PodCount <p>pod 数量</p>
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置<p>pod 数量</p>
                     * @param _podCount <p>pod 数量</p>
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
                     * 获取<p>最小节点数</p>
                     * @return MinNodes <p>最小节点数</p>
                     * 
                     */
                    int64_t GetMinNodes() const;

                    /**
                     * 设置<p>最小节点数</p>
                     * @param _minNodes <p>最小节点数</p>
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
                     * 获取<p>最大节点数</p>
                     * @return MaxNodes <p>最大节点数</p>
                     * 
                     */
                    int64_t GetMaxNodes() const;

                    /**
                     * 设置<p>最大节点数</p>
                     * @param _maxNodes <p>最大节点数</p>
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
                     * 获取<p>是否开启存储配置</p>
                     * @return StorageConfigEnabled <p>是否开启存储配置</p>
                     * 
                     */
                    bool GetStorageConfigEnabled() const;

                    /**
                     * 设置<p>是否开启存储配置</p>
                     * @param _storageConfigEnabled <p>是否开启存储配置</p>
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
                     * 获取<p>headGroup:head;<br>workerGroup:worker</p>
                     * @return GroupType <p>headGroup:head;<br>workerGroup:worker</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>headGroup:head;<br>workerGroup:worker</p>
                     * @param _groupType <p>headGroup:head;<br>workerGroup:worker</p>
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
                     * 获取<p>CPU 核数</p>
                     * @return Cpu <p>CPU 核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU 核数</p>
                     * @param _cpu <p>CPU 核数</p>
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
                     * 获取<p>内存(GB)</p>
                     * @return MemSize <p>内存(GB)</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>内存(GB)</p>
                     * @param _memSize <p>内存(GB)</p>
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
                     * 获取<p>GPU类型</p>
                     * @return GpuType <p>GPU类型</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU类型</p>
                     * @param _gpuType <p>GPU类型</p>
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
                     * 获取<p>GPU核数</p>
                     * @return Gpu <p>GPU核数</p>
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置<p>GPU核数</p>
                     * @param _gpu <p>GPU核数</p>
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
                     * 获取<p>资源标签</p>
                     * @return ResourceLabels <p>资源标签</p>
                     * 
                     */
                    std::string GetResourceLabels() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _resourceLabels <p>资源标签</p>
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
                     * 获取<p>环境变量</p>
                     * @return Env <p>环境变量</p>
                     * 
                     */
                    std::vector<NameValue> GetEnv() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _env <p>环境变量</p>
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
                     * 获取<p>标签</p>
                     * @return Labels <p>标签</p>
                     * 
                     */
                    std::vector<NameValue> GetLabels() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _labels <p>标签</p>
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
                     * 获取<p>容忍度</p>
                     * @return Tolerations <p>容忍度</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>容忍度</p>
                     * @param _tolerations <p>容忍度</p>
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
                     * 获取<p>调度策略</p>
                     * @return Scheduler <p>调度策略</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>调度策略</p>
                     * @param _scheduler <p>调度策略</p>
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
                     * 获取<p>卷目录</p>
                     * @return PersistentVolume <p>卷目录</p>
                     * 
                     */
                    PersistentVolume GetPersistentVolume() const;

                    /**
                     * 设置<p>卷目录</p>
                     * @param _persistentVolume <p>卷目录</p>
                     * 
                     */
                    void SetPersistentVolume(const PersistentVolume& _persistentVolume);

                    /**
                     * 判断参数 PersistentVolume 是否已赋值
                     * @return PersistentVolume 是否已赋值
                     * 
                     */
                    bool PersistentVolumeHasBeenSet() const;

                    /**
                     * 获取<p>前置启动命令</p>
                     * @return PreStartCommand <p>前置启动命令</p>
                     * 
                     */
                    std::string GetPreStartCommand() const;

                    /**
                     * 设置<p>前置启动命令</p>
                     * @param _preStartCommand <p>前置启动命令</p>
                     * 
                     */
                    void SetPreStartCommand(const std::string& _preStartCommand);

                    /**
                     * 判断参数 PreStartCommand 是否已赋值
                     * @return PreStartCommand 是否已赋值
                     * 
                     */
                    bool PreStartCommandHasBeenSet() const;

                    /**
                     * 获取<p>RayStart启动参数</p>
                     * @return RayStartParams <p>RayStart启动参数</p>
                     * 
                     */
                    std::string GetRayStartParams() const;

                    /**
                     * 设置<p>RayStart启动参数</p>
                     * @param _rayStartParams <p>RayStart启动参数</p>
                     * 
                     */
                    void SetRayStartParams(const std::string& _rayStartParams);

                    /**
                     * 判断参数 RayStartParams 是否已赋值
                     * @return RayStartParams 是否已赋值
                     * 
                     */
                    bool RayStartParamsHasBeenSet() const;

                private:

                    /**
                     * <p>group 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>pod 数量</p>
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>最小节点数</p>
                     */
                    int64_t m_minNodes;
                    bool m_minNodesHasBeenSet;

                    /**
                     * <p>最大节点数</p>
                     */
                    int64_t m_maxNodes;
                    bool m_maxNodesHasBeenSet;

                    /**
                     * <p>是否开启存储配置</p>
                     */
                    bool m_storageConfigEnabled;
                    bool m_storageConfigEnabledHasBeenSet;

                    /**
                     * <p>headGroup:head;<br>workerGroup:worker</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>CPU 核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存(GB)</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>GPU类型</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>GPU核数</p>
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::string m_resourceLabels;
                    bool m_resourceLabelsHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<NameValue> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<NameValue> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>容忍度</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>调度策略</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>卷目录</p>
                     */
                    PersistentVolume m_persistentVolume;
                    bool m_persistentVolumeHasBeenSet;

                    /**
                     * <p>前置启动命令</p>
                     */
                    std::string m_preStartCommand;
                    bool m_preStartCommandHasBeenSet;

                    /**
                     * <p>RayStart启动参数</p>
                     */
                    std::string m_rayStartParams;
                    bool m_rayStartParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_
