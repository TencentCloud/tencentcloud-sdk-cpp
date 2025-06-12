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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 扩容的周期
                */
                class TImeCycle : public AbstractModel
                {
                public:
                    TImeCycle();
                    ~TImeCycle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按周期扩容时，是否选择周一扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Monday 按周期扩容时，是否选择周一扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetMonday() const;

                    /**
                     * 设置按周期扩容时，是否选择周一扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _monday 按周期扩容时，是否选择周一扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetMonday(const bool& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周二扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Tuesday 按周期扩容时，是否选择周二扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetTuesday() const;

                    /**
                     * 设置按周期扩容时，是否选择周二扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _tuesday 按周期扩容时，是否选择周二扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetTuesday(const bool& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周三扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Wednesday 按周期扩容时，是否选择周三扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetWednesday() const;

                    /**
                     * 设置按周期扩容时，是否选择周三扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _wednesday 按周期扩容时，是否选择周三扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetWednesday(const bool& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周四扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Thursday 按周期扩容时，是否选择周四扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetThursday() const;

                    /**
                     * 设置按周期扩容时，是否选择周四扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _thursday 按周期扩容时，是否选择周四扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetThursday(const bool& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周五扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Friday 按周期扩容时，是否选择周五扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetFriday() const;

                    /**
                     * 设置按周期扩容时，是否选择周五扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _friday 按周期扩容时，是否选择周五扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetFriday(const bool& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周六扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Saturday 按周期扩容时，是否选择周六扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetSaturday() const;

                    /**
                     * 设置按周期扩容时，是否选择周六扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _saturday 按周期扩容时，是否选择周六扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetSaturday(const bool& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取按周期扩容时，是否选择周日扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @return Sunday 按周期扩容时，是否选择周日扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    bool GetSunday() const;

                    /**
                     * 设置按周期扩容时，是否选择周日扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * @param _sunday 按周期扩容时，是否选择周日扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     * 
                     */
                    void SetSunday(const bool& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                private:

                    /**
                     * 按周期扩容时，是否选择周一扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周二扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周三扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周四扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周五扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周六扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * 按周期扩容时，是否选择周日扩容。
说明：取值 true，表示选择，取值 false，表示不选择。
                     */
                    bool m_sunday;
                    bool m_sundayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_
