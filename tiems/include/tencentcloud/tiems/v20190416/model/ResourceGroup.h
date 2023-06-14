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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_RESOURCEGROUP_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_RESOURCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 资源组
                */
                class ResourceGroup : public AbstractModel
                {
                public:
                    ResourceGroup();
                    ~ResourceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组 Id
                     * @return Id 资源组 Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源组 Id
                     * @param _id 资源组 Id
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cluster 集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cluster 集群
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
                     * 获取资源组名称
                     * @return Name 资源组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源组名称
                     * @param _name 资源组名称
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
                     * 获取资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 资源组描述
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
                     * 获取创建时间
                     * @return Created 创建时间
                     * 
                     */
                    std::string GetCreated() const;

                    /**
                     * 设置创建时间
                     * @param _created 创建时间
                     * 
                     */
                    void SetCreated(const std::string& _created);

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return Updated 更新时间
                     * 
                     */
                    std::string GetUpdated() const;

                    /**
                     * 设置更新时间
                     * @param _updated 更新时间
                     * 
                     */
                    void SetUpdated(const std::string& _updated);

                    /**
                     * 判断参数 Updated 是否已赋值
                     * @return Updated 是否已赋值
                     * 
                     */
                    bool UpdatedHasBeenSet() const;

                    /**
                     * 获取资源组主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 资源组主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置资源组主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount 资源组主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取使用资源组的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount 使用资源组的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置使用资源组的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount 使用资源组的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const uint64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取使用资源组的任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobCount 使用资源组的任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetJobCount() const;

                    /**
                     * 设置使用资源组的任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobCount 使用资源组的任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobCount(const uint64_t& _jobCount);

                    /**
                     * 判断参数 JobCount 是否已赋值
                     * @return JobCount 是否已赋值
                     * 
                     */
                    bool JobCountHasBeenSet() const;

                    /**
                     * 获取资源组是否为公共资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Public 资源组是否为公共资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置资源组是否为公共资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _public 资源组是否为公共资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取机器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 机器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 机器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取资源组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取显卡总张数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu 显卡总张数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置显卡总张数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu 显卡总张数
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
                     * 获取处理器总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu 处理器总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu 处理器总核数
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
                     * 获取内存总量，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存总量，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存总量，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存总量，单位为G
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Gpu类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType Gpu类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGpuType() const;

                    /**
                     * 设置Gpu类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType Gpu类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuType(const std::vector<std::string>& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取该资源组下是否有预付费资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasPrepaid 该资源组下是否有预付费资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasPrepaid() const;

                    /**
                     * 设置该资源组下是否有预付费资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasPrepaid 该资源组下是否有预付费资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasPrepaid(const bool& _hasPrepaid);

                    /**
                     * 判断参数 HasPrepaid 是否已赋值
                     * @return HasPrepaid 是否已赋值
                     * 
                     */
                    bool HasPrepaidHasBeenSet() const;

                    /**
                     * 获取资源组是否允许预付费或后付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 资源组是否允许预付费或后付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置资源组是否允许预付费或后付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 资源组是否允许预付费或后付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 资源组 Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 资源组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updated;
                    bool m_updatedHasBeenSet;

                    /**
                     * 资源组主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 使用资源组的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 使用资源组的任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_jobCount;
                    bool m_jobCountHasBeenSet;

                    /**
                     * 资源组是否为公共资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 机器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资源组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 显卡总张数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 处理器总核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存总量，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Gpu类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 该资源组下是否有预付费资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasPrepaid;
                    bool m_hasPrepaidHasBeenSet;

                    /**
                     * 资源组是否允许预付费或后付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_RESOURCEGROUP_H_
