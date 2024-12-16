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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATAPOINTREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATAPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDimensionValue.h>
#include <tencentcloud/tsf/v20180326/model/Metric.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeInvocationMetricDataPoint请求参数结构体
                */
                class DescribeInvocationMetricDataPointRequest : public AbstractModel
                {
                public:
                    DescribeInvocationMetricDataPointRequest();
                    ~DescribeInvocationMetricDataPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取维度，并且 维度 key value 不能为空
                     * @return MetricDimensionValues 维度，并且 维度 key value 不能为空
                     * 
                     */
                    std::vector<MetricDimensionValue> GetMetricDimensionValues() const;

                    /**
                     * 设置维度，并且 维度 key value 不能为空
                     * @param _metricDimensionValues 维度，并且 维度 key value 不能为空
                     * 
                     */
                    void SetMetricDimensionValues(const std::vector<MetricDimensionValue>& _metricDimensionValues);

                    /**
                     * 判断参数 MetricDimensionValues 是否已赋值
                     * @return MetricDimensionValues 是否已赋值
                     * 
                     */
                    bool MetricDimensionValuesHasBeenSet() const;

                    /**
                     * 获取指标，并且 key, value 不能为空
                     * @return Metrics 指标，并且 key, value 不能为空
                     * 
                     */
                    std::vector<Metric> GetMetrics() const;

                    /**
                     * 设置指标，并且 key, value 不能为空
                     * @param _metrics 指标，并且 key, value 不能为空
                     * 
                     */
                    void SetMetrics(const std::vector<Metric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取调用视角。可选值：SERVER, CLIENT。默认为SERVER
                     * @return Kind 调用视角。可选值：SERVER, CLIENT。默认为SERVER
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置调用视角。可选值：SERVER, CLIENT。默认为SERVER
                     * @param _kind 调用视角。可选值：SERVER, CLIENT。默认为SERVER
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 维度，并且 维度 key value 不能为空
                     */
                    std::vector<MetricDimensionValue> m_metricDimensionValues;
                    bool m_metricDimensionValuesHasBeenSet;

                    /**
                     * 指标，并且 key, value 不能为空
                     */
                    std::vector<Metric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 调用视角。可选值：SERVER, CLIENT。默认为SERVER
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATAPOINTREQUEST_H_
