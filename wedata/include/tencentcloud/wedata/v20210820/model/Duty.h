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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DutyPerson.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 值班信息
                */
                class Duty : public AbstractModel
                {
                public:
                    Duty();
                    ~Duty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值班Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DutyScheduleId 值班Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDutyScheduleId() const;

                    /**
                     * 设置值班Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dutyScheduleId 值班Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDutyScheduleId(const int64_t& _dutyScheduleId);

                    /**
                     * 判断参数 DutyScheduleId 是否已赋值
                     * @return DutyScheduleId 是否已赋值
                     * 
                     */
                    bool DutyScheduleIdHasBeenSet() const;

                    /**
                     * 获取值班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 值班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置值班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 值班开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取值班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 值班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置值班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 值班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DutyPersons 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DutyPerson> GetDutyPersons() const;

                    /**
                     * 设置值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dutyPersons 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDutyPersons(const std::vector<DutyPerson>& _dutyPersons);

                    /**
                     * 判断参数 DutyPersons 是否已赋值
                     * @return DutyPersons 是否已赋值
                     * 
                     */
                    bool DutyPersonsHasBeenSet() const;

                private:

                    /**
                     * 值班Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dutyScheduleId;
                    bool m_dutyScheduleIdHasBeenSet;

                    /**
                     * 值班开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 值班结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DutyPerson> m_dutyPersons;
                    bool m_dutyPersonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTY_H_
