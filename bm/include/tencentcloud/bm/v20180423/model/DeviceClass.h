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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASS_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 物理机设备类型
                */
                class DeviceClass : public AbstractModel
                {
                public:
                    DeviceClass();
                    ~DeviceClass() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型ID
                     * @return DeviceClassCode 机型ID
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置机型ID
                     * @param _deviceClassCode 机型ID
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取CPU描述
                     * @return CpuDescription CPU描述
                     * 
                     */
                    std::string GetCpuDescription() const;

                    /**
                     * 设置CPU描述
                     * @param _cpuDescription CPU描述
                     * 
                     */
                    void SetCpuDescription(const std::string& _cpuDescription);

                    /**
                     * 判断参数 CpuDescription 是否已赋值
                     * @return CpuDescription 是否已赋值
                     * 
                     */
                    bool CpuDescriptionHasBeenSet() const;

                    /**
                     * 获取内存描述
                     * @return MemDescription 内存描述
                     * 
                     */
                    std::string GetMemDescription() const;

                    /**
                     * 设置内存描述
                     * @param _memDescription 内存描述
                     * 
                     */
                    void SetMemDescription(const std::string& _memDescription);

                    /**
                     * 判断参数 MemDescription 是否已赋值
                     * @return MemDescription 是否已赋值
                     * 
                     */
                    bool MemDescriptionHasBeenSet() const;

                    /**
                     * 获取硬盘描述
                     * @return DiskDescription 硬盘描述
                     * 
                     */
                    std::string GetDiskDescription() const;

                    /**
                     * 设置硬盘描述
                     * @param _diskDescription 硬盘描述
                     * 
                     */
                    void SetDiskDescription(const std::string& _diskDescription);

                    /**
                     * 判断参数 DiskDescription 是否已赋值
                     * @return DiskDescription 是否已赋值
                     * 
                     */
                    bool DiskDescriptionHasBeenSet() const;

                    /**
                     * 获取是否支持RAID. 0:不支持; 1:支持
                     * @return HaveRaidCard 是否支持RAID. 0:不支持; 1:支持
                     * 
                     */
                    uint64_t GetHaveRaidCard() const;

                    /**
                     * 设置是否支持RAID. 0:不支持; 1:支持
                     * @param _haveRaidCard 是否支持RAID. 0:不支持; 1:支持
                     * 
                     */
                    void SetHaveRaidCard(const uint64_t& _haveRaidCard);

                    /**
                     * 判断参数 HaveRaidCard 是否已赋值
                     * @return HaveRaidCard 是否已赋值
                     * 
                     */
                    bool HaveRaidCardHasBeenSet() const;

                    /**
                     * 获取网卡描述
                     * @return NicDescription 网卡描述
                     * 
                     */
                    std::string GetNicDescription() const;

                    /**
                     * 设置网卡描述
                     * @param _nicDescription 网卡描述
                     * 
                     */
                    void SetNicDescription(const std::string& _nicDescription);

                    /**
                     * 判断参数 NicDescription 是否已赋值
                     * @return NicDescription 是否已赋值
                     * 
                     */
                    bool NicDescriptionHasBeenSet() const;

                    /**
                     * 获取GPU描述
                     * @return GpuDescription GPU描述
                     * 
                     */
                    std::string GetGpuDescription() const;

                    /**
                     * 设置GPU描述
                     * @param _gpuDescription GPU描述
                     * 
                     */
                    void SetGpuDescription(const std::string& _gpuDescription);

                    /**
                     * 判断参数 GpuDescription 是否已赋值
                     * @return GpuDescription 是否已赋值
                     * 
                     */
                    bool GpuDescriptionHasBeenSet() const;

                    /**
                     * 获取单价折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 单价折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置单价折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 单价折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取用户刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 用户刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUnitPrice() const;

                    /**
                     * 设置用户刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPrice 用户刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitPrice(const uint64_t& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取实际价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealPrice 实际价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRealPrice() const;

                    /**
                     * 设置实际价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realPrice 实际价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealPrice(const uint64_t& _realPrice);

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取官网刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalPrice 官网刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNormalPrice() const;

                    /**
                     * 设置官网刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalPrice 官网刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNormalPrice(const uint64_t& _normalPrice);

                    /**
                     * 判断参数 NormalPrice 是否已赋值
                     * @return NormalPrice 是否已赋值
                     * 
                     */
                    bool NormalPriceHasBeenSet() const;

                    /**
                     * 获取设备使用场景类型
                     * @return DeviceType 设备使用场景类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备使用场景类型
                     * @param _deviceType 设备使用场景类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取机型系列
                     * @return Series 机型系列
                     * 
                     */
                    uint64_t GetSeries() const;

                    /**
                     * 设置机型系列
                     * @param _series 机型系列
                     * 
                     */
                    void SetSeries(const uint64_t& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * @return Cpu cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     * @param _cpu cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
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
                     * 获取内存容量。单位G
                     * @return Mem 内存容量。单位G
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存容量。单位G
                     * @param _mem 内存容量。单位G
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * 机型ID
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * CPU描述
                     */
                    std::string m_cpuDescription;
                    bool m_cpuDescriptionHasBeenSet;

                    /**
                     * 内存描述
                     */
                    std::string m_memDescription;
                    bool m_memDescriptionHasBeenSet;

                    /**
                     * 硬盘描述
                     */
                    std::string m_diskDescription;
                    bool m_diskDescriptionHasBeenSet;

                    /**
                     * 是否支持RAID. 0:不支持; 1:支持
                     */
                    uint64_t m_haveRaidCard;
                    bool m_haveRaidCardHasBeenSet;

                    /**
                     * 网卡描述
                     */
                    std::string m_nicDescription;
                    bool m_nicDescriptionHasBeenSet;

                    /**
                     * GPU描述
                     */
                    std::string m_gpuDescription;
                    bool m_gpuDescriptionHasBeenSet;

                    /**
                     * 单价折扣
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 用户刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 实际价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * 官网刊例价格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_normalPrice;
                    bool m_normalPriceHasBeenSet;

                    /**
                     * 设备使用场景类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 机型系列
                     */
                    uint64_t m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * cpu的核心数。仅是物理服务器未开启超线程的核心数， 超线程的核心数为Cpu*2
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存容量。单位G
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASS_H_
