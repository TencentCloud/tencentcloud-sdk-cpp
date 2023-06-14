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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 时移计费明细数据。
                */
                class TimeShiftBillData : public AbstractModel
                {
                public:
                    TimeShiftBillData();
                    ~TimeShiftBillData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推流域名。
                     * @return Domain 推流域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _domain 推流域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取时移文件时长，单位分钟。
                     * @return Duration 时移文件时长，单位分钟。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置时移文件时长，单位分钟。
                     * @param _duration 时移文件时长，单位分钟。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取时移配置天数，单位天。
                     * @return StoragePeriod 时移配置天数，单位天。
                     * 
                     */
                    double GetStoragePeriod() const;

                    /**
                     * 设置时移配置天数，单位天。
                     * @param _storagePeriod 时移配置天数，单位天。
                     * 
                     */
                    void SetStoragePeriod(const double& _storagePeriod);

                    /**
                     * 判断参数 StoragePeriod 是否已赋值
                     * @return StoragePeriod 是否已赋值
                     * 
                     */
                    bool StoragePeriodHasBeenSet() const;

                    /**
                     * 获取时间点，格式: yyyy-mm-ddTHH:MM:SSZ。
                     * @return Time 时间点，格式: yyyy-mm-ddTHH:MM:SSZ。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间点，格式: yyyy-mm-ddTHH:MM:SSZ。
                     * @param _time 时间点，格式: yyyy-mm-ddTHH:MM:SSZ。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取时移总时长，单位分钟。
                     * @return TotalDuration 时移总时长，单位分钟。
                     * 
                     */
                    double GetTotalDuration() const;

                    /**
                     * 设置时移总时长，单位分钟。
                     * @param _totalDuration 时移总时长，单位分钟。
                     * 
                     */
                    void SetTotalDuration(const double& _totalDuration);

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 时移文件时长，单位分钟。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 时移配置天数，单位天。
                     */
                    double m_storagePeriod;
                    bool m_storagePeriodHasBeenSet;

                    /**
                     * 时间点，格式: yyyy-mm-ddTHH:MM:SSZ。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 时移总时长，单位分钟。
                     */
                    double m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTBILLDATA_H_
