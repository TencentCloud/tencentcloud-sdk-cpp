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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYSCHEDULEDETAILSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYSCHEDULEDETAILSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Duty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 值班信息表
                */
                class DutyScheduleDetailsInfo : public AbstractModel
                {
                public:
                    DutyScheduleDetailsInfo();
                    ~DutyScheduleDetailsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值班日期
                     * @return Day 值班日期
                     * 
                     */
                    std::string GetDay() const;

                    /**
                     * 设置值班日期
                     * @param _day 值班日期
                     * 
                     */
                    void SetDay(const std::string& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                    /**
                     * 获取值班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duty 值班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Duty> GetDuty() const;

                    /**
                     * 设置值班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duty 值班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuty(const std::vector<Duty>& _duty);

                    /**
                     * 判断参数 Duty 是否已赋值
                     * @return Duty 是否已赋值
                     * 
                     */
                    bool DutyHasBeenSet() const;

                private:

                    /**
                     * 值班日期
                     */
                    std::string m_day;
                    bool m_dayHasBeenSet;

                    /**
                     * 值班信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Duty> m_duty;
                    bool m_dutyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DUTYSCHEDULEDETAILSINFO_H_
