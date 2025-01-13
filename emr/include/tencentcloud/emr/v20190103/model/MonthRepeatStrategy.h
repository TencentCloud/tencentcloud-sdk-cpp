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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MONTHREPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MONTHREPEATSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 定时伸缩每月重复任务策略
                */
                class MonthRepeatStrategy : public AbstractModel
                {
                public:
                    MonthRepeatStrategy();
                    ~MonthRepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重复任务执行的具体时刻，例如"01:02:00"
                     * @return ExecuteAtTimeOfDay 重复任务执行的具体时刻，例如"01:02:00"
                     * 
                     */
                    std::string GetExecuteAtTimeOfDay() const;

                    /**
                     * 设置重复任务执行的具体时刻，例如"01:02:00"
                     * @param _executeAtTimeOfDay 重复任务执行的具体时刻，例如"01:02:00"
                     * 
                     */
                    void SetExecuteAtTimeOfDay(const std::string& _executeAtTimeOfDay);

                    /**
                     * 判断参数 ExecuteAtTimeOfDay 是否已赋值
                     * @return ExecuteAtTimeOfDay 是否已赋值
                     * 
                     */
                    bool ExecuteAtTimeOfDayHasBeenSet() const;

                    /**
                     * 获取每月中的天数时间段描述，长度只能为2，例如[2,10]表示每月2-10号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DaysOfMonthRange 每月中的天数时间段描述，长度只能为2，例如[2,10]表示每月2-10号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfMonthRange() const;

                    /**
                     * 设置每月中的天数时间段描述，长度只能为2，例如[2,10]表示每月2-10号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _daysOfMonthRange 每月中的天数时间段描述，长度只能为2，例如[2,10]表示每月2-10号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDaysOfMonthRange(const std::vector<uint64_t>& _daysOfMonthRange);

                    /**
                     * 判断参数 DaysOfMonthRange 是否已赋值
                     * @return DaysOfMonthRange 是否已赋值
                     * 
                     */
                    bool DaysOfMonthRangeHasBeenSet() const;

                private:

                    /**
                     * 重复任务执行的具体时刻，例如"01:02:00"
                     */
                    std::string m_executeAtTimeOfDay;
                    bool m_executeAtTimeOfDayHasBeenSet;

                    /**
                     * 每月中的天数时间段描述，长度只能为2，例如[2,10]表示每月2-10号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_daysOfMonthRange;
                    bool m_daysOfMonthRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MONTHREPEATSTRATEGY_H_
