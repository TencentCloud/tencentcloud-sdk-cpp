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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETTOPNMONITORDATARESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETTOPNMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/SingleOrderedDataPoint.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetTopNMonitorData返回参数结构体
                */
                class GetTopNMonitorDataResponse : public AbstractModel
                {
                public:
                    GetTopNMonitorDataResponse();
                    ~GetTopNMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标名	
                     * @return MetricName 指标名	
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取统计周期	
                     * @return Period 统计周期	
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取topN
                     * @return N topN
                     * 
                     */
                    uint64_t GetN() const;

                    /**
                     * 判断参数 N 是否已赋值
                     * @return N 是否已赋值
                     * 
                     */
                    bool NHasBeenSet() const;

                    /**
                     * 获取排序的监控数据	
                     * @return OrderedDataPoints 排序的监控数据	
                     * 
                     */
                    std::vector<SingleOrderedDataPoint> GetOrderedDataPoints() const;

                    /**
                     * 判断参数 OrderedDataPoints 是否已赋值
                     * @return OrderedDataPoints 是否已赋值
                     * 
                     */
                    bool OrderedDataPointsHasBeenSet() const;

                    /**
                     * 获取返回信息
                     * @return Msg 返回信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 指标名	
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计周期	
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * topN
                     */
                    uint64_t m_n;
                    bool m_nHasBeenSet;

                    /**
                     * 排序的监控数据	
                     */
                    std::vector<SingleOrderedDataPoint> m_orderedDataPoints;
                    bool m_orderedDataPointsHasBeenSet;

                    /**
                     * 返回信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETTOPNMONITORDATARESPONSE_H_
