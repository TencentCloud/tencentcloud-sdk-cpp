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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodVolume.h>
#include <tencentcloud/emr/v20190103/model/DynamicPodSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 扩容容器资源时的资源描述
                */
                class PodNewSpec : public AbstractModel
                {
                public:
                    PodNewSpec();
                    ~PodNewSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部资源提供者的标识符，例如"cls-a1cd23fa"。
                     * @return ResourceProviderIdentifier 外部资源提供者的标识符，例如"cls-a1cd23fa"。
                     * 
                     */
                    std::string GetResourceProviderIdentifier() const;

                    /**
                     * 设置外部资源提供者的标识符，例如"cls-a1cd23fa"。
                     * @param _resourceProviderIdentifier 外部资源提供者的标识符，例如"cls-a1cd23fa"。
                     * 
                     */
                    void SetResourceProviderIdentifier(const std::string& _resourceProviderIdentifier);

                    /**
                     * 判断参数 ResourceProviderIdentifier 是否已赋值
                     * @return ResourceProviderIdentifier 是否已赋值
                     * 
                     */
                    bool ResourceProviderIdentifierHasBeenSet() const;

                    /**
                     * 获取外部资源提供者类型，例如"tke",当前仅支持"tke"。
                     * @return ResourceProviderType 外部资源提供者类型，例如"tke",当前仅支持"tke"。
                     * 
                     */
                    std::string GetResourceProviderType() const;

                    /**
                     * 设置外部资源提供者类型，例如"tke",当前仅支持"tke"。
                     * @param _resourceProviderType 外部资源提供者类型，例如"tke",当前仅支持"tke"。
                     * 
                     */
                    void SetResourceProviderType(const std::string& _resourceProviderType);

                    /**
                     * 判断参数 ResourceProviderType 是否已赋值
                     * @return ResourceProviderType 是否已赋值
                     * 
                     */
                    bool ResourceProviderTypeHasBeenSet() const;

                    /**
                     * 获取资源的用途，即节点类型，当前仅支持"TASK"。
                     * @return NodeFlag 资源的用途，即节点类型，当前仅支持"TASK"。
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置资源的用途，即节点类型，当前仅支持"TASK"。
                     * @param _nodeFlag 资源的用途，即节点类型，当前仅支持"TASK"。
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取CPU核数。
                     * @return Cpu CPU核数。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU核数。
                     * @param _cpu CPU核数。
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
                     * 获取内存大小，单位为GB。
                     * @return Memory 内存大小，单位为GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位为GB。
                     * @param _memory 内存大小，单位为GB。
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
                     * 获取Eks集群-CPU类型，当前支持"intel"和"amd"
                     * @return CpuType Eks集群-CPU类型，当前支持"intel"和"amd"
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Eks集群-CPU类型，当前支持"intel"和"amd"
                     * @param _cpuType Eks集群-CPU类型，当前支持"intel"和"amd"
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取Pod节点数据目录挂载信息。
                     * @return PodVolumes Pod节点数据目录挂载信息。
                     * 
                     */
                    std::vector<PodVolume> GetPodVolumes() const;

                    /**
                     * 设置Pod节点数据目录挂载信息。
                     * @param _podVolumes Pod节点数据目录挂载信息。
                     * 
                     */
                    void SetPodVolumes(const std::vector<PodVolume>& _podVolumes);

                    /**
                     * 判断参数 PodVolumes 是否已赋值
                     * @return PodVolumes 是否已赋值
                     * 
                     */
                    bool PodVolumesHasBeenSet() const;

                    /**
                     * 获取是否浮动规格，默认否
<li>true：代表是</li>
<li>false：代表否</li>
                     * @return EnableDynamicSpecFlag 是否浮动规格，默认否
<li>true：代表是</li>
<li>false：代表否</li>
                     * 
                     */
                    bool GetEnableDynamicSpecFlag() const;

                    /**
                     * 设置是否浮动规格，默认否
<li>true：代表是</li>
<li>false：代表否</li>
                     * @param _enableDynamicSpecFlag 是否浮动规格，默认否
<li>true：代表是</li>
<li>false：代表否</li>
                     * 
                     */
                    void SetEnableDynamicSpecFlag(const bool& _enableDynamicSpecFlag);

                    /**
                     * 判断参数 EnableDynamicSpecFlag 是否已赋值
                     * @return EnableDynamicSpecFlag 是否已赋值
                     * 
                     */
                    bool EnableDynamicSpecFlagHasBeenSet() const;

                    /**
                     * 获取浮动规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DynamicPodSpec 浮动规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DynamicPodSpec GetDynamicPodSpec() const;

                    /**
                     * 设置浮动规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dynamicPodSpec 浮动规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDynamicPodSpec(const DynamicPodSpec& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     * 
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取代表vpc网络唯一id
                     * @return VpcId 代表vpc网络唯一id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置代表vpc网络唯一id
                     * @param _vpcId 代表vpc网络唯一id
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
                     * 获取代表vpc子网唯一id
                     * @return SubnetId 代表vpc子网唯一id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置代表vpc子网唯一id
                     * @param _subnetId 代表vpc子网唯一id
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
                     * 获取pod name
                     * @return PodName pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod name
                     * @param _podName pod name
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * 外部资源提供者的标识符，例如"cls-a1cd23fa"。
                     */
                    std::string m_resourceProviderIdentifier;
                    bool m_resourceProviderIdentifierHasBeenSet;

                    /**
                     * 外部资源提供者类型，例如"tke",当前仅支持"tke"。
                     */
                    std::string m_resourceProviderType;
                    bool m_resourceProviderTypeHasBeenSet;

                    /**
                     * 资源的用途，即节点类型，当前仅支持"TASK"。
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * CPU核数。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位为GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Eks集群-CPU类型，当前支持"intel"和"amd"
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Pod节点数据目录挂载信息。
                     */
                    std::vector<PodVolume> m_podVolumes;
                    bool m_podVolumesHasBeenSet;

                    /**
                     * 是否浮动规格，默认否
<li>true：代表是</li>
<li>false：代表否</li>
                     */
                    bool m_enableDynamicSpecFlag;
                    bool m_enableDynamicSpecFlagHasBeenSet;

                    /**
                     * 浮动规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DynamicPodSpec m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * 代表vpc网络唯一id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 代表vpc子网唯一id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_
