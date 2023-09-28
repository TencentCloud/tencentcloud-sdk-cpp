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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 预留实例
                */
                class ReservedInstance : public AbstractModel
                {
                public:
                    ReservedInstance();
                    ~ReservedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预留实例ID
                     * @return ReservedInstanceId 预留实例ID
                     * 
                     */
                    std::string GetReservedInstanceId() const;

                    /**
                     * 设置预留实例ID
                     * @param _reservedInstanceId 预留实例ID
                     * 
                     */
                    void SetReservedInstanceId(const std::string& _reservedInstanceId);

                    /**
                     * 判断参数 ReservedInstanceId 是否已赋值
                     * @return ReservedInstanceId 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdHasBeenSet() const;

                    /**
                     * 获取预留实例名称
                     * @return ReservedInstanceName 预留实例名称
                     * 
                     */
                    std::string GetReservedInstanceName() const;

                    /**
                     * 设置预留实例名称
                     * @param _reservedInstanceName 预留实例名称
                     * 
                     */
                    void SetReservedInstanceName(const std::string& _reservedInstanceName);

                    /**
                     * 判断参数 ReservedInstanceName 是否已赋值
                     * @return ReservedInstanceName 是否已赋值
                     * 
                     */
                    bool ReservedInstanceNameHasBeenSet() const;

                    /**
                     * 获取预留券状态
                     * @return Status 预留券状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置预留券状态
                     * @param _status 预留券状态
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
                     * 获取有效期，单位：月
                     * @return TimeSpan 有效期，单位：月
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置有效期，单位：月
                     * @param _timeSpan 有效期，单位：月
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取抵扣资源类型
                     * @return ResourceType 抵扣资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置抵扣资源类型
                     * @param _resourceType 抵扣资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源核数
                     * @return Cpu 资源核数
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置资源核数
                     * @param _cpu 资源核数
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取资源内存，单位：Gi
                     * @return Memory 资源内存，单位：Gi
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置资源内存，单位：Gi
                     * @param _memory 资源内存，单位：Gi
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取预留券的范围，默认值region。
                     * @return Scope 预留券的范围，默认值region。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置预留券的范围，默认值region。
                     * @param _scope 预留券的范围，默认值region。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取生效时间
                     * @return ActiveAt 生效时间
                     * 
                     */
                    std::string GetActiveAt() const;

                    /**
                     * 设置生效时间
                     * @param _activeAt 生效时间
                     * 
                     */
                    void SetActiveAt(const std::string& _activeAt);

                    /**
                     * 判断参数 ActiveAt 是否已赋值
                     * @return ActiveAt 是否已赋值
                     * 
                     */
                    bool ActiveAtHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireAt 过期时间
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置过期时间
                     * @param _expireAt 过期时间
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取GPU卡数
                     * @return GpuCount GPU卡数
                     * 
                     */
                    std::string GetGpuCount() const;

                    /**
                     * 设置GPU卡数
                     * @param _gpuCount GPU卡数
                     * 
                     */
                    void SetGpuCount(const std::string& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取自动续费标记
                     * @return AutoRenewFlag 自动续费标记
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记
                     * @param _autoRenewFlag 自动续费标记
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取 上个周期预留券的抵扣状态，Deduct、NotDeduct
                     * @return DeductStatus  上个周期预留券的抵扣状态，Deduct、NotDeduct
                     * 
                     */
                    std::string GetDeductStatus() const;

                    /**
                     * 设置 上个周期预留券的抵扣状态，Deduct、NotDeduct
                     * @param _deductStatus  上个周期预留券的抵扣状态，Deduct、NotDeduct
                     * 
                     */
                    void SetDeductStatus(const std::string& _deductStatus);

                    /**
                     * 判断参数 DeductStatus 是否已赋值
                     * @return DeductStatus 是否已赋值
                     * 
                     */
                    bool DeductStatusHasBeenSet() const;

                private:

                    /**
                     * 预留实例ID
                     */
                    std::string m_reservedInstanceId;
                    bool m_reservedInstanceIdHasBeenSet;

                    /**
                     * 预留实例名称
                     */
                    std::string m_reservedInstanceName;
                    bool m_reservedInstanceNameHasBeenSet;

                    /**
                     * 预留券状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 有效期，单位：月
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 抵扣资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源核数
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 资源内存，单位：Gi
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 预留券的范围，默认值region。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 生效时间
                     */
                    std::string m_activeAt;
                    bool m_activeAtHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * GPU卡数
                     */
                    std::string m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * 自动续费标记
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     *  上个周期预留券的抵扣状态，Deduct、NotDeduct
                     */
                    std::string m_deductStatus;
                    bool m_deductStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCE_H_
