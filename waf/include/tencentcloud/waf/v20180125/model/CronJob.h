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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 规则周期执行的数据结构
                */
                class CronJob : public AbstractModel
                {
                public:
                    CronJob();
                    ~CronJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个月的几号执行
                     * @return Days 每个月的几号执行
                     * 
                     */
                    std::vector<uint64_t> GetDays() const;

                    /**
                     * 设置每个月的几号执行
                     * @param _days 每个月的几号执行
                     * 
                     */
                    void SetDays(const std::vector<uint64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取每个星期的星期几执行
                     * @return WDays 每个星期的星期几执行
                     * 
                     */
                    std::vector<uint64_t> GetWDays() const;

                    /**
                     * 设置每个星期的星期几执行
                     * @param _wDays 每个星期的星期几执行
                     * 
                     */
                    void SetWDays(const std::vector<uint64_t>& _wDays);

                    /**
                     * 判断参数 WDays 是否已赋值
                     * @return WDays 是否已赋值
                     * 
                     */
                    bool WDaysHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 每个月的几号执行
                     */
                    std::vector<uint64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 每个星期的星期几执行
                     */
                    std::vector<uint64_t> m_wDays;
                    bool m_wDaysHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CRONJOB_H_
