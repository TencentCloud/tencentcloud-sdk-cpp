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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警免打扰时间区间
                */
                class AlarmQuietInterval : public AbstractModel
                {
                public:
                    AlarmQuietInterval();
                    ~AlarmQuietInterval() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ISO标准，1表示周一，7表示周日。
                     * @return DaysOfWeek ISO标准，1表示周一，7表示周日。
                     * 
                     */
                    std::vector<uint64_t> GetDaysOfWeek() const;

                    /**
                     * 设置ISO标准，1表示周一，7表示周日。
                     * @param _daysOfWeek ISO标准，1表示周一，7表示周日。
                     * 
                     */
                    void SetDaysOfWeek(const std::vector<uint64_t>& _daysOfWeek);

                    /**
                     * 判断参数 DaysOfWeek 是否已赋值
                     * @return DaysOfWeek 是否已赋值
                     * 
                     */
                    bool DaysOfWeekHasBeenSet() const;

                    /**
                     * 获取开始时间，精度时分秒，格式 HH:mm:ss
                     * @return StartTime 开始时间，精度时分秒，格式 HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，精度时分秒，格式 HH:mm:ss
                     * @param _startTime 开始时间，精度时分秒，格式 HH:mm:ss
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
                     * 获取结束时间，精度时分秒，格式 HH:mm:ss
                     * @return EndTime 结束时间，精度时分秒，格式 HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，精度时分秒，格式 HH:mm:ss
                     * @param _endTime 结束时间，精度时分秒，格式 HH:mm:ss
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
                     * ISO标准，1表示周一，7表示周日。
                     */
                    std::vector<uint64_t> m_daysOfWeek;
                    bool m_daysOfWeekHasBeenSet;

                    /**
                     * 开始时间，精度时分秒，格式 HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，精度时分秒，格式 HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMQUIETINTERVAL_H_
