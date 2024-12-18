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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeStatisticInstanceStatusTrendOps请求参数结构体
                */
                class DescribeStatisticInstanceStatusTrendOpsRequest : public AbstractModel
                {
                public:
                    DescribeStatisticInstanceStatusTrendOpsRequest();
                    ~DescribeStatisticInstanceStatusTrendOpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务类型Id
                     * @return TaskTypeId 任务类型Id
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置任务类型Id
                     * @param _taskTypeId 任务类型Id
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取时间类型
                     * @return TimeType 时间类型
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 设置时间类型
                     * @param _timeType 时间类型
                     * 
                     */
                    void SetTimeType(const std::string& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取任务类型名称
                     * @return TypeName 任务类型名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置任务类型名称
                     * @param _typeName 任务类型名称
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取资源组ID
                     * @return ExecutionGroupId 资源组ID
                     * 
                     */
                    std::string GetExecutionGroupId() const;

                    /**
                     * 设置资源组ID
                     * @param _executionGroupId 资源组ID
                     * 
                     */
                    void SetExecutionGroupId(const std::string& _executionGroupId);

                    /**
                     * 判断参数 ExecutionGroupId 是否已赋值
                     * @return ExecutionGroupId 是否已赋值
                     * 
                     */
                    bool ExecutionGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
                     * @return ExecutionGroupName 资源组名称
                     * 
                     */
                    std::string GetExecutionGroupName() const;

                    /**
                     * 设置资源组名称
                     * @param _executionGroupName 资源组名称
                     * 
                     */
                    void SetExecutionGroupName(const std::string& _executionGroupName);

                    /**
                     * 判断参数 ExecutionGroupName 是否已赋值
                     * @return ExecutionGroupName 是否已赋值
                     * 
                     */
                    bool ExecutionGroupNameHasBeenSet() const;

                    /**
                     * 获取1
                     * @return InCharge 1
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置1
                     * @param _inCharge 1
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取1
                     * @return TaskType 1
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置1
                     * @param _taskType 1
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取1
                     * @return StateList 1
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置1
                     * @param _stateList 1
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取D代表天，H代表小时
                     * @return AggregationUnit D代表天，H代表小时
                     * 
                     */
                    std::string GetAggregationUnit() const;

                    /**
                     * 设置D代表天，H代表小时
                     * @param _aggregationUnit D代表天，H代表小时
                     * 
                     */
                    void SetAggregationUnit(const std::string& _aggregationUnit);

                    /**
                     * 判断参数 AggregationUnit 是否已赋值
                     * @return AggregationUnit 是否已赋值
                     * 
                     */
                    bool AggregationUnitHasBeenSet() const;

                    /**
                     * 获取1
                     * @return AverageWindowSize 1
                     * 
                     */
                    int64_t GetAverageWindowSize() const;

                    /**
                     * 设置1
                     * @param _averageWindowSize 1
                     * 
                     */
                    void SetAverageWindowSize(const int64_t& _averageWindowSize);

                    /**
                     * 判断参数 AverageWindowSize 是否已赋值
                     * @return AverageWindowSize 是否已赋值
                     * 
                     */
                    bool AverageWindowSizeHasBeenSet() const;

                    /**
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取项目ID列表，用于多项目实例趋势筛选，当指定了 ProjectIds 的时候，ProjectId 将只用来鉴权，不做筛选
                     * @return ProjectIds 项目ID列表，用于多项目实例趋势筛选，当指定了 ProjectIds 的时候，ProjectId 将只用来鉴权，不做筛选
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID列表，用于多项目实例趋势筛选，当指定了 ProjectIds 的时候，ProjectId 将只用来鉴权，不做筛选
                     * @param _projectIds 项目ID列表，用于多项目实例趋势筛选，当指定了 ProjectIds 的时候，ProjectId 将只用来鉴权，不做筛选
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取指定时间点，当统计时常为整天的时候使用，必须小于 24
                     * @return TimePoint 指定时间点，当统计时常为整天的时候使用，必须小于 24
                     * 
                     */
                    uint64_t GetTimePoint() const;

                    /**
                     * 设置指定时间点，当统计时常为整天的时候使用，必须小于 24
                     * @param _timePoint 指定时间点，当统计时常为整天的时候使用，必须小于 24
                     * 
                     */
                    void SetTimePoint(const uint64_t& _timePoint);

                    /**
                     * 判断参数 TimePoint 是否已赋值
                     * @return TimePoint 是否已赋值
                     * 
                     */
                    bool TimePointHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型Id
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 时间类型
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * 任务类型名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源组ID
                     */
                    std::string m_executionGroupId;
                    bool m_executionGroupIdHasBeenSet;

                    /**
                     * 资源组名称
                     */
                    std::string m_executionGroupName;
                    bool m_executionGroupNameHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 1
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * D代表天，H代表小时
                     */
                    std::string m_aggregationUnit;
                    bool m_aggregationUnitHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_averageWindowSize;
                    bool m_averageWindowSizeHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目ID列表，用于多项目实例趋势筛选，当指定了 ProjectIds 的时候，ProjectId 将只用来鉴权，不做筛选
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 指定时间点，当统计时常为整天的时候使用，必须小于 24
                     */
                    uint64_t m_timePoint;
                    bool m_timePointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTATISTICINSTANCESTATUSTRENDOPSREQUEST_H_
