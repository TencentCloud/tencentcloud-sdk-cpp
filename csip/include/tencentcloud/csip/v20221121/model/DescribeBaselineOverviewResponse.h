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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineOverviewStatistic.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineOverview返回参数结构体
                */
                class DescribeBaselineOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBaselineOverviewResponse();
                    ~DescribeBaselineOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线概览统计数据（主机/集群未通过项数、近一年修复数）。</p>
                     * @return Statistics <p>基线概览统计数据（主机/集群未通过项数、近一年修复数）。</p>
                     * 
                     */
                    BaselineOverviewStatistic GetStatistics() const;

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取<p>最近一次基线扫描完成时间。</p>
                     * @return LatestScanTime <p>最近一次基线扫描完成时间。</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>当前是否已启用任意周期性扫描。true 启用，false 未启用。</p>
                     * @return EnableCycleScan <p>当前是否已启用任意周期性扫描。true 启用，false 未启用。</p>
                     * 
                     */
                    bool GetEnableCycleScan() const;

                    /**
                     * 判断参数 EnableCycleScan 是否已赋值
                     * @return EnableCycleScan 是否已赋值
                     * 
                     */
                    bool EnableCycleScanHasBeenSet() const;

                    /**
                     * 获取<p>当前进行中的扫描主任务数量。</p>
                     * @return ScanningTaskCount <p>当前进行中的扫描主任务数量。</p>
                     * 
                     */
                    uint64_t GetScanningTaskCount() const;

                    /**
                     * 判断参数 ScanningTaskCount 是否已赋值
                     * @return ScanningTaskCount 是否已赋值
                     * 
                     */
                    bool ScanningTaskCountHasBeenSet() const;

                private:

                    /**
                     * <p>基线概览统计数据（主机/集群未通过项数、近一年修复数）。</p>
                     */
                    BaselineOverviewStatistic m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>最近一次基线扫描完成时间。</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>当前是否已启用任意周期性扫描。true 启用，false 未启用。</p>
                     */
                    bool m_enableCycleScan;
                    bool m_enableCycleScanHasBeenSet;

                    /**
                     * <p>当前进行中的扫描主任务数量。</p>
                     */
                    uint64_t m_scanningTaskCount;
                    bool m_scanningTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_
