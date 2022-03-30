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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATAREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeMetricData请求参数结构体
                */
                class DescribeProbeMetricDataRequest : public AbstractModel
                {
                public:
                    DescribeProbeMetricDataRequest();
                    ~DescribeProbeMetricDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析任务类型
                     * @return AnalyzeTaskType 分析任务类型
                     */
                    std::string GetAnalyzeTaskType() const;

                    /**
                     * 设置分析任务类型
                     * @param AnalyzeTaskType 分析任务类型
                     */
                    void SetAnalyzeTaskType(const std::string& _analyzeTaskType);

                    /**
                     * 判断参数 AnalyzeTaskType 是否已赋值
                     * @return AnalyzeTaskType 是否已赋值
                     */
                    bool AnalyzeTaskTypeHasBeenSet() const;

                    /**
                     * 获取指标类型，counter 或者 gauge
                     * @return MetricType 指标类型，counter 或者 gauge
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标类型，counter 或者 gauge
                     * @param MetricType 指标类型，counter 或者 gauge
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取指标详细字段
                     * @return Field 指标详细字段
                     */
                    std::string GetField() const;

                    /**
                     * 设置指标详细字段
                     * @param Field 指标详细字段
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param Filter 过滤条件
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取聚合时间, 1m、1d、100d 等等
                     * @return GroupBy 聚合时间, 1m、1d、100d 等等
                     */
                    std::string GetGroupBy() const;

                    /**
                     * 设置聚合时间, 1m、1d、100d 等等
                     * @param GroupBy 聚合时间, 1m、1d、100d 等等
                     */
                    void SetGroupBy(const std::string& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取过滤条件数组
                     * @return Filters 过滤条件数组
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置过滤条件数组
                     * @param Filters 过滤条件数组
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分析任务类型
                     */
                    std::string m_analyzeTaskType;
                    bool m_analyzeTaskTypeHasBeenSet;

                    /**
                     * 指标类型，counter 或者 gauge
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 指标详细字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 聚合时间, 1m、1d、100d 等等
                     */
                    std::string m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 过滤条件数组
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATAREQUEST_H_
