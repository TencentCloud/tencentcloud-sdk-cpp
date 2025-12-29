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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_

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
                * 告警超时配置规则信息
                */
                class TimeOutStrategyInfo : public AbstractModel
                {
                public:
                    TimeOutStrategyInfo();
                    ~TimeOutStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取超时告警超时配置：

1.预计运行耗时超时，2.预计完成时间超时，3.预计等待调度耗时超时，4.预计周期内完成但实际未完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 超时告警超时配置：

1.预计运行耗时超时，2.预计完成时间超时，3.预计等待调度耗时超时，4.预计周期内完成但实际未完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置超时告警超时配置：

1.预计运行耗时超时，2.预计完成时间超时，3.预计等待调度耗时超时，4.预计周期内完成但实际未完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 超时告警超时配置：

1.预计运行耗时超时，2.预计完成时间超时，3.预计等待调度耗时超时，4.预计周期内完成但实际未完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取超时值配置类型

1--指定值
2--平均值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 超时值配置类型

1--指定值
2--平均值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置超时值配置类型

1--指定值
2--平均值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 超时值配置类型

1--指定值
2--平均值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取超时指定值小时， 默认 为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hour 超时指定值小时， 默认 为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHour() const;

                    /**
                     * 设置超时指定值小时， 默认 为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hour 超时指定值小时， 默认 为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHour(const uint64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取超时指定值分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min 超时指定值分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置超时指定值分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _min 超时指定值分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取超时时间对应的时区配置， 如 UTC+7, 默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone 超时时间对应的时区配置， 如 UTC+7, 默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置超时时间对应的时区配置， 如 UTC+7, 默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone 超时时间对应的时区配置， 如 UTC+7, 默认为UTC+8
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
                     * 获取秒（用于 Spark Streaming 策略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Second 秒（用于 Spark Streaming 策略）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSecond() const;

                    /**
                     * 设置秒（用于 Spark Streaming 策略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _second 秒（用于 Spark Streaming 策略）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecond(const int64_t& _second);

                    /**
                     * 判断参数 Second 是否已赋值
                     * @return Second 是否已赋值
                     * 
                     */
                    bool SecondHasBeenSet() const;

                    /**
                     * 获取次数（用于 Spark Streaming 重试次数超限策略，ruleType=10）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Times 次数（用于 Spark Streaming 重试次数超限策略，ruleType=10）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimes() const;

                    /**
                     * 设置次数（用于 Spark Streaming 重试次数超限策略，ruleType=10）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _times 次数（用于 Spark Streaming 重试次数超限策略，ruleType=10）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimes(const int64_t& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取告警触发频率（用于 Spark Streaming 策略 ruleType=8/9/10）
         * 单位：分钟，范围：5-1440
         * 告警触发后，在该时间内暂停检测，避免告警风暴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmTriggerFrequency 告警触发频率（用于 Spark Streaming 策略 ruleType=8/9/10）
         * 单位：分钟，范围：5-1440
         * 告警触发后，在该时间内暂停检测，避免告警风暴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlarmTriggerFrequency() const;

                    /**
                     * 设置告警触发频率（用于 Spark Streaming 策略 ruleType=8/9/10）
         * 单位：分钟，范围：5-1440
         * 告警触发后，在该时间内暂停检测，避免告警风暴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmTriggerFrequency 告警触发频率（用于 Spark Streaming 策略 ruleType=8/9/10）
         * 单位：分钟，范围：5-1440
         * 告警触发后，在该时间内暂停检测，避免告警风暴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmTriggerFrequency(const int64_t& _alarmTriggerFrequency);

                    /**
                     * 判断参数 AlarmTriggerFrequency 是否已赋值
                     * @return AlarmTriggerFrequency 是否已赋值
                     * 
                     */
                    bool AlarmTriggerFrequencyHasBeenSet() const;

                private:

                    /**
                     * 超时告警超时配置：

1.预计运行耗时超时，2.预计完成时间超时，3.预计等待调度耗时超时，4.预计周期内完成但实际未完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 超时值配置类型

1--指定值
2--平均值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 超时指定值小时， 默认 为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 超时指定值分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 超时时间对应的时区配置， 如 UTC+7, 默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 秒（用于 Spark Streaming 策略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_second;
                    bool m_secondHasBeenSet;

                    /**
                     * 次数（用于 Spark Streaming 重试次数超限策略，ruleType=10）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * 告警触发频率（用于 Spark Streaming 策略 ruleType=8/9/10）
         * 单位：分钟，范围：5-1440
         * 告警触发后，在该时间内暂停检测，避免告警风暴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alarmTriggerFrequency;
                    bool m_alarmTriggerFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TIMEOUTSTRATEGYINFO_H_
