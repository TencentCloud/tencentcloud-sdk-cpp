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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Filter.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleMatrixQuery请求参数结构体
                */
                class DescribeSampleMatrixQueryRequest : public AbstractModel
                {
                public:
                    DescribeSampleMatrixQueryRequest();
                    ~DescribeSampleMatrixQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务ID
                     * @param _jobId 任务ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * @return Metric 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * @param _metric 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     * @return Aggregation 聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     * @param _aggregation 聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
                     * @return Filters 用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
                     * @param _filters 用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
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
                     * 获取分组；取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * @return GroupBy 分组；取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置分组；取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     * @param _groupBy 分组；取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
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
                     * 获取返回的最大数据点个数
                     * @return MaxPoint 返回的最大数据点个数
                     * 
                     */
                    int64_t GetMaxPoint() const;

                    /**
                     * 设置返回的最大数据点个数
                     * @param _maxPoint 返回的最大数据点个数
                     * 
                     */
                    void SetMaxPoint(const int64_t& _maxPoint);

                    /**
                     * 判断参数 MaxPoint 是否已赋值
                     * @return MaxPoint 是否已赋值
                     * 
                     */
                    bool MaxPointHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 指标名。取值范围参见 DescribeMetricLabelWithValues 接口返回的所有指标名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * 用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分组；取值范围参见 DescribeMetricLabelWithValues 接口返回的指标及其支持的标签名
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 返回的最大数据点个数
                     */
                    int64_t m_maxPoint;
                    bool m_maxPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEMATRIXQUERYREQUEST_H_
