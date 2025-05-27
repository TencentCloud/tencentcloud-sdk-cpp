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
                     * 获取周一的扩容时间段
                     * @return Monday 周一的扩容时间段
                     * 
                     */
                    bool GetMonday() const;

                    /**
                     * 设置周一的扩容时间段
                     * @param _monday 周一的扩容时间段
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
                     * 获取周二的扩容时间段
                     * @return Tuesday 周二的扩容时间段
                     * 
                     */
                    bool GetTuesday() const;

                    /**
                     * 设置周二的扩容时间段
                     * @param _tuesday 周二的扩容时间段
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
                     * 获取周三的扩容时间段
                     * @return Wednesday 周三的扩容时间段
                     * 
                     */
                    bool GetWednesday() const;

                    /**
                     * 设置周三的扩容时间段
                     * @param _wednesday 周三的扩容时间段
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
                     * 获取周四的扩容时间段
                     * @return Thursday 周四的扩容时间段
                     * 
                     */
                    bool GetThursday() const;

                    /**
                     * 设置周四的扩容时间段
                     * @param _thursday 周四的扩容时间段
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
                     * 获取周五的扩容时间段
                     * @return Friday 周五的扩容时间段
                     * 
                     */
                    bool GetFriday() const;

                    /**
                     * 设置周五的扩容时间段
                     * @param _friday 周五的扩容时间段
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
                     * 获取周六的扩容时间段
                     * @return Saturday 周六的扩容时间段
                     * 
                     */
                    bool GetSaturday() const;

                    /**
                     * 设置周六的扩容时间段
                     * @param _saturday 周六的扩容时间段
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
                     * 获取周日的扩容时间段
                     * @return Sunday 周日的扩容时间段
                     * 
                     */
                    bool GetSunday() const;

                    /**
                     * 设置周日的扩容时间段
                     * @param _sunday 周日的扩容时间段
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
                     * 周一的扩容时间段
                     */
                    bool m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * 周二的扩容时间段
                     */
                    bool m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * 周三的扩容时间段
                     */
                    bool m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * 周四的扩容时间段
                     */
                    bool m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * 周五的扩容时间段
                     */
                    bool m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * 周六的扩容时间段
                     */
                    bool m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * 周日的扩容时间段
                     */
                    bool m_sunday;
                    bool m_sundayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TIMECYCLE_H_
