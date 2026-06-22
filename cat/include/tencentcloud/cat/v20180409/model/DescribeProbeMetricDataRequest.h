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
                     * 获取<p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @return AnalyzeTaskType <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    std::string GetAnalyzeTaskType() const;

                    /**
                     * 设置<p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @param _analyzeTaskType <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    void SetAnalyzeTaskType(const std::string& _analyzeTaskType);

                    /**
                     * 判断参数 AnalyzeTaskType 是否已赋值
                     * @return AnalyzeTaskType 是否已赋值
                     * 
                     */
                    bool AnalyzeTaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>指标类型（counter、gauge以及histogram），指标查询默认传gauge</p>
                     * @return MetricType <p>指标类型（counter、gauge以及histogram），指标查询默认传gauge</p>
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置<p>指标类型（counter、gauge以及histogram），指标查询默认传gauge</p>
                     * @param _metricType <p>指标类型（counter、gauge以及histogram），指标查询默认传gauge</p>
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取<p>指标详细字段，可以传递传具体的指标也可以对指标进行聚合查询例如：&quot;avg(ping_time)&quot;代表整体时延(ms)；不同的任务类型支持不同的field查询，以及聚合规则，详情可见https://cloud.tencent.com/document/product/248/87584。</p>
                     * @return Field <p>指标详细字段，可以传递传具体的指标也可以对指标进行聚合查询例如：&quot;avg(ping_time)&quot;代表整体时延(ms)；不同的任务类型支持不同的field查询，以及聚合规则，详情可见https://cloud.tencent.com/document/product/248/87584。</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>指标详细字段，可以传递传具体的指标也可以对指标进行聚合查询例如：&quot;avg(ping_time)&quot;代表整体时延(ms)；不同的任务类型支持不同的field查询，以及聚合规则，详情可见https://cloud.tencent.com/document/product/248/87584。</p>
                     * @param _field <p>指标详细字段，可以传递传具体的指标也可以对指标进行聚合查询例如：&quot;avg(ping_time)&quot;代表整体时延(ms)；不同的任务类型支持不同的field查询，以及聚合规则，详情可见https://cloud.tencent.com/document/product/248/87584。</p>
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件可以传单个过滤条件也可以拼接多个参数</p>
                     * @return Filter <p>过滤条件可以传单个过滤条件也可以拼接多个参数</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件可以传单个过滤条件也可以拼接多个参数</p>
                     * @param _filter <p>过滤条件可以传单个过滤条件也可以拼接多个参数</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>聚合时间, 1m、1d、30d 等等</p>
                     * @return GroupBy <p>聚合时间, 1m、1d、30d 等等</p>
                     * 
                     */
                    std::string GetGroupBy() const;

                    /**
                     * 设置<p>聚合时间, 1m、1d、30d 等等</p>
                     * @param _groupBy <p>聚合时间, 1m、1d、30d 等等</p>
                     * 
                     */
                    void SetGroupBy(const std::string& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取<p>多条件过滤，支持多个过滤条件组合查询<br>例如：[&quot;&quot;host&quot; = &#39;www.test.com&#39;&quot;, &quot;time &gt;= now()-1h&quot;]</p>
                     * @return Filters <p>多条件过滤，支持多个过滤条件组合查询<br>例如：[&quot;&quot;host&quot; = &#39;www.test.com&#39;&quot;, &quot;time &gt;= now()-1h&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置<p>多条件过滤，支持多个过滤条件组合查询<br>例如：[&quot;&quot;host&quot; = &#39;www.test.com&#39;&quot;, &quot;time &gt;= now()-1h&quot;]</p>
                     * @param _filters <p>多条件过滤，支持多个过滤条件组合查询<br>例如：[&quot;&quot;host&quot; = &#39;www.test.com&#39;&quot;, &quot;time &gt;= now()-1h&quot;]</p>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     */
                    std::string m_analyzeTaskType;
                    bool m_analyzeTaskTypeHasBeenSet;

                    /**
                     * <p>指标类型（counter、gauge以及histogram），指标查询默认传gauge</p>
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * <p>指标详细字段，可以传递传具体的指标也可以对指标进行聚合查询例如：&quot;avg(ping_time)&quot;代表整体时延(ms)；不同的任务类型支持不同的field查询，以及聚合规则，详情可见https://cloud.tencent.com/document/product/248/87584。</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>过滤条件可以传单个过滤条件也可以拼接多个参数</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>聚合时间, 1m、1d、30d 等等</p>
                     */
                    std::string m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * <p>多条件过滤，支持多个过滤条件组合查询<br>例如：[&quot;&quot;host&quot; = &#39;www.test.com&#39;&quot;, &quot;time &gt;= now()-1h&quot;]</p>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATAREQUEST_H_
