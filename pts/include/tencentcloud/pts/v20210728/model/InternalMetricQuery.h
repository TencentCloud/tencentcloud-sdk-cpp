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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Label.h>
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
                * 查询结构封装
                */
                class InternalMetricQuery : public AbstractModel
                {
                public:
                    InternalMetricQuery();
                    ~InternalMetricQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return Metric 指标名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名
                     * @param _metric 指标名
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
                     * 获取deprecated, 请使用Filters
                     * @return Labels deprecated, 请使用Filters
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置deprecated, 请使用Filters
                     * @param _labels deprecated, 请使用Filters
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

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
                     * 获取指标分组
                     * @return GroupBy 指标分组
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置指标分组
                     * @param _groupBy 指标分组
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 聚合函数。取值范围：Rate,Count,Avg,P90,P95,P99,Gauge
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * deprecated, 请使用Filters
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 用标签过滤规则来过滤指标，规则中包含标签名 LabelName、标签值 LabelValue、操作符 Operator（0代表相等，1代表不等）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 指标分组
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_INTERNALMETRICQUERY_H_
