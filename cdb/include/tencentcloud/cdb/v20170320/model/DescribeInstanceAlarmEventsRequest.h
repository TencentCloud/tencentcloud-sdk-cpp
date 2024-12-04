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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstanceAlarmEvents请求参数结构体
                */
                class DescribeInstanceAlarmEventsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceAlarmEventsRequest();
                    ~DescribeInstanceAlarmEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取事件查询范围开始时间，闭区间。
                     * @return StartTime 事件查询范围开始时间，闭区间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置事件查询范围开始时间，闭区间。
                     * @param _startTime 事件查询范围开始时间，闭区间。
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
                     * 获取事件查询范围截止时间，闭区间。
                     * @return EndTime 事件查询范围截止时间，闭区间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置事件查询范围截止时间，闭区间。
                     * @param _endTime 事件查询范围截止时间，闭区间。
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
                     * 获取事件名称。 Outofmemory - 内存OOM（有状态事件）; Switch - 主从切换（有状态事件）; Roremove - 只读实例剔除（有状态事件）; MemoryUsedHigh - 内存使用率过高（有状态事件）; CPUExpansion - CPU性能扩容（无状态事件）; CPUExpansionFailed - CPU性能扩容失败（无状态事件）; CPUContraction - CPU性能回缩（无状态事件）; Restart - 实例重启（有状态事件）; ServerFailureNodeMigration - ServerFailureNodeMigration（有状态事件）; PlannedSwitch - 计划内主备切换（无状态事件）; OverusedReadonlySet - 实例将被锁定（无状态事件）; OverusedReadWriteSet - 实例解除锁定（无状态事件）。
                     * @return EventName 事件名称。 Outofmemory - 内存OOM（有状态事件）; Switch - 主从切换（有状态事件）; Roremove - 只读实例剔除（有状态事件）; MemoryUsedHigh - 内存使用率过高（有状态事件）; CPUExpansion - CPU性能扩容（无状态事件）; CPUExpansionFailed - CPU性能扩容失败（无状态事件）; CPUContraction - CPU性能回缩（无状态事件）; Restart - 实例重启（有状态事件）; ServerFailureNodeMigration - ServerFailureNodeMigration（有状态事件）; PlannedSwitch - 计划内主备切换（无状态事件）; OverusedReadonlySet - 实例将被锁定（无状态事件）; OverusedReadWriteSet - 实例解除锁定（无状态事件）。
                     * 
                     */
                    std::vector<std::string> GetEventName() const;

                    /**
                     * 设置事件名称。 Outofmemory - 内存OOM（有状态事件）; Switch - 主从切换（有状态事件）; Roremove - 只读实例剔除（有状态事件）; MemoryUsedHigh - 内存使用率过高（有状态事件）; CPUExpansion - CPU性能扩容（无状态事件）; CPUExpansionFailed - CPU性能扩容失败（无状态事件）; CPUContraction - CPU性能回缩（无状态事件）; Restart - 实例重启（有状态事件）; ServerFailureNodeMigration - ServerFailureNodeMigration（有状态事件）; PlannedSwitch - 计划内主备切换（无状态事件）; OverusedReadonlySet - 实例将被锁定（无状态事件）; OverusedReadWriteSet - 实例解除锁定（无状态事件）。
                     * @param _eventName 事件名称。 Outofmemory - 内存OOM（有状态事件）; Switch - 主从切换（有状态事件）; Roremove - 只读实例剔除（有状态事件）; MemoryUsedHigh - 内存使用率过高（有状态事件）; CPUExpansion - CPU性能扩容（无状态事件）; CPUExpansionFailed - CPU性能扩容失败（无状态事件）; CPUContraction - CPU性能回缩（无状态事件）; Restart - 实例重启（有状态事件）; ServerFailureNodeMigration - ServerFailureNodeMigration（有状态事件）; PlannedSwitch - 计划内主备切换（无状态事件）; OverusedReadonlySet - 实例将被锁定（无状态事件）; OverusedReadWriteSet - 实例解除锁定（无状态事件）。
                     * 
                     */
                    void SetEventName(const std::vector<std::string>& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取事件状态。"1" - 发生事件；"0" - 恢复事件；"-" - 无状态事件。
                     * @return EventStatus 事件状态。"1" - 发生事件；"0" - 恢复事件；"-" - 无状态事件。
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置事件状态。"1" - 发生事件；"0" - 恢复事件；"-" - 无状态事件。
                     * @param _eventStatus 事件状态。"1" - 发生事件；"0" - 恢复事件；"-" - 无状态事件。
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取排序方式。按事件发生事件进行排序，"DESC"-倒排；”ASC“-正序，默认倒排。
                     * @return Order 排序方式。按事件发生事件进行排序，"DESC"-倒排；”ASC“-正序，默认倒排。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式。按事件发生事件进行排序，"DESC"-倒排；”ASC“-正序，默认倒排。
                     * @param _order 排序方式。按事件发生事件进行排序，"DESC"-倒排；”ASC“-正序，默认倒排。
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
                     * 获取事件展示数量。
                     * @return Limit 事件展示数量。
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置事件展示数量。
                     * @param _limit 事件展示数量。
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取节点 ID。
                     * @return NodeId 节点 ID。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点 ID。
                     * @param _nodeId 节点 ID。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件查询范围开始时间，闭区间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事件查询范围截止时间，闭区间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件名称。 Outofmemory - 内存OOM（有状态事件）; Switch - 主从切换（有状态事件）; Roremove - 只读实例剔除（有状态事件）; MemoryUsedHigh - 内存使用率过高（有状态事件）; CPUExpansion - CPU性能扩容（无状态事件）; CPUExpansionFailed - CPU性能扩容失败（无状态事件）; CPUContraction - CPU性能回缩（无状态事件）; Restart - 实例重启（有状态事件）; ServerFailureNodeMigration - ServerFailureNodeMigration（有状态事件）; PlannedSwitch - 计划内主备切换（无状态事件）; OverusedReadonlySet - 实例将被锁定（无状态事件）; OverusedReadWriteSet - 实例解除锁定（无状态事件）。
                     */
                    std::vector<std::string> m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件状态。"1" - 发生事件；"0" - 恢复事件；"-" - 无状态事件。
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 排序方式。按事件发生事件进行排序，"DESC"-倒排；”ASC“-正序，默认倒排。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 事件展示数量。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 节点 ID。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEALARMEVENTSREQUEST_H_
