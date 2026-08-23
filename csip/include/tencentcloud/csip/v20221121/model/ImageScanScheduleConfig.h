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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像扫描周期配置
                */
                class ImageScanScheduleConfig : public AbstractModel
                {
                public:
                    ImageScanScheduleConfig();
                    ~ImageScanScheduleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>周期类型</p><p>枚举值：</p><ul><li>DAILY： 每天</li><li>WEEKLY： 每周</li><li>MONTHLY： 每月</li></ul>
                     * @return CycleType <p>周期类型</p><p>枚举值：</p><ul><li>DAILY： 每天</li><li>WEEKLY： 每周</li><li>MONTHLY： 每月</li></ul>
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型</p><p>枚举值：</p><ul><li>DAILY： 每天</li><li>WEEKLY： 每周</li><li>MONTHLY： 每月</li></ul>
                     * @param _cycleType <p>周期类型</p><p>枚举值：</p><ul><li>DAILY： 每天</li><li>WEEKLY： 每周</li><li>MONTHLY： 每月</li></ul>
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>具体日期。周类型时: 1-7 (周一到周日); 月类型时: 1-31; 日类型时不生效。</p>
                     * @return CycleDays <p>具体日期。周类型时: 1-7 (周一到周日); 月类型时: 1-31; 日类型时不生效。</p>
                     * 
                     */
                    std::vector<uint64_t> GetCycleDays() const;

                    /**
                     * 设置<p>具体日期。周类型时: 1-7 (周一到周日); 月类型时: 1-31; 日类型时不生效。</p>
                     * @param _cycleDays <p>具体日期。周类型时: 1-7 (周一到周日); 月类型时: 1-31; 日类型时不生效。</p>
                     * 
                     */
                    void SetCycleDays(const std::vector<uint64_t>& _cycleDays);

                    /**
                     * 判断参数 CycleDays 是否已赋值
                     * @return CycleDays 是否已赋值
                     * 
                     */
                    bool CycleDaysHasBeenSet() const;

                    /**
                     * 获取<p>扫描开始时间</p><p>参数格式：hh:mm</p>
                     * @return StartTime <p>扫描开始时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>扫描开始时间</p><p>参数格式：hh:mm</p>
                     * @param _startTime <p>扫描开始时间</p><p>参数格式：hh:mm</p>
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
                     * 获取<p>时区</p>
                     * @return Timezone <p>时区</p>
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _timezone <p>时区</p>
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                private:

                    /**
                     * <p>周期类型</p><p>枚举值：</p><ul><li>DAILY： 每天</li><li>WEEKLY： 每周</li><li>MONTHLY： 每月</li></ul>
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>具体日期。周类型时: 1-7 (周一到周日); 月类型时: 1-31; 日类型时不生效。</p>
                     */
                    std::vector<uint64_t> m_cycleDays;
                    bool m_cycleDaysHasBeenSet;

                    /**
                     * <p>扫描开始时间</p><p>参数格式：hh:mm</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>时区</p>
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANSCHEDULECONFIG_H_
