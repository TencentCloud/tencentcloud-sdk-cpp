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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 上云模板的时间片段数据格式
                */
                class RecordTemplateTimeSections : public AbstractModel
                {
                public:
                    RecordTemplateTimeSections();
                    ~RecordTemplateTimeSections() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周日期，取值范围1～7（对应周一～周日
                     * @return DayOfWeek 周日期，取值范围1～7（对应周一～周日
                     * 
                     */
                    int64_t GetDayOfWeek() const;

                    /**
                     * 设置周日期，取值范围1～7（对应周一～周日
                     * @param _dayOfWeek 周日期，取值范围1～7（对应周一～周日
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
                     * 获取开始时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59]
                     * @return StartTime 开始时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59]
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59]
                     * @param _startTime 开始时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59]
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
                     * 获取结束时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59] 
                     * @return EndTime 结束时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59] 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59] 
                     * @param _endTime 结束时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59] 
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
                     * 周日期，取值范围1～7（对应周一～周日
                     */
                    int64_t m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 开始时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59]
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式：HH:MM:SS，范围：[00:00:00～23:59:59] 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTEMPLATETIMESECTIONS_H_
