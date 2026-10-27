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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATARESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/DataPoint.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstanceMonitorData返回参数结构体
                */
                class DescribeInstanceMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeInstanceMonitorDataResponse();
                    ~DescribeInstanceMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取<p>统计周期</p>
                     * @return Period <p>统计周期</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
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
                     * 获取<p>数据点数组</p>
                     * @return DataPoints <p>数据点数组</p>
                     * 
                     */
                    std::vector<DataPoint> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取<p>message信息</p>
                     * @return Msg <p>message信息</p>
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
                     * <p>指标名</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>统计周期</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>数据点数组</p>
                     */
                    std::vector<DataPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * <p>message信息</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATARESPONSE_H_
