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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERCONFIGURATION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerAdvancedConfiguration.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流调度配置。
                */
                class WorkflowTriggerConfiguration : public AbstractModel
                {
                public:
                    WorkflowTriggerConfiguration();
                    ~WorkflowTriggerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度配置ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId 调度配置ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置调度配置ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId 调度配置ID，创建时无需传入，由服务端生成
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
                     * 获取调度状态 启动：START，暂停：PAUSE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus 调度状态 启动：START，暂停：PAUSE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置调度状态 启动：START，暂停：PAUSE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus 调度状态 启动：START，暂停：PAUSE
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

                    /**
                     * 获取触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN

注意：
- TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- CONTINUE_RUN 模式下，AdvancedConfig必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMode 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN

注意：
- TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- CONTINUE_RUN 模式下，AdvancedConfig必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN

注意：
- TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- CONTINUE_RUN 模式下，AdvancedConfig必填；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMode 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN

注意：
- TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- CONTINUE_RUN 模式下，AdvancedConfig必填；
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
                     * 获取调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerTimeZone 调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerTimeZone() const;

                    /**
                     * 设置调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerTimeZone 调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerTimeZone(const std::string& _schedulerTimeZone);

                    /**
                     * 判断参数 SchedulerTimeZone 是否已赋值
                     * @return SchedulerTimeZone 是否已赋值
                     * 
                     */
                    bool SchedulerTimeZoneHasBeenSet() const;

                    /**
                     * 获取调度生效时间，单位：毫秒时间戳。必须小于 EndTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 调度生效时间，单位：毫秒时间戳。必须小于 EndTime
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置调度生效时间，单位：毫秒时间戳。必须小于 EndTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 调度生效时间，单位：毫秒时间戳。必须小于 EndTime
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
                     * 获取调度结束时间，单位：毫秒时间戳。必须大于 StartTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 调度结束时间，单位：毫秒时间戳。必须大于 StartTime
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置调度结束时间，单位：毫秒时间戳。必须大于 StartTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 调度结束时间，单位：毫秒时间戳。必须大于 StartTime
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
                     * 获取周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天
HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天
HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天
HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天
HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型
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
                     * 获取Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo Json格式，对账使用
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
                     * 获取高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedConfig 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTriggerAdvancedConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedConfig 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedConfig(const WorkflowTriggerAdvancedConfiguration& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * 调度配置ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * 调度状态 启动：START，暂停：PAUSE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                    /**
                     * 触发方式，
- 定时触发：TIME_TRIGGER
- 持续运行：CONTINUE_RUN

注意：
- TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；
- CONTINUE_RUN 模式下，AdvancedConfig必填；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * 调度时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerTimeZone;
                    bool m_schedulerTimeZoneHasBeenSet;

                    /**
                     * 调度生效时间，单位：毫秒时间戳。必须小于 EndTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 调度结束时间，单位：毫秒时间戳。必须大于 StartTime
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
                     * 周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天
HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型
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
                     * Json格式，对账使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTriggerAdvancedConfiguration m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTRIGGERCONFIGURATION_H_
