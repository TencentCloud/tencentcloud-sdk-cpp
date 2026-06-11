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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/QueryMetricItem.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>
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
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>指标列表</p>
                     * @return Metrics <p>指标列表</p>
                     * 
                     */
                    std::vector<QueryMetricItem> GetMetrics() const;

                    /**
                     * 设置<p>指标列表</p>
                     * @param _metrics <p>指标列表</p>
                     * 
                     */
                    void SetMetrics(const std::vector<QueryMetricItem>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取<p>开始时间（单位为秒）</p>
                     * @return StartTime <p>开始时间（单位为秒）</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间（单位为秒）</p>
                     * @param _startTime <p>开始时间（单位为秒）</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间（单位为秒）</p>
                     * @return EndTime <p>结束时间（单位为秒）</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间（单位为秒）</p>
                     * @param _endTime <p>结束时间（单位为秒）</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>聚合维度</p>
                     * @return GroupBy <p>聚合维度</p>
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置<p>聚合维度</p>
                     * @param _groupBy <p>聚合维度</p>
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Or 过滤条件</p>
                     * @return OrFilters <p>Or 过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetOrFilters() const;

                    /**
                     * 设置<p>Or 过滤条件</p>
                     * @param _orFilters <p>Or 过滤条件</p>
                     * 
                     */
                    void SetOrFilters(const std::vector<Filter>& _orFilters);

                    /**
                     * 判断参数 OrFilters 是否已赋值
                     * @return OrFilters 是否已赋值
                     * 
                     */
                    bool OrFiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * @return OrderBy <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置<p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * @param _orderBy <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>业务名称，控制台用户请填写taw。</p>
                     * @return BusinessName <p>业务名称，控制台用户请填写taw。</p>
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置<p>业务名称，控制台用户请填写taw。</p>
                     * @param _businessName <p>业务名称，控制台用户请填写taw。</p>
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取<p>特殊处理查询结果</p>
                     * @return Type <p>特殊处理查询结果</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>特殊处理查询结果</p>
                     * @param _type <p>特殊处理查询结果</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>每页大小，默认为1000，合法取值范围为0~1000</p>
                     * @return Limit <p>每页大小，默认为1000，合法取值范围为0~1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页大小，默认为1000，合法取值范围为0~1000</p>
                     * @param _limit <p>每页大小，默认为1000，合法取值范围为0~1000</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页起始点</p>
                     * @return Offset <p>分页起始点</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始点</p>
                     * @param _offset <p>分页起始点</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>页码</p>
                     * @return PageIndex <p>页码</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageIndex <p>页码</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取<p>页长</p>
                     * @return PageSize <p>页长</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>页长</p>
                     * @param _pageSize <p>页长</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>应用Id</p>
                     * @return ServiceID <p>应用Id</p>
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _serviceID <p>应用Id</p>
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指标列表</p>
                     */
                    std::vector<QueryMetricItem> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>开始时间（单位为秒）</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间（单位为秒）</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>聚合维度</p>
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Or 过滤条件</p>
                     */
                    std::vector<Filter> m_orFilters;
                    bool m_orFiltersHasBeenSet;

                    /**
                     * <p>排序<br>现支持的 Key 有：</p><ul><li>startTime(开始时间)</li><li>endTime(结束时间)</li><li>duration(响应时间)</li></ul><p>现支持的 Value 有：</p><ul><li>desc(降序排序)</li><li>asc(升序排序)</li></ul>
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>业务名称，控制台用户请填写taw。</p>
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * <p>特殊处理查询结果</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>每页大小，默认为1000，合法取值范围为0~1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页起始点</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>页长</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>应用Id</p>
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEMETRICRECORDSREQUEST_H_
