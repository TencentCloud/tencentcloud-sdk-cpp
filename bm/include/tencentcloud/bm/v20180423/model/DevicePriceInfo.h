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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPRICEINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPRICEINFO_H_

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
                * 服务器价格信息
                */
                class DevicePriceInfo : public AbstractModel
                {
                public:
                    DevicePriceInfo();
                    ~DevicePriceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取物理机ID
                     * @return InstanceId 物理机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置物理机ID
                     * @param _instanceId 物理机ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取设备型号
                     * @return DeviceClassCode 设备型号
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备型号
                     * @param _deviceClassCode 设备型号
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
                     * 获取是否是弹性机型，1：是，0：否
                     * @return IsElastic 是否是弹性机型，1：是，0：否
                     * 
                     */
                    uint64_t GetIsElastic() const;

                    /**
                     * 设置是否是弹性机型，1：是，0：否
                     * @param _isElastic 是否是弹性机型，1：是，0：否
                     * 
                     */
                    void SetIsElastic(const uint64_t& _isElastic);

                    /**
                     * 判断参数 IsElastic 是否已赋值
                     * @return IsElastic 是否已赋值
                     * 
                     */
                    bool IsElasticHasBeenSet() const;

                    /**
                     * 获取付费模式ID, 1:预付费; 2:后付费; 3:预付费转后付费中
                     * @return CpmPayMode 付费模式ID, 1:预付费; 2:后付费; 3:预付费转后付费中
                     * 
                     */
                    uint64_t GetCpmPayMode() const;

                    /**
                     * 设置付费模式ID, 1:预付费; 2:后付费; 3:预付费转后付费中
                     * @param _cpmPayMode 付费模式ID, 1:预付费; 2:后付费; 3:预付费转后付费中
                     * 
                     */
                    void SetCpmPayMode(const uint64_t& _cpmPayMode);

                    /**
                     * 判断参数 CpmPayMode 是否已赋值
                     * @return CpmPayMode 是否已赋值
                     * 
                     */
                    bool CpmPayModeHasBeenSet() const;

                    /**
                     * 获取Cpu信息描述
                     * @return CpuDescription Cpu信息描述
                     * 
                     */
                    std::string GetCpuDescription() const;

                    /**
                     * 设置Cpu信息描述
                     * @param _cpuDescription Cpu信息描述
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
                     * 获取内存信息描述
                     * @return MemDescription 内存信息描述
                     * 
                     */
                    std::string GetMemDescription() const;

                    /**
                     * 设置内存信息描述
                     * @param _memDescription 内存信息描述
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
                     * 获取硬盘信息描述
                     * @return DiskDescription 硬盘信息描述
                     * 
                     */
                    std::string GetDiskDescription() const;

                    /**
                     * 设置硬盘信息描述
                     * @param _diskDescription 硬盘信息描述
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
                     * 获取网卡信息描述
                     * @return NicDescription 网卡信息描述
                     * 
                     */
                    std::string GetNicDescription() const;

                    /**
                     * 设置网卡信息描述
                     * @param _nicDescription 网卡信息描述
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
                     * 获取Gpu信息描述
                     * @return GpuDescription Gpu信息描述
                     * 
                     */
                    std::string GetGpuDescription() const;

                    /**
                     * 设置Gpu信息描述
                     * @param _gpuDescription Gpu信息描述
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
                     * 获取Raid信息描述
                     * @return RaidDescription Raid信息描述
                     * 
                     */
                    std::string GetRaidDescription() const;

                    /**
                     * 设置Raid信息描述
                     * @param _raidDescription Raid信息描述
                     * 
                     */
                    void SetRaidDescription(const std::string& _raidDescription);

                    /**
                     * 判断参数 RaidDescription 是否已赋值
                     * @return RaidDescription 是否已赋值
                     * 
                     */
                    bool RaidDescriptionHasBeenSet() const;

                    /**
                     * 获取客户的单价
                     * @return Price 客户的单价
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 设置客户的单价
                     * @param _price 客户的单价
                     * 
                     */
                    void SetPrice(const uint64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取刊例单价
                     * @return NormalPrice 刊例单价
                     * 
                     */
                    uint64_t GetNormalPrice() const;

                    /**
                     * 设置刊例单价
                     * @param _normalPrice 刊例单价
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
                     * 获取原价
                     * @return TotalCost 原价
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 设置原价
                     * @param _totalCost 原价
                     * 
                     */
                    void SetTotalCost(const uint64_t& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取折扣价
                     * @return RealTotalCost 折扣价
                     * 
                     */
                    uint64_t GetRealTotalCost() const;

                    /**
                     * 设置折扣价
                     * @param _realTotalCost 折扣价
                     * 
                     */
                    void SetRealTotalCost(const uint64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取计费时长
                     * @return TimeSpan 计费时长
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置计费时长
                     * @param _timeSpan 计费时长
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
                     * 获取计费时长单位, M:按月计费; D:按天计费
                     * @return TimeUnit 计费时长单位, M:按月计费; D:按天计费
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置计费时长单位, M:按月计费; D:按天计费
                     * @param _timeUnit 计费时长单位, M:按月计费; D:按天计费
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return GoodsCount 商品数量
                     * 
                     */
                    uint64_t GetGoodsCount() const;

                    /**
                     * 设置商品数量
                     * @param _goodsCount 商品数量
                     * 
                     */
                    void SetGoodsCount(const uint64_t& _goodsCount);

                    /**
                     * 判断参数 GoodsCount 是否已赋值
                     * @return GoodsCount 是否已赋值
                     * 
                     */
                    bool GoodsCountHasBeenSet() const;

                private:

                    /**
                     * 物理机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备型号
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 是否是弹性机型，1：是，0：否
                     */
                    uint64_t m_isElastic;
                    bool m_isElasticHasBeenSet;

                    /**
                     * 付费模式ID, 1:预付费; 2:后付费; 3:预付费转后付费中
                     */
                    uint64_t m_cpmPayMode;
                    bool m_cpmPayModeHasBeenSet;

                    /**
                     * Cpu信息描述
                     */
                    std::string m_cpuDescription;
                    bool m_cpuDescriptionHasBeenSet;

                    /**
                     * 内存信息描述
                     */
                    std::string m_memDescription;
                    bool m_memDescriptionHasBeenSet;

                    /**
                     * 硬盘信息描述
                     */
                    std::string m_diskDescription;
                    bool m_diskDescriptionHasBeenSet;

                    /**
                     * 网卡信息描述
                     */
                    std::string m_nicDescription;
                    bool m_nicDescriptionHasBeenSet;

                    /**
                     * Gpu信息描述
                     */
                    std::string m_gpuDescription;
                    bool m_gpuDescriptionHasBeenSet;

                    /**
                     * Raid信息描述
                     */
                    std::string m_raidDescription;
                    bool m_raidDescriptionHasBeenSet;

                    /**
                     * 客户的单价
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 刊例单价
                     */
                    uint64_t m_normalPrice;
                    bool m_normalPriceHasBeenSet;

                    /**
                     * 原价
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 折扣价
                     */
                    uint64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 计费时长
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 计费时长单位, M:按月计费; D:按天计费
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 商品数量
                     */
                    uint64_t m_goodsCount;
                    bool m_goodsCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPRICEINFO_H_
