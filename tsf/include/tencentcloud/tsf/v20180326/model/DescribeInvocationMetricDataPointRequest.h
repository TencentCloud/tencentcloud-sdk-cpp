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
                     * 获取开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @return StartTime 开始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _startTime 开始时间，格式yyyy-MM-dd HH:mm:ss
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
                     * 获取结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @return EndTime 结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _endTime 结束时间，格式yyyy-MM-dd HH:mm:ss
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
                     * 获取查询指标维度, 不能为空
                     * @return MetricDimensionValues 查询指标维度, 不能为空
                     * 
                     */
                    std::vector<MetricDimensionValue> GetMetricDimensionValues() const;

                    /**
                     * 设置查询指标维度, 不能为空
                     * @param _metricDimensionValues 查询指标维度, 不能为空
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
                     * 获取指标，不能为空
                     * @return Metrics 指标，不能为空
                     * 
                     */
                    std::vector<Metric> GetMetrics() const;

                    /**
                     * 设置指标，不能为空
                     * @param _metrics 指标，不能为空
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
                     * 获取视图视角。可选值：SERVER：服务端, CLIENT：客户端。默认为SERVER
                     * @return Kind 视图视角。可选值：SERVER：服务端, CLIENT：客户端。默认为SERVER
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置视图视角。可选值：SERVER：服务端, CLIENT：客户端。默认为SERVER
                     * @param _kind 视图视角。可选值：SERVER：服务端, CLIENT：客户端。默认为SERVER
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
                     * 开始时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询指标维度, 不能为空
                     */
                    std::vector<MetricDimensionValue> m_metricDimensionValues;
                    bool m_metricDimensionValuesHasBeenSet;

                    /**
                     * 指标，不能为空
                     */
                    std::vector<Metric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 视图视角。可选值：SERVER：服务端, CLIENT：客户端。默认为SERVER
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATAPOINTREQUEST_H_
