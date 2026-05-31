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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 标签持续检测配置
                */
                class SeeDetectContinuousConfig : public AbstractModel
                {
                public:
                    SeeDetectContinuousConfig();
                    ~SeeDetectContinuousConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测标签。可选值：
- `person_motionless`：人物静止
                     * @return DetectType 检测标签。可选值：
- `person_motionless`：人物静止
                     * 
                     */
                    std::string GetDetectType() const;

                    /**
                     * 设置检测标签。可选值：
- `person_motionless`：人物静止
                     * @param _detectType 检测标签。可选值：
- `person_motionless`：人物静止
                     * 
                     */
                    void SetDetectType(const std::string& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

                    /**
                     * 获取启用检测的按日周期起始时间分钟数。取值范围：0 ~ 1440
                     * @return DailyStartTime 启用检测的按日周期起始时间分钟数。取值范围：0 ~ 1440
                     * 
                     */
                    int64_t GetDailyStartTime() const;

                    /**
                     * 设置启用检测的按日周期起始时间分钟数。取值范围：0 ~ 1440
                     * @param _dailyStartTime 启用检测的按日周期起始时间分钟数。取值范围：0 ~ 1440
                     * 
                     */
                    void SetDailyStartTime(const int64_t& _dailyStartTime);

                    /**
                     * 判断参数 DailyStartTime 是否已赋值
                     * @return DailyStartTime 是否已赋值
                     * 
                     */
                    bool DailyStartTimeHasBeenSet() const;

                    /**
                     * 获取启用检测的按日周期结束时间分钟数。取值范围：0 ~ 1440
                     * @return DailyEndTime 启用检测的按日周期结束时间分钟数。取值范围：0 ~ 1440
                     * 
                     */
                    int64_t GetDailyEndTime() const;

                    /**
                     * 设置启用检测的按日周期结束时间分钟数。取值范围：0 ~ 1440
                     * @param _dailyEndTime 启用检测的按日周期结束时间分钟数。取值范围：0 ~ 1440
                     * 
                     */
                    void SetDailyEndTime(const int64_t& _dailyEndTime);

                    /**
                     * 判断参数 DailyEndTime 是否已赋值
                     * @return DailyEndTime 是否已赋值
                     * 
                     */
                    bool DailyEndTimeHasBeenSet() const;

                    /**
                     * 获取检测间隔分钟数。取值范围：5 ~ 60。
                     * @return Interval 检测间隔分钟数。取值范围：5 ~ 60。
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置检测间隔分钟数。取值范围：5 ~ 60。
                     * @param _interval 检测间隔分钟数。取值范围：5 ~ 60。
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 检测标签。可选值：
- `person_motionless`：人物静止
                     */
                    std::string m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * 启用检测的按日周期起始时间分钟数。取值范围：0 ~ 1440
                     */
                    int64_t m_dailyStartTime;
                    bool m_dailyStartTimeHasBeenSet;

                    /**
                     * 启用检测的按日周期结束时间分钟数。取值范围：0 ~ 1440
                     */
                    int64_t m_dailyEndTime;
                    bool m_dailyEndTimeHasBeenSet;

                    /**
                     * 检测间隔分钟数。取值范围：5 ~ 60。
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDETECTCONTINUOUSCONFIG_H_
