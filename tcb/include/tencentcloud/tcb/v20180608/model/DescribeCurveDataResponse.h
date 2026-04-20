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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECURVEDATARESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECURVEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCurveData返回参数结构体
                */
                class DescribeCurveDataResponse : public AbstractModel
                {
                public:
                    DescribeCurveDataResponse();
                    ~DescribeCurveDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间, 会根据数据的统计周期进行取整</p>
                     * @return StartTime <p>开始时间, 会根据数据的统计周期进行取整</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间, 会根据数据的统计周期进行取整</p>
                     * @return EndTime <p>结束时间, 会根据数据的统计周期进行取整</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>指标名</p>
                     * @return MetricName <p>指标名</p>
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
                     * 获取<p>统计周期(单位秒), 当时间区间为1天内, 统计周期为5分钟; 当时间区间选择为1天以上, 15天以下, 统计周期为1小时; 当时间区间选择为15天以上, 180天以下, 统计周期为1天</p>
                     * @return Period <p>统计周期(单位秒), 当时间区间为1天内, 统计周期为5分钟; 当时间区间选择为1天以上, 15天以下, 统计周期为1小时; 当时间区间选择为15天以上, 180天以下, 统计周期为1天</p>
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
                     * 获取<p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     * @return Values <p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     * 
                     */
                    std::vector<int64_t> GetValues() const;

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>各数据点的时间戳数组（Unix 时间戳，秒级），与  ⁠Values⁠  一一对应</p>
                     * @return Time <p>各数据点的时间戳数组（Unix 时间戳，秒级），与  ⁠Values⁠  一一对应</p>
                     * 
                     */
                    std::vector<int64_t> GetTime() const;

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     * @return NewValues <p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     * 
                     */
                    std::vector<double> GetNewValues() const;

                    /**
                     * 判断参数 NewValues 是否已赋值
                     * @return NewValues 是否已赋值
                     * 
                     */
                    bool NewValuesHasBeenSet() const;

                    /**
                     * 获取<p>聚合方式， ⁠&quot;last&quot;⁠  表示取时间段内最后一个值，“max”表示取时间段内最大值，“avg”表示取时间段内的平均值</p>
                     * @return Statistics <p>聚合方式， ⁠&quot;last&quot;⁠  表示取时间段内最后一个值，“max”表示取时间段内最大值，“avg”表示取时间段内的平均值</p>
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间, 会根据数据的统计周期进行取整</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间, 会根据数据的统计周期进行取整</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指标名</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>统计周期(单位秒), 当时间区间为1天内, 统计周期为5分钟; 当时间区间选择为1天以上, 15天以下, 统计周期为1小时; 当时间区间选择为15天以上, 180天以下, 统计周期为1天</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     */
                    std::vector<int64_t> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>各数据点的时间戳数组（Unix 时间戳，秒级），与  ⁠Values⁠  一一对应</p>
                     */
                    std::vector<int64_t> m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>有效的监控数据, 每个有效监控数据的上报时间可以从时间数组中的对应位置上获取到</p>
                     */
                    std::vector<double> m_newValues;
                    bool m_newValuesHasBeenSet;

                    /**
                     * <p>聚合方式， ⁠&quot;last&quot;⁠  表示取时间段内最后一个值，“max”表示取时间段内最大值，“avg”表示取时间段内的平均值</p>
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECURVEDATARESPONSE_H_
