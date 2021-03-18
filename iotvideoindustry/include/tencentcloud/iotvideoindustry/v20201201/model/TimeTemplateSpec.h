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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATESPEC_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 在操作时间模板时，用于描述各个时间片段
                */
                class TimeTemplateSpec : public AbstractModel
                {
                public:
                    TimeTemplateSpec();
                    ~TimeTemplateSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一周中的周几
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayofWeek 一周中的周几
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDayofWeek() const;

                    /**
                     * 设置一周中的周几
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DayofWeek 一周中的周几
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDayofWeek(const int64_t& _dayofWeek);

                    /**
                     * 判断参数 DayofWeek 是否已赋值
                     * @return DayofWeek 是否已赋值
                     */
                    bool DayofWeekHasBeenSet() const;

                    /**
                     * 获取时间片段的开始时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 时间片段的开始时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置时间片段的开始时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BeginTime 时间片段的开始时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取时间片段的结束时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 时间片段的结束时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置时间片段的结束时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 时间片段的结束时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 一周中的周几
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayofWeek;
                    bool m_dayofWeekHasBeenSet;

                    /**
                     * 时间片段的开始时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 时间片段的结束时分。格式【HH:MM】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_TIMETEMPLATESPEC_H_
