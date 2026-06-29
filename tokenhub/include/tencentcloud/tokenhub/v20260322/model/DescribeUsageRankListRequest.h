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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeUsageRankList请求参数结构体
                */
                class DescribeUsageRankListRequest : public AbstractModel
                {
                public:
                    DescribeUsageRankListRequest();
                    ~DescribeUsageRankListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。</p>
                     * @return Dimension <p>统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。</p>
                     * @param _dimension <p>统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。</p>
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>起始时间（闭区间），RFC3339 格式。</p>
                     * @return StartTime <p>起始时间（闭区间），RFC3339 格式。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始时间（闭区间），RFC3339 格式。</p>
                     * @param _startTime <p>起始时间（闭区间），RFC3339 格式。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。</p>
                     * @return EndTime <p>结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。</p>
                     * @param _endTime <p>结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>指标族切换字段。</p><ul><li>tokens（默认）：Token 消耗图（statistics=sum），支持 Dimension = apikey/endpoint/model</li><li>search【待上线】：联网搜索调用次数（statistics=sum），仅支持 Dimension = model</li><li>其他值返回 InvalidParameter。</li></ul><p>枚举值：</p><ul><li>tokens： tokens</li></ul>
                     * @return MetricType <p>指标族切换字段。</p><ul><li>tokens（默认）：Token 消耗图（statistics=sum），支持 Dimension = apikey/endpoint/model</li><li>search【待上线】：联网搜索调用次数（statistics=sum），仅支持 Dimension = model</li><li>其他值返回 InvalidParameter。</li></ul><p>枚举值：</p><ul><li>tokens： tokens</li></ul>
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置<p>指标族切换字段。</p><ul><li>tokens（默认）：Token 消耗图（statistics=sum），支持 Dimension = apikey/endpoint/model</li><li>search【待上线】：联网搜索调用次数（statistics=sum），仅支持 Dimension = model</li><li>其他值返回 InvalidParameter。</li></ul><p>枚举值：</p><ul><li>tokens： tokens</li></ul>
                     * @param _metricType <p>指标族切换字段。</p><ul><li>tokens（默认）：Token 消耗图（statistics=sum），支持 Dimension = apikey/endpoint/model</li><li>search【待上线】：联网搜索调用次数（statistics=sum），仅支持 Dimension = model</li><li>其他值返回 InvalidParameter。</li></ul><p>枚举值：</p><ul><li>tokens： tokens</li></ul>
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
                     * 获取<p>维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。</p>
                     * @return Target <p>维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。</p>
                     * @param _target <p>维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；&gt; 10 天 → 86400。仅 ShowAll=false 时使用。</p>
                     * @return Period <p>统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；&gt; 10 天 → 86400。仅 ShowAll=false 时使用。</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；&gt; 10 天 → 86400。仅 ShowAll=false 时使用。</p>
                     * @param _period <p>统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；&gt; 10 天 → 86400。仅 ShowAll=false 时使用。</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。</p>
                     * @return Offset <p>翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。</p>
                     * @param _offset <p>翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。</p>
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
                     * 获取<p>是否返回全量结果。</p><ul><li>false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含<br>Series 时序点用于绘制曲线。</li><li>true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。</li></ul>
                     * @return ShowAll <p>是否返回全量结果。</p><ul><li>false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含<br>Series 时序点用于绘制曲线。</li><li>true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。</li></ul>
                     * 
                     */
                    bool GetShowAll() const;

                    /**
                     * 设置<p>是否返回全量结果。</p><ul><li>false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含<br>Series 时序点用于绘制曲线。</li><li>true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。</li></ul>
                     * @param _showAll <p>是否返回全量结果。</p><ul><li>false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含<br>Series 时序点用于绘制曲线。</li><li>true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。</li></ul>
                     * 
                     */
                    void SetShowAll(const bool& _showAll);

                    /**
                     * 判断参数 ShowAll 是否已赋值
                     * @return ShowAll 是否已赋值
                     * 
                     */
                    bool ShowAllHasBeenSet() const;

                private:

                    /**
                     * <p>统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>起始时间（闭区间），RFC3339 格式。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指标族切换字段。</p><ul><li>tokens（默认）：Token 消耗图（statistics=sum），支持 Dimension = apikey/endpoint/model</li><li>search【待上线】：联网搜索调用次数（statistics=sum），仅支持 Dimension = model</li><li>其他值返回 InvalidParameter。</li></ul><p>枚举值：</p><ul><li>tokens： tokens</li></ul>
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * <p>维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；&gt; 10 天 → 86400。仅 ShowAll=false 时使用。</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>是否返回全量结果。</p><ul><li>false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含<br>Series 时序点用于绘制曲线。</li><li>true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。</li></ul>
                     */
                    bool m_showAll;
                    bool m_showAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_
