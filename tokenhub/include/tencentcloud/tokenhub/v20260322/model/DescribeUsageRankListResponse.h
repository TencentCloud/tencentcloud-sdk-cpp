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
                     * 获取回填请求的统计维度。
                     * @return Dimension 回填请求的统计维度。
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
                     * 获取回填请求的指标族（本期固定为 tokens）。前端按本字段切换图表渲染逻辑。
                     * @return MetricType 回填请求的指标族（本期固定为 tokens）。前端按本字段切换图表渲染逻辑。
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
                     * 获取本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，顺序固定为 [Total, Input, Output]。本期为 [TotalToken, InputTotalToken, OutputTotalToken]。前端可遍历此列表渲染图表，无需硬编码 key 名。
                     * @return MetricKeys 本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，顺序固定为 [Total, Input, Output]。本期为 [TotalToken, InputTotalToken, OutputTotalToken]。前端可遍历此列表渲染图表，无需硬编码 key 名。
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
                     * 获取视图（数据来源）
                     * @return ViewName 视图（数据来源）
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
                     * 获取回填请求的统计粒度（秒）。ShowAll=true 时为 0。
                     * @return Period 回填请求的统计粒度（秒）。ShowAll=true 时为 0。
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
                     * 获取回填请求的起始时间。
                     * @return StartTime 回填请求的起始时间。
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
                     * 获取回填请求的结束时间。
                     * @return EndTime 回填请求的结束时间。
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
                     * 获取全量对象数。
                     * @return Total 全量对象数。
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
                     * 获取回填请求的翻页起点。ShowAll=true 时为 0。
                     * @return Offset 回填请求的翻页起点。ShowAll=true 时为 0。
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
                     * 获取页大小，恒为 10。ShowAll=true 时为 Total。
                     * @return Limit 页大小，恒为 10。ShowAll=true 时为 Total。
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
                     * 获取Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。
                     * @return Timestamps Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。
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
                     * 获取对象排行列表，按主指标（`MetricKeys[0]`，本期为 TotalToken）降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。
                     * @return TopList 对象排行列表，按主指标（`MetricKeys[0]`，本期为 TotalToken）降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。
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
                     * 获取分页统计结果
                     * @return PageStats 分页统计结果
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
                     * 获取总统计结果
                     * @return TotalStats 总统计结果
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
                     * 回填请求的统计维度。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 回填请求的指标族（本期固定为 tokens）。前端按本字段切换图表渲染逻辑。
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 本次响应中 Stats / Series / PageStats / TotalStats 实际包含的 metric key 列表，顺序固定为 [Total, Input, Output]。本期为 [TotalToken, InputTotalToken, OutputTotalToken]。前端可遍历此列表渲染图表，无需硬编码 key 名。
                     */
                    std::vector<std::string> m_metricKeys;
                    bool m_metricKeysHasBeenSet;

                    /**
                     * 视图（数据来源）
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 回填请求的统计粒度（秒）。ShowAll=true 时为 0。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 回填请求的起始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 回填请求的结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 全量对象数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 回填请求的翻页起点。ShowAll=true 时为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小，恒为 10。ShowAll=true 时为 Total。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Series 数组对应的时间戳序列（Unix 秒）。ShowAll=true 时为空数组。
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * 对象排行列表，按主指标（`MetricKeys[0]`，本期为 TotalToken）降序排序。ShowAll=false 时为当前页 10 个对象（含 Series）；ShowAll=true 时为全量对象（不含 Series，用于 CSV 导出）。
                     */
                    std::vector<UsageRankItem> m_topList;
                    bool m_topListHasBeenSet;

                    /**
                     * 分页统计结果
                     */
                    UsageStats m_pageStats;
                    bool m_pageStatsHasBeenSet;

                    /**
                     * 总统计结果
                     */
                    UsageStats m_totalStats;
                    bool m_totalStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_
