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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingAction.h>
#include <tencentcloud/teo/v20220901/model/InferenceScheduledScalingEffectiveRange.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘推理定时伸缩策略配置。
                */
                class InferenceScheduledScalingPolicy : public AbstractModel
                {
                public:
                    InferenceScheduledScalingPolicy();
                    ~InferenceScheduledScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时伸缩动作列表。至少填写 1 个，最多支持 10 个。
                     * @return ScheduledActions 定时伸缩动作列表。至少填写 1 个，最多支持 10 个。
                     * 
                     */
                    std::vector<InferenceScheduledScalingAction> GetScheduledActions() const;

                    /**
                     * 设置定时伸缩动作列表。至少填写 1 个，最多支持 10 个。
                     * @param _scheduledActions 定时伸缩动作列表。至少填写 1 个，最多支持 10 个。
                     * 
                     */
                    void SetScheduledActions(const std::vector<InferenceScheduledScalingAction>& _scheduledActions);

                    /**
                     * 判断参数 ScheduledActions 是否已赋值
                     * @return ScheduledActions 是否已赋值
                     * 
                     */
                    bool ScheduledActionsHasBeenSet() const;

                    /**
                     * 获取有效期范围，用于描述该定时伸缩策略长期有效或仅在指定日期范围内有效。
                     * @return EffectiveRange 有效期范围，用于描述该定时伸缩策略长期有效或仅在指定日期范围内有效。
                     * 
                     */
                    InferenceScheduledScalingEffectiveRange GetEffectiveRange() const;

                    /**
                     * 设置有效期范围，用于描述该定时伸缩策略长期有效或仅在指定日期范围内有效。
                     * @param _effectiveRange 有效期范围，用于描述该定时伸缩策略长期有效或仅在指定日期范围内有效。
                     * 
                     */
                    void SetEffectiveRange(const InferenceScheduledScalingEffectiveRange& _effectiveRange);

                    /**
                     * 判断参数 EffectiveRange 是否已赋值
                     * @return EffectiveRange 是否已赋值
                     * 
                     */
                    bool EffectiveRangeHasBeenSet() const;

                    /**
                     * 获取时区，使用 [IANA 时区](https://www.iana.org/time-zones) 标识 ScheduledActions 中的触发时间，例如 UTC、Asia/Shanghai、America/New_York、Europe/London、Asia/Kolkata。不传时默认使用 UTC。





                     * @return TimeZone 时区，使用 [IANA 时区](https://www.iana.org/time-zones) 标识 ScheduledActions 中的触发时间，例如 UTC、Asia/Shanghai、America/New_York、Europe/London、Asia/Kolkata。不传时默认使用 UTC。





                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区，使用 [IANA 时区](https://www.iana.org/time-zones) 标识 ScheduledActions 中的触发时间，例如 UTC、Asia/Shanghai、America/New_York、Europe/London、Asia/Kolkata。不传时默认使用 UTC。





                     * @param _timeZone 时区，使用 [IANA 时区](https://www.iana.org/time-zones) 标识 ScheduledActions 中的触发时间，例如 UTC、Asia/Shanghai、America/New_York、Europe/London、Asia/Kolkata。不传时默认使用 UTC。





                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 定时伸缩动作列表。至少填写 1 个，最多支持 10 个。
                     */
                    std::vector<InferenceScheduledScalingAction> m_scheduledActions;
                    bool m_scheduledActionsHasBeenSet;

                    /**
                     * 有效期范围，用于描述该定时伸缩策略长期有效或仅在指定日期范围内有效。
                     */
                    InferenceScheduledScalingEffectiveRange m_effectiveRange;
                    bool m_effectiveRangeHasBeenSet;

                    /**
                     * 时区，使用 [IANA 时区](https://www.iana.org/time-zones) 标识 ScheduledActions 中的触发时间，例如 UTC、Asia/Shanghai、America/New_York、Europe/London、Asia/Kolkata。不传时默认使用 UTC。





                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGPOLICY_H_
