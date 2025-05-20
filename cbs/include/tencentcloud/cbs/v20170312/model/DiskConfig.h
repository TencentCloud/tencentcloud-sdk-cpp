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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Price.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云盘配置。
                */
                class DiskConfig : public AbstractModel
                {
                public:
                    DiskConfig();
                    ~DiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置是否可用。
                     * @return Available 配置是否可用。
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置配置是否可用。
                     * @param _available 配置是否可用。
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取付费模式。取值范围：<br><li>PREPAID：表示预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：表示后付费，即按量计费。</li>
                     * @return DiskChargeType 付费模式。取值范围：<br><li>PREPAID：表示预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：表示后付费，即按量计费。</li>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置付费模式。取值范围：<br><li>PREPAID：表示预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：表示后付费，即按量计费。</li>
                     * @param _diskChargeType 付费模式。取值范围：<br><li>PREPAID：表示预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：表示后付费，即按量计费。</li>
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。
                     * @return Zone 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。
                     * @param _zone 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。
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
                     * 获取实例机型系列。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceFamily 实例机型系列。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置实例机型系列。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceFamily 实例机型系列。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取云盘介质类型。取值范围：<br>
CLOUD_BASIC：表示普通云硬盘<br>
CLOUD_PREMIUM：表示高性能云硬盘<br>
CLOUD_BSSD：表示通用型SSD云硬盘<br>
CLOUD_SSD：表示SSD云硬盘<br>
CLOUD_HSSD：表示增强型SSD云硬盘<br>
CLOUD_TSSD：表示极速型SSD云硬盘。
                     * @return DiskType 云盘介质类型。取值范围：<br>
CLOUD_BASIC：表示普通云硬盘<br>
CLOUD_PREMIUM：表示高性能云硬盘<br>
CLOUD_BSSD：表示通用型SSD云硬盘<br>
CLOUD_SSD：表示SSD云硬盘<br>
CLOUD_HSSD：表示增强型SSD云硬盘<br>
CLOUD_TSSD：表示极速型SSD云硬盘。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云盘介质类型。取值范围：<br>
CLOUD_BASIC：表示普通云硬盘<br>
CLOUD_PREMIUM：表示高性能云硬盘<br>
CLOUD_BSSD：表示通用型SSD云硬盘<br>
CLOUD_SSD：表示SSD云硬盘<br>
CLOUD_HSSD：表示增强型SSD云硬盘<br>
CLOUD_TSSD：表示极速型SSD云硬盘。
                     * @param _diskType 云盘介质类型。取值范围：<br>
CLOUD_BASIC：表示普通云硬盘<br>
CLOUD_PREMIUM：表示高性能云硬盘<br>
CLOUD_BSSD：表示通用型SSD云硬盘<br>
CLOUD_SSD：表示SSD云硬盘<br>
CLOUD_HSSD：表示增强型SSD云硬盘<br>
CLOUD_TSSD：表示极速型SSD云硬盘。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取云盘大小变化的最小步长，单位GiB。
                     * @return StepSize 云盘大小变化的最小步长，单位GiB。
                     * 
                     */
                    uint64_t GetStepSize() const;

                    /**
                     * 设置云盘大小变化的最小步长，单位GiB。
                     * @param _stepSize 云盘大小变化的最小步长，单位GiB。
                     * 
                     */
                    void SetStepSize(const uint64_t& _stepSize);

                    /**
                     * 判断参数 StepSize 是否已赋值
                     * @return StepSize 是否已赋值
                     * 
                     */
                    bool StepSizeHasBeenSet() const;

                    /**
                     * 获取额外的性能区间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraPerformanceRange 额外的性能区间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetExtraPerformanceRange() const;

                    /**
                     * 设置额外的性能区间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraPerformanceRange 额外的性能区间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraPerformanceRange(const std::vector<int64_t>& _extraPerformanceRange);

                    /**
                     * 判断参数 ExtraPerformanceRange 是否已赋值
                     * @return ExtraPerformanceRange 是否已赋值
                     * 
                     */
                    bool ExtraPerformanceRangeHasBeenSet() const;

                    /**
                     * 获取实例机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceClass 实例机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置实例机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceClass 实例机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取云盘类型。取值范围：<br><li>SYSTEM_DISK：表示系统盘</li><br><li>DATA_DISK：表示数据盘。</li>
                     * @return DiskUsage 云盘类型。取值范围：<br><li>SYSTEM_DISK：表示系统盘</li><br><li>DATA_DISK：表示数据盘。</li>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置云盘类型。取值范围：<br><li>SYSTEM_DISK：表示系统盘</li><br><li>DATA_DISK：表示数据盘。</li>
                     * @param _diskUsage 云盘类型。取值范围：<br><li>SYSTEM_DISK：表示系统盘</li><br><li>DATA_DISK：表示数据盘。</li>
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取最小可配置云盘大小，单位GiB。
                     * @return MinDiskSize 最小可配置云盘大小，单位GiB。
                     * 
                     */
                    uint64_t GetMinDiskSize() const;

                    /**
                     * 设置最小可配置云盘大小，单位GiB。
                     * @param _minDiskSize 最小可配置云盘大小，单位GiB。
                     * 
                     */
                    void SetMinDiskSize(const uint64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取最大可配置云盘大小，单位GiB。
                     * @return MaxDiskSize 最大可配置云盘大小，单位GiB。
                     * 
                     */
                    uint64_t GetMaxDiskSize() const;

                    /**
                     * 设置最大可配置云盘大小，单位GiB。
                     * @param _maxDiskSize 最大可配置云盘大小，单位GiB。
                     * 
                     */
                    void SetMaxDiskSize(const uint64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取描述预付费或后付费云盘的价格。
                     * @return Price 描述预付费或后付费云盘的价格。
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置描述预付费或后付费云盘的价格。
                     * @param _price 描述预付费或后付费云盘的价格。
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * 配置是否可用。
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 付费模式。取值范围：<br><li>PREPAID：表示预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：表示后付费，即按量计费。</li>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例机型系列。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 云盘介质类型。取值范围：<br>
CLOUD_BASIC：表示普通云硬盘<br>
CLOUD_PREMIUM：表示高性能云硬盘<br>
CLOUD_BSSD：表示通用型SSD云硬盘<br>
CLOUD_SSD：表示SSD云硬盘<br>
CLOUD_HSSD：表示增强型SSD云硬盘<br>
CLOUD_TSSD：表示极速型SSD云硬盘。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云盘大小变化的最小步长，单位GiB。
                     */
                    uint64_t m_stepSize;
                    bool m_stepSizeHasBeenSet;

                    /**
                     * 额外的性能区间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_extraPerformanceRange;
                    bool m_extraPerformanceRangeHasBeenSet;

                    /**
                     * 实例机型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * 云盘类型。取值范围：<br><li>SYSTEM_DISK：表示系统盘</li><br><li>DATA_DISK：表示数据盘。</li>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 最小可配置云盘大小，单位GiB。
                     */
                    uint64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * 最大可配置云盘大小，单位GiB。
                     */
                    uint64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 描述预付费或后付费云盘的价格。
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCONFIG_H_
