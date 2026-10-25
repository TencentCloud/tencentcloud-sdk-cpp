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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/BlockingTrendPoint.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeBlockingTrend返回参数结构体
                */
                class DescribeBlockingTrendResponse : public AbstractModel
                {
                public:
                    DescribeBlockingTrendResponse();
                    ~DescribeBlockingTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>使用的粒度名称，取值：SECONDS / MINUTES / FIVE_MINUTES / TEN_MINUTES / FIFTEEN_MINUTES / THIRTY_MINUTES / HOUR。时间窗口 ≤ 1 分钟时自动采用 SECONDS（1 秒）粒度。</p>
                     * @return Granularity <p>使用的粒度名称，取值：SECONDS / MINUTES / FIVE_MINUTES / TEN_MINUTES / FIFTEEN_MINUTES / THIRTY_MINUTES / HOUR。时间窗口 ≤ 1 分钟时自动采用 SECONDS（1 秒）粒度。</p>
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取<p>粒度对应的毫秒值（SECONDS=1000，MINUTES=60000，... HOUR=3600000）。</p>
                     * @return GranularityMs <p>粒度对应的毫秒值（SECONDS=1000，MINUTES=60000，... HOUR=3600000）。</p>
                     * 
                     */
                    int64_t GetGranularityMs() const;

                    /**
                     * 判断参数 GranularityMs 是否已赋值
                     * @return GranularityMs 是否已赋值
                     * 
                     */
                    bool GranularityMsHasBeenSet() const;

                    /**
                     * 获取<p>阻塞趋势时序点列表（按 ReportTime 升序，稠密时序：窗口内每个 bucket 都返回一个点，无数据 bucket 补零）。</p>
                     * @return DataPoints <p>阻塞趋势时序点列表（按 ReportTime 升序，稠密时序：窗口内每个 bucket 都返回一个点，无数据 bucket 补零）。</p>
                     * 
                     */
                    std::vector<BlockingTrendPoint> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * <p>使用的粒度名称，取值：SECONDS / MINUTES / FIVE_MINUTES / TEN_MINUTES / FIFTEEN_MINUTES / THIRTY_MINUTES / HOUR。时间窗口 ≤ 1 分钟时自动采用 SECONDS（1 秒）粒度。</p>
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * <p>粒度对应的毫秒值（SECONDS=1000，MINUTES=60000，... HOUR=3600000）。</p>
                     */
                    int64_t m_granularityMs;
                    bool m_granularityMsHasBeenSet;

                    /**
                     * <p>阻塞趋势时序点列表（按 ReportTime 升序，稠密时序：窗口内每个 bucket 都返回一个点，无数据 bucket 补零）。</p>
                     */
                    std::vector<BlockingTrendPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGTRENDRESPONSE_H_
