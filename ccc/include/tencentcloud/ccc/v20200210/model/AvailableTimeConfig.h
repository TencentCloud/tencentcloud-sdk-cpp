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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AVAILABLETIMECONFIG_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AVAILABLETIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/TimeRange.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 工作时间配置
                */
                class AvailableTimeConfig : public AbstractModel
                {
                public:
                    AvailableTimeConfig();
                    ~AvailableTimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日期类型，默认为每天</p><p>枚举值：</p><ul><li>EveryDay： 每天</li><li>BusinessDay： 法定工作日</li><li>Holiday： 法定休息日</li><li>Custom： 自定义</li></ul>
                     * @return DayType <p>日期类型，默认为每天</p><p>枚举值：</p><ul><li>EveryDay： 每天</li><li>BusinessDay： 法定工作日</li><li>Holiday： 法定休息日</li><li>Custom： 自定义</li></ul>
                     * 
                     */
                    std::string GetDayType() const;

                    /**
                     * 设置<p>日期类型，默认为每天</p><p>枚举值：</p><ul><li>EveryDay： 每天</li><li>BusinessDay： 法定工作日</li><li>Holiday： 法定休息日</li><li>Custom： 自定义</li></ul>
                     * @param _dayType <p>日期类型，默认为每天</p><p>枚举值：</p><ul><li>EveryDay： 每天</li><li>BusinessDay： 法定工作日</li><li>Holiday： 法定休息日</li><li>Custom： 自定义</li></ul>
                     * 
                     */
                    void SetDayType(const std::string& _dayType);

                    /**
                     * 判断参数 DayType 是否已赋值
                     * @return DayType 是否已赋值
                     * 
                     */
                    bool DayTypeHasBeenSet() const;

                    /**
                     * 获取<p>仅在 DayType 为 Custom 时生效，指定适用的星期几</p><p>枚举值：</p><ul><li>Monday： 星期一</li><li>Tuesday： 星期二</li><li>Wednesday： 星期三</li><li>Thursday： 星期四</li><li>Friday： 星期五</li><li>Saturday： 星期六</li><li>Sunday： 星期日</li></ul>
                     * @return DaysOfWeek <p>仅在 DayType 为 Custom 时生效，指定适用的星期几</p><p>枚举值：</p><ul><li>Monday： 星期一</li><li>Tuesday： 星期二</li><li>Wednesday： 星期三</li><li>Thursday： 星期四</li><li>Friday： 星期五</li><li>Saturday： 星期六</li><li>Sunday： 星期日</li></ul>
                     * 
                     */
                    std::vector<std::string> GetDaysOfWeek() const;

                    /**
                     * 设置<p>仅在 DayType 为 Custom 时生效，指定适用的星期几</p><p>枚举值：</p><ul><li>Monday： 星期一</li><li>Tuesday： 星期二</li><li>Wednesday： 星期三</li><li>Thursday： 星期四</li><li>Friday： 星期五</li><li>Saturday： 星期六</li><li>Sunday： 星期日</li></ul>
                     * @param _daysOfWeek <p>仅在 DayType 为 Custom 时生效，指定适用的星期几</p><p>枚举值：</p><ul><li>Monday： 星期一</li><li>Tuesday： 星期二</li><li>Wednesday： 星期三</li><li>Thursday： 星期四</li><li>Friday： 星期五</li><li>Saturday： 星期六</li><li>Sunday： 星期日</li></ul>
                     * 
                     */
                    void SetDaysOfWeek(const std::vector<std::string>& _daysOfWeek);

                    /**
                     * 判断参数 DaysOfWeek 是否已赋值
                     * @return DaysOfWeek 是否已赋值
                     * 
                     */
                    bool DaysOfWeekHasBeenSet() const;

                    /**
                     * 获取<p>该日期类型下的时间段列表</p>
                     * @return TimeRanges <p>该日期类型下的时间段列表</p>
                     * 
                     */
                    std::vector<TimeRange> GetTimeRanges() const;

                    /**
                     * 设置<p>该日期类型下的时间段列表</p>
                     * @param _timeRanges <p>该日期类型下的时间段列表</p>
                     * 
                     */
                    void SetTimeRanges(const std::vector<TimeRange>& _timeRanges);

                    /**
                     * 判断参数 TimeRanges 是否已赋值
                     * @return TimeRanges 是否已赋值
                     * 
                     */
                    bool TimeRangesHasBeenSet() const;

                private:

                    /**
                     * <p>日期类型，默认为每天</p><p>枚举值：</p><ul><li>EveryDay： 每天</li><li>BusinessDay： 法定工作日</li><li>Holiday： 法定休息日</li><li>Custom： 自定义</li></ul>
                     */
                    std::string m_dayType;
                    bool m_dayTypeHasBeenSet;

                    /**
                     * <p>仅在 DayType 为 Custom 时生效，指定适用的星期几</p><p>枚举值：</p><ul><li>Monday： 星期一</li><li>Tuesday： 星期二</li><li>Wednesday： 星期三</li><li>Thursday： 星期四</li><li>Friday： 星期五</li><li>Saturday： 星期六</li><li>Sunday： 星期日</li></ul>
                     */
                    std::vector<std::string> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                    /**
                     * <p>该日期类型下的时间段列表</p>
                     */
                    std::vector<TimeRange> m_timeRanges;
                    bool m_timeRangesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AVAILABLETIMECONFIG_H_
