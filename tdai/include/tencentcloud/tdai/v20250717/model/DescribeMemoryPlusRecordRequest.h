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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/VDBFieldMap.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeMemoryPlusRecord请求参数结构体
                */
                class DescribeMemoryPlusRecordRequest : public AbstractModel
                {
                public:
                    DescribeMemoryPlusRecordRequest();
                    ~DescribeMemoryPlusRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询的 Memory 实例 ID。</p>
                     * @return SpaceId <p>查询的 Memory 实例 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>查询的 Memory 实例 ID。</p>
                     * @param _spaceId <p>查询的 Memory 实例 ID。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * @return Offset <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     * @param _offset <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
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
                     * 获取<p>单次查询返回的记录数量上限（分页大小）。</p>
                     * @return Limit <p>单次查询返回的记录数量上限（分页大小）。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的记录数量上限（分页大小）。</p>
                     * @param _limit <p>单次查询返回的记录数量上限（分页大小）。</p>
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
                     * 获取<p>查询的记忆类型。</p><ul><li>conversation：L0 原始对话。</li><li>memory：L1 原子记忆。</li><li>scene：L2 场景记忆。</li><li>persona：L3 个性化画像。</li><li>memory/persona：L1 原子记忆-画像型。</li><li>memory/episodic：L1 原子记忆-事件型。</li><li>memory/instruction：L1 原子记忆-指令型。</li></ul>
                     * @return RecordType <p>查询的记忆类型。</p><ul><li>conversation：L0 原始对话。</li><li>memory：L1 原子记忆。</li><li>scene：L2 场景记忆。</li><li>persona：L3 个性化画像。</li><li>memory/persona：L1 原子记忆-画像型。</li><li>memory/episodic：L1 原子记忆-事件型。</li><li>memory/instruction：L1 原子记忆-指令型。</li></ul>
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置<p>查询的记忆类型。</p><ul><li>conversation：L0 原始对话。</li><li>memory：L1 原子记忆。</li><li>scene：L2 场景记忆。</li><li>persona：L3 个性化画像。</li><li>memory/persona：L1 原子记忆-画像型。</li><li>memory/episodic：L1 原子记忆-事件型。</li><li>memory/instruction：L1 原子记忆-指令型。</li></ul>
                     * @param _recordType <p>查询的记忆类型。</p><ul><li>conversation：L0 原始对话。</li><li>memory：L1 原子记忆。</li><li>scene：L2 场景记忆。</li><li>persona：L3 个性化画像。</li><li>memory/persona：L1 原子记忆-画像型。</li><li>memory/episodic：L1 原子记忆-事件型。</li><li>memory/instruction：L1 原子记忆-指令型。</li></ul>
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取<p>指定返回记录中的特定字段。</p>
                     * @return Output <p>指定返回记录中的特定字段。</p>
                     * 
                     */
                    std::vector<std::string> GetOutput() const;

                    /**
                     * 设置<p>指定返回记录中的特定字段。</p>
                     * @param _output <p>指定返回记录中的特定字段。</p>
                     * 
                     */
                    void SetOutput(const std::vector<std::string>& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，当前仅支持 <strong>RecordType</strong> 为 <strong>conversation</strong> 的 <strong>session_id</strong> 过滤。</p>
                     * @return Filters <p>过滤条件，当前仅支持 <strong>RecordType</strong> 为 <strong>conversation</strong> 的 <strong>session_id</strong> 过滤。</p>
                     * 
                     */
                    std::vector<VDBFieldMap> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，当前仅支持 <strong>RecordType</strong> 为 <strong>conversation</strong> 的 <strong>session_id</strong> 过滤。</p>
                     * @param _filters <p>过滤条件，当前仅支持 <strong>RecordType</strong> 为 <strong>conversation</strong> 的 <strong>session_id</strong> 过滤。</p>
                     * 
                     */
                    void SetFilters(const std::vector<VDBFieldMap>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>查询结果列表的排序规则。</p><ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * @return OrderDirection <p>查询结果列表的排序规则。</p><ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>查询结果列表的排序规则。</p><ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * @param _orderDirection <p>查询结果列表的排序规则。</p><ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围的起始时间点。</p>
                     * @return StartTime <p>查询时间范围的起始时间点。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询时间范围的起始时间点。</p>
                     * @param _startTime <p>查询时间范围的起始时间点。</p>
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
                     * 获取<p>查询时间范围的结束时间点。</p>
                     * @return EndTime <p>查询时间范围的结束时间点。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询时间范围的结束时间点。</p>
                     * @param _endTime <p>查询时间范围的结束时间点。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>查询的 Memory 实例 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>查询列表的起始位置（偏移量）。用于分页查询，指明从符合条件的第几条数据开始返回。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次查询返回的记录数量上限（分页大小）。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询的记忆类型。</p><ul><li>conversation：L0 原始对话。</li><li>memory：L1 原子记忆。</li><li>scene：L2 场景记忆。</li><li>persona：L3 个性化画像。</li><li>memory/persona：L1 原子记忆-画像型。</li><li>memory/episodic：L1 原子记忆-事件型。</li><li>memory/instruction：L1 原子记忆-指令型。</li></ul>
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>指定返回记录中的特定字段。</p>
                     */
                    std::vector<std::string> m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>过滤条件，当前仅支持 <strong>RecordType</strong> 为 <strong>conversation</strong> 的 <strong>session_id</strong> 过滤。</p>
                     */
                    std::vector<VDBFieldMap> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询结果列表的排序规则。</p><ul><li>ASC：升序。</li><li>DESC：降序。</li></ul>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>查询时间范围的起始时间点。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询时间范围的结束时间点。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDREQUEST_H_
