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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_INSTANCE_H_

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
                * 节点
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 ID
                     * @return Id 节点 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置节点 ID
                     * @param _id 节点 ID
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
                     * 获取节点所在地区
                     * @return Zone 节点所在地区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在地区
                     * @param _zone 节点所在地区
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
                     * 获取节点类型
                     * @return InstanceType 节点类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置节点类型
                     * @param _instanceType 节点类型
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
                     * 获取节点充值类型
                     * @return InstanceChargeType 节点充值类型
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置节点充值类型
                     * @param _instanceChargeType 节点充值类型
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cpu 核数
                     * @return Cpu Cpu 核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Cpu 核数
                     * @param _cpu Cpu 核数
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
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
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
                     * 获取Gpu 核数
                     * @return Gpu Gpu 核数
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置Gpu 核数
                     * @param _gpu Gpu 核数
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
                     * 获取节点状态
                     * @return State 节点状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置节点状态
                     * @param _state 节点状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取节点故障信息
                     * @return AbnormalReason 节点故障信息
                     * 
                     */
                    std::string GetAbnormalReason() const;

                    /**
                     * 设置节点故障信息
                     * @param _abnormalReason 节点故障信息
                     * 
                     */
                    void SetAbnormalReason(const std::string& _abnormalReason);

                    /**
                     * 判断参数 AbnormalReason 是否已赋值
                     * @return AbnormalReason 是否已赋值
                     * 
                     */
                    bool AbnormalReasonHasBeenSet() const;

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
                     * 获取到期时间
                     * @return DeadlineTime 到期时间
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置到期时间
                     * @param _deadlineTime 到期时间
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取所属资源组 ID
                     * @return ResourceGroupId 所属资源组 ID
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置所属资源组 ID
                     * @param _resourceGroupId 所属资源组 ID
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
                     * 获取自动续费标签
                     * @return RenewFlag 自动续费标签
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标签
                     * @param _renewFlag 自动续费标签
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取节点所在地域
                     * @return Region 节点所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置节点所在地域
                     * @param _region 节点所在地域
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
                     * 获取当前 Cpu 申请使用量
                     * @return CpuRequested 当前 Cpu 申请使用量
                     * 
                     */
                    uint64_t GetCpuRequested() const;

                    /**
                     * 设置当前 Cpu 申请使用量
                     * @param _cpuRequested 当前 Cpu 申请使用量
                     * 
                     */
                    void SetCpuRequested(const uint64_t& _cpuRequested);

                    /**
                     * 判断参数 CpuRequested 是否已赋值
                     * @return CpuRequested 是否已赋值
                     * 
                     */
                    bool CpuRequestedHasBeenSet() const;

                    /**
                     * 获取当前 Memory 申请使用量
                     * @return MemoryRequested 当前 Memory 申请使用量
                     * 
                     */
                    uint64_t GetMemoryRequested() const;

                    /**
                     * 设置当前 Memory 申请使用量
                     * @param _memoryRequested 当前 Memory 申请使用量
                     * 
                     */
                    void SetMemoryRequested(const uint64_t& _memoryRequested);

                    /**
                     * 判断参数 MemoryRequested 是否已赋值
                     * @return MemoryRequested 是否已赋值
                     * 
                     */
                    bool MemoryRequestedHasBeenSet() const;

                    /**
                     * 获取当前 Gpu 申请使用量
                     * @return GpuRequested 当前 Gpu 申请使用量
                     * 
                     */
                    uint64_t GetGpuRequested() const;

                    /**
                     * 设置当前 Gpu 申请使用量
                     * @param _gpuRequested 当前 Gpu 申请使用量
                     * 
                     */
                    void SetGpuRequested(const uint64_t& _gpuRequested);

                    /**
                     * 判断参数 GpuRequested 是否已赋值
                     * @return GpuRequested 是否已赋值
                     * 
                     */
                    bool GpuRequestedHasBeenSet() const;

                    /**
                     * 获取节点所在伸缩组 ID
                     * @return RsgAsGroupId 节点所在伸缩组 ID
                     * 
                     */
                    std::string GetRsgAsGroupId() const;

                    /**
                     * 设置节点所在伸缩组 ID
                     * @param _rsgAsGroupId 节点所在伸缩组 ID
                     * 
                     */
                    void SetRsgAsGroupId(const std::string& _rsgAsGroupId);

                    /**
                     * 判断参数 RsgAsGroupId 是否已赋值
                     * @return RsgAsGroupId 是否已赋值
                     * 
                     */
                    bool RsgAsGroupIdHasBeenSet() const;

                private:

                    /**
                     * 节点 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点所在地区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 节点充值类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Cpu 核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Gpu 核数
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 节点状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 节点故障信息
                     */
                    std::string m_abnormalReason;
                    bool m_abnormalReasonHasBeenSet;

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
                     * 到期时间
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 所属资源组 ID
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 自动续费标签
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 节点所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 当前 Cpu 申请使用量
                     */
                    uint64_t m_cpuRequested;
                    bool m_cpuRequestedHasBeenSet;

                    /**
                     * 当前 Memory 申请使用量
                     */
                    uint64_t m_memoryRequested;
                    bool m_memoryRequestedHasBeenSet;

                    /**
                     * 当前 Gpu 申请使用量
                     */
                    uint64_t m_gpuRequested;
                    bool m_gpuRequestedHasBeenSet;

                    /**
                     * 节点所在伸缩组 ID
                     */
                    std::string m_rsgAsGroupId;
                    bool m_rsgAsGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_INSTANCE_H_
