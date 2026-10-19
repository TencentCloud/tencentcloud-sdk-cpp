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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * @return WorkflowId <p>工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>延迟时间</p>
                     * @return DelayTime <p>延迟时间</p>
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置<p>延迟时间</p>
                     * @param _delayTime <p>延迟时间</p>
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
                     * 获取<p>启动时间</p>
                     * @return StartupTime <p>启动时间</p>
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置<p>启动时间</p>
                     * @param _startupTime <p>启动时间</p>
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
                     * 获取<p>任务依赖</p>
                     * @return SelfDepend <p>任务依赖</p>
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>任务依赖</p>
                     * @param _selfDepend <p>任务依赖</p>
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
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * @return TaskAction <p>指定运行时间</p>
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>指定运行时间</p>
                     * @param _taskAction <p>指定运行时间</p>
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
                     * @return CycleType <p>调度周期时间单位</p>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>调度周期时间单位</p>
                     * @param _cycleType <p>调度周期时间单位</p>
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
                     * @return CycleStep <p>调度周期</p>
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置<p>调度周期</p>
                     * @param _cycleStep <p>调度周期</p>
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
                     * 获取<p>执行时间左闭区间</p>
                     * @return ExecutionStartTime <p>执行时间左闭区间</p>
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间左闭区间</p>
                     * @param _executionStartTime <p>执行时间左闭区间</p>
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
                     * @return ExecutionEndTime <p>执行时间右闭区间</p>
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间右闭区间</p>
                     * @param _executionEndTime <p>执行时间右闭区间</p>
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
                     * 获取<p>任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1</p>
                     * @return InstanceInitStrategy <p>任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1</p>
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置<p>任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1</p>
                     * @param _instanceInitStrategy <p>任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1</p>
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
                     * 获取<p>工作流依赖，yes or no</p>
                     * @return DependencyWorkflow <p>工作流依赖，yes or no</p>
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>工作流依赖，yes or no</p>
                     * @param _dependencyWorkflow <p>工作流依赖，yes or no</p>
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
                     * 获取<p>CrontabExpression</p>
                     * @return CrontabExpression <p>CrontabExpression</p>
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>CrontabExpression</p>
                     * @param _crontabExpression <p>CrontabExpression</p>
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
                     * 获取<p>0：不修改<br>1：将任务的上游依赖配置改为默认值</p>
                     * @return ModifyCycleValue <p>0：不修改<br>1：将任务的上游依赖配置改为默认值</p>
                     * 
                     */
                    std::string GetModifyCycleValue() const;

                    /**
                     * 设置<p>0：不修改<br>1：将任务的上游依赖配置改为默认值</p>
                     * @param _modifyCycleValue <p>0：不修改<br>1：将任务的上游依赖配置改为默认值</p>
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
                     * 获取<p>是否开启日历调度 1 开启 0关闭</p>
                     * @return CalendarOpen <p>是否开启日历调度 1 开启 0关闭</p>
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置<p>是否开启日历调度 1 开启 0关闭</p>
                     * @param _calendarOpen <p>是否开启日历调度 1 开启 0关闭</p>
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
                     * 获取<p>日历名称</p>
                     * @return CalendarName <p>日历名称</p>
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置<p>日历名称</p>
                     * @param _calendarName <p>日历名称</p>
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
                     * 获取<p>日历id</p>
                     * @return CalendarId <p>日历id</p>
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置<p>日历id</p>
                     * @param _calendarId <p>日历id</p>
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
                     * 获取<p>时区</p>
                     * @return ScheduleTimeZone <p>时区</p>
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _scheduleTimeZone <p>时区</p>
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
                     * 获取<p>是否自动清理不支持的任务链接</p>
                     * @return ClearLink <p>是否自动清理不支持的任务链接</p>
                     * 
                     */
                    bool GetClearLink() const;

                    /**
                     * 设置<p>是否自动清理不支持的任务链接</p>
                     * @param _clearLink <p>是否自动清理不支持的任务链接</p>
                     * 
                     */
                    void SetClearLink(const bool& _clearLink);

                    /**
                     * 判断参数 ClearLink 是否已赋值
                     * @return ClearLink 是否已赋值
                     * 
                     */
                    bool ClearLinkHasBeenSet() const;

                    /**
                     * 获取<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度</p>
                     * @return MainCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度</p>
                     * 
                     */
                    std::string GetMainCyclicConfig() const;

                    /**
                     * 设置<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度</p>
                     * @param _mainCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度</p>
                     * 
                     */
                    void SetMainCyclicConfig(const std::string& _mainCyclicConfig);

                    /**
                     * 判断参数 MainCyclicConfig 是否已赋值
                     * @return MainCyclicConfig 是否已赋值
                     * 
                     */
                    bool MainCyclicConfigHasBeenSet() const;

                    /**
                     * 获取<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围</p>
                     * @return SubordinateCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围</p>
                     * 
                     */
                    std::string GetSubordinateCyclicConfig() const;

                    /**
                     * 设置<p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围</p>
                     * @param _subordinateCyclicConfig <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围</p>
                     * 
                     */
                    void SetSubordinateCyclicConfig(const std::string& _subordinateCyclicConfig);

                    /**
                     * 判断参数 SubordinateCyclicConfig 是否已赋值
                     * @return SubordinateCyclicConfig 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicConfigHasBeenSet() const;

                    /**
                     * 获取<p>分钟任务相位偏移</p>
                     * @return MinuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    uint64_t GetMinuteOffset() const;

                    /**
                     * 设置<p>分钟任务相位偏移</p>
                     * @param _minuteOffset <p>分钟任务相位偏移</p>
                     * 
                     */
                    void SetMinuteOffset(const uint64_t& _minuteOffset);

                    /**
                     * 判断参数 MinuteOffset 是否已赋值
                     * @return MinuteOffset 是否已赋值
                     * 
                     */
                    bool MinuteOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>工作流ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>延迟时间</p>
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>启动时间</p>
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>任务依赖</p>
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指定运行时间</p>
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * <p>调度周期时间单位</p>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>调度周期</p>
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>执行时间左闭区间</p>
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间右闭区间</p>
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>任务初始化策略，T_PLUS_1、T_PLUS_0、T_MINUS_1</p>
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * <p>工作流依赖，yes or no</p>
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>CrontabExpression</p>
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>0：不修改<br>1：将任务的上游依赖配置改为默认值</p>
                     */
                    std::string m_modifyCycleValue;
                    bool m_modifyCycleValueHasBeenSet;

                    /**
                     * <p>是否开启日历调度 1 开启 0关闭</p>
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * <p>日历名称</p>
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * <p>日历id</p>
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * <p>时区</p>
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>是否自动清理不支持的任务链接</p>
                     */
                    bool m_clearLink;
                    bool m_clearLinkHasBeenSet;

                    /**
                     * <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-时间维度</p>
                     */
                    std::string m_mainCyclicConfig;
                    bool m_mainCyclicConfigHasBeenSet;

                    /**
                     * <p>ModifyCycleValue为1的时候生效，表示默认修改的上游依赖-实例范围</p>
                     */
                    std::string m_subordinateCyclicConfig;
                    bool m_subordinateCyclicConfigHasBeenSet;

                    /**
                     * <p>分钟任务相位偏移</p>
                     */
                    uint64_t m_minuteOffset;
                    bool m_minuteOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENEWWORKFLOWSCHEDULERINFODSREQUEST_H_
