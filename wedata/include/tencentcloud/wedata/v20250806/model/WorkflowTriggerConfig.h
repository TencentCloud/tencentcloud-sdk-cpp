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
                     * 获取<p>触发方式，非必填，外部结构的TriggerMode字段优先级比当前字段高</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN（暂不支持）</li><li>文件到达：FILE_ARRIVAL（暂不支持）</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；</li></ul><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMode <p>触发方式，非必填，外部结构的TriggerMode字段优先级比当前字段高</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN（暂不支持）</li><li>文件到达：FILE_ARRIVAL（暂不支持）</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；</li></ul><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>触发方式，非必填，外部结构的TriggerMode字段优先级比当前字段高</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN（暂不支持）</li><li>文件到达：FILE_ARRIVAL（暂不支持）</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；</li></ul><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMode <p>触发方式，非必填，外部结构的TriggerMode字段优先级比当前字段高</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN（暂不支持）</li><li>文件到达：FILE_ARRIVAL（暂不支持）</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；</li></ul><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
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
                     * 获取<p>WorkflowTriggerConfig转换成Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>WorkflowTriggerConfig转换成Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>WorkflowTriggerConfig转换成Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>WorkflowTriggerConfig转换成Json格式，对账使用</p>
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
                     * 获取<p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>调度时区</p>
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
                     * 获取<p>调度生效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>调度生效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>调度生效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>调度生效时间</p>
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
                     * 获取<p>调度结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>调度结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>调度结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>调度结束时间</p>
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
                     * 获取<p>配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigMode <p>配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigMode() const;

                    /**
                     * 设置<p>配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configMode <p>配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION</p>
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
                     * 获取<p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
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
                     * 获取<p>cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression <p>cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression <p>cron表达式</p>
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
                     * 获取<p>triggerId, uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId <p>triggerId, uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>triggerId, uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId <p>triggerId, uuid</p>
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
                     * 获取<p>文件到达模式下    存储系统中的监听路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileArrivalPath <p>文件到达模式下    存储系统中的监听路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileArrivalPath() const;

                    /**
                     * 设置<p>文件到达模式下    存储系统中的监听路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileArrivalPath <p>文件到达模式下    存储系统中的监听路径</p>
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
                     * 获取<p>文件到达模式下    触发最短间隔时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMinimumIntervalSecond <p>文件到达模式下    触发最短间隔时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerMinimumIntervalSecond() const;

                    /**
                     * 设置<p>文件到达模式下    触发最短间隔时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMinimumIntervalSecond <p>文件到达模式下    触发最短间隔时间（单位：秒）</p>
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
                     * 获取<p>文件到达模式下    触发等待时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerWaitTimeSecond <p>文件到达模式下    触发等待时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerWaitTimeSecond() const;

                    /**
                     * 设置<p>文件到达模式下    触发等待时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerWaitTimeSecond <p>文件到达模式下    触发等待时间（单位：秒）</p>
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
                     * 获取<p>Trigger 状态 启动ACTIVE，暂停PAUSED。外部的TriggerStatus优先级大于当前值</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED。外部的TriggerStatus优先级大于当前值</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置<p>Trigger 状态 启动ACTIVE，暂停PAUSED。外部的TriggerStatus优先级大于当前值</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED。外部的TriggerStatus优先级大于当前值</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
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
                     * <p>触发方式，非必填，外部结构的TriggerMode字段优先级比当前字段高</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN（暂不支持）</li><li>文件到达：FILE_ARRIVAL（暂不支持）</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 和 CONTINUE_RUN 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>FILE_ARRIVAL 模式下，FileArrivalPath、TriggerMinimumIntervalSecond、TriggerWaitTimeSecond 必填；</li></ul><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * <p>WorkflowTriggerConfig转换成Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>调度生效时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>调度结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>配置方式，常规：COMMON，CRON表达式：CRON_EXPRESSION</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configMode;
                    bool m_configModeHasBeenSet;

                    /**
                     * <p>周期类型：支持的类型为<br>ONEOFF_CYCLE: 一次性<br>YEAR_CYCLE: 年<br>MONTH_CYCLE: 月<br>WEEK_CYCLE: 周<br>DAY_CYCLE: 天<br>HOUR_CYCLE: 小时<br>MINUTE_CYCLE: 分钟<br>CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>triggerId, uuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>文件到达模式下    存储系统中的监听路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileArrivalPath;
                    bool m_fileArrivalPathHasBeenSet;

                    /**
                     * <p>文件到达模式下    触发最短间隔时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerMinimumIntervalSecond;
                    bool m_triggerMinimumIntervalSecondHasBeenSet;

                    /**
                     * <p>文件到达模式下    触发等待时间（单位：秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerWaitTimeSecond;
                    bool m_triggerWaitTimeSecondHasBeenSet;

                    /**
                     * <p>Trigger 状态 启动ACTIVE，暂停PAUSED。外部的TriggerStatus优先级大于当前值</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
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
