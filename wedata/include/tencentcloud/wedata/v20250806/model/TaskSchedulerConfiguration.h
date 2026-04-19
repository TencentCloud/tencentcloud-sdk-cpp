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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_

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
                * 任务调度配置信息
                */
                class TaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    TaskSchedulerConfiguration();
                    ~TaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>周期类型：支持的类型为</p><p>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>周期类型：支持的类型为</p><p>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型：支持的类型为</p><p>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>周期类型：支持的类型为</p><p>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
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
                     * 获取<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>时区</p>
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
                     * 获取<p>0 2 3 1,L,2 * ?</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression <p>0 2 3 1,L,2 * ?</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>0 2 3 1,L,2 * ?</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression <p>0 2 3 1,L,2 * ?</p>
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
                     * 获取<p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>生效日期</p>
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
                     * 获取<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束日期</p>
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
                     * 获取<p>执行时间 左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime <p>执行时间 左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间 左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime <p>执行时间 左闭区间</p>
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
                     * 获取<p>执行时间 右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime <p>执行时间 右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间 右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime <p>执行时间 右闭区间</p>
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
                     * 获取<p>日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarOpen <p>日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarOpen() const;

                    /**
                     * 设置<p>日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarOpen <p>日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0</p>
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
                     * 获取<p>日历调度 日历 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarId <p>日历调度 日历 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarId() const;

                    /**
                     * 设置<p>日历调度 日历 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarId <p>日历调度 日历 ID</p>
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
                     * 获取<p>日历调度 日历名称, 需要从 DescribeScheduleCalendarPageList 中获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalendarName <p>日历调度 日历名称, 需要从 DescribeScheduleCalendarPageList 中获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalendarName() const;

                    /**
                     * 设置<p>日历调度 日历名称, 需要从 DescribeScheduleCalendarPageList 中获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calendarName <p>日历调度 日历名称, 需要从 DescribeScheduleCalendarPageList 中获取</p>
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
                     * 获取<p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
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
                     * 获取<p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamDependencyConfigList <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置<p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamDependencyConfigList <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamDependencyConfigList <p>下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyTaskBrief> GetDownstreamDependencyConfigList() const;

                    /**
                     * 设置<p>下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamDependencyConfigList <p>下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownstreamDependencyConfigList(const std::vector<DependencyTaskBrief>& _downstreamDependencyConfigList);

                    /**
                     * 判断参数 DownstreamDependencyConfigList 是否已赋值
                     * @return DownstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool DownstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取<p>事件数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerList <p>事件数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventListener> GetEventListenerList() const;

                    /**
                     * 设置<p>事件数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerList <p>事件数组</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowRedoType <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置<p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowRedoType <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskOutList <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置<p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskOutList <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskInList <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置<p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskInList <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutputRegistryList <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置<p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutputRegistryList <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p><strong>实例生成策略</strong></p><ul><li>T_PLUS_0: T+0生成,默认策略</li><li>T_PLUS_1: T+1生成</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitStrategy <p><strong>实例生成策略</strong></p><ul><li>T_PLUS_0: T+0生成,默认策略</li><li>T_PLUS_1: T+1生成</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置<p><strong>实例生成策略</strong></p><ul><li>T_PLUS_0: T+0生成,默认策略</li><li>T_PLUS_1: T+1生成</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initStrategy <p><strong>实例生成策略</strong></p><ul><li>T_PLUS_0: T+0生成,默认策略</li><li>T_PLUS_1: T+1生成</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取<p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetScheduleRunType() const;

                    /**
                     * 设置<p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetScheduleRunType(const int64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * @deprecated
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取<p>（废弃，建议使用 DownstreamDependencyConfigList）下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownStreamDependencyConfigList <p>（废弃，建议使用 DownstreamDependencyConfigList）下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<DependencyTaskBrief> GetDownStreamDependencyConfigList() const;

                    /**
                     * 设置<p>（废弃，建议使用 DownstreamDependencyConfigList）下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downStreamDependencyConfigList <p>（废弃，建议使用 DownstreamDependencyConfigList）下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDownStreamDependencyConfigList(const std::vector<DependencyTaskBrief>& _downStreamDependencyConfigList);

                    /**
                     * 判断参数 DownStreamDependencyConfigList 是否已赋值
                     * @return DownStreamDependencyConfigList 是否已赋值
                     * @deprecated
                     */
                    bool DownStreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriority <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriority <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRunPriority(const uint64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * @deprecated
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * @deprecated
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryAttempts <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryAttempts <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMaxRetryAttempts(const int64_t& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * @deprecated
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTL <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTL <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetExecutionTTL(const int64_t& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * @deprecated
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitExecutionTotalTTL <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetWaitExecutionTotalTTL() const;

                    /**
                     * 设置<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitExecutionTotalTTL <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetWaitExecutionTotalTTL(const std::string& _waitExecutionTotalTTL);

                    /**
                     * 判断参数 WaitExecutionTotalTTL 是否已赋值
                     * @return WaitExecutionTotalTTL 是否已赋值
                     * @deprecated
                     */
                    bool WaitExecutionTotalTTLHasBeenSet() const;

                    /**
                     * 获取<p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleType <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置<p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleType <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriorityType <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置<p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriorityType <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunPriorityType(const int64_t& _runPriorityType);

                    /**
                     * 判断参数 RunPriorityType 是否已赋值
                     * @return RunPriorityType 是否已赋值
                     * 
                     */
                    bool RunPriorityTypeHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWaitMinute <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置<p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWaitMinute <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWaitMinute(const int64_t& _retryWaitMinute);

                    /**
                     * 判断参数 RetryWaitMinute 是否已赋值
                     * @return RetryWaitMinute 是否已赋值
                     * 
                     */
                    bool RetryWaitMinuteHasBeenSet() const;

                    /**
                     * 获取<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryNumber <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置<p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryNumber <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryNumber(const int64_t& _maxRetryNumber);

                    /**
                     * 判断参数 MaxRetryNumber 是否已赋值
                     * @return MaxRetryNumber 是否已赋值
                     * 
                     */
                    bool MaxRetryNumberHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTLMinute <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置<p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTLMinute <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTTLMinute(const int64_t& _executionTTLMinute);

                    /**
                     * 判断参数 ExecutionTTLMinute 是否已赋值
                     * @return ExecutionTTLMinute 是否已赋值
                     * 
                     */
                    bool ExecutionTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitExecutionTotalTTLMinute <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置<p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitExecutionTotalTTLMinute <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute);

                    /**
                     * 判断参数 WaitExecutionTotalTTLMinute 是否已赋值
                     * @return WaitExecutionTotalTTLMinute 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLMinuteHasBeenSet() const;

                    /**
                     * 获取<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTriggerPolicy() const;

                    /**
                     * 设置<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTriggerPolicy(const std::string& _dependencyTriggerPolicy);

                    /**
                     * 判断参数 DependencyTriggerPolicy 是否已赋值
                     * @return DependencyTriggerPolicy 是否已赋值
                     * 
                     */
                    bool DependencyTriggerPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowDownstreamDependency <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAllowDownstreamDependency() const;

                    /**
                     * 设置<p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowDownstreamDependency <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowDownstreamDependency(const int64_t& _allowDownstreamDependency);

                    /**
                     * 判断参数 AllowDownstreamDependency 是否已赋值
                     * @return AllowDownstreamDependency 是否已赋值
                     * 
                     */
                    bool AllowDownstreamDependencyHasBeenSet() const;

                private:

                    /**
                     * <p>周期类型：支持的类型为</p><p>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>0 2 3 1,L,2 * ?</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行时间 左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间 右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>日历调度 取值为 0 和 1， 1为打开，0为关闭，默认为0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarOpen;
                    bool m_calendarOpenHasBeenSet;

                    /**
                     * <p>日历调度 日历 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarId;
                    bool m_calendarIdHasBeenSet;

                    /**
                     * <p>日历调度 日历名称, 需要从 DescribeScheduleCalendarPageList 中获取</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calendarName;
                    bool m_calendarNameHasBeenSet;

                    /**
                     * <p>自依赖, 默认值 serial, 取值为：parallel(并行), serial(串行), orderly(有序)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>上游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * <p>下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyTaskBrief> m_downstreamDependencyConfigList;
                    bool m_downstreamDependencyConfigListHasBeenSet;

                    /**
                     * <p>事件数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventListener> m_eventListenerList;
                    bool m_eventListenerListHasBeenSet;

                    /**
                     * <p>重跑&amp;补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>输出参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * <p>输入参数数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * <p>产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                    /**
                     * <p><strong>实例生成策略</strong></p><ul><li>T_PLUS_0: T+0生成,默认策略</li><li>T_PLUS_1: T+1生成</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>（废弃，建议使用 DownstreamDependencyConfigList）下游依赖数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyTaskBrief> m_downStreamDependencyConfigList;
                    bool m_downStreamDependencyConfigListHasBeenSet;

                    /**
                     * <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitExecutionTotalTTL;
                    bool m_waitExecutionTotalTTLHasBeenSet;

                    /**
                     * <p>调度类型: 0 正常调度 1 空跑调度，默认为 0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * <p>任务调度优先级 运行优先级 4高 5中 6低 , 默认:6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * <p>重试策略 重试等待时间,单位分钟: 默认: 5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * <p>重试策略 最大尝试次数, 默认: 4</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * <p>超时处理策略 运行耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * <p>超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTriggerPolicy;
                    bool m_dependencyTriggerPolicyHasBeenSet;

                    /**
                     * <p>是否允许下游依赖 1允许 0不允许</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_allowDownstreamDependency;
                    bool m_allowDownstreamDependencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKSCHEDULERCONFIGURATION_H_
