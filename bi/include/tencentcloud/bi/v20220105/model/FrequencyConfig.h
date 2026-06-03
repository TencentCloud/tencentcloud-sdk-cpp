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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 定时任务执行频率配置
                */
                class FrequencyConfig : public AbstractModel
                {
                public:
                    FrequencyConfig();
                    ~FrequencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Frequency 周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frequency 周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dates 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetDates() const;

                    /**
                     * 设置日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dates 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDates(const std::vector<int64_t>& _dates);

                    /**
                     * 判断参数 Dates 是否已赋值
                     * @return Dates 是否已赋值
                     * 
                     */
                    bool DatesHasBeenSet() const;

                    /**
                     * 获取时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 时间
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
                     * 获取间隔时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTime 间隔时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置间隔时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalTime 间隔时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取1:SECOND,2:MINUTE,3:HOUR,4:DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTimeUnit 1:SECOND,2:MINUTE,3:HOUR,4:DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalTimeUnit() const;

                    /**
                     * 设置1:SECOND,2:MINUTE,3:HOUR,4:DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalTimeUnit 1:SECOND,2:MINUTE,3:HOUR,4:DAY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalTimeUnit(const uint64_t& _intervalTimeUnit);

                    /**
                     * 判断参数 IntervalTimeUnit 是否已赋值
                     * @return IntervalTimeUnit 是否已赋值
                     * 
                     */
                    bool IntervalTimeUnitHasBeenSet() const;

                    /**
                     * 获取小时列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hours 小时列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetHours() const;

                    /**
                     * 设置小时列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hours 小时列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHours(const std::vector<int64_t>& _hours);

                    /**
                     * 判断参数 Hours 是否已赋值
                     * @return Hours 是否已赋值
                     * 
                     */
                    bool HoursHasBeenSet() const;

                    /**
                     * 获取分钟列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Minute 分钟列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetMinute() const;

                    /**
                     * 设置分钟列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minute 分钟列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinute(const std::vector<int64_t>& _minute);

                    /**
                     * 判断参数 Minute 是否已赋值
                     * @return Minute 是否已赋值
                     * 
                     */
                    bool MinuteHasBeenSet() const;

                private:

                    /**
                     * 周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_dates;
                    bool m_datesHasBeenSet;

                    /**
                     * 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 间隔时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 1:SECOND,2:MINUTE,3:HOUR,4:DAY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalTimeUnit;
                    bool m_intervalTimeUnitHasBeenSet;

                    /**
                     * 小时列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_hours;
                    bool m_hoursHasBeenSet;

                    /**
                     * 分钟列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_minute;
                    bool m_minuteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_FREQUENCYCONFIG_H_
