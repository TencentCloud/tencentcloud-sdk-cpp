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
                     * 获取统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。
                     * @return Dimension 统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。
                     * @param _dimension 统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。
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
                     * 获取起始时间（闭区间），RFC3339 格式。
                     * @return StartTime 起始时间（闭区间），RFC3339 格式。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间（闭区间），RFC3339 格式。
                     * @param _startTime 起始时间（闭区间），RFC3339 格式。
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
                     * 获取结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。
                     * @return EndTime 结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。
                     * @param _endTime 结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。
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
                     * 获取指标族切换字段。本期支持 tokens（累计 Token 用量，statistics=sum）；传其他值将返回 InvalidParameter。空字符串或不传时默认 tokens。接口预留 MetricType 字段以支持后续指标族扩展。
                     * @return MetricType 指标族切换字段。本期支持 tokens（累计 Token 用量，statistics=sum）；传其他值将返回 InvalidParameter。空字符串或不传时默认 tokens。接口预留 MetricType 字段以支持后续指标族扩展。
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标族切换字段。本期支持 tokens（累计 Token 用量，statistics=sum）；传其他值将返回 InvalidParameter。空字符串或不传时默认 tokens。接口预留 MetricType 字段以支持后续指标族扩展。
                     * @param _metricType 指标族切换字段。本期支持 tokens（累计 Token 用量，statistics=sum）；传其他值将返回 InvalidParameter。空字符串或不传时默认 tokens。接口预留 MetricType 字段以支持后续指标族扩展。
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
                     * 获取维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。
                     * @return Target 维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。
                     * @param _target 维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。
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
                     * 获取统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；> 10 天 → 86400。仅 ShowAll=false 时使用。
                     * @return Period 统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；> 10 天 → 86400。仅 ShowAll=false 时使用。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；> 10 天 → 86400。仅 ShowAll=false 时使用。
                     * @param _period 统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；> 10 天 → 86400。仅 ShowAll=false 时使用。
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
                     * 获取翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。
                     * @return Offset 翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。
                     * @param _offset 翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。
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
                     * 获取是否返回全量结果。
- false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含
  Series 时序点用于绘制曲线。
- true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。

                     * @return ShowAll 是否返回全量结果。
- false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含
  Series 时序点用于绘制曲线。
- true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。

                     * 
                     */
                    bool GetShowAll() const;

                    /**
                     * 设置是否返回全量结果。
- false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含
  Series 时序点用于绘制曲线。
- true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。

                     * @param _showAll 是否返回全量结果。
- false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含
  Series 时序点用于绘制曲线。
- true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。

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
                     * 统计维度。取值：apikey（按 APIKey 统计）、endpoint（按接入点统计）、model（按模型统计）。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 起始时间（闭区间），RFC3339 格式。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（开区间），RFC3339 格式。与 StartTime 的跨度最大 90 天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标族切换字段。本期支持 tokens（累计 Token 用量，statistics=sum）；传其他值将返回 InvalidParameter。空字符串或不传时默认 tokens。接口预留 MetricType 字段以支持后续指标族扩展。
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 维度过滤值。空字符串表示查询全部对象，非空时仅查询指定单个对象（如指定 APIKey ID）。最大 256 字符。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 统计粒度（秒）。取值：60、300、3600、86400。必须不小于跨度对应下限：跨度 ≤ 1 天 → 60；1 ~ 5 天 → 300；5 ~ 10 天 → 3600；> 10 天 → 86400。仅 ShowAll=false 时使用。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 翻页起点，从 0 起，默认 0。ShowAll=true 时忽略。页大小固定为 10。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否返回全量结果。
- false（默认）：按 Offset 分页返回 TopList（每页 10 条），每个对象包含
  Series 时序点用于绘制曲线。
- true：忽略 Offset，返回全量对象列表，不返回 Series（CSV 导出场景）。

                     */
                    bool m_showAll;
                    bool m_showAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_
