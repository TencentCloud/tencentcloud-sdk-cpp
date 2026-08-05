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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryDashboardOverview返回参数结构体
                */
                class QueryDashboardOverviewResponse : public AbstractModel
                {
                public:
                    QueryDashboardOverviewResponse();
                    ~QueryDashboardOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>时间范围内所有服务的总 QPS（每秒请求数）均值</p><p>单位：请求每秒</p>
                     * @return TotalRequestsPerSecond <p>时间范围内所有服务的总 QPS（每秒请求数）均值</p><p>单位：请求每秒</p>
                     * 
                     */
                    double GetTotalRequestsPerSecond() const;

                    /**
                     * 判断参数 TotalRequestsPerSecond 是否已赋值
                     * @return TotalRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool TotalRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取<p>时间范围内全局 P99 延迟均值（毫秒）</p><p>单位：毫秒</p>
                     * @return AverageP99LatencyMs <p>时间范围内全局 P99 延迟均值（毫秒）</p><p>单位：毫秒</p>
                     * 
                     */
                    double GetAverageP99LatencyMs() const;

                    /**
                     * 判断参数 AverageP99LatencyMs 是否已赋值
                     * @return AverageP99LatencyMs 是否已赋值
                     * 
                     */
                    bool AverageP99LatencyMsHasBeenSet() const;

                    /**
                     * 获取<p>时间范围内全局错误率均值（0~1，如 0.02 表示 2%）</p><p>取值范围：[0, 1]</p>
                     * @return ErrorRate <p>时间范围内全局错误率均值（0~1，如 0.02 表示 2%）</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                private:

                    /**
                     * <p>时间范围内所有服务的总 QPS（每秒请求数）均值</p><p>单位：请求每秒</p>
                     */
                    double m_totalRequestsPerSecond;
                    bool m_totalRequestsPerSecondHasBeenSet;

                    /**
                     * <p>时间范围内全局 P99 延迟均值（毫秒）</p><p>单位：毫秒</p>
                     */
                    double m_averageP99LatencyMs;
                    bool m_averageP99LatencyMsHasBeenSet;

                    /**
                     * <p>时间范围内全局错误率均值（0~1，如 0.02 表示 2%）</p><p>取值范围：[0, 1]</p>
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDOVERVIEWRESPONSE_H_
