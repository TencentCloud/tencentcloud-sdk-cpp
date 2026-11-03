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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MAINTENANCEWINDOW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MAINTENANCEWINDOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 引擎实例维护窗口
                */
                class MaintenanceWindow : public AbstractModel
                {
                public:
                    MaintenanceWindow();
                    ~MaintenanceWindow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时区</p>
                     * @return TimeZone <p>时区</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _timeZone <p>时区</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>星期</p>
                     * @return DayOfWeek <p>星期</p>
                     * 
                     */
                    int64_t GetDayOfWeek() const;

                    /**
                     * 设置<p>星期</p>
                     * @param _dayOfWeek <p>星期</p>
                     * 
                     */
                    void SetDayOfWeek(const int64_t& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p><p>参数格式：hh:mm</p>
                     * @return StartTime <p>开始时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p><p>参数格式：hh:mm</p>
                     * @param _startTime <p>开始时间</p><p>参数格式：hh:mm</p>
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
                     * 获取<p>结束时间</p><p>参数格式：hh:mm</p>
                     * @return EndTime <p>结束时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>参数格式：hh:mm</p>
                     * @param _endTime <p>结束时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>时区</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>星期</p>
                     */
                    int64_t m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * <p>开始时间</p><p>参数格式：hh:mm</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>参数格式：hh:mm</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MAINTENANCEWINDOW_H_
