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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeEventCenterEvents请求参数结构体
                */
                class DescribeEventCenterEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventCenterEventsRequest();
                    ~DescribeEventCenterEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件筛选条件，用于按事件来源、对象、类型、级别及工具等信息查询事件。</p><p>入参限制：最多支持 12 个筛选条件，同名筛选条件不可重复；每个条件支持 1～20 个值，每个值非空且不超过 256 字节。</p><p>支持的筛选字段：Source、ObjectType、ObjectId、EventType、EventLevel、Reason、EventId、ToolId、ToolType、Message。</p>
                     * @return Filters <p>事件筛选条件，用于按事件来源、对象、类型、级别及工具等信息查询事件。</p><p>入参限制：最多支持 12 个筛选条件，同名筛选条件不可重复；每个条件支持 1～20 个值，每个值非空且不超过 256 字节。</p><p>支持的筛选字段：Source、ObjectType、ObjectId、EventType、EventLevel、Reason、EventId、ToolId、ToolType、Message。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>事件筛选条件，用于按事件来源、对象、类型、级别及工具等信息查询事件。</p><p>入参限制：最多支持 12 个筛选条件，同名筛选条件不可重复；每个条件支持 1～20 个值，每个值非空且不超过 256 字节。</p><p>支持的筛选字段：Source、ObjectType、ObjectId、EventType、EventLevel、Reason、EventId、ToolId、ToolType、Message。</p>
                     * @param _filters <p>事件筛选条件，用于按事件来源、对象、类型、级别及工具等信息查询事件。</p><p>入参限制：最多支持 12 个筛选条件，同名筛选条件不可重复；每个条件支持 1～20 个值，每个值非空且不超过 256 字节。</p><p>支持的筛选字段：Source、ObjectType、ObjectId、EventType、EventLevel、Reason、EventId、ToolId、ToolType、Message。</p>
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
                     * 获取<p>查询开始时间，包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T13:28:00Z。</p><p>入参限制：必须早于 EndTime，且不能早于当前时间前 7 天。</p><p>默认值：不传时默认为 EndTime 前 1 小时。</p>
                     * @return StartTime <p>查询开始时间，包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T13:28:00Z。</p><p>入参限制：必须早于 EndTime，且不能早于当前时间前 7 天。</p><p>默认值：不传时默认为 EndTime 前 1 小时。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T13:28:00Z。</p><p>入参限制：必须早于 EndTime，且不能早于当前时间前 7 天。</p><p>默认值：不传时默认为 EndTime 前 1 小时。</p>
                     * @param _startTime <p>查询开始时间，包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T13:28:00Z。</p><p>入参限制：必须早于 EndTime，且不能早于当前时间前 7 天。</p><p>默认值：不传时默认为 EndTime 前 1 小时。</p>
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
                     * 获取<p>查询结束时间，不包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T14:28:00Z。</p><p>入参限制：必须晚于 StartTime，不应晚于当前时间。</p><p>默认值：不传时默认为当前时间。</p><p>查询范围为 [StartTime, EndTime)。</p>
                     * @return EndTime <p>查询结束时间，不包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T14:28:00Z。</p><p>入参限制：必须晚于 StartTime，不应晚于当前时间。</p><p>默认值：不传时默认为当前时间。</p><p>查询范围为 [StartTime, EndTime)。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，不包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T14:28:00Z。</p><p>入参限制：必须晚于 StartTime，不应晚于当前时间。</p><p>默认值：不传时默认为当前时间。</p><p>查询范围为 [StartTime, EndTime)。</p>
                     * @param _endTime <p>查询结束时间，不包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T14:28:00Z。</p><p>入参限制：必须晚于 StartTime，不应晚于当前时间。</p><p>默认值：不传时默认为当前时间。</p><p>查询范围为 [StartTime, EndTime)。</p>
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
                     * 获取<p>分页偏移量。</p><p>取值范围：[0, 10000]</p><p>默认值：0</p><p>Raw 模式按去重后的事件分页，Aggregate 模式按聚合结果分页。</p>
                     * @return Offset <p>分页偏移量。</p><p>取值范围：[0, 10000]</p><p>默认值：0</p><p>Raw 模式按去重后的事件分页，Aggregate 模式按聚合结果分页。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。</p><p>取值范围：[0, 10000]</p><p>默认值：0</p><p>Raw 模式按去重后的事件分页，Aggregate 模式按聚合结果分页。</p>
                     * @param _offset <p>分页偏移量。</p><p>取值范围：[0, 10000]</p><p>默认值：0</p><p>Raw 模式按去重后的事件分页，Aggregate 模式按聚合结果分页。</p>
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
                     * 获取<p>单次返回的最大结果条数。</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @return Limit <p>单次返回的最大结果条数。</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次返回的最大结果条数。</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @param _limit <p>单次返回的最大结果条数。</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>事件结果的时间排序方向。</p><p>枚举值：</p><ul><li>Asc： 按时间升序排列，较早的事件在前。</li><li>Desc： 按时间降序排列，较新的事件在前。默认值。</li></ul><p>默认值：Desc</p><p>Raw 模式按事件发生时间排序；Aggregate 模式按聚合结果最近发生时间排序。</p>
                     * @return Order <p>事件结果的时间排序方向。</p><p>枚举值：</p><ul><li>Asc： 按时间升序排列，较早的事件在前。</li><li>Desc： 按时间降序排列，较新的事件在前。默认值。</li></ul><p>默认值：Desc</p><p>Raw 模式按事件发生时间排序；Aggregate 模式按聚合结果最近发生时间排序。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>事件结果的时间排序方向。</p><p>枚举值：</p><ul><li>Asc： 按时间升序排列，较早的事件在前。</li><li>Desc： 按时间降序排列，较新的事件在前。默认值。</li></ul><p>默认值：Desc</p><p>Raw 模式按事件发生时间排序；Aggregate 模式按聚合结果最近发生时间排序。</p>
                     * @param _order <p>事件结果的时间排序方向。</p><p>枚举值：</p><ul><li>Asc： 按时间升序排列，较早的事件在前。</li><li>Desc： 按时间降序排列，较新的事件在前。默认值。</li></ul><p>默认值：Desc</p><p>Raw 模式按事件发生时间排序；Aggregate 模式按聚合结果最近发生时间排序。</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>事件查询模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式，返回去重后的事件明细。默认值。</li><li>Aggregate： 聚合模式，返回聚合结果及事件数量、首次和最近发生时间；生命周期事件仍逐条展示。</li></ul><p>默认值：Raw</p><p>Raw 返回去重后的事件明细；Aggregate 返回聚合结果。</p>
                     * @return Mode <p>事件查询模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式，返回去重后的事件明细。默认值。</li><li>Aggregate： 聚合模式，返回聚合结果及事件数量、首次和最近发生时间；生命周期事件仍逐条展示。</li></ul><p>默认值：Raw</p><p>Raw 返回去重后的事件明细；Aggregate 返回聚合结果。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>事件查询模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式，返回去重后的事件明细。默认值。</li><li>Aggregate： 聚合模式，返回聚合结果及事件数量、首次和最近发生时间；生命周期事件仍逐条展示。</li></ul><p>默认值：Raw</p><p>Raw 返回去重后的事件明细；Aggregate 返回聚合结果。</p>
                     * @param _mode <p>事件查询模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式，返回去重后的事件明细。默认值。</li><li>Aggregate： 聚合模式，返回聚合结果及事件数量、首次和最近发生时间；生命周期事件仍逐条展示。</li></ul><p>默认值：Raw</p><p>Raw 返回去重后的事件明细；Aggregate 返回聚合结果。</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * <p>事件筛选条件，用于按事件来源、对象、类型、级别及工具等信息查询事件。</p><p>入参限制：最多支持 12 个筛选条件，同名筛选条件不可重复；每个条件支持 1～20 个值，每个值非空且不超过 256 字节。</p><p>支持的筛选字段：Source、ObjectType、ObjectId、EventType、EventLevel、Reason、EventId、ToolId、ToolType、Message。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询开始时间，包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T13:28:00Z。</p><p>入参限制：必须早于 EndTime，且不能早于当前时间前 7 天。</p><p>默认值：不传时默认为 EndTime 前 1 小时。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，不包含该时间点。</p><p>参数格式：RFC3339 格式，例如 2026-10-23T14:28:00Z。</p><p>入参限制：必须晚于 StartTime，不应晚于当前时间。</p><p>默认值：不传时默认为当前时间。</p><p>查询范围为 [StartTime, EndTime)。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页偏移量。</p><p>取值范围：[0, 10000]</p><p>默认值：0</p><p>Raw 模式按去重后的事件分页，Aggregate 模式按聚合结果分页。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次返回的最大结果条数。</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>事件结果的时间排序方向。</p><p>枚举值：</p><ul><li>Asc： 按时间升序排列，较早的事件在前。</li><li>Desc： 按时间降序排列，较新的事件在前。默认值。</li></ul><p>默认值：Desc</p><p>Raw 模式按事件发生时间排序；Aggregate 模式按聚合结果最近发生时间排序。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>事件查询模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式，返回去重后的事件明细。默认值。</li><li>Aggregate： 聚合模式，返回聚合结果及事件数量、首次和最近发生时间；生命周期事件仍逐条展示。</li></ul><p>默认值：Raw</p><p>Raw 返回去重后的事件明细；Aggregate 返回聚合结果。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSREQUEST_H_
