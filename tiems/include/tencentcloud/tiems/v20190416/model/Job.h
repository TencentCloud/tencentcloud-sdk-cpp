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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_JOB_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/PredictInput.h>
#include <tencentcloud/tiems/v20190416/model/JobStatus.h>
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
                * 任务
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 Id
                     * @return Id 任务 Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务 Id
                     * @param _id 任务 Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cluster 集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cluster 集群名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Region 名
                     * @return Region Region 名
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region 名
                     * @param _region Region 名
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取Worker 使用的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime Worker 使用的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Worker 使用的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtime Worker 使用的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取配置 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 配置 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId 配置 Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取预测输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PredictInput 预测输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PredictInput GetPredictInput() const;

                    /**
                     * 设置预测输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _predictInput 预测输入
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    JobStatus GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
                     * 
                     */
                    void SetStatus(const JobStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CancelTime 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCancelTime() const;

                    /**
                     * 设置任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cancelTime 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCancelTime(const std::string& _cancelTime);

                    /**
                     * 判断参数 CancelTime 是否已赋值
                     * @return CancelTime 是否已赋值
                     * 
                     */
                    bool CancelTimeHasBeenSet() const;

                    /**
                     * 获取任务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 任务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置任务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 任务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存配置, 单位为1M；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存配置, 单位为1M；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuMemory 显存配置, 单位为1M，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuMemory 显存配置, 单位为1M，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 任务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置任务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 任务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configName 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersion 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersion 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                    /**
                     * 获取Job类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType Job类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Job类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType Job类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取量化输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuantizationInput 量化输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QuantizationInput GetQuantizationInput() const;

                    /**
                     * 设置量化输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quantizationInput 量化输入
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId Cls日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Cls日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicId Cls日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 任务 Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * Region 名
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Worker 使用的运行环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 配置 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 预测输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PredictInput m_predictInput;
                    bool m_predictInputHasBeenSet;

                    /**
                     * 任务状态
                     */
                    JobStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cancelTime;
                    bool m_cancelTimeHasBeenSet;

                    /**
                     * 任务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/1000核；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置, 单位为1M；范围[100, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU算力配置，单位为1/1000 卡，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 显存配置, 单位为1M，范围 [0, 256000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                    /**
                     * 任务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 配置名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * Job类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 量化输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QuantizationInput m_quantizationInput;
                    bool m_quantizationInputHasBeenSet;

                    /**
                     * Cls日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_JOB_H_
