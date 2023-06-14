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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceFamilyConfig.h>
#include <tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 机型配置
                */
                class InstanceTypeConfig : public AbstractModel
                {
                public:
                    InstanceTypeConfig();
                    ~InstanceTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型族配置信息
                     * @return InstanceFamilyConfig 机型族配置信息
                     * 
                     */
                    InstanceFamilyConfig GetInstanceFamilyConfig() const;

                    /**
                     * 设置机型族配置信息
                     * @param _instanceFamilyConfig 机型族配置信息
                     * 
                     */
                    void SetInstanceFamilyConfig(const InstanceFamilyConfig& _instanceFamilyConfig);

                    /**
                     * 判断参数 InstanceFamilyConfig 是否已赋值
                     * @return InstanceFamilyConfig 是否已赋值
                     * 
                     */
                    bool InstanceFamilyConfigHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return InstanceType 机型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型
                     * @param _instanceType 机型
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
                     * 获取CPU核数
                     * @return Vcpu CPU核数
                     * 
                     */
                    int64_t GetVcpu() const;

                    /**
                     * 设置CPU核数
                     * @param _vcpu CPU核数
                     * 
                     */
                    void SetVcpu(const int64_t& _vcpu);

                    /**
                     * 判断参数 Vcpu 是否已赋值
                     * @return Vcpu 是否已赋值
                     * 
                     */
                    bool VcpuHasBeenSet() const;

                    /**
                     * 获取内存大小
                     * @return Memory 内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小
                     * @param _memory 内存大小
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取主频
                     * @return Frequency 主频
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置主频
                     * @param _frequency 主频
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取处理器型号
                     * @return CpuModelName 处理器型号
                     * 
                     */
                    std::string GetCpuModelName() const;

                    /**
                     * 设置处理器型号
                     * @param _cpuModelName 处理器型号
                     * 
                     */
                    void SetCpuModelName(const std::string& _cpuModelName);

                    /**
                     * 判断参数 CpuModelName 是否已赋值
                     * @return CpuModelName 是否已赋值
                     * 
                     */
                    bool CpuModelNameHasBeenSet() const;

                    /**
                     * 获取机型族类别配置信息
                     * @return InstanceFamilyTypeConfig 机型族类别配置信息
                     * 
                     */
                    InstanceFamilyTypeConfig GetInstanceFamilyTypeConfig() const;

                    /**
                     * 设置机型族类别配置信息
                     * @param _instanceFamilyTypeConfig 机型族类别配置信息
                     * 
                     */
                    void SetInstanceFamilyTypeConfig(const InstanceFamilyTypeConfig& _instanceFamilyTypeConfig);

                    /**
                     * 判断参数 InstanceFamilyTypeConfig 是否已赋值
                     * @return InstanceFamilyTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeConfigHasBeenSet() const;

                    /**
                     * 获取机型额外信息 是一个json字符串，如果存在则表示特殊机型，格式如下：{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"系统盘默认60G","dataDiskSizeShow":"本地NVMe SSD 硬盘3200 GB"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo 机型额外信息 是一个json字符串，如果存在则表示特殊机型，格式如下：{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"系统盘默认60G","dataDiskSizeShow":"本地NVMe SSD 硬盘3200 GB"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置机型额外信息 是一个json字符串，如果存在则表示特殊机型，格式如下：{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"系统盘默认60G","dataDiskSizeShow":"本地NVMe SSD 硬盘3200 GB"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo 机型额外信息 是一个json字符串，如果存在则表示特殊机型，格式如下：{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"系统盘默认60G","dataDiskSizeShow":"本地NVMe SSD 硬盘3200 GB"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取GPU卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vgpu GPU卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetVgpu() const;

                    /**
                     * 设置GPU卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vgpu GPU卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVgpu(const double& _vgpu);

                    /**
                     * 判断参数 Vgpu 是否已赋值
                     * @return Vgpu 是否已赋值
                     * 
                     */
                    bool VgpuHasBeenSet() const;

                    /**
                     * 获取GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuModelName GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuModelName() const;

                    /**
                     * 设置GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuModelName GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuModelName(const std::string& _gpuModelName);

                    /**
                     * 判断参数 GpuModelName 是否已赋值
                     * @return GpuModelName 是否已赋值
                     * 
                     */
                    bool GpuModelNameHasBeenSet() const;

                private:

                    /**
                     * 机型族配置信息
                     */
                    InstanceFamilyConfig m_instanceFamilyConfig;
                    bool m_instanceFamilyConfigHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_vcpu;
                    bool m_vcpuHasBeenSet;

                    /**
                     * 内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 主频
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 处理器型号
                     */
                    std::string m_cpuModelName;
                    bool m_cpuModelNameHasBeenSet;

                    /**
                     * 机型族类别配置信息
                     */
                    InstanceFamilyTypeConfig m_instanceFamilyTypeConfig;
                    bool m_instanceFamilyTypeConfigHasBeenSet;

                    /**
                     * 机型额外信息 是一个json字符串，如果存在则表示特殊机型，格式如下：{"dataDiskSize":3200,"systemDiskSize":60, "systemDiskSizeShow":"系统盘默认60G","dataDiskSizeShow":"本地NVMe SSD 硬盘3200 GB"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * GPU卡数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_vgpu;
                    bool m_vgpuHasBeenSet;

                    /**
                     * GPU型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuModelName;
                    bool m_gpuModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCETYPECONFIG_H_
