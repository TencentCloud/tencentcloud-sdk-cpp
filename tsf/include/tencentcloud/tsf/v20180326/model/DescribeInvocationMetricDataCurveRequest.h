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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATACURVEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATACURVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDimension.h>
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
                * DescribeInvocationMetricDataCurve请求参数结构体
                */
                class DescribeInvocationMetricDataCurveRequest : public AbstractModel
                {
                public:
                    DescribeInvocationMetricDataCurveRequest();
                    ~DescribeInvocationMetricDataCurveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
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
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
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
                     * 获取查询时间粒度，单位秒可选值：60、3600、86400
                     * @return Period 查询时间粒度，单位秒可选值：60、3600、86400
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置查询时间粒度，单位秒可选值：60、3600、86400
                     * @param _period 查询时间粒度，单位秒可选值：60、3600、86400
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取查询指标维度，不能为空，支持 ServiceName, OperationName, PeerServiceName, PeerOperationName
                     * @return MetricDimensions 查询指标维度，不能为空，支持 ServiceName, OperationName, PeerServiceName, PeerOperationName
                     * 
                     */
                    std::vector<MetricDimension> GetMetricDimensions() const;

                    /**
                     * 设置查询指标维度，不能为空，支持 ServiceName, OperationName, PeerServiceName, PeerOperationName
                     * @param _metricDimensions 查询指标维度，不能为空，支持 ServiceName, OperationName, PeerServiceName, PeerOperationName
                     * 
                     */
                    void SetMetricDimensions(const std::vector<MetricDimension>& _metricDimensions);

                    /**
                     * 判断参数 MetricDimensions 是否已赋值
                     * @return MetricDimensions 是否已赋值
                     * 
                     */
                    bool MetricDimensionsHasBeenSet() const;

                    /**
                     * 获取查询指标名，不能为空.
                     * @return Metrics 查询指标名，不能为空.
                     * 
                     */
                    std::vector<Metric> GetMetrics() const;

                    /**
                     * 设置查询指标名，不能为空.
                     * @param _metrics 查询指标名，不能为空.
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
                     * 获取视图视角。可选值：SERVER, CLIENT。默认为SERVER
                     * @return Kind 视图视角。可选值：SERVER, CLIENT。默认为SERVER
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置视图视角。可选值：SERVER, CLIENT。默认为SERVER
                     * @param _kind 视图视角。可选值：SERVER, CLIENT。默认为SERVER
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取类型。组件监控使用，可选值：SQL 或者 NoSQL
                     * @return Type 类型。组件监控使用，可选值：SQL 或者 NoSQL
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型。组件监控使用，可选值：SQL 或者 NoSQL
                     * @param _type 类型。组件监控使用，可选值：SQL 或者 NoSQL
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询时间粒度，单位秒可选值：60、3600、86400
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 查询指标维度，不能为空，支持 ServiceName, OperationName, PeerServiceName, PeerOperationName
                     */
                    std::vector<MetricDimension> m_metricDimensions;
                    bool m_metricDimensionsHasBeenSet;

                    /**
                     * 查询指标名，不能为空.
                     */
                    std::vector<Metric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 视图视角。可选值：SERVER, CLIENT。默认为SERVER
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 类型。组件监控使用，可选值：SQL 或者 NoSQL
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATACURVEREQUEST_H_
