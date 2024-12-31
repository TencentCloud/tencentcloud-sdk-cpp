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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_

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
                * 定时扩容每周重复任务策略
                */
                class WeekRepeatStrategy : public AbstractModel
                {
                public:
                    WeekRepeatStrategy();
                    ~WeekRepeatStrategy() = default;
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
                     * 获取每周几的数字描述，例如，[1,3,4]表示每周周一、周三、周四。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DaysOfWeek 每周几的数字描述，例如，[1,3,4]表示每周周一、周三、周四。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfWeek() const;

                    /**
                     * 设置每周几的数字描述，例如，[1,3,4]表示每周周一、周三、周四。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _daysOfWeek 每周几的数字描述，例如，[1,3,4]表示每周周一、周三、周四。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDaysOfWeek(const std::vector<uint64_t>& _daysOfWeek);

                    /**
                     * 判断参数 DaysOfWeek 是否已赋值
                     * @return DaysOfWeek 是否已赋值
                     * 
                     */
                    bool DaysOfWeekHasBeenSet() const;

                private:

                    /**
                     * 重复任务执行的具体时刻，例如"01:02:00"
                     */
                    std::string m_executeAtTimeOfDay;
                    bool m_executeAtTimeOfDayHasBeenSet;

                    /**
                     * 每周几的数字描述，例如，[1,3,4]表示每周周一、周三、周四。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_WEEKREPEATSTRATEGY_H_
