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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 月份日期信息
                */
                class MonthDay : public AbstractModel
                {
                public:
                    MonthDay();
                    ~MonthDay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取月份信息
                     * @return Month 月份信息
                     * 
                     */
                    int64_t GetMonth() const;

                    /**
                     * 设置月份信息
                     * @param _month 月份信息
                     * 
                     */
                    void SetMonth(const int64_t& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取日期信息
                     * @return Day 日期信息
                     * 
                     */
                    int64_t GetDay() const;

                    /**
                     * 设置日期信息
                     * @param _day 日期信息
                     * 
                     */
                    void SetDay(const int64_t& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                private:

                    /**
                     * 月份信息
                     */
                    int64_t m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 日期信息
                     */
                    int64_t m_day;
                    bool m_dayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MONTHDAY_H_
