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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageRankItem.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageStats.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeUsageRankList返回参数结构体
                */
                class DescribeUsageRankListResponse : public AbstractModel
                {
                public:
                    DescribeUsageRankListResponse();
                    ~DescribeUsageRankListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>回填请求的统计维度。</p>
                     * @return Dimension <p>回填请求的统计维度。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>回填请求的指标族：tokens / search 。</p>
                     * @return MetricType <p>回填请求的指标族：tokens / search 。</p>
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取<p>本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，按MetricType 区分：tokens=[Total,Input,Output,Cache]、search=[SearchRequestCount,SearchCount]</p>
                     * @return MetricKeys <p>本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，按MetricType 区分：tokens=[Total,Input,Output,Cache]、search=[SearchRequestCount,SearchCount]</p>
                     * 
                     */
                    std::vector<std::string> GetMetricKeys() const;

                    /**
                     * 判断参数 MetricKeys 是否已赋值
                     * @return MetricKeys 是否已赋值
                     * 
                     */
                    bool MetricKeysHasBeenSet() const;

                    /**
                     * 获取<p>视图（数据来源）</p>
                     * @return ViewName <p>视图（数据来源）</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取<p>回填请求的统计粒度（秒）。ShowAll=true 时为 0。</p>
                     * @return Period <p>回填请求的统计粒度（秒）。ShowAll=true 时为 0。</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>回填请求的起始时间。</p>
                     * @return StartTime <p>回填请求的起始时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>回填请求的结束时间。</p>
                     * @return EndTime <p>回填请求的结束时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>全量对象数。</p>
                     * @return Total <p>全量对象数。</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>回填请求的翻页起点。ShowAll=true 时为 0。</p>
                     * @return Offset <p>回填请求的翻页起点。ShowAll=true 时为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>页大小，恒为 10。ShowAll=true 时为 Total。</p>
                     * @return Limit <p>页大小，恒为 10。ShowAll=true 时为 Total。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。</p>
                     * @return Timestamps <p>Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取<p>对象排行列表，按<code>MetricKeys[0]</code>降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。</p>
                     * @return TopList <p>对象排行列表，按<code>MetricKeys[0]</code>降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。</p>
                     * 
                     */
                    std::vector<UsageRankItem> GetTopList() const;

                    /**
                     * 判断参数 TopList 是否已赋值
                     * @return TopList 是否已赋值
                     * 
                     */
                    bool TopListHasBeenSet() const;

                    /**
                     * 获取<p>分页统计结果</p>
                     * @return PageStats <p>分页统计结果</p>
                     * 
                     */
                    UsageStats GetPageStats() const;

                    /**
                     * 判断参数 PageStats 是否已赋值
                     * @return PageStats 是否已赋值
                     * 
                     */
                    bool PageStatsHasBeenSet() const;

                    /**
                     * 获取<p>总统计结果</p>
                     * @return TotalStats <p>总统计结果</p>
                     * 
                     */
                    UsageStats GetTotalStats() const;

                    /**
                     * 判断参数 TotalStats 是否已赋值
                     * @return TotalStats 是否已赋值
                     * 
                     */
                    bool TotalStatsHasBeenSet() const;

                private:

                    /**
                     * <p>回填请求的统计维度。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>回填请求的指标族：tokens / search 。</p>
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * <p>本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，按MetricType 区分：tokens=[Total,Input,Output,Cache]、search=[SearchRequestCount,SearchCount]</p>
                     */
                    std::vector<std::string> m_metricKeys;
                    bool m_metricKeysHasBeenSet;

                    /**
                     * <p>视图（数据来源）</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>回填请求的统计粒度（秒）。ShowAll=true 时为 0。</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>回填请求的起始时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>回填请求的结束时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>全量对象数。</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>回填请求的翻页起点。ShowAll=true 时为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>页大小，恒为 10。ShowAll=true 时为 Total。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。</p>
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * <p>对象排行列表，按<code>MetricKeys[0]</code>降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。</p>
                     */
                    std::vector<UsageRankItem> m_topList;
                    bool m_topListHasBeenSet;

                    /**
                     * <p>分页统计结果</p>
                     */
                    UsageStats m_pageStats;
                    bool m_pageStatsHasBeenSet;

                    /**
                     * <p>总统计结果</p>
                     */
                    UsageStats m_totalStats;
                    bool m_totalStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_
