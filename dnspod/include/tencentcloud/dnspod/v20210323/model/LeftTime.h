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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LEFTTIME_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LEFTTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 批量生成文件剩余时间
                */
                class LeftTime : public AbstractModel
                {
                public:
                    LeftTime();
                    ~LeftTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取剩余天数
                     * @return Days 剩余天数
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置剩余天数
                     * @param _days 剩余天数
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取剩余小时数
                     * @return Hours 剩余小时数
                     * 
                     */
                    uint64_t GetHours() const;

                    /**
                     * 设置剩余小时数
                     * @param _hours 剩余小时数
                     * 
                     */
                    void SetHours(const uint64_t& _hours);

                    /**
                     * 判断参数 Hours 是否已赋值
                     * @return Hours 是否已赋值
                     * 
                     */
                    bool HoursHasBeenSet() const;

                    /**
                     * 获取剩余分钟数
                     * @return Mins 剩余分钟数
                     * 
                     */
                    uint64_t GetMins() const;

                    /**
                     * 设置剩余分钟数
                     * @param _mins 剩余分钟数
                     * 
                     */
                    void SetMins(const uint64_t& _mins);

                    /**
                     * 判断参数 Mins 是否已赋值
                     * @return Mins 是否已赋值
                     * 
                     */
                    bool MinsHasBeenSet() const;

                private:

                    /**
                     * 剩余天数
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 剩余小时数
                     */
                    uint64_t m_hours;
                    bool m_hoursHasBeenSet;

                    /**
                     * 剩余分钟数
                     */
                    uint64_t m_mins;
                    bool m_minsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LEFTTIME_H_
