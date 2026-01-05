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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流调度配置
                */
                class WorkflowTriggerConfig : public AbstractModel
                {
                public:
                    WorkflowTriggerConfig();
                    ~WorkflowTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN
- 文件到达：FILE_ARRIVAL

注意：
- TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMode 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN
- 文件到达：FILE_ARRIVAL

注意：
- TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN
- 文件到达：FILE_ARRIVAL

注意：
- TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMode 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN
- 文件到达：FILE_ARRIVAL

注意：
- TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                    /**
                     * 获取WorkflowTriggerConfig转换成Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo WorkflowTriggerConfig转换成Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置WorkflowTriggerConfig转换成Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo WorkflowTriggerConfig转换成Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone 调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone 调度时区
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
                     * 获取调度生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 调度生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置调度生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 调度生效时间
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
                     * 获取调度结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 调度结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置调度结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 调度结束时间
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
                     * 获取配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigMode 配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigMode() const;

                    /**
                     * 设置配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configMode 配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigMode(const std::string& _configMode);

                    /**
                     * 判断参数 ConfigMode 是否已赋值
                     * @return ConfigMode 是否已赋值
                     * 
                     */
                    bool ConfigModeHasBeenSet() const;

                    /**
                     * 获取周期类型：支持的类型为
ONEOFF_CYCLE: 一次性
YEAR_CYCLE: 年
MONTH_CYCLE: 月
WEEK_CYCLE: 周
DAY_CYCLE: 天
HOUR_CYCLE: 小时
MINUTE_CYCLE: 分钟
CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 周期类型：支持的类型为
ONEOFF_CYCLE: 一次性
YEAR_CYCLE: 年
MONTH_CYCLE: 月
WEEK_CYCLE: 周
DAY_CYCLE: 天
HOUR_CYCLE: 小时
MINUTE_CYCLE: 分钟
CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型：支持的类型为
ONEOFF_CYCLE: 一次性
YEAR_CYCLE: 年
MONTH_CYCLE: 月
WEEK_CYCLE: 周
DAY_CYCLE: 天
HOUR_CYCLE: 小时
MINUTE_CYCLE: 分钟
CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 周期类型：支持的类型为
ONEOFF_CYCLE: 一次性
YEAR_CYCLE: 年
MONTH_CYCLE: 月
WEEK_CYCLE: 周
DAY_CYCLE: 天
HOUR_CYCLE: 小时
MINUTE_CYCLE: 分钟
CRONTAB_CYCLE: crontab表达式类型
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
                     * 获取cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression cron表达式
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
                     * 获取triggerId, uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId triggerId, uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置triggerId, uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId triggerId, uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取文件到达模式下	存储系统中的监听路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileArrivalPath 文件到达模式下	存储系统中的监听路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileArrivalPath() const;

                    /**
                     * 设置文件到达模式下	存储系统中的监听路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileArrivalPath 文件到达模式下	存储系统中的监听路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileArrivalPath(const std::string& _fileArrivalPath);

                    /**
                     * 判断参数 FileArrivalPath 是否已赋值
                     * @return FileArrivalPath 是否已赋值
                     * 
                     */
                    bool FileArrivalPathHasBeenSet() const;

                    /**
                     * 获取文件到达模式下	触发最短间隔时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMinimumIntervalSecond 文件到达模式下	触发最短间隔时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerMinimumIntervalSecond() const;

                    /**
                     * 设置文件到达模式下	触发最短间隔时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMinimumIntervalSecond 文件到达模式下	触发最短间隔时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerMinimumIntervalSecond(const uint64_t& _triggerMinimumIntervalSecond);

                    /**
                     * 判断参数 TriggerMinimumIntervalSecond 是否已赋值
                     * @return TriggerMinimumIntervalSecond 是否已赋值
                     * 
                     */
                    bool TriggerMinimumIntervalSecondHasBeenSet() const;

                    /**
                     * 获取文件到达模式下	触发等待时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerWaitTimeSecond 文件到达模式下	触发等待时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerWaitTimeSecond() const;

                    /**
                     * 设置文件到达模式下	触发等待时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerWaitTimeSecond 文件到达模式下	触发等待时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerWaitTimeSecond(const uint64_t& _triggerWaitTimeSecond);

                    /**
                     * 判断参数 TriggerWaitTimeSecond 是否已赋值
                     * @return TriggerWaitTimeSecond 是否已赋值
                     * 
                     */
                    bool TriggerWaitTimeSecondHasBeenSet() const;

                    /**
                     * 获取Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerStatus(const std::string& _schedulerStatus);

                    /**
                     * 判断参数 SchedulerStatus 是否已赋值
                     * @return SchedulerStatus 是否已赋值
                     * 
                     */
                    bool SchedulerStatusHasBeenSet() const;

                private:

                    /**
                     * 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN
- 文件到达：FILE_ARRIVAL

注意：
- TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * WorkflowTriggerConfig转换成Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 调度生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 调度结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configMode;
                    bool m_configModeHasBeenSet;

                    /**
                     * 周期类型：支持的类型为
ONEOFF_CYCLE: 一次性
YEAR_CYCLE: 年
MONTH_CYCLE: 月
WEEK_CYCLE: 周
DAY_CYCLE: 天
HOUR_CYCLE: 小时
MINUTE_CYCLE: 分钟
CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * triggerId, uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * 文件到达模式下	存储系统中的监听路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileArrivalPath;
                    bool m_fileArrivalPathHasBeenSet;

                    /**
                     * 文件到达模式下	触发最短间隔时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerMinimumIntervalSecond;
                    bool m_triggerMinimumIntervalSecondHasBeenSet;

                    /**
                     * 文件到达模式下	触发等待时间（单位：秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerWaitTimeSecond;
                    bool m_triggerWaitTimeSecondHasBeenSet;

                    /**
                     * Trigger 状态 启动ACTIVE，暂停PAUSED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWTRIGGERCONFIG_H_
