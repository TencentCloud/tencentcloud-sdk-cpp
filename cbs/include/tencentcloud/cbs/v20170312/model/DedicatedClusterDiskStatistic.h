/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DEDICATEDCLUSTERDISKSTATISTIC_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DEDICATEDCLUSTERDISKSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CDC 独享集群云硬盘统计信息。
                */
                class DedicatedClusterDiskStatistic : public AbstractModel
                {
                public:
                    DedicatedClusterDiskStatistic();
                    ~DedicatedClusterDiskStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>硬盘介质类型。取值范围：<br>&lt;li&gt;CLOUD_BASIC：表示普通云硬盘<br>&lt;li&gt;CLOUD_PREMIUM：表示高性能云硬盘<br>&lt;li&gt;CLOUD_SSD：表示SSD云硬盘<br>&lt;li&gt;CLOUD_HSSD：表示增强型SSD云硬盘<br>&lt;li&gt;CLOUD_TSSD：表示极速型SSD云硬盘。</p>
                     * @return DiskType <p>硬盘介质类型。取值范围：<br>&lt;li&gt;CLOUD_BASIC：表示普通云硬盘<br>&lt;li&gt;CLOUD_PREMIUM：表示高性能云硬盘<br>&lt;li&gt;CLOUD_SSD：表示SSD云硬盘<br>&lt;li&gt;CLOUD_HSSD：表示增强型SSD云硬盘<br>&lt;li&gt;CLOUD_TSSD：表示极速型SSD云硬盘。</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>硬盘介质类型。取值范围：<br>&lt;li&gt;CLOUD_BASIC：表示普通云硬盘<br>&lt;li&gt;CLOUD_PREMIUM：表示高性能云硬盘<br>&lt;li&gt;CLOUD_SSD：表示SSD云硬盘<br>&lt;li&gt;CLOUD_HSSD：表示增强型SSD云硬盘<br>&lt;li&gt;CLOUD_TSSD：表示极速型SSD云硬盘。</p>
                     * @param _diskType <p>硬盘介质类型。取值范围：<br>&lt;li&gt;CLOUD_BASIC：表示普通云硬盘<br>&lt;li&gt;CLOUD_PREMIUM：表示高性能云硬盘<br>&lt;li&gt;CLOUD_SSD：表示SSD云硬盘<br>&lt;li&gt;CLOUD_HSSD：表示增强型SSD云硬盘<br>&lt;li&gt;CLOUD_TSSD：表示极速型SSD云硬盘。</p>
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
                     * 获取<p>云硬盘总容量。</p><p>单位：GiB</p>
                     * @return TotalDiskSize <p>云硬盘总容量。</p><p>单位：GiB</p>
                     * 
                     */
                    uint64_t GetTotalDiskSize() const;

                    /**
                     * 设置<p>云硬盘总容量。</p><p>单位：GiB</p>
                     * @param _totalDiskSize <p>云硬盘总容量。</p><p>单位：GiB</p>
                     * 
                     */
                    void SetTotalDiskSize(const uint64_t& _totalDiskSize);

                    /**
                     * 判断参数 TotalDiskSize 是否已赋值
                     * @return TotalDiskSize 是否已赋值
                     * 
                     */
                    bool TotalDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>已使用的云硬盘容量。</p><p>单位：GiB</p>
                     * @return UsedDiskSize <p>已使用的云硬盘容量。</p><p>单位：GiB</p>
                     * 
                     */
                    uint64_t GetUsedDiskSize() const;

                    /**
                     * 设置<p>已使用的云硬盘容量。</p><p>单位：GiB</p>
                     * @param _usedDiskSize <p>已使用的云硬盘容量。</p><p>单位：GiB</p>
                     * 
                     */
                    void SetUsedDiskSize(const uint64_t& _usedDiskSize);

                    /**
                     * 判断参数 UsedDiskSize 是否已赋值
                     * @return UsedDiskSize 是否已赋值
                     * 
                     */
                    bool UsedDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>可用的云硬盘容量。</p><p>单位：GiB</p>
                     * @return AvailableDiskSize <p>可用的云硬盘容量。</p><p>单位：GiB</p>
                     * 
                     */
                    uint64_t GetAvailableDiskSize() const;

                    /**
                     * 设置<p>可用的云硬盘容量。</p><p>单位：GiB</p>
                     * @param _availableDiskSize <p>可用的云硬盘容量。</p><p>单位：GiB</p>
                     * 
                     */
                    void SetAvailableDiskSize(const uint64_t& _availableDiskSize);

                    /**
                     * 判断参数 AvailableDiskSize 是否已赋值
                     * @return AvailableDiskSize 是否已赋值
                     * 
                     */
                    bool AvailableDiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>硬盘介质类型。取值范围：<br>&lt;li&gt;CLOUD_BASIC：表示普通云硬盘<br>&lt;li&gt;CLOUD_PREMIUM：表示高性能云硬盘<br>&lt;li&gt;CLOUD_SSD：表示SSD云硬盘<br>&lt;li&gt;CLOUD_HSSD：表示增强型SSD云硬盘<br>&lt;li&gt;CLOUD_TSSD：表示极速型SSD云硬盘。</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>云硬盘总容量。</p><p>单位：GiB</p>
                     */
                    uint64_t m_totalDiskSize;
                    bool m_totalDiskSizeHasBeenSet;

                    /**
                     * <p>已使用的云硬盘容量。</p><p>单位：GiB</p>
                     */
                    uint64_t m_usedDiskSize;
                    bool m_usedDiskSizeHasBeenSet;

                    /**
                     * <p>可用的云硬盘容量。</p><p>单位：GiB</p>
                     */
                    uint64_t m_availableDiskSize;
                    bool m_availableDiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DEDICATEDCLUSTERDISKSTATISTIC_H_
