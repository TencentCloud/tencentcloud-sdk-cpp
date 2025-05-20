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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDisks请求参数结构体
                */
                class InquiryPriceCreateDisksRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDisksRequest();
                    ~InquiryPriceCreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘计费类型： <ul>   <li>PREPAID：预付费，即包年包月</li>   <li>POSTPAID_BY_HOUR：按小时后付费</li> </ul>
                     * @return DiskChargeType 云硬盘计费类型： <ul>   <li>PREPAID：预付费，即包年包月</li>   <li>POSTPAID_BY_HOUR：按小时后付费</li> </ul>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置云硬盘计费类型： <ul>   <li>PREPAID：预付费，即包年包月</li>   <li>POSTPAID_BY_HOUR：按小时后付费</li> </ul>
                     * @param _diskChargeType 云硬盘计费类型： <ul>   <li>PREPAID：预付费，即包年包月</li>   <li>POSTPAID_BY_HOUR：按小时后付费</li> </ul>
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
                     * 获取硬盘介质类型。取值范围： <ul>   <li>CLOUD_PREMIUM：表示高性能云硬盘</li>   <li>CLOUD_SSD：表示SSD云硬盘</li>   <li>CLOUD_HSSD：表示增强型SSD云硬盘</li>   <li>CLOUD_TSSD：表示极速型SSD云硬盘</li> </ul>
                     * @return DiskType 硬盘介质类型。取值范围： <ul>   <li>CLOUD_PREMIUM：表示高性能云硬盘</li>   <li>CLOUD_SSD：表示SSD云硬盘</li>   <li>CLOUD_HSSD：表示增强型SSD云硬盘</li>   <li>CLOUD_TSSD：表示极速型SSD云硬盘</li> </ul>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘介质类型。取值范围： <ul>   <li>CLOUD_PREMIUM：表示高性能云硬盘</li>   <li>CLOUD_SSD：表示SSD云硬盘</li>   <li>CLOUD_HSSD：表示增强型SSD云硬盘</li>   <li>CLOUD_TSSD：表示极速型SSD云硬盘</li> </ul>
                     * @param _diskType 硬盘介质类型。取值范围： <ul>   <li>CLOUD_PREMIUM：表示高性能云硬盘</li>   <li>CLOUD_SSD：表示SSD云硬盘</li>   <li>CLOUD_HSSD：表示增强型SSD云硬盘</li>   <li>CLOUD_TSSD：表示极速型SSD云硬盘</li> </ul>
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
                     * 获取云硬盘大小，单位为GiB。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * @return DiskSize 云硬盘大小，单位为GiB。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小，单位为GiB。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * @param _diskSize 云硬盘大小，单位为GiB。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘所属项目ID。该参数可以通过调用[DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * @return ProjectId 云硬盘所属项目ID。该参数可以通过调用[DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置云硬盘所属项目ID。该参数可以通过调用[DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * @param _projectId 云硬盘所属项目ID。该参数可以通过调用[DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取购买云硬盘的数量。不填则默认为1。
                     * @return DiskCount 购买云硬盘的数量。不填则默认为1。
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置购买云硬盘的数量。不填则默认为1。
                     * @param _diskCount 购买云硬盘的数量。不填则默认为1。
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取额外购买的云硬盘性能值，单位MiB/s。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * @return ThroughputPerformance 额外购买的云硬盘性能值，单位MiB/s。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置额外购买的云硬盘性能值，单位MiB/s。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * @param _throughputPerformance 额外购买的云硬盘性能值，单位MiB/s。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * @return DiskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * @param _diskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
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
                     * 获取指定云硬盘备份点配额。
                     * @return DiskBackupQuota 指定云硬盘备份点配额。
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置指定云硬盘备份点配额。
                     * @param _diskBackupQuota 指定云硬盘备份点配额。
                     * 
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * 云硬盘计费类型： <ul>   <li>PREPAID：预付费，即包年包月</li>   <li>POSTPAID_BY_HOUR：按小时后付费</li> </ul>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 硬盘介质类型。取值范围： <ul>   <li>CLOUD_PREMIUM：表示高性能云硬盘</li>   <li>CLOUD_SSD：表示SSD云硬盘</li>   <li>CLOUD_HSSD：表示增强型SSD云硬盘</li>   <li>CLOUD_TSSD：表示极速型SSD云硬盘</li> </ul>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云硬盘大小，单位为GiB。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云硬盘所属项目ID。该参数可以通过调用[DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 购买云硬盘的数量。不填则默认为1。
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 额外购买的云硬盘性能值，单位MiB/s。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * 指定云硬盘备份点配额。
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSREQUEST_H_
