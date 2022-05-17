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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/GeneralFilter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralMetricData请求参数结构体
                */
                class DescribeGeneralMetricDataRequest : public AbstractModel
                {
                public:
                    DescribeGeneralMetricDataRequest();
                    ~DescribeGeneralMetricDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要过滤的维度信息，支持：service.name（服务名）、span.kind（客户端/服务端视角）为维度进行过滤。

span.kind:

       server:服务端视角
       client:客户端视角

默认为服务端视角进行查询。
                     * @return Filters 要过滤的维度信息，支持：service.name（服务名）、span.kind（客户端/服务端视角）为维度进行过滤。

span.kind:

       server:服务端视角
       client:客户端视角

默认为服务端视角进行查询。
                     */
                    std::vector<GeneralFilter> GetFilters() const;

                    /**
                     * 设置要过滤的维度信息，支持：service.name（服务名）、span.kind（客户端/服务端视角）为维度进行过滤。

span.kind:

       server:服务端视角
       client:客户端视角

默认为服务端视角进行查询。
                     * @param Filters 要过滤的维度信息，支持：service.name（服务名）、span.kind（客户端/服务端视角）为维度进行过滤。

span.kind:

       server:服务端视角
       client:客户端视角

默认为服务端视角进行查询。
                     */
                    void SetFilters(const std::vector<GeneralFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要查询的指标，不可自定义输入。支持：service_request_count（总请求）、service_duration（平均响应时间）的指标数据。
                     * @return Metrics 需要查询的指标，不可自定义输入。支持：service_request_count（总请求）、service_duration（平均响应时间）的指标数据。
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置需要查询的指标，不可自定义输入。支持：service_request_count（总请求）、service_duration（平均响应时间）的指标数据。
                     * @param Metrics 需要查询的指标，不可自定义输入。支持：service_request_count（总请求）、service_duration（平均响应时间）的指标数据。
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取视图名称
                     * @return ViewName 视图名称
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图名称
                     * @param ViewName 视图名称
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取聚合维度，支持：service.name（服务名）、span.kind （客户端/服务端视角）维度进行聚合。
                     * @return GroupBy 聚合维度，支持：service.name（服务名）、span.kind （客户端/服务端视角）维度进行聚合。
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置聚合维度，支持：service.name（服务名）、span.kind （客户端/服务端视角）维度进行聚合。
                     * @param GroupBy 聚合维度，支持：service.name（服务名）、span.kind （客户端/服务端视角）维度进行聚合。
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取起始时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     * @return StartTime 起始时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     * @param StartTime 起始时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     * @return EndTime 结束时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     * @param EndTime 结束时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取聚合粒度，单位为秒，最小为60s，即一分钟的聚合粒度；如果为空或0则计算开始时间到截止时间的指标数据，上报其他值会报错。
                     * @return Period 聚合粒度，单位为秒，最小为60s，即一分钟的聚合粒度；如果为空或0则计算开始时间到截止时间的指标数据，上报其他值会报错。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置聚合粒度，单位为秒，最小为60s，即一分钟的聚合粒度；如果为空或0则计算开始时间到截止时间的指标数据，上报其他值会报错。
                     * @param Period 聚合粒度，单位为秒，最小为60s，即一分钟的聚合粒度；如果为空或0则计算开始时间到截止时间的指标数据，上报其他值会报错。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 要过滤的维度信息，支持：service.name（服务名）、span.kind（客户端/服务端视角）为维度进行过滤。

span.kind:

       server:服务端视角
       client:客户端视角

默认为服务端视角进行查询。
                     */
                    std::vector<GeneralFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要查询的指标，不可自定义输入。支持：service_request_count（总请求）、service_duration（平均响应时间）的指标数据。
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 视图名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 聚合维度，支持：service.name（服务名）、span.kind （客户端/服务端视角）维度进行聚合。
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 起始时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间的时间戳，单位为秒，只支持查询2天内最多1小时的指标数据。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 聚合粒度，单位为秒，最小为60s，即一分钟的聚合粒度；如果为空或0则计算开始时间到截止时间的指标数据，上报其他值会报错。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALMETRICDATAREQUEST_H_
