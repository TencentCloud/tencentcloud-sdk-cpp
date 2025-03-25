/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DayRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/WeekRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/MonthRepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/NotRepeatStrategy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 定时伸缩任务策略
                */
                class RepeatStrategy : public AbstractModel
                {
                public:
                    RepeatStrategy();
                    ~RepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取取值范围"DAY","DOW","DOM","NONE"，分别表示按天重复、按周重复、按月重复和一次执行。必须填写
                     * @return RepeatType 取值范围"DAY","DOW","DOM","NONE"，分别表示按天重复、按周重复、按月重复和一次执行。必须填写
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置取值范围"DAY","DOW","DOM","NONE"，分别表示按天重复、按周重复、按月重复和一次执行。必须填写
                     * @param _repeatType 取值范围"DAY","DOW","DOM","NONE"，分别表示按天重复、按周重复、按月重复和一次执行。必须填写
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                    /**
                     * 获取按天重复规则，当RepeatType为"DAY"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayRepeat 按天重复规则，当RepeatType为"DAY"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DayRepeatStrategy GetDayRepeat() const;

                    /**
                     * 设置按天重复规则，当RepeatType为"DAY"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayRepeat 按天重复规则，当RepeatType为"DAY"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayRepeat(const DayRepeatStrategy& _dayRepeat);

                    /**
                     * 判断参数 DayRepeat 是否已赋值
                     * @return DayRepeat 是否已赋值
                     * 
                     */
                    bool DayRepeatHasBeenSet() const;

                    /**
                     * 获取按周重复规则，当RepeatType为"DOW"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekRepeat 按周重复规则，当RepeatType为"DOW"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WeekRepeatStrategy GetWeekRepeat() const;

                    /**
                     * 设置按周重复规则，当RepeatType为"DOW"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekRepeat 按周重复规则，当RepeatType为"DOW"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekRepeat(const WeekRepeatStrategy& _weekRepeat);

                    /**
                     * 判断参数 WeekRepeat 是否已赋值
                     * @return WeekRepeat 是否已赋值
                     * 
                     */
                    bool WeekRepeatHasBeenSet() const;

                    /**
                     * 获取按月重复规则，当RepeatType为"DOM"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthRepeat 按月重复规则，当RepeatType为"DOM"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MonthRepeatStrategy GetMonthRepeat() const;

                    /**
                     * 设置按月重复规则，当RepeatType为"DOM"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monthRepeat 按月重复规则，当RepeatType为"DOM"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonthRepeat(const MonthRepeatStrategy& _monthRepeat);

                    /**
                     * 判断参数 MonthRepeat 是否已赋值
                     * @return MonthRepeat 是否已赋值
                     * 
                     */
                    bool MonthRepeatHasBeenSet() const;

                    /**
                     * 获取一次执行规则，当RepeatType为"NONE"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotRepeat 一次执行规则，当RepeatType为"NONE"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NotRepeatStrategy GetNotRepeat() const;

                    /**
                     * 设置一次执行规则，当RepeatType为"NONE"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notRepeat 一次执行规则，当RepeatType为"NONE"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotRepeat(const NotRepeatStrategy& _notRepeat);

                    /**
                     * 判断参数 NotRepeat 是否已赋值
                     * @return NotRepeat 是否已赋值
                     * 
                     */
                    bool NotRepeatHasBeenSet() const;

                    /**
                     * 获取规则过期时间，超过该时间后，规则将自动置为暂停状态，形式为"2020-07-23 00:00:00"。必须填写
                     * @return Expire 规则过期时间，超过该时间后，规则将自动置为暂停状态，形式为"2020-07-23 00:00:00"。必须填写
                     * 
                     */
                    std::string GetExpire() const;

                    /**
                     * 设置规则过期时间，超过该时间后，规则将自动置为暂停状态，形式为"2020-07-23 00:00:00"。必须填写
                     * @param _expire 规则过期时间，超过该时间后，规则将自动置为暂停状态，形式为"2020-07-23 00:00:00"。必须填写
                     * 
                     */
                    void SetExpire(const std::string& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取周期性规则开始时间
                     * @return StartTime 周期性规则开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置周期性规则开始时间
                     * @param _startTime 周期性规则开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 取值范围"DAY","DOW","DOM","NONE"，分别表示按天重复、按周重复、按月重复和一次执行。必须填写
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * 按天重复规则，当RepeatType为"DAY"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DayRepeatStrategy m_dayRepeat;
                    bool m_dayRepeatHasBeenSet;

                    /**
                     * 按周重复规则，当RepeatType为"DOW"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WeekRepeatStrategy m_weekRepeat;
                    bool m_weekRepeatHasBeenSet;

                    /**
                     * 按月重复规则，当RepeatType为"DOM"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MonthRepeatStrategy m_monthRepeat;
                    bool m_monthRepeatHasBeenSet;

                    /**
                     * 一次执行规则，当RepeatType为"NONE"时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NotRepeatStrategy m_notRepeat;
                    bool m_notRepeatHasBeenSet;

                    /**
                     * 规则过期时间，超过该时间后，规则将自动置为暂停状态，形式为"2020-07-23 00:00:00"。必须填写
                     */
                    std::string m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * 周期性规则开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_REPEATSTRATEGY_H_
