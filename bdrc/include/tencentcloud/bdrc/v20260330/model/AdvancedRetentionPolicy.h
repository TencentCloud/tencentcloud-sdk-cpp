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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_ADVANCEDRETENTIONPOLICY_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_ADVANCEDRETENTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份高级保留策略
                */
                class AdvancedRetentionPolicy : public AbstractModel
                {
                public:
                    AdvancedRetentionPolicy();
                    ~AdvancedRetentionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保留设定天数中的每天最新的一个备份
                     * @return Days 保留设定天数中的每天最新的一个备份
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置保留设定天数中的每天最新的一个备份
                     * @param _days 保留设定天数中的每天最新的一个备份
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取保留设置周中的每周最新的一个备份
                     * @return Weeks 保留设置周中的每周最新的一个备份
                     * 
                     */
                    uint64_t GetWeeks() const;

                    /**
                     * 设置保留设置周中的每周最新的一个备份
                     * @param _weeks 保留设置周中的每周最新的一个备份
                     * 
                     */
                    void SetWeeks(const uint64_t& _weeks);

                    /**
                     * 判断参数 Weeks 是否已赋值
                     * @return Weeks 是否已赋值
                     * 
                     */
                    bool WeeksHasBeenSet() const;

                    /**
                     * 获取保留设置月内的每月最新的一个备份
                     * @return Months 保留设置月内的每月最新的一个备份
                     * 
                     */
                    uint64_t GetMonths() const;

                    /**
                     * 设置保留设置月内的每月最新的一个备份
                     * @param _months 保留设置月内的每月最新的一个备份
                     * 
                     */
                    void SetMonths(const uint64_t& _months);

                    /**
                     * 判断参数 Months 是否已赋值
                     * @return Months 是否已赋值
                     * 
                     */
                    bool MonthsHasBeenSet() const;

                    /**
                     * 获取保留设置年内的每年最新的一个备份
                     * @return Years 保留设置年内的每年最新的一个备份
                     * 
                     */
                    uint64_t GetYears() const;

                    /**
                     * 设置保留设置年内的每年最新的一个备份
                     * @param _years 保留设置年内的每年最新的一个备份
                     * 
                     */
                    void SetYears(const uint64_t& _years);

                    /**
                     * 判断参数 Years 是否已赋值
                     * @return Years 是否已赋值
                     * 
                     */
                    bool YearsHasBeenSet() const;

                private:

                    /**
                     * 保留设定天数中的每天最新的一个备份
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 保留设置周中的每周最新的一个备份
                     */
                    uint64_t m_weeks;
                    bool m_weeksHasBeenSet;

                    /**
                     * 保留设置月内的每月最新的一个备份
                     */
                    uint64_t m_months;
                    bool m_monthsHasBeenSet;

                    /**
                     * 保留设置年内的每年最新的一个备份
                     */
                    uint64_t m_years;
                    bool m_yearsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_ADVANCEDRETENTIONPOLICY_H_
