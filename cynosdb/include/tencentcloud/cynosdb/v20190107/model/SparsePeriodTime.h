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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MonthDay.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 稀疏备份周期信息
                */
                class SparsePeriodTime : public AbstractModel
                {
                public:
                    SparsePeriodTime();
                    ~SparsePeriodTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按周：星期几列表，1-7，1=周一，7=周日（仅 weekly 周期使用，最多7个）
                     * @return WeekDays 按周：星期几列表，1-7，1=周一，7=周日（仅 weekly 周期使用，最多7个）
                     * 
                     */
                    std::vector<int64_t> GetWeekDays() const;

                    /**
                     * 设置按周：星期几列表，1-7，1=周一，7=周日（仅 weekly 周期使用，最多7个）
                     * @param _weekDays 按周：星期几列表，1-7，1=周一，7=周日（仅 weekly 周期使用，最多7个）
                     * 
                     */
                    void SetWeekDays(const std::vector<int64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取按月：日期列表，1-31（仅 monthly 周期使用，最多7个）
                     * @return Days 按月：日期列表，1-31（仅 monthly 周期使用，最多7个）
                     * 
                     */
                    std::vector<int64_t> GetDays() const;

                    /**
                     * 设置按月：日期列表，1-31（仅 monthly 周期使用，最多7个）
                     * @param _days 按月：日期列表，1-31（仅 monthly 周期使用，最多7个）
                     * 
                     */
                    void SetDays(const std::vector<int64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取按年：月日组合列表（仅 yearly 周期使用，最多7个）
                     * @return MonthDays 按年：月日组合列表（仅 yearly 周期使用，最多7个）
                     * 
                     */
                    std::vector<MonthDay> GetMonthDays() const;

                    /**
                     * 设置按年：月日组合列表（仅 yearly 周期使用，最多7个）
                     * @param _monthDays 按年：月日组合列表（仅 yearly 周期使用，最多7个）
                     * 
                     */
                    void SetMonthDays(const std::vector<MonthDay>& _monthDays);

                    /**
                     * 判断参数 MonthDays 是否已赋值
                     * @return MonthDays 是否已赋值
                     * 
                     */
                    bool MonthDaysHasBeenSet() const;

                private:

                    /**
                     * 按周：星期几列表，1-7，1=周一，7=周日（仅 weekly 周期使用，最多7个）
                     */
                    std::vector<int64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 按月：日期列表，1-31（仅 monthly 周期使用，最多7个）
                     */
                    std::vector<int64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 按年：月日组合列表（仅 yearly 周期使用，最多7个）
                     */
                    std::vector<MonthDay> m_monthDays;
                    bool m_monthDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEPERIODTIME_H_
