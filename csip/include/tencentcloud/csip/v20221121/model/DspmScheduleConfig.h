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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 调度任务配置
                */
                class DspmScheduleConfig : public AbstractModel
                {
                public:
                    DspmScheduleConfig();
                    ~DspmScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度类型: daily(按天), weekly(按周), monthly(按月)
                     * @return ScheduleType 调度类型: daily(按天), weekly(按周), monthly(按月)
                     * 
                     */
                    std::string GetScheduleType() const;

                    /**
                     * 设置调度类型: daily(按天), weekly(按周), monthly(按月)
                     * @param _scheduleType 调度类型: daily(按天), weekly(按周), monthly(按月)
                     * 
                     */
                    void SetScheduleType(const std::string& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取按天不传，按周调度配置（星期几 (1=周一, ..., 7=周日)），按月调度配置（每月第几天 (1-31)）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Day 按天不传，按周调度配置（星期几 (1=周一, ..., 7=周日)），按月调度配置（每月第几天 (1-31)）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDay() const;

                    /**
                     * 设置按天不传，按周调度配置（星期几 (1=周一, ..., 7=周日)），按月调度配置（每月第几天 (1-31)）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _day 按天不传，按周调度配置（星期几 (1=周一, ..., 7=周日)），按月调度配置（每月第几天 (1-31)）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDay(const uint64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                    /**
                     * 获取调度时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 调度时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置调度时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 调度时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取时区,默认东八区（Asia/Shanghai）
                     * @return TimeZone 时区,默认东八区（Asia/Shanghai）
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区,默认东八区（Asia/Shanghai）
                     * @param _timeZone 时区,默认东八区（Asia/Shanghai）
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 调度类型: daily(按天), weekly(按周), monthly(按月)
                     */
                    std::string m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * 按天不传，按周调度配置（星期几 (1=周一, ..., 7=周日)），按月调度配置（每月第几天 (1-31)）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_day;
                    bool m_dayHasBeenSet;

                    /**
                     * 调度时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 时区,默认东八区（Asia/Shanghai）
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSCHEDULECONFIG_H_
