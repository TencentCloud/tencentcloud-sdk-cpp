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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 置放群组异步任务维护的时间段
                */
                class EnableScheduleOperationDuration : public AbstractModel
                {
                public:
                    EnableScheduleOperationDuration();
                    ~EnableScheduleOperationDuration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持开启异步任务的日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Periods 支持开启异步任务的日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPeriods() const;

                    /**
                     * 设置支持开启异步任务的日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periods 支持开启异步任务的日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriods(const std::vector<std::string>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取支持开启异步的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeStart 支持开启异步的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeStart() const;

                    /**
                     * 设置支持开启异步的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeStart 支持开启异步的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeStart(const std::string& _timeStart);

                    /**
                     * 判断参数 TimeStart 是否已赋值
                     * @return TimeStart 是否已赋值
                     * 
                     */
                    bool TimeStartHasBeenSet() const;

                    /**
                     * 获取支持开启异步的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeEnd 支持开启异步的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置支持开启异步的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeEnd 支持开启异步的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取支持开启异步的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZone 支持开启异步的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置支持开启异步的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeZone 支持开启异步的时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 支持开启异步任务的日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 支持开启异步的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeStart;
                    bool m_timeStartHasBeenSet;

                    /**
                     * 支持开启异步的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * 支持开启异步的时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ENABLESCHEDULEOPERATIONDURATION_H_
