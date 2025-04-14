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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Externals.h>
#include <tencentcloud/batch/v20170312/model/LocalDiskType.h>
#include <tencentcloud/batch/v20170312/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例机型配额信息。
                */
                class InstanceTypeQuotaItem : public AbstractModel
                {
                public:
                    InstanceTypeQuotaItem();
                    ~InstanceTypeQuotaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
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
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param _instanceType 实例机型。
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
                     * 获取实例计费模式。取值范围： <br><li>PREPAID：表示预付费，即包年包月<br></li><li>POSTPAID_BY_HOUR：表示后付费，即按量计费</li><li>CDHPAID：表示[专用宿主机](https://cloud.tencent.com/document/product/416)付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。<br></li><li>SPOTPAID：表示竞价实例付费。</li>
                     * @return InstanceChargeType 实例计费模式。取值范围： <br><li>PREPAID：表示预付费，即包年包月<br></li><li>POSTPAID_BY_HOUR：表示后付费，即按量计费</li><li>CDHPAID：表示[专用宿主机](https://cloud.tencent.com/document/product/416)付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。<br></li><li>SPOTPAID：表示竞价实例付费。</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围： <br><li>PREPAID：表示预付费，即包年包月<br></li><li>POSTPAID_BY_HOUR：表示后付费，即按量计费</li><li>CDHPAID：表示[专用宿主机](https://cloud.tencent.com/document/product/416)付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。<br></li><li>SPOTPAID：表示竞价实例付费。</li>
                     * @param _instanceChargeType 实例计费模式。取值范围： <br><li>PREPAID：表示预付费，即包年包月<br></li><li>POSTPAID_BY_HOUR：表示后付费，即按量计费</li><li>CDHPAID：表示[专用宿主机](https://cloud.tencent.com/document/product/416)付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。<br></li><li>SPOTPAID：表示竞价实例付费。</li>
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
                     * 获取扩展属性。
                     * @return Externals 扩展属性。
                     * 
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置扩展属性。
                     * @param _externals 扩展属性。
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
                     * 获取本地磁盘规格列表。当该参数返回为空值时，表示当前情况下无法创建本地盘。
                     * @return LocalDiskTypeList 本地磁盘规格列表。当该参数返回为空值时，表示当前情况下无法创建本地盘。
                     * 
                     */
                    std::vector<LocalDiskType> GetLocalDiskTypeList() const;

                    /**
                     * 设置本地磁盘规格列表。当该参数返回为空值时，表示当前情况下无法创建本地盘。
                     * @param _localDiskTypeList 本地磁盘规格列表。当该参数返回为空值时，表示当前情况下无法创建本地盘。
                     * 
                     */
                    void SetLocalDiskTypeList(const std::vector<LocalDiskType>& _localDiskTypeList);

                    /**
                     * 判断参数 LocalDiskTypeList 是否已赋值
                     * @return LocalDiskTypeList 是否已赋值
                     * 
                     */
                    bool LocalDiskTypeListHasBeenSet() const;

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

                    /**
                     * 获取实例的售卖价格。
                     * @return Price 实例的售卖价格。
                     * 
                     */
                    ItemPrice GetPrice() const;

                    /**
                     * 设置实例的售卖价格。
                     * @param _price 实例的售卖价格。
                     * 
                     */
                    void SetPrice(const ItemPrice& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取售罄原因。
                     * @return SoldOutReason 售罄原因。
                     * 
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置售罄原因。
                     * @param _soldOutReason 售罄原因。
                     * 
                     */
                    void SetSoldOutReason(const std::string& _soldOutReason);

                    /**
                     * 判断参数 SoldOutReason 是否已赋值
                     * @return SoldOutReason 是否已赋值
                     * 
                     */
                    bool SoldOutReasonHasBeenSet() const;

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
                     * 获取实例备注信息。
                     * @return Remark 实例备注信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置实例备注信息。
                     * @param _remark 实例备注信息。
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
                     * 获取实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。
                     * @return GpuCount 实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。
                     * 
                     */
                    double GetGpuCount() const;

                    /**
                     * 设置实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。
                     * @param _gpuCount 实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。
                     * 
                     */
                    void SetGpuCount(const double& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取实例的CPU主频信息
                     * @return Frequency 实例的CPU主频信息
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置实例的CPU主频信息
                     * @param _frequency 实例的CPU主频信息
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
                     * 获取描述库存情况。取值范围：
<li> EnoughStock：表示对应库存非常充足</li> <li>NormalStock：表示对应库存供应有保障</li><li> UnderStock：表示对应库存即将售罄</li> <li>WithoutStock：表示对应库存已经售罄</li>
                     * @return StatusCategory 描述库存情况。取值范围：
<li> EnoughStock：表示对应库存非常充足</li> <li>NormalStock：表示对应库存供应有保障</li><li> UnderStock：表示对应库存即将售罄</li> <li>WithoutStock：表示对应库存已经售罄</li>
                     * 
                     */
                    std::string GetStatusCategory() const;

                    /**
                     * 设置描述库存情况。取值范围：
<li> EnoughStock：表示对应库存非常充足</li> <li>NormalStock：表示对应库存供应有保障</li><li> UnderStock：表示对应库存即将售罄</li> <li>WithoutStock：表示对应库存已经售罄</li>
                     * @param _statusCategory 描述库存情况。取值范围：
<li> EnoughStock：表示对应库存非常充足</li> <li>NormalStock：表示对应库存供应有保障</li><li> UnderStock：表示对应库存即将售罄</li> <li>WithoutStock：表示对应库存已经售罄</li>
                     * 
                     */
                    void SetStatusCategory(const std::string& _statusCategory);

                    /**
                     * 判断参数 StatusCategory 是否已赋值
                     * @return StatusCategory 是否已赋值
                     * 
                     */
                    bool StatusCategoryHasBeenSet() const;

                private:

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例计费模式。取值范围： <br><li>PREPAID：表示预付费，即包年包月<br></li><li>POSTPAID_BY_HOUR：表示后付费，即按量计费</li><li>CDHPAID：表示[专用宿主机](https://cloud.tencent.com/document/product/416)付费，即只对`专用宿主机`计费，不对`专用宿主机`上的实例计费。<br></li><li>SPOTPAID：表示竞价实例付费。</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 网卡类型，例如：25代表25G网卡
                     */
                    int64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * 扩展属性。
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

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
                     * 本地磁盘规格列表。当该参数返回为空值时，表示当前情况下无法创建本地盘。
                     */
                    std::vector<LocalDiskType> m_localDiskTypeList;
                    bool m_localDiskTypeListHasBeenSet;

                    /**
                     * 实例是否售卖。取值范围： <br><li>SELL：表示实例可购买<br></li><li>SOLD_OUT：表示实例已售罄。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例的售卖价格。
                     */
                    ItemPrice m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 售罄原因。
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

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
                     * 本地存储块数量。
                     */
                    int64_t m_storageBlockAmount;
                    bool m_storageBlockAmountHasBeenSet;

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
                     * 实例备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例机型映射的物理GPU卡数，单位：卡。vGPU卡型小于1，直通卡型大于等于1。vGPU是通过分片虚拟化技术，将物理GPU卡重新划分，同一块GPU卡经虚拟化分割后可分配至不同的实例使用。直通卡型会将GPU设备直接挂载给实例使用。
                     */
                    double m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * 实例的CPU主频信息
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 描述库存情况。取值范围：
<li> EnoughStock：表示对应库存非常充足</li> <li>NormalStock：表示对应库存供应有保障</li><li> UnderStock：表示对应库存即将售罄</li> <li>WithoutStock：表示对应库存已经售罄</li>
                     */
                    std::string m_statusCategory;
                    bool m_statusCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_
