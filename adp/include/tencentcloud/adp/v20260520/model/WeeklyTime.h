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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WEEKLYTIME_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WEEKLYTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * WeeklyTime
                */
                class WeeklyTime : public AbstractModel
                {
                public:
                    WeeklyTime();
                    ~WeeklyTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return TimeOfDay 时间
                     * 
                     */
                    std::string GetTimeOfDay() const;

                    /**
                     * 设置时间
                     * @param _timeOfDay 时间
                     * 
                     */
                    void SetTimeOfDay(const std::string& _timeOfDay);

                    /**
                     * 判断参数 TimeOfDay 是否已赋值
                     * @return TimeOfDay 是否已赋值
                     * 
                     */
                    bool TimeOfDayHasBeenSet() const;

                    /**
                     * 获取周几
                     * @return Weekday 周几
                     * 
                     */
                    int64_t GetWeekday() const;

                    /**
                     * 设置周几
                     * @param _weekday 周几
                     * 
                     */
                    void SetWeekday(const int64_t& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     * 
                     */
                    bool WeekdayHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_timeOfDay;
                    bool m_timeOfDayHasBeenSet;

                    /**
                     * 周几
                     */
                    int64_t m_weekday;
                    bool m_weekdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WEEKLYTIME_H_
