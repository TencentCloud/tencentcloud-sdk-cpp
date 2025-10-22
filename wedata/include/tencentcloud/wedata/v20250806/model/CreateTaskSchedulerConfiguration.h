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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/EventListener.h>
#include <tencentcloud/wedata/v20250806/model/OutTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 创建任务调度配置信息
                */
                class CreateTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    CreateTaskSchedulerConfiguration();
                    ~CreateTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周期类型：默认为 DAY_CYCLE

支持的类型为 

* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * @return CycleType 周期类型：默认为 DAY_CYCLE

支持的类型为 

* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型：默认为 DAY_CYCLE

支持的类型为 

* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     * @param _cycleType 周期类型：默认为 DAY_CYCLE

支持的类型为 

* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
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
                     * 获取时区，默认为 UTC+8
                     * @return ScheduleTimeZone 时区，默认为 UTC+8
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置时区，默认为 UTC+8
                     * @param _scheduleTimeZone 时区，默认为 UTC+8
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
                     * 获取Cron表达式，默认为 0 0 0 * * ? * 
                     * @return CrontabExpression Cron表达式，默认为 0 0 0 * * ? * 
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置Cron表达式，默认为 0 0 0 * * ? * 
                     * @param _crontabExpression Cron表达式，默认为 0 0 0 * * ? * 
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
                     * 获取生效日期，默认为当前日期的 00:00:00
                     * @return StartTime 生效日期，默认为当前日期的 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置生效日期，默认为当前日期的 00:00:00
                     * @param _startTime 生效日期，默认为当前日期的 00:00:00
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
                     * 获取结束日期，默认为 2099-12-31 23:59:59
                     * @return EndTime 结束日期，默认为 2099-12-31 23:59:59
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期，默认为 2099-12-31 23:59:59
                     * @param _endTime 结束日期，默认为 2099-12-31 23:59:59
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
                     * 获取执行时间 左闭区间，默认 00:00
                     * @return ExecutionStartTime 执行时间 左闭区间，默认 00:00
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间 左闭区间，默认 00:00
                     * @param _executionStartTime 执行时间 左闭区间，默认 00:00
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
                     * 获取执行时间 右闭区间，默认 23:59
                     * @return ExecutionEndTime 执行时间 右闭区间，默认 23:59
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间 右闭区间，默认 23:59
                     * @param _executionEndTime 执行时间 右闭区间，默认 23:59
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
                     * 获取调度类型: 0 正常调度 1 空跑调度，默认为 0
                     * @return ScheduleRunType 调度类型: 0 正常调度 1 空跑调度，默认为 0
                     * 
                     */
                    std::string GetScheduleRunType() const;

                    /**
                     * 设置调度类型: 0 正常调度 1 空跑调度，默认为 0
                     * @param _scheduleRunType 调度类型: 0 正常调度 1 空跑调度，默认为 0
                     * 
                     */
                    void SetScheduleRunType(const std::string& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0
                     * @return CalendarOpen 日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0
                     * @param _calendarOpen 日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0
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
                     * 获取日历调度 日历 ID
                     * @return CalendarId 日历调度 日历 ID
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置日历调度 日历 ID
                     * @param _calendarId 日历调度 日历 ID
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
                     * 获取自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)
                     * @return SelfDepend 自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)
                     * @param _selfDepend 自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)
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
                     * 获取上游依赖数组
                     * @return UpstreamDependencyConfigList 上游依赖数组
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置上游依赖数组
                     * @param _upstreamDependencyConfigList 上游依赖数组
                     * 
                     */
                    void SetUpstreamDependencyConfigList(const std::vector<DependencyTaskBrief>& _upstreamDependencyConfigList);

                    /**
                     * 判断参数 UpstreamDependencyConfigList 是否已赋值
                     * @return UpstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool UpstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取事件数组
                     * @return EventListenerList 事件数组
                     * 
                     */
                    std::vector<EventListener> GetEventListenerList() const;

                    /**
                     * 设置事件数组
                     * @param _eventListenerList 事件数组
                     * 
                     */
                    void SetEventListenerList(const std::vector<EventListener>& _eventListenerList);

                    /**
                     * 判断参数 EventListenerList 是否已赋值
                     * @return EventListenerList 是否已赋值
                     * 
                     */
                    bool EventListenerListHasBeenSet() const;

                    /**
                     * 获取任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
                     * @return RunPriority 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
                     * 
                     */
                    std::string GetRunPriority() const;

                    /**
                     * 设置任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
                     * @param _runPriority 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
                     * 
                     */
                    void SetRunPriority(const std::string& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取重试策略 重试等待时间,单位分钟: 默认: 5
                     * @return RetryWait 重试策略 重试等待时间,单位分钟: 默认: 5
                     * 
                     */
                    std::string GetRetryWait() const;

                    /**
                     * 设置重试策略 重试等待时间,单位分钟: 默认: 5
                     * @param _retryWait 重试策略 重试等待时间,单位分钟: 默认: 5
                     * 
                     */
                    void SetRetryWait(const std::string& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取重试策略 最大尝试次数, 默认: 4
                     * @return MaxRetryAttempts 重试策略 最大尝试次数, 默认: 4
                     * 
                     */
                    std::string GetMaxRetryAttempts() const;

                    /**
                     * 设置重试策略 最大尝试次数, 默认: 4
                     * @param _maxRetryAttempts 重试策略 最大尝试次数, 默认: 4
                     * 
                     */
                    void SetMaxRetryAttempts(const std::string& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * 
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取超时处理策略 运行耗时超时（单位：分钟）默认为 -1
                     * @return ExecutionTTL 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
                     * 
                     */
                    std::string GetExecutionTTL() const;

                    /**
                     * 设置超时处理策略 运行耗时超时（单位：分钟）默认为 -1
                     * @param _executionTTL 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
                     * 
                     */
                    void SetExecutionTTL(const std::string& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * 
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
                     * @return WaitExecutionTotalTTL 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
                     * 
                     */
                    std::string GetWaitExecutionTotalTTL() const;

                    /**
                     * 设置超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
                     * @param _waitExecutionTotalTTL 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
                     * 
                     */
                    void SetWaitExecutionTotalTTL(const std::string& _waitExecutionTotalTTL);

                    /**
                     * 判断参数 WaitExecutionTotalTTL 是否已赋值
                     * @return WaitExecutionTotalTTL 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLHasBeenSet() const;

                    /**
                     * 获取重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
                     * @return AllowRedoType 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
                     * @param _allowRedoType 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取输出参数数组
                     * @return ParamTaskOutList 输出参数数组
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置输出参数数组
                     * @param _paramTaskOutList 输出参数数组
                     * 
                     */
                    void SetParamTaskOutList(const std::vector<OutTaskParameter>& _paramTaskOutList);

                    /**
                     * 判断参数 ParamTaskOutList 是否已赋值
                     * @return ParamTaskOutList 是否已赋值
                     * 
                     */
                    bool ParamTaskOutListHasBeenSet() const;

                    /**
                     * 获取输入参数数组
                     * @return ParamTaskInList 输入参数数组
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置输入参数数组
                     * @param _paramTaskInList 输入参数数组
                     * 
                     */
                    void SetParamTaskInList(const std::vector<InTaskParameter>& _paramTaskInList);

                    /**
                     * 判断参数 ParamTaskInList 是否已赋值
                     * @return ParamTaskInList 是否已赋值
                     * 
                     */
                    bool ParamTaskInListHasBeenSet() const;

                    /**
                     * 获取产出登记
                     * @return TaskOutputRegistryList 产出登记
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置产出登记
                     * @param _taskOutputRegistryList 产出登记
                     * 
                     */
                    void SetTaskOutputRegistryList(const std::vector<TaskDataRegistry>& _taskOutputRegistryList);

                    /**
                     * 判断参数 TaskOutputRegistryList 是否已赋值
                     * @return TaskOutputRegistryList 是否已赋值
                     * 
                     */
                    bool TaskOutputRegistryListHasBeenSet() const;

                    /**
                     * 获取**实例生成策略**
* T_PLUS_0: T+0生成,默认策略
* T_PLUS_1: T+1生成
                     * @return InitStrategy **实例生成策略**
* T_PLUS_0: T+0生成,默认策略
* T_PLUS_1: T+1生成
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置**实例生成策略**
* T_PLUS_0: T+0生成,默认策略
* T_PLUS_1: T+1生成
                     * @param _initStrategy **实例生成策略**
* T_PLUS_0: T+0生成,默认策略
* T_PLUS_1: T+1生成
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                private:

                    /**
                     * 周期类型：默认为 DAY_CYCLE

支持的类型为 

* ONEOFF_CYCLE: 一次性
* YEAR_CYCLE: 年
* MONTH_CYCLE: 月
* WEEK_CYCLE: 周
* DAY_CYCLE: 天
* HOUR_CYCLE: 小时
* MINUTE_CYCLE: 分钟
* CRONTAB_CYCLE: crontab表达式类型
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 时区，默认为 UTC+8
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * Cron表达式，默认为 0 0 0 * * ? * 
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 生效日期，默认为当前日期的 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期，默认为 2099-12-31 23:59:59
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行时间 左闭区间，默认 00:00
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间 右闭区间，默认 23:59
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 调度类型: 0 正常调度 1 空跑调度，默认为 0
                     */
                    std::string m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * 日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * 日历调度 日历 ID
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * 自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * 上游依赖数组
                     */
                    std::vector<DependencyTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * 事件数组
                     */
                    std::vector<EventListener> m_eventListenerList;
                    bool m_eventListenerListHasBeenSet;

                    /**
                     * 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
                     */
                    std::string m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 重试策略 重试等待时间,单位分钟: 默认: 5
                     */
                    std::string m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 重试策略 最大尝试次数, 默认: 4
                     */
                    std::string m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
                     */
                    std::string m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
                     */
                    std::string m_waitExecutionTotalTTL;
                    bool m_waitExecutionTotalTTLHasBeenSet;

                    /**
                     * 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * 输出参数数组
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * 输入参数数组
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * 产出登记
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                    /**
                     * **实例生成策略**
* T_PLUS_0: T+0生成,默认策略
* T_PLUS_1: T+1生成
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKSCHEDULERCONFIGURATION_H_
