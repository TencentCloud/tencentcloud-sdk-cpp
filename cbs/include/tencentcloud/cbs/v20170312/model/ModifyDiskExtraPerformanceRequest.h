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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_

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
                * ModifyDiskExtraPerformance请求参数结构体
                */
                class ModifyDiskExtraPerformanceRequest : public AbstractModel
                {
                public:
                    ModifyDiskExtraPerformanceRequest();
                    ~ModifyDiskExtraPerformanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取额外购买的云硬盘性能值，单位MiB/s。
                     * @return ThroughputPerformance 额外购买的云硬盘性能值，单位MiB/s。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置额外购买的云硬盘性能值，单位MiB/s。
                     * @param _throughputPerformance 额外购买的云硬盘性能值，单位MiB/s。
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
                     * 获取需要购买额外性能值的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * @return DiskId 需要购买额外性能值的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置需要购买额外性能值的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * @param _diskId 需要购买额外性能值的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * 额外购买的云硬盘性能值，单位MiB/s。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * 需要购买额外性能值的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。仅大小超过460GiB的增强型SSD（CLOUD_HSSD）和极速型SSD（CLOUD_TSSD）云硬盘才支持购买额外性能。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKEXTRAPERFORMANCEREQUEST_H_
