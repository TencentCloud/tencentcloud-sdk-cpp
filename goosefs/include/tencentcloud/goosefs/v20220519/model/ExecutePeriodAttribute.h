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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTEPERIODATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTEPERIODATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 周期执行启动配置
                */
                class ExecutePeriodAttribute : public AbstractModel
                {
                public:
                    ExecutePeriodAttribute();
                    ~ExecutePeriodAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>选择的周期类型</p><p>枚举值：</p><ul><li>DAY： 每天执行 </li><li>WEEK： 每周执行</li><li>MONTH： 每月执行</li></ul>
                     * @return PeriodType <p>选择的周期类型</p><p>枚举值：</p><ul><li>DAY： 每天执行 </li><li>WEEK： 每周执行</li><li>MONTH： 每月执行</li></ul>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>选择的周期类型</p><p>枚举值：</p><ul><li>DAY： 每天执行 </li><li>WEEK： 每周执行</li><li>MONTH： 每月执行</li></ul>
                     * @param _periodType <p>选择的周期类型</p><p>枚举值：</p><ul><li>DAY： 每天执行 </li><li>WEEK： 每周执行</li><li>MONTH： 每月执行</li></ul>
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取<p>选择每周执行时必填，需要选择周几,0-6 分别是周日到周六</p><p>取值范围：[0, 6]</p><p>默认值：0</p>
                     * @return StartWeekday <p>选择每周执行时必填，需要选择周几,0-6 分别是周日到周六</p><p>取值范围：[0, 6]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetStartWeekday() const;

                    /**
                     * 设置<p>选择每周执行时必填，需要选择周几,0-6 分别是周日到周六</p><p>取值范围：[0, 6]</p><p>默认值：0</p>
                     * @param _startWeekday <p>选择每周执行时必填，需要选择周几,0-6 分别是周日到周六</p><p>取值范围：[0, 6]</p><p>默认值：0</p>
                     * 
                     */
                    void SetStartWeekday(const uint64_t& _startWeekday);

                    /**
                     * 判断参数 StartWeekday 是否已赋值
                     * @return StartWeekday 是否已赋值
                     * 
                     */
                    bool StartWeekdayHasBeenSet() const;

                    /**
                     * 获取<p>选择每月执行时必填，1-28日选择一天</p><p>取值范围：[1, 28]</p><p>默认值：1</p>
                     * @return StartDate <p>选择每月执行时必填，1-28日选择一天</p><p>取值范围：[1, 28]</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetStartDate() const;

                    /**
                     * 设置<p>选择每月执行时必填，1-28日选择一天</p><p>取值范围：[1, 28]</p><p>默认值：1</p>
                     * @param _startDate <p>选择每月执行时必填，1-28日选择一天</p><p>取值范围：[1, 28]</p><p>默认值：1</p>
                     * 
                     */
                    void SetStartDate(const uint64_t& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>周期中的时间点，取值0~59</p><p>取值范围：[0, 59]</p>
                     * @return StartMinute <p>周期中的时间点，取值0~59</p><p>取值范围：[0, 59]</p>
                     * 
                     */
                    uint64_t GetStartMinute() const;

                    /**
                     * 设置<p>周期中的时间点，取值0~59</p><p>取值范围：[0, 59]</p>
                     * @param _startMinute <p>周期中的时间点，取值0~59</p><p>取值范围：[0, 59]</p>
                     * 
                     */
                    void SetStartMinute(const uint64_t& _startMinute);

                    /**
                     * 判断参数 StartMinute 是否已赋值
                     * @return StartMinute 是否已赋值
                     * 
                     */
                    bool StartMinuteHasBeenSet() const;

                    /**
                     * 获取<p>24小时周期开始的小时数，取值0~23</p><p>取值范围：[0, 23]</p><p>默认值：1</p>
                     * @return StartHour <p>24小时周期开始的小时数，取值0~23</p><p>取值范围：[0, 23]</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetStartHour() const;

                    /**
                     * 设置<p>24小时周期开始的小时数，取值0~23</p><p>取值范围：[0, 23]</p><p>默认值：1</p>
                     * @param _startHour <p>24小时周期开始的小时数，取值0~23</p><p>取值范围：[0, 23]</p><p>默认值：1</p>
                     * 
                     */
                    void SetStartHour(const uint64_t& _startHour);

                    /**
                     * 判断参数 StartHour 是否已赋值
                     * @return StartHour 是否已赋值
                     * 
                     */
                    bool StartHourHasBeenSet() const;

                private:

                    /**
                     * <p>选择的周期类型</p><p>枚举值：</p><ul><li>DAY： 每天执行 </li><li>WEEK： 每周执行</li><li>MONTH： 每月执行</li></ul>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>选择每周执行时必填，需要选择周几,0-6 分别是周日到周六</p><p>取值范围：[0, 6]</p><p>默认值：0</p>
                     */
                    uint64_t m_startWeekday;
                    bool m_startWeekdayHasBeenSet;

                    /**
                     * <p>选择每月执行时必填，1-28日选择一天</p><p>取值范围：[1, 28]</p><p>默认值：1</p>
                     */
                    uint64_t m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>周期中的时间点，取值0~59</p><p>取值范围：[0, 59]</p>
                     */
                    uint64_t m_startMinute;
                    bool m_startMinuteHasBeenSet;

                    /**
                     * <p>24小时周期开始的小时数，取值0~23</p><p>取值范围：[0, 23]</p><p>默认值：1</p>
                     */
                    uint64_t m_startHour;
                    bool m_startHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXECUTEPERIODATTRIBUTE_H_
