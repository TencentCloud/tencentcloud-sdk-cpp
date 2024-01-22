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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 超级节点信息
                */
                class SuperNodeInfo : public AbstractModel
                {
                public:
                    SuperNodeInfo();
                    ~SuperNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自动续费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费标识
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点的 CPU 规格，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPU 节点的 CPU 规格，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置节点的 CPU 规格，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPU 节点的 CPU 规格，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取节点上 Pod 的 CPU总和，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedCPU 节点上 Pod 的 CPU总和，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUsedCPU() const;

                    /**
                     * 设置节点上 Pod 的 CPU总和，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedCPU 节点上 Pod 的 CPU总和，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedCPU(const double& _usedCPU);

                    /**
                     * 判断参数 UsedCPU 是否已赋值
                     * @return UsedCPU 是否已赋值
                     * 
                     */
                    bool UsedCPUHasBeenSet() const;

                    /**
                     * 获取节点的内存规格，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 节点的内存规格，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置节点的内存规格，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 节点的内存规格，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点上 Pod 的内存总和，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedMemory 节点上 Pod 的内存总和，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUsedMemory() const;

                    /**
                     * 设置节点上 Pod 的内存总和，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedMemory 节点上 Pod 的内存总和，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedMemory(const double& _usedMemory);

                    /**
                     * 判断参数 UsedMemory 是否已赋值
                     * @return UsedMemory 是否已赋值
                     * 
                     */
                    bool UsedMemoryHasBeenSet() const;

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
                     * 获取VPC 唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId VPC 唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC 唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId VPC 唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveAt 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActiveAt() const;

                    /**
                     * 设置生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeAt 生效时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireAt 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireAt 过期时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取可调度的单 Pod 最大 CPU 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxCPUScheduledPod 可调度的单 Pod 最大 CPU 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxCPUScheduledPod() const;

                    /**
                     * 设置可调度的单 Pod 最大 CPU 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxCPUScheduledPod 可调度的单 Pod 最大 CPU 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxCPUScheduledPod(const int64_t& _maxCPUScheduledPod);

                    /**
                     * 判断参数 MaxCPUScheduledPod 是否已赋值
                     * @return MaxCPUScheduledPod 是否已赋值
                     * 
                     */
                    bool MaxCPUScheduledPodHasBeenSet() const;

                    /**
                     * 获取实例属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAttribute 实例属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceAttribute() const;

                    /**
                     * 设置实例属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAttribute 实例属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAttribute(const std::string& _instanceAttribute);

                    /**
                     * 判断参数 InstanceAttribute 是否已赋值
                     * @return InstanceAttribute 是否已赋值
                     * 
                     */
                    bool InstanceAttributeHasBeenSet() const;

                private:

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自动续费标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 节点的 CPU 规格，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 节点上 Pod 的 CPU总和，单位：核。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_usedCPU;
                    bool m_usedCPUHasBeenSet;

                    /**
                     * 节点的内存规格，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 节点上 Pod 的内存总和，单位：Gi。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_usedMemory;
                    bool m_usedMemoryHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC 唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeAt;
                    bool m_activeAtHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * 可调度的单 Pod 最大 CPU 规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxCPUScheduledPod;
                    bool m_maxCPUScheduledPodHasBeenSet;

                    /**
                     * 实例属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceAttribute;
                    bool m_instanceAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_
