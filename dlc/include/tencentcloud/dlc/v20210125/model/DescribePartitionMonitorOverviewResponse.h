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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MetricValue.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribePartitionMonitorOverview返回参数结构体
                */
                class DescribePartitionMonitorOverviewResponse : public AbstractModel
                {
                public:
                    DescribePartitionMonitorOverviewResponse();
                    ~DescribePartitionMonitorOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>监控指标列表</p>
                     * @return Metrics <p>监控指标列表</p>
                     * 
                     */
                    std::vector<MetricValue> GetMetrics() const;

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * <p>监控指标列表</p>
                     */
                    std::vector<MetricValue> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWRESPONSE_H_
