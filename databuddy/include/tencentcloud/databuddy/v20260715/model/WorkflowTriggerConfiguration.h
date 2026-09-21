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
                     * 获取<p>调度配置ID，创建时无需传入，由服务端生成</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId <p>调度配置ID，创建时无需传入，由服务端生成</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>调度配置ID，创建时无需传入，由服务端生成</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId <p>调度配置ID，创建时无需传入，由服务端生成</p>
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
                     * 获取<p>调度状态 启动：START，暂停：PAUSE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerStatus <p>调度状态 启动：START，暂停：PAUSE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置<p>调度状态 启动：START，暂停：PAUSE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerStatus <p>调度状态 启动：START，暂停：PAUSE</p>
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
                     * 获取<p>触发方式，</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>CONTINUE_RUN 模式下，AdvancedConfig必填；</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMode <p>触发方式，</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>CONTINUE_RUN 模式下，AdvancedConfig必填；</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>触发方式，</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>CONTINUE_RUN 模式下，AdvancedConfig必填；</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerMode <p>触发方式，</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>CONTINUE_RUN 模式下，AdvancedConfig必填；</li></ul>
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
                     * 获取<p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerTimeZone <p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerTimeZone() const;

                    /**
                     * 设置<p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerTimeZone <p>调度时区</p>
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
                     * 获取<p>调度生效时间，单位：毫秒时间戳。必须小于 EndTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>调度生效时间，单位：毫秒时间戳。必须小于 EndTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>调度生效时间，单位：毫秒时间戳。必须小于 EndTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>调度生效时间，单位：毫秒时间戳。必须小于 EndTime</p>
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
                     * 获取<p>调度结束时间，单位：毫秒时间戳。必须大于 StartTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>调度结束时间，单位：毫秒时间戳。必须大于 StartTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>调度结束时间，单位：毫秒时间戳。必须大于 StartTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>调度结束时间，单位：毫秒时间戳。必须大于 StartTime</p>
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
                     * 获取<p>周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天<br>HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天<br>HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天<br>HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天<br>HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型</p>
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
                     * 获取<p>Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>Json格式，对账使用</p>
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
                     * 获取<p>高级配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedConfig <p>高级配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTriggerAdvancedConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置<p>高级配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedConfig <p>高级配置</p>
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
                     * <p>调度配置ID，创建时无需传入，由服务端生成</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>调度状态 启动：START，暂停：PAUSE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                    /**
                     * <p>触发方式，</p><ul><li>定时触发：TIME_TRIGGER</li><li>持续运行：CONTINUE_RUN</li></ul><p>注意：</p><ul><li>TIME_TRIGGER 模式下，SchedulerStatus、SchedulerTimeZone、StartTime、EndTime、ConfigMode、CycleType、CrontabExpression 必填；</li><li>CONTINUE_RUN 模式下，AdvancedConfig必填；</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * <p>调度时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerTimeZone;
                    bool m_schedulerTimeZoneHasBeenSet;

                    /**
                     * <p>调度生效时间，单位：毫秒时间戳。必须小于 EndTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>调度结束时间，单位：毫秒时间戳。必须大于 StartTime</p>
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
                     * <p>周期类型：支持的类型为 ONEOFF_CYCLE: 一次性 YEAR_CYCLE: 年 MONTH_CYCLE: 月 WEEK_CYCLE: 周 DAY_CYCLE: 天<br>HOUR_CYCLE: 小时 MINUTE_CYCLE: 分钟 CRONTAB_CYCLE: crontab表达式类型</p>
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
                     * <p>Json格式，对账使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>高级配置</p>
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
