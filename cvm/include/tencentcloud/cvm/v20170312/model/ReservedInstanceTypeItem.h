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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Externals.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstancePriceItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 预留实例类型信息。预留实例当前只针对国际站白名单用户开放。
                */
                class ReservedInstanceTypeItem : public AbstractModel
                {
                public:
                    ReservedInstanceTypeItem();
                    ~ReservedInstanceTypeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型。
                     * @return InstanceType 实例类型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型。
                     * @param _instanceType 实例类型。
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
                     * 获取内存大小。
                     * @return Memory 内存大小。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小。
                     * @param _memory 内存大小。
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
                     * 获取GPU数量。
                     * @return Gpu GPU数量。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置GPU数量。
                     * @param _gpu GPU数量。
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
                     * 获取FPGA数量。
                     * @return Fpga FPGA数量。
                     * 
                     */
                    uint64_t GetFpga() const;

                    /**
                     * 设置FPGA数量。
                     * @param _fpga FPGA数量。
                     * 
                     */
                    void SetFpga(const uint64_t& _fpga);

                    /**
                     * 判断参数 Fpga 是否已赋值
                     * @return Fpga 是否已赋值
                     * 
                     */
                    bool FpgaHasBeenSet() const;

                    /**
                     * 获取本地存储块数量。
                     * @return StorageBlock 本地存储块数量。
                     * 
                     */
                    uint64_t GetStorageBlock() const;

                    /**
                     * 设置本地存储块数量。
                     * @param _storageBlock 本地存储块数量。
                     * 
                     */
                    void SetStorageBlock(const uint64_t& _storageBlock);

                    /**
                     * 判断参数 StorageBlock 是否已赋值
                     * @return StorageBlock 是否已赋值
                     * 
                     */
                    bool StorageBlockHasBeenSet() const;

                    /**
                     * 获取网卡数。
                     * @return NetworkCard 网卡数。
                     * 
                     */
                    uint64_t GetNetworkCard() const;

                    /**
                     * 设置网卡数。
                     * @param _networkCard 网卡数。
                     * 
                     */
                    void SetNetworkCard(const uint64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取最大带宽。
                     * @return MaxBandwidth 最大带宽。
                     * 
                     */
                    double GetMaxBandwidth() const;

                    /**
                     * 设置最大带宽。
                     * @param _maxBandwidth 最大带宽。
                     * 
                     */
                    void SetMaxBandwidth(const double& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取主频。
                     * @return Frequency 主频。
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置主频。
                     * @param _frequency 主频。
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
                     * 获取CPU型号名称。
                     * @return CpuModelName CPU型号名称。
                     * 
                     */
                    std::string GetCpuModelName() const;

                    /**
                     * 设置CPU型号名称。
                     * @param _cpuModelName CPU型号名称。
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
                     * 获取包转发率。
                     * @return Pps 包转发率。
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置包转发率。
                     * @param _pps 包转发率。
                     * 
                     */
                    void SetPps(const uint64_t& _pps);

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取外部信息。
                     * @return Externals 外部信息。
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置外部信息。
                     * @param _externals 外部信息。
                     * 
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     * 
                     */
                    bool ExternalsHasBeenSet() const;

                    /**
                     * 获取备注信息。
                     * @return Remark 备注信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息。
                     * @param _remark 备注信息。
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
                     * 获取预留实例配置价格信息。
                     * @return Prices 预留实例配置价格信息。
                     * 
                     */
                    std::vector<ReservedInstancePriceItem> GetPrices() const;

                    /**
                     * 设置预留实例配置价格信息。
                     * @param _prices 预留实例配置价格信息。
                     * 
                     */
                    void SetPrices(const std::vector<ReservedInstancePriceItem>& _prices);

                    /**
                     * 判断参数 Prices 是否已赋值
                     * @return Prices 是否已赋值
                     * 
                     */
                    bool PricesHasBeenSet() const;

                private:

                    /**
                     * 实例类型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CPU核数。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU数量。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * FPGA数量。
                     */
                    uint64_t m_fpga;
                    bool m_fpgaHasBeenSet;

                    /**
                     * 本地存储块数量。
                     */
                    uint64_t m_storageBlock;
                    bool m_storageBlockHasBeenSet;

                    /**
                     * 网卡数。
                     */
                    uint64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * 最大带宽。
                     */
                    double m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 主频。
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * CPU型号名称。
                     */
                    std::string m_cpuModelName;
                    bool m_cpuModelNameHasBeenSet;

                    /**
                     * 包转发率。
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * 外部信息。
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * 备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 预留实例配置价格信息。
                     */
                    std::vector<ReservedInstancePriceItem> m_prices;
                    bool m_pricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCETYPEITEM_H_
