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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_

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
                * RenewWorkflowSchedulerInfoDs请求参数结构体
                */
                class RenewWorkflowSchedulerInfoDsRequest : public AbstractModel
                {
                public:
                    RenewWorkflowSchedulerInfoDsRequest();
                    ~RenewWorkflowSchedulerInfoDsRequest() = default;
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
                     * 获取延迟时间
                     * @return DelayTime 延迟时间
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间
                     * @param _delayTime 延迟时间
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartupTime 启动时间
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置启动时间
                     * @param _startupTime 启动时间
                     * 
                     */
                    void SetStartupTime(const uint64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取任务依赖
                     * @return SelfDepend 任务依赖
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置任务依赖
                     * @param _selfDepend 任务依赖
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
                     * 获取指定运行时间
                     * @return TaskAction 指定运行时间
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置指定运行时间
                     * @param _taskAction 指定运行时间
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
                     * @return CycleType 调度周期时间单位
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置调度周期时间单位
                     * @param _cycleType 调度周期时间单位
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
                     * @return CycleStep 调度周期
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置调度周期
                     * @param _cycleStep 调度周期
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
                     * 获取执行时间左闭区间
                     * @return ExecutionStartTime 执行时间左闭区间
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间
                     * @param _executionStartTime 执行时间左闭区间
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
                     * @return ExecutionEndTime 执行时间右闭区间
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间
                     * @param _executionEndTime 执行时间右闭区间
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
                     * 获取任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1
                     * @return InstanceInitStrategy 任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1
                     * @param _instanceInitStrategy 任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1
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
                     * 获取工作流依赖，yes or no
                     * @return DependencyWorkflow 工作流依赖，yes or no
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置工作流依赖，yes or no
                     * @param _dependencyWorkflow 工作流依赖，yes or no
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
                     * 获取CrontabExpression
                     * @return CrontabExpression CrontabExpression
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置CrontabExpression
                     * @param _crontabExpression CrontabExpression
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
                     * 获取0：不修改
1：将任务的上游依赖配置改为默认值 
                     * @return ModifyCycleValue 0：不修改
1：将任务的上游依赖配置改为默认值 
                     * 
                     */
                    std::string GetModifyCycleValue() const;

                    /**
                     * 设置0：不修改
1：将任务的上游依赖配置改为默认值 
                     * @param _modifyCycleValue 0：不修改
1：将任务的上游依赖配置改为默认值 
                     * 
                     */
                    void SetModifyCycleValue(const std::string& _modifyCycleValue);

                    /**
                     * 判断参数 ModifyCycleValue 是否已赋值
                     * @return ModifyCycleValue 是否已赋值
                     * 
                     */
                    bool ModifyCycleValueHasBeenSet() const;

                    /**
                     * 获取是否开启日历调度 1 开启 0关闭
                     * @return CalendarOpen 是否开启日历调度 1 开启 0关闭
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置是否开启日历调度 1 开启 0关闭
                     * @param _calendarOpen 是否开启日历调度 1 开启 0关闭
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
                     * 获取日历名称
                     * @return CalendarName 日历名称
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置日历名称
                     * @param _calendarName 日历名称
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
                     * 获取日历id
                     * @return CalendarId 日历id
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置日历id
                     * @param _calendarId 日历id
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
                     * 获取时区
                     * @return ScheduleTimeZone 时区
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置时区
                     * @param _scheduleTimeZone 时区
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
                     * 获取是否自动清理不支持的任务链接
                     * @return ClearLink 是否自动清理不支持的任务链接
                     * 
                     */
                    bool GetClearLink() const;

                    /**
                     * 设置是否自动清理不支持的任务链接
                     * @param _clearLink 是否自动清理不支持的任务链接
                     * 
                     */
                    void SetClearLink(const bool& _clearLink);

                    /**
                     * 判断参数 ClearLink 是否已赋值
                     * @return ClearLink 是否已赋值
                     * 
                     */
                    bool ClearLinkHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 延迟时间
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 启动时间
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 任务依赖
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

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
                     * 指定运行时间
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 调度周期时间单位
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 调度周期
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 执行时间左闭区间
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * 工作流依赖，yes or no
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * CrontabExpression
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 0：不修改
1：将任务的上游依赖配置改为默认值 
                     */
                    std::string m_modifyCycleValue;
                    bool m_modifyCycleValueHasBeenSet;

                    /**
                     * 是否开启日历调度 1 开启 0关闭
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * 日历名称
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * 日历id
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * 时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 是否自动清理不支持的任务链接
                     */
                    bool m_clearLink;
                    bool m_clearLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_
