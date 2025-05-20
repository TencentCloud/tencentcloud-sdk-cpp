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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskConfigQuota请求参数结构体
                */
                class DescribeDiskConfigQuotaRequest : public AbstractModel
                {
                public:
                    DescribeDiskConfigQuotaRequest();
                    ~DescribeDiskConfigQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询类别，取值范围。<br> INQUIRY_CBS_CONFIG：查询云盘配置列表<br> INQUIRY_CVM_CONFIG：查询云盘与实例搭配的配置列表。
                     * @return InquiryType 查询类别，取值范围。<br> INQUIRY_CBS_CONFIG：查询云盘配置列表<br> INQUIRY_CVM_CONFIG：查询云盘与实例搭配的配置列表。
                     * 
                     */
                    std::string GetInquiryType() const;

                    /**
                     * 设置查询类别，取值范围。<br> INQUIRY_CBS_CONFIG：查询云盘配置列表<br> INQUIRY_CVM_CONFIG：查询云盘与实例搭配的配置列表。
                     * @param _inquiryType 查询类别，取值范围。<br> INQUIRY_CBS_CONFIG：查询云盘配置列表<br> INQUIRY_CVM_CONFIG：查询云盘与实例搭配的配置列表。
                     * 
                     */
                    void SetInquiryType(const std::string& _inquiryType);

                    /**
                     * 判断参数 InquiryType 是否已赋值
                     * @return InquiryType 是否已赋值
                     * 
                     */
                    bool InquiryTypeHasBeenSet() const;

                    /**
                     * 获取付费模式。取值范围：<br> PREPAID：预付费<br> POSTPAID_BY_HOUR：后付费。
                     * @return DiskChargeType 付费模式。取值范围：<br> PREPAID：预付费<br> POSTPAID_BY_HOUR：后付费。
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置付费模式。取值范围：<br> PREPAID：预付费<br> POSTPAID_BY_HOUR：后付费。
                     * @param _diskChargeType 付费模式。取值范围：<br> PREPAID：预付费<br> POSTPAID_BY_HOUR：后付费。
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
                     * 获取按照实例机型系列过滤。实例机型系列形如：S1、I1、M1等。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
                     * @return InstanceFamilies 按照实例机型系列过滤。实例机型系列形如：S1、I1、M1等。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
                     * 
                     */
                    std::vector<std::string> GetInstanceFamilies() const;

                    /**
                     * 设置按照实例机型系列过滤。实例机型系列形如：S1、I1、M1等。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
                     * @param _instanceFamilies 按照实例机型系列过滤。实例机型系列形如：S1、I1、M1等。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<std::string>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                    /**
                     * 获取硬盘介质类型。取值范围：<br> CLOUD_BASIC：表示普通云硬盘<br> CLOUD_PREMIUM：表示高性能云硬盘<br> CLOUD_SSD：表示SSD云硬盘<br> CLOUD_HSSD：表示增强型SSD云硬盘。
                     * @return DiskTypes 硬盘介质类型。取值范围：<br> CLOUD_BASIC：表示普通云硬盘<br> CLOUD_PREMIUM：表示高性能云硬盘<br> CLOUD_SSD：表示SSD云硬盘<br> CLOUD_HSSD：表示增强型SSD云硬盘。
                     * 
                     */
                    std::vector<std::string> GetDiskTypes() const;

                    /**
                     * 设置硬盘介质类型。取值范围：<br> CLOUD_BASIC：表示普通云硬盘<br> CLOUD_PREMIUM：表示高性能云硬盘<br> CLOUD_SSD：表示SSD云硬盘<br> CLOUD_HSSD：表示增强型SSD云硬盘。
                     * @param _diskTypes 硬盘介质类型。取值范围：<br> CLOUD_BASIC：表示普通云硬盘<br> CLOUD_PREMIUM：表示高性能云硬盘<br> CLOUD_SSD：表示SSD云硬盘<br> CLOUD_HSSD：表示增强型SSD云硬盘。
                     * 
                     */
                    void SetDiskTypes(const std::vector<std::string>& _diskTypes);

                    /**
                     * 判断参数 DiskTypes 是否已赋值
                     * @return DiskTypes 是否已赋值
                     * 
                     */
                    bool DiskTypesHasBeenSet() const;

                    /**
                     * 获取查询一个或多个[可用区](/document/product/213/15753#ZoneInfo)下的配置。
                     * @return Zones 查询一个或多个[可用区](/document/product/213/15753#ZoneInfo)下的配置。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置查询一个或多个[可用区](/document/product/213/15753#ZoneInfo)下的配置。
                     * @param _zones 查询一个或多个[可用区](/document/product/213/15753#ZoneInfo)下的配置。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取实例内存大小,单位GB。
                     * @return Memory 实例内存大小,单位GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存大小,单位GB。
                     * @param _memory 实例内存大小,单位GB。
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
                     * 获取系统盘或数据盘。取值范围：<br> SYSTEM_DISK：表示系统盘<br> DATA_DISK：表示数据盘。
                     * @return DiskUsage 系统盘或数据盘。取值范围：<br> SYSTEM_DISK：表示系统盘<br> DATA_DISK：表示数据盘。
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置系统盘或数据盘。取值范围：<br> SYSTEM_DISK：表示系统盘<br> DATA_DISK：表示数据盘。
                     * @param _diskUsage 系统盘或数据盘。取值范围：<br> SYSTEM_DISK：表示系统盘<br> DATA_DISK：表示数据盘。
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
                     * 获取实例CPU核数。
                     * @return CPU 实例CPU核数。
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置实例CPU核数。
                     * @param _cPU 实例CPU核数。
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取专用集群ID。
                     * @return DedicatedClusterId 专用集群ID。
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专用集群ID。
                     * @param _dedicatedClusterId 专用集群ID。
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 查询类别，取值范围。<br> INQUIRY_CBS_CONFIG：查询云盘配置列表<br> INQUIRY_CVM_CONFIG：查询云盘与实例搭配的配置列表。
                     */
                    std::string m_inquiryType;
                    bool m_inquiryTypeHasBeenSet;

                    /**
                     * 付费模式。取值范围：<br> PREPAID：预付费<br> POSTPAID_BY_HOUR：后付费。
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 按照实例机型系列过滤。实例机型系列形如：S1、I1、M1等。详见[实例类型](https://cloud.tencent.com/document/product/213/11518)
                     */
                    std::vector<std::string> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                    /**
                     * 硬盘介质类型。取值范围：<br> CLOUD_BASIC：表示普通云硬盘<br> CLOUD_PREMIUM：表示高性能云硬盘<br> CLOUD_SSD：表示SSD云硬盘<br> CLOUD_HSSD：表示增强型SSD云硬盘。
                     */
                    std::vector<std::string> m_diskTypes;
                    bool m_diskTypesHasBeenSet;

                    /**
                     * 查询一个或多个[可用区](/document/product/213/15753#ZoneInfo)下的配置。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 实例内存大小,单位GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 系统盘或数据盘。取值范围：<br> SYSTEM_DISK：表示系统盘<br> DATA_DISK：表示数据盘。
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 实例CPU核数。
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 专用集群ID。
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKCONFIGQUOTAREQUEST_H_
