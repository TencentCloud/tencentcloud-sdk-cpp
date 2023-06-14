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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 定时器取值配置
                */
                class TimerValue : public AbstractModel
                {
                public:
                    TimerValue();
                    ~TimerValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每X天，执行一次(重复周期-按天/单次)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Day 每X天，执行一次(重复周期-按天/单次)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDay() const;

                    /**
                     * 设置每X天，执行一次(重复周期-按天/单次)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _day 每X天，执行一次(重复周期-按天/单次)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDay(const int64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                    /**
                     * 获取每月从第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromDay 每月从第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFromDay() const;

                    /**
                     * 设置每月从第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromDay 每月从第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromDay(const int64_t& _fromDay);

                    /**
                     * 判断参数 FromDay 是否已赋值
                     * @return FromDay 是否已赋值
                     * 
                     */
                    bool FromDayHasBeenSet() const;

                    /**
                     * 获取每月到第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToDay 每月到第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetToDay() const;

                    /**
                     * 设置每月到第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toDay 每月到第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToDay(const int64_t& _toDay);

                    /**
                     * 判断参数 ToDay 是否已赋值
                     * @return ToDay 是否已赋值
                     * 
                     */
                    bool ToDayHasBeenSet() const;

                    /**
                     * 获取重复周期-按周，周几（多个值,取值周一(1,2,3,4,5,6,7)周日）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekDays 重复周期-按周，周几（多个值,取值周一(1,2,3,4,5,6,7)周日）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWeekDays() const;

                    /**
                     * 设置重复周期-按周，周几（多个值,取值周一(1,2,3,4,5,6,7)周日）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekDays 重复周期-按周，周几（多个值,取值周一(1,2,3,4,5,6,7)周日）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekDays(const std::vector<int64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                private:

                    /**
                     * 每X天，执行一次(重复周期-按天/单次)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_day;
                    bool m_dayHasBeenSet;

                    /**
                     * 每月从第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fromDay;
                    bool m_fromDayHasBeenSet;

                    /**
                     * 每月到第x天，执行一次(重复周期-按月)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_toDay;
                    bool m_toDayHasBeenSet;

                    /**
                     * 重复周期-按周，周几（多个值,取值周一(1,2,3,4,5,6,7)周日）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERVALUE_H_
