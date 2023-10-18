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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskChargePrepaid.h>
#include <tencentcloud/lighthouse/v20200324/model/AutoMountConfiguration.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateDisks请求参数结构体
                */
                class CreateDisksRequest : public AbstractModel
                {
                public:
                    CreateDisksRequest();
                    ~CreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区。可通过[DescribeZones](https://cloud.tencent.com/document/product/1207/57513)返回值中的Zone获取。
                     * @return Zone 可用区。可通过[DescribeZones](https://cloud.tencent.com/document/product/1207/57513)返回值中的Zone获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。可通过[DescribeZones](https://cloud.tencent.com/document/product/1207/57513)返回值中的Zone获取。
                     * @param _zone 可用区。可通过[DescribeZones](https://cloud.tencent.com/document/product/1207/57513)返回值中的Zone获取。
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
                     * 获取云硬盘大小, 单位: GB。
                     * @return DiskSize 云硬盘大小, 单位: GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小, 单位: GB。
                     * @param _diskSize 云硬盘大小, 单位: GB。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘介质类型。取值: "CLOUD_PREMIUM"(高性能云盘), "CLOUD_SSD"(SSD云硬盘)。
                     * @return DiskType 云硬盘介质类型。取值: "CLOUD_PREMIUM"(高性能云盘), "CLOUD_SSD"(SSD云硬盘)。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云硬盘介质类型。取值: "CLOUD_PREMIUM"(高性能云盘), "CLOUD_SSD"(SSD云硬盘)。
                     * @param _diskType 云硬盘介质类型。取值: "CLOUD_PREMIUM"(高性能云盘), "CLOUD_SSD"(SSD云硬盘)。
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
                     * 获取云硬盘包年包月相关参数设置。
                     * @return DiskChargePrepaid 云硬盘包年包月相关参数设置。
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置云硬盘包年包月相关参数设置。
                     * @param _diskChargePrepaid 云硬盘包年包月相关参数设置。
                     * 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取云硬盘名称。最大长度60。
                     * @return DiskName 云硬盘名称。最大长度60。
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置云硬盘名称。最大长度60。
                     * @param _diskName 云硬盘名称。最大长度60。
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取云硬盘个数。取值范围: [1, 30]。默认值: 1。
                     * @return DiskCount 云硬盘个数。取值范围: [1, 30]。默认值: 1。
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置云硬盘个数。取值范围: [1, 30]。默认值: 1。
                     * @param _diskCount 云硬盘个数。取值范围: [1, 30]。默认值: 1。
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取指定云硬盘备份点配额，取值范围: [0, 500]。不传时默认为不带备份点配额。
                     * @return DiskBackupQuota 指定云硬盘备份点配额，取值范围: [0, 500]。不传时默认为不带备份点配额。
                     * 
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置指定云硬盘备份点配额，取值范围: [0, 500]。不传时默认为不带备份点配额。
                     * @param _diskBackupQuota 指定云硬盘备份点配额，取值范围: [0, 500]。不传时默认为不带备份点配额。
                     * 
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券。默认不使用。
                     * @return AutoVoucher 是否自动使用代金券。默认不使用。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券。默认不使用。
                     * @param _autoVoucher 是否自动使用代金券。默认不使用。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取自动挂载并初始化数据盘。
                     * @return AutoMountConfiguration 自动挂载并初始化数据盘。
                     * 
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置自动挂载并初始化数据盘。
                     * @param _autoMountConfiguration 自动挂载并初始化数据盘。
                     * 
                     */
                    void SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration);

                    /**
                     * 判断参数 AutoMountConfiguration 是否已赋值
                     * @return AutoMountConfiguration 是否已赋值
                     * 
                     */
                    bool AutoMountConfigurationHasBeenSet() const;

                private:

                    /**
                     * 可用区。可通过[DescribeZones](https://cloud.tencent.com/document/product/1207/57513)返回值中的Zone获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 云硬盘大小, 单位: GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云硬盘介质类型。取值: "CLOUD_PREMIUM"(高性能云盘), "CLOUD_SSD"(SSD云硬盘)。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云硬盘包年包月相关参数设置。
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * 云硬盘名称。最大长度60。
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 云硬盘个数。取值范围: [1, 30]。默认值: 1。
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 指定云硬盘备份点配额，取值范围: [0, 500]。不传时默认为不带备份点配额。
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                    /**
                     * 是否自动使用代金券。默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 自动挂载并初始化数据盘。
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSREQUEST_H_
