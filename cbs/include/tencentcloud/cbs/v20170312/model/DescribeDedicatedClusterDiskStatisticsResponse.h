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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DedicatedClusterDiskStatistic.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterDiskStatistics返回参数结构体
                */
                class DescribeDedicatedClusterDiskStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterDiskStatisticsResponse();
                    ~DescribeDedicatedClusterDiskStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云服务器独享集群云硬盘统计信息。</p>
                     * @return DedicatedClusterDiskStatisticSet <p>云服务器独享集群云硬盘统计信息。</p>
                     * 
                     */
                    std::vector<DedicatedClusterDiskStatistic> GetDedicatedClusterDiskStatisticSet() const;

                    /**
                     * 判断参数 DedicatedClusterDiskStatisticSet 是否已赋值
                     * @return DedicatedClusterDiskStatisticSet 是否已赋值
                     * 
                     */
                    bool DedicatedClusterDiskStatisticSetHasBeenSet() const;

                private:

                    /**
                     * <p>云服务器独享集群云硬盘统计信息。</p>
                     */
                    std::vector<DedicatedClusterDiskStatistic> m_dedicatedClusterDiskStatisticSet;
                    bool m_dedicatedClusterDiskStatisticSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSRESPONSE_H_
