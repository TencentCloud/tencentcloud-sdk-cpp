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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 计划调度时间配置
                */
                class ScheduledTimeConfig : public AbstractModel
                {
                public:
                    ScheduledTimeConfig();
                    ~ScheduledTimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调度时区，IANA 时区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledTimeZone <p>调度时区，IANA 时区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduledTimeZone() const;

                    /**
                     * 设置<p>调度时区，IANA 时区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledTimeZone <p>调度时区，IANA 时区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduledTimeZone(const std::string& _scheduledTimeZone);

                    /**
                     * 判断参数 ScheduledTimeZone 是否已赋值
                     * @return ScheduledTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduledTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>调度生效开始时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>调度生效开始时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>调度生效开始时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>调度生效开始时间</p><p>参数格式：毫秒时间戳（UTC）</p>
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
                     * 获取<p>调度生效结束时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>调度生效结束时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>调度生效结束时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>调度生效结束时间</p><p>参数格式：毫秒时间戳（UTC）</p>
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
                     * 获取<p>周期类型</p><p>枚举值：</p><ul><li>DAY_CYCLE： 天</li><li>HOUR_CYCLE： 小时</li><li>MINUTE_CYCLE： 分钟</li><li>WEEK_CYCLE： 周</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>周期类型</p><p>枚举值：</p><ul><li>DAY_CYCLE： 天</li><li>HOUR_CYCLE： 小时</li><li>MINUTE_CYCLE： 分钟</li><li>WEEK_CYCLE： 周</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型</p><p>枚举值：</p><ul><li>DAY_CYCLE： 天</li><li>HOUR_CYCLE： 小时</li><li>MINUTE_CYCLE： 分钟</li><li>WEEK_CYCLE： 周</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>周期类型</p><p>枚举值：</p><ul><li>DAY_CYCLE： 天</li><li>HOUR_CYCLE： 小时</li><li>MINUTE_CYCLE： 分钟</li><li>WEEK_CYCLE： 周</li></ul>
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
                     * 获取<p>周期步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleNum <p>周期步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleNum() const;

                    /**
                     * 设置<p>周期步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleNum <p>周期步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleNum(const int64_t& _cycleNum);

                    /**
                     * 判断参数 CycleNum 是否已赋值
                     * @return CycleNum 是否已赋值
                     * 
                     */
                    bool CycleNumHasBeenSet() const;

                private:

                    /**
                     * <p>调度时区，IANA 时区 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduledTimeZone;
                    bool m_scheduledTimeZoneHasBeenSet;

                    /**
                     * <p>调度生效开始时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>调度生效结束时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>周期类型</p><p>枚举值：</p><ul><li>DAY_CYCLE： 天</li><li>HOUR_CYCLE： 小时</li><li>MINUTE_CYCLE： 分钟</li><li>WEEK_CYCLE： 周</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>周期步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleNum;
                    bool m_cycleNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTIMECONFIG_H_
