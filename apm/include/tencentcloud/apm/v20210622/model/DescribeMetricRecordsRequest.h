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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
#include <tencentcloud/apm/v20210622/model/QueryMetricItem.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeMetricRecords请求参数结构体
                */
                class DescribeMetricRecordsRequest : public AbstractModel
                {
                public:
                    DescribeMetricRecordsRequest();
                    ~DescribeMetricRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param Filters 过滤条件
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取指标列表
                     * @return Metrics 指标列表
                     */
                    std::vector<QueryMetricItem> GetMetrics() const;

                    /**
                     * 设置指标列表
                     * @param Metrics 指标列表
                     */
                    void SetMetrics(const std::vector<QueryMetricItem>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取聚合维度
                     * @return GroupBy 聚合维度
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置聚合维度
                     * @param GroupBy 聚合维度
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取排序
                     * @return OrderBy 排序
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置排序
                     * @param OrderBy 排序
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

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
                     * 获取每页大小
                     * @return Limit 每页大小
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小
                     * @param Limit 每页大小
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取分页起始点
                     * @return Offset 分页起始点
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始点
                     * @param Offset 分页起始点
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 指标列表
                     */
                    std::vector<QueryMetricItem> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 聚合维度
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 排序
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 每页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 分页起始点
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
