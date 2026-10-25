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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICSUMMARYREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/MetricQueryItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMMetricSummary请求参数结构体
                */
                class DescribeTDEMMetricSummaryRequest : public AbstractModel
                {
                public:
                    DescribeTDEMMetricSummaryRequest();
                    ~DescribeTDEMMetricSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间 Unix 毫秒（必填）</p>
                     * @return StartTime <p>开始时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间 Unix 毫秒（必填）</p>
                     * @param _startTime <p>开始时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间 Unix 毫秒（必填）</p>
                     * @return EndTime <p>结束时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间 Unix 毫秒（必填）</p>
                     * @param _endTime <p>结束时间 Unix 毫秒（必填）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>顶层事件类型；单查必填，批量用 Queries 时可不填</p>
                     * @return EventType <p>顶层事件类型；单查必填，批量用 Queries 时可不填</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>顶层事件类型；单查必填，批量用 Queries 时可不填</p>
                     * @param _eventType <p>顶层事件类型；单查必填，批量用 Queries 时可不填</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>子类型；未知返回 0</p>
                     * @return SubType <p>子类型；未知返回 0</p>
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置<p>子类型；未知返回 0</p>
                     * @param _subType <p>子类型；未知返回 0</p>
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件 JSON 字符串：[{Key,Op,Values}]，走分析立方白名单</p>
                     * @return Filters <p>筛选条件 JSON 字符串：[{Key,Op,Values}]，走分析立方白名单</p>
                     * 
                     */
                    std::string GetFilters() const;

                    /**
                     * 设置<p>筛选条件 JSON 字符串：[{Key,Op,Values}]，走分析立方白名单</p>
                     * @param _filters <p>筛选条件 JSON 字符串：[{Key,Op,Values}]，走分析立方白名单</p>
                     * 
                     */
                    void SetFilters(const std::string& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>指标名列表，如 count / rate；单查必填</p>
                     * @return Metrics <p>指标名列表，如 count / rate；单查必填</p>
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置<p>指标名列表，如 count / rate；单查必填</p>
                     * @param _metrics <p>指标名列表，如 count / rate；单查必填</p>
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取<p>分位/均值必填，如 lcp / duration</p>
                     * @return MeasurementKey <p>分位/均值必填，如 lcp / duration</p>
                     * 
                     */
                    std::string GetMeasurementKey() const;

                    /**
                     * 设置<p>分位/均值必填，如 lcp / duration</p>
                     * @param _measurementKey <p>分位/均值必填，如 lcp / duration</p>
                     * 
                     */
                    void SetMeasurementKey(const std::string& _measurementKey);

                    /**
                     * 判断参数 MeasurementKey 是否已赋值
                     * @return MeasurementKey 是否已赋值
                     * 
                     */
                    bool MeasurementKeyHasBeenSet() const;

                    /**
                     * 获取<p>批量查询，上限 32</p>
                     * @return Queries <p>批量查询，上限 32</p>
                     * 
                     */
                    std::vector<MetricQueryItem> GetQueries() const;

                    /**
                     * 设置<p>批量查询，上限 32</p>
                     * @param _queries <p>批量查询，上限 32</p>
                     * 
                     */
                    void SetQueries(const std::vector<MetricQueryItem>& _queries);

                    /**
                     * 判断参数 Queries 是否已赋值
                     * @return Queries 是否已赋值
                     * 
                     */
                    bool QueriesHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>开始时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 Unix 毫秒（必填）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>顶层事件类型；单查必填，批量用 Queries 时可不填</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>子类型；未知返回 0</p>
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * <p>筛选条件 JSON 字符串：[{Key,Op,Values}]，走分析立方白名单</p>
                     */
                    std::string m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>指标名列表，如 count / rate；单查必填</p>
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>分位/均值必填，如 lcp / duration</p>
                     */
                    std::string m_measurementKey;
                    bool m_measurementKeyHasBeenSet;

                    /**
                     * <p>批量查询，上限 32</p>
                     */
                    std::vector<MetricQueryItem> m_queries;
                    bool m_queriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICSUMMARYREQUEST_H_
