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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 专用宿主机支持的实例规格列表
                */
                class DedicatedClusterInstanceType : public AbstractModel
                {
                public:
                    DedicatedClusterInstanceType();
                    ~DedicatedClusterInstanceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取规格名称
                     * @return InstanceType 规格名称
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格名称
                     * @param _instanceType 规格名称
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
                     * 获取网卡类型，例如：25代表25G网卡
                     * @return NetworkCard 网卡类型，例如：25代表25G网卡
                     * 
                     */
                    int64_t GetNetworkCard() const;

                    /**
                     * 设置网卡类型，例如：25代表25G网卡
                     * @param _networkCard 网卡类型，例如：25代表25G网卡
                     * 
                     */
                    void SetNetworkCard(const int64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取实例的CPU核数，单位：核。
                     * @return Cpu 实例的CPU核数，单位：核。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例的CPU核数，单位：核。
                     * @param _cpu 实例的CPU核数，单位：核。
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
                     * 获取实例内存容量，单位：`GB`。
                     * @return Memory 实例内存容量，单位：`GB`。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存容量，单位：`GB`。
                     * @param _memory 实例内存容量，单位：`GB`。
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
                     * 获取实例机型系列。
                     * @return InstanceFamily 实例机型系列。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置实例机型系列。
                     * @param _instanceFamily 实例机型系列。
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取机型名称。
                     * @return TypeName 机型名称。
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置机型名称。
                     * @param _typeName 机型名称。
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取本地存储块数量。
                     * @return StorageBlockAmount 本地存储块数量。
                     * 
                     */
                    int64_t GetStorageBlockAmount() const;

                    /**
                     * 设置本地存储块数量。
                     * @param _storageBlockAmount 本地存储块数量。
                     * 
                     */
                    void SetStorageBlockAmount(const int64_t& _storageBlockAmount);

                    /**
                     * 判断参数 StorageBlockAmount 是否已赋值
                     * @return StorageBlockAmount 是否已赋值
                     * 
                     */
                    bool StorageBlockAmountHasBeenSet() const;

                    /**
                     * 获取内网带宽，单位Gbps。
                     * @return InstanceBandwidth 内网带宽，单位Gbps。
                     * 
                     */
                    double GetInstanceBandwidth() const;

                    /**
                     * 设置内网带宽，单位Gbps。
                     * @param _instanceBandwidth 内网带宽，单位Gbps。
                     * 
                     */
                    void SetInstanceBandwidth(const double& _instanceBandwidth);

                    /**
                     * 判断参数 InstanceBandwidth 是否已赋值
                     * @return InstanceBandwidth 是否已赋值
                     * 
                     */
                    bool InstanceBandwidthHasBeenSet() const;

                    /**
                     * 获取网络收发包能力，单位万PPS。
                     * @return InstancePps 网络收发包能力，单位万PPS。
                     * 
                     */
                    int64_t GetInstancePps() const;

                    /**
                     * 设置网络收发包能力，单位万PPS。
                     * @param _instancePps 网络收发包能力，单位万PPS。
                     * 
                     */
                    void SetInstancePps(const int64_t& _instancePps);

                    /**
                     * 判断参数 InstancePps 是否已赋值
                     * @return InstancePps 是否已赋值
                     * 
                     */
                    bool InstancePpsHasBeenSet() const;

                    /**
                     * 获取处理器型号。
                     * @return CpuType 处理器型号。
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置处理器型号。
                     * @param _cpuType 处理器型号。
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
                     * 获取实例的GPU数量。
                     * @return Gpu 实例的GPU数量。
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置实例的GPU数量。
                     * @param _gpu 实例的GPU数量。
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
                     * 获取实例的FPGA数量。
                     * @return Fpga 实例的FPGA数量。
                     * 
                     */
                    int64_t GetFpga() const;

                    /**
                     * 设置实例的FPGA数量。
                     * @param _fpga 实例的FPGA数量。
                     * 
                     */
                    void SetFpga(const int64_t& _fpga);

                    /**
                     * 判断参数 Fpga 是否已赋值
                     * @return Fpga 是否已赋值
                     * 
                     */
                    bool FpgaHasBeenSet() const;

                    /**
                     * 获取机型描述
                     * @return Remark 机型描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置机型描述
                     * @param _remark 机型描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     * @return Status 实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     * @param _status 实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 规格名称
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 网卡类型，例如：25代表25G网卡
                     */
                    int64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * 实例的CPU核数，单位：核。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存容量，单位：`GB`。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例机型系列。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 机型名称。
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 本地存储块数量。
                     */
                    int64_t m_storageBlockAmount;
                    bool m_storageBlockAmountHasBeenSet;

                    /**
                     * 内网带宽，单位Gbps。
                     */
                    double m_instanceBandwidth;
                    bool m_instanceBandwidthHasBeenSet;

                    /**
                     * 网络收发包能力，单位万PPS。
                     */
                    int64_t m_instancePps;
                    bool m_instancePpsHasBeenSet;

                    /**
                     * 处理器型号。
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * 实例的GPU数量。
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 实例的FPGA数量。
                     */
                    int64_t m_fpga;
                    bool m_fpgaHasBeenSet;

                    /**
                     * 机型描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERINSTANCETYPE_H_
