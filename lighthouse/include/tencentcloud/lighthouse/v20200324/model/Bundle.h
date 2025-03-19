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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 套餐信息。
                */
                class Bundle : public AbstractModel
                {
                public:
                    Bundle();
                    ~Bundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐 ID。
                     * @return BundleId 套餐 ID。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置套餐 ID。
                     * @param _bundleId 套餐 ID。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取内存大小，单位 GB。
                     * @return Memory 内存大小，单位 GB。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位 GB。
                     * @param _memory 内存大小，单位 GB。
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
                     * 获取系统盘类型。
取值范围： 
<li> CLOUD_SSD：SSD 云硬盘</li><li> CLOUD_PREMIUM：高性能云硬盘</li>
                     * @return SystemDiskType 系统盘类型。
取值范围： 
<li> CLOUD_SSD：SSD 云硬盘</li><li> CLOUD_PREMIUM：高性能云硬盘</li>
                     * 
                     */
                    std::string GetSystemDiskType() const;

                    /**
                     * 设置系统盘类型。
取值范围： 
<li> CLOUD_SSD：SSD 云硬盘</li><li> CLOUD_PREMIUM：高性能云硬盘</li>
                     * @param _systemDiskType 系统盘类型。
取值范围： 
<li> CLOUD_SSD：SSD 云硬盘</li><li> CLOUD_PREMIUM：高性能云硬盘</li>
                     * 
                     */
                    void SetSystemDiskType(const std::string& _systemDiskType);

                    /**
                     * 判断参数 SystemDiskType 是否已赋值
                     * @return SystemDiskType 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小。单位GB。
                     * @return SystemDiskSize 系统盘大小。单位GB。
                     * 
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置系统盘大小。单位GB。
                     * @param _systemDiskSize 系统盘大小。单位GB。
                     * 
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取每月网络流量，单位 GB。
                     * @return MonthlyTraffic 每月网络流量，单位 GB。
                     * 
                     */
                    int64_t GetMonthlyTraffic() const;

                    /**
                     * 设置每月网络流量，单位 GB。
                     * @param _monthlyTraffic 每月网络流量，单位 GB。
                     * 
                     */
                    void SetMonthlyTraffic(const int64_t& _monthlyTraffic);

                    /**
                     * 判断参数 MonthlyTraffic 是否已赋值
                     * @return MonthlyTraffic 是否已赋值
                     * 
                     */
                    bool MonthlyTrafficHasBeenSet() const;

                    /**
                     * 获取是否支持 Linux/Unix 平台。
                     * @return SupportLinuxUnixPlatform 是否支持 Linux/Unix 平台。
                     * 
                     */
                    bool GetSupportLinuxUnixPlatform() const;

                    /**
                     * 设置是否支持 Linux/Unix 平台。
                     * @param _supportLinuxUnixPlatform 是否支持 Linux/Unix 平台。
                     * 
                     */
                    void SetSupportLinuxUnixPlatform(const bool& _supportLinuxUnixPlatform);

                    /**
                     * 判断参数 SupportLinuxUnixPlatform 是否已赋值
                     * @return SupportLinuxUnixPlatform 是否已赋值
                     * 
                     */
                    bool SupportLinuxUnixPlatformHasBeenSet() const;

                    /**
                     * 获取是否支持 Windows 平台。
                     * @return SupportWindowsPlatform 是否支持 Windows 平台。
                     * 
                     */
                    bool GetSupportWindowsPlatform() const;

                    /**
                     * 设置是否支持 Windows 平台。
                     * @param _supportWindowsPlatform 是否支持 Windows 平台。
                     * 
                     */
                    void SetSupportWindowsPlatform(const bool& _supportWindowsPlatform);

                    /**
                     * 判断参数 SupportWindowsPlatform 是否已赋值
                     * @return SupportWindowsPlatform 是否已赋值
                     * 
                     */
                    bool SupportWindowsPlatformHasBeenSet() const;

                    /**
                     * 获取套餐当前单位价格信息。
                     * @return Price 套餐当前单位价格信息。
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置套餐当前单位价格信息。
                     * @param _price 套餐当前单位价格信息。
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取CPU 核数。
                     * @return CPU CPU 核数。
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CPU 核数。
                     * @param _cPU CPU 核数。
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取峰值带宽，单位 Mbps。
                     * @return InternetMaxBandwidthOut 峰值带宽，单位 Mbps。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置峰值带宽，单位 Mbps。
                     * @param _internetMaxBandwidthOut 峰值带宽，单位 Mbps。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取网络计费类型。
                     * @return InternetChargeType 网络计费类型。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费类型。
                     * @param _internetChargeType 网络计费类型。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取套餐售卖状态,取值:‘AVAILABLE’(可用) , ‘SOLD_OUT’(售罄)
                     * @return BundleSalesState 套餐售卖状态,取值:‘AVAILABLE’(可用) , ‘SOLD_OUT’(售罄)
                     * 
                     */
                    std::string GetBundleSalesState() const;

                    /**
                     * 设置套餐售卖状态,取值:‘AVAILABLE’(可用) , ‘SOLD_OUT’(售罄)
                     * @param _bundleSalesState 套餐售卖状态,取值:‘AVAILABLE’(可用) , ‘SOLD_OUT’(售罄)
                     * 
                     */
                    void SetBundleSalesState(const std::string& _bundleSalesState);

                    /**
                     * 判断参数 BundleSalesState 是否已赋值
                     * @return BundleSalesState 是否已赋值
                     * 
                     */
                    bool BundleSalesStateHasBeenSet() const;

                    /**
                     * 获取套餐类型。
取值范围：
<li>GENERAL_BUNDLE：通用型</li>
<li>STORAGE_BUNDLE：存储型</li>
<li>ENTERPRISE_BUNDLE：企业型</li>
<li>EXCLUSIVE_BUNDLE：专属型</li>
<li>BEFAST_BUNDLE：蜂驰型 </li>
<li>STARTER_BUNDLE：入门型</li>
<li>CAREFREE_BUNDLE：无忧型</li>
<li>RAZOR_SPEED_BUNDLE：锐驰型</li>
                     * @return BundleType 套餐类型。
取值范围：
<li>GENERAL_BUNDLE：通用型</li>
<li>STORAGE_BUNDLE：存储型</li>
<li>ENTERPRISE_BUNDLE：企业型</li>
<li>EXCLUSIVE_BUNDLE：专属型</li>
<li>BEFAST_BUNDLE：蜂驰型 </li>
<li>STARTER_BUNDLE：入门型</li>
<li>CAREFREE_BUNDLE：无忧型</li>
<li>RAZOR_SPEED_BUNDLE：锐驰型</li>
                     * 
                     */
                    std::string GetBundleType() const;

                    /**
                     * 设置套餐类型。
取值范围：
<li>GENERAL_BUNDLE：通用型</li>
<li>STORAGE_BUNDLE：存储型</li>
<li>ENTERPRISE_BUNDLE：企业型</li>
<li>EXCLUSIVE_BUNDLE：专属型</li>
<li>BEFAST_BUNDLE：蜂驰型 </li>
<li>STARTER_BUNDLE：入门型</li>
<li>CAREFREE_BUNDLE：无忧型</li>
<li>RAZOR_SPEED_BUNDLE：锐驰型</li>
                     * @param _bundleType 套餐类型。
取值范围：
<li>GENERAL_BUNDLE：通用型</li>
<li>STORAGE_BUNDLE：存储型</li>
<li>ENTERPRISE_BUNDLE：企业型</li>
<li>EXCLUSIVE_BUNDLE：专属型</li>
<li>BEFAST_BUNDLE：蜂驰型 </li>
<li>STARTER_BUNDLE：入门型</li>
<li>CAREFREE_BUNDLE：无忧型</li>
<li>RAZOR_SPEED_BUNDLE：锐驰型</li>
                     * 
                     */
                    void SetBundleType(const std::string& _bundleType);

                    /**
                     * 判断参数 BundleType 是否已赋值
                     * @return BundleType 是否已赋值
                     * 
                     */
                    bool BundleTypeHasBeenSet() const;

                    /**
                     * 获取套餐类型描述信息。
                     * @return BundleTypeDescription 套餐类型描述信息。
                     * 
                     */
                    std::string GetBundleTypeDescription() const;

                    /**
                     * 设置套餐类型描述信息。
                     * @param _bundleTypeDescription 套餐类型描述信息。
                     * 
                     */
                    void SetBundleTypeDescription(const std::string& _bundleTypeDescription);

                    /**
                     * 判断参数 BundleTypeDescription 是否已赋值
                     * @return BundleTypeDescription 是否已赋值
                     * 
                     */
                    bool BundleTypeDescriptionHasBeenSet() const;

                    /**
                     * 获取套餐展示标签.
取值范围:
"ACTIVITY": 活动套餐,
"NORMAL": 普通套餐
"CAREFREE": 无忧套餐
                     * @return BundleDisplayLabel 套餐展示标签.
取值范围:
"ACTIVITY": 活动套餐,
"NORMAL": 普通套餐
"CAREFREE": 无忧套餐
                     * 
                     */
                    std::string GetBundleDisplayLabel() const;

                    /**
                     * 设置套餐展示标签.
取值范围:
"ACTIVITY": 活动套餐,
"NORMAL": 普通套餐
"CAREFREE": 无忧套餐
                     * @param _bundleDisplayLabel 套餐展示标签.
取值范围:
"ACTIVITY": 活动套餐,
"NORMAL": 普通套餐
"CAREFREE": 无忧套餐
                     * 
                     */
                    void SetBundleDisplayLabel(const std::string& _bundleDisplayLabel);

                    /**
                     * 判断参数 BundleDisplayLabel 是否已赋值
                     * @return BundleDisplayLabel 是否已赋值
                     * 
                     */
                    bool BundleDisplayLabelHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 内存大小，单位 GB。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 系统盘类型。
取值范围： 
<li> CLOUD_SSD：SSD 云硬盘</li><li> CLOUD_PREMIUM：高性能云硬盘</li>
                     */
                    std::string m_systemDiskType;
                    bool m_systemDiskTypeHasBeenSet;

                    /**
                     * 系统盘大小。单位GB。
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * 每月网络流量，单位 GB。
                     */
                    int64_t m_monthlyTraffic;
                    bool m_monthlyTrafficHasBeenSet;

                    /**
                     * 是否支持 Linux/Unix 平台。
                     */
                    bool m_supportLinuxUnixPlatform;
                    bool m_supportLinuxUnixPlatformHasBeenSet;

                    /**
                     * 是否支持 Windows 平台。
                     */
                    bool m_supportWindowsPlatform;
                    bool m_supportWindowsPlatformHasBeenSet;

                    /**
                     * 套餐当前单位价格信息。
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * CPU 核数。
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 峰值带宽，单位 Mbps。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 网络计费类型。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 套餐售卖状态,取值:‘AVAILABLE’(可用) , ‘SOLD_OUT’(售罄)
                     */
                    std::string m_bundleSalesState;
                    bool m_bundleSalesStateHasBeenSet;

                    /**
                     * 套餐类型。
取值范围：
<li>GENERAL_BUNDLE：通用型</li>
<li>STORAGE_BUNDLE：存储型</li>
<li>ENTERPRISE_BUNDLE：企业型</li>
<li>EXCLUSIVE_BUNDLE：专属型</li>
<li>BEFAST_BUNDLE：蜂驰型 </li>
<li>STARTER_BUNDLE：入门型</li>
<li>CAREFREE_BUNDLE：无忧型</li>
<li>RAZOR_SPEED_BUNDLE：锐驰型</li>
                     */
                    std::string m_bundleType;
                    bool m_bundleTypeHasBeenSet;

                    /**
                     * 套餐类型描述信息。
                     */
                    std::string m_bundleTypeDescription;
                    bool m_bundleTypeDescriptionHasBeenSet;

                    /**
                     * 套餐展示标签.
取值范围:
"ACTIVITY": 活动套餐,
"NORMAL": 普通套餐
"CAREFREE": 无忧套餐
                     */
                    std::string m_bundleDisplayLabel;
                    bool m_bundleDisplayLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BUNDLE_H_
