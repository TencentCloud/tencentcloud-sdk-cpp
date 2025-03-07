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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEDTODS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEDTODS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 工作流调度信息
                */
                class WorkflowScheduleDtoDs : public AbstractModel
                {
                public:
                    WorkflowScheduleDtoDs();
                    ~WorkflowScheduleDtoDs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime 延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupTime(const int64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取指定运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 指定运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置指定运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 指定运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取调度周期时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 调度周期时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置调度周期时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 调度周期时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取调度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 调度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置调度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 调度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression Cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression Cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取工作流依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow 工作流依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置工作流依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow 工作流依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取工作流首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime 工作流首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置工作流首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime 工作流首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

                    /**
                     * 获取工作流最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestSubmitTime 工作流最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestSubmitTime() const;

                    /**
                     * 设置工作流最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestSubmitTime 工作流最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestSubmitTime(const std::string& _latestSubmitTime);

                    /**
                     * 判断参数 LatestSubmitTime 是否已赋值
                     * @return LatestSubmitTime 是否已赋值
                     * 
                     */
                    bool LatestSubmitTimeHasBeenSet() const;

                    /**
                     * 获取日历调度是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarOpen 日历调度是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置日历调度是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarOpen 日历调度是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalendarOpen(const std::string& _calendarOpen);

                    /**
                     * 判断参数 CalendarOpen 是否已赋值
                     * @return CalendarOpen 是否已赋值
                     * 
                     */
                    bool CalendarOpenHasBeenSet() const;

                    /**
                     * 获取日历调度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarName 日历调度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置日历调度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarName 日历调度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalendarName(const std::string& _calendarName);

                    /**
                     * 判断参数 CalendarName 是否已赋值
                     * @return CalendarName 是否已赋值
                     * 
                     */
                    bool CalendarNameHasBeenSet() const;

                    /**
                     * 获取日历调度id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarId 日历调度id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置日历调度id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarId 日历调度id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalendarId(const std::string& _calendarId);

                    /**
                     * 判断参数 CalendarId 是否已赋值
                     * @return CalendarId 是否已赋值
                     * 
                     */
                    bool CalendarIdHasBeenSet() const;

                    /**
                     * 获取时区配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone 时区配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置时区配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone 时区配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 延迟时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 任务依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 调度周期时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 调度周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * 工作流依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * 工作流首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * 工作流最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestSubmitTime;
                    bool m_latestSubmitTimeHasBeenSet;

                    /**
                     * 日历调度是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * 日历调度名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * 日历调度id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * 时区配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEDTODS_H_
