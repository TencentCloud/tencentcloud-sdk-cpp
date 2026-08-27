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
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creater <p>创建人</p>
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
                     * 获取<p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime <p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>延迟时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime <p>延迟时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置<p>延迟时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime <p>延迟时间</p>
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
                     * 获取<p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime <p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置<p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime <p>启动时间</p>
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
                     * 获取<p>任务依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend <p>任务依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>任务依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend <p>任务依赖</p>
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
                     * 获取<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>指定运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction <p>指定运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>指定运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction <p>指定运行时间</p>
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
                     * 获取<p>调度周期时间单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>调度周期时间单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>调度周期时间单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>调度周期时间单位</p>
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
                     * 获取<p>调度周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep <p>调度周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置<p>调度周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep <p>调度周期</p>
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
                     * 获取<p>Cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression <p>Cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>Cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression <p>Cron表达式</p>
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
                     * 获取<p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime <p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime <p>执行时间左闭区间</p>
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
                     * 获取<p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime <p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime <p>执行时间右闭区间</p>
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
                     * 获取<p>实例初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy <p>实例初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置<p>实例初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy <p>实例初始化策略</p>
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
                     * 获取<p>工作流依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow <p>工作流依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>工作流依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow <p>工作流依赖</p>
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
                     * 获取<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc <p>调度计划</p>
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
                     * 获取<p>工作流首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime <p>工作流首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置<p>工作流首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime <p>工作流首次提交时间</p>
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
                     * 获取<p>工作流最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestSubmitTime <p>工作流最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestSubmitTime() const;

                    /**
                     * 设置<p>工作流最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestSubmitTime <p>工作流最近提交时间</p>
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
                     * 获取<p>日历调度是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarOpen <p>日历调度是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置<p>日历调度是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarOpen <p>日历调度是否开启</p>
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
                     * 获取<p>日历调度名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarName <p>日历调度名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置<p>日历调度名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarName <p>日历调度名称</p>
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
                     * 获取<p>日历调度id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarId <p>日历调度id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置<p>日历调度id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarId <p>日历调度id</p>
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
                     * 获取<p>时区配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>时区配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>时区配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>时区配置</p>
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

                    /**
                     * 获取<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * <p>修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>延迟时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>任务依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指定运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * <p>调度周期时间单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>调度周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>Cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>实例初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * <p>工作流依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * <p>工作流首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * <p>工作流最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestSubmitTime;
                    bool m_latestSubmitTimeHasBeenSet;

                    /**
                     * <p>日历调度是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * <p>日历调度名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * <p>日历调度id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * <p>时区配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWSCHEDULEDTODS_H_
