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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmQuietInterval.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警疲劳告警配置
                */
                class NotificationFatigue : public AbstractModel
                {
                public:
                    NotificationFatigue();
                    ~NotificationFatigue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警次数
                     * @return NotifyCount 告警次数
                     * 
                     */
                    uint64_t GetNotifyCount() const;

                    /**
                     * 设置告警次数
                     * @param _notifyCount 告警次数
                     * 
                     */
                    void SetNotifyCount(const uint64_t& _notifyCount);

                    /**
                     * 判断参数 NotifyCount 是否已赋值
                     * @return NotifyCount 是否已赋值
                     * 
                     */
                    bool NotifyCountHasBeenSet() const;

                    /**
                     * 获取告警间隔，分钟
                     * @return NotifyInterval 告警间隔，分钟
                     * 
                     */
                    uint64_t GetNotifyInterval() const;

                    /**
                     * 设置告警间隔，分钟
                     * @param _notifyInterval 告警间隔，分钟
                     * 
                     */
                    void SetNotifyInterval(const uint64_t& _notifyInterval);

                    /**
                     * 判断参数 NotifyInterval 是否已赋值
                     * @return NotifyInterval 是否已赋值
                     * 
                     */
                    bool NotifyIntervalHasBeenSet() const;

                    /**
                     * 获取免打扰时间，例如示例值
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuietIntervals 免打扰时间，例如示例值
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmQuietInterval> GetQuietIntervals() const;

                    /**
                     * 设置免打扰时间，例如示例值
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quietIntervals 免打扰时间，例如示例值
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuietIntervals(const std::vector<AlarmQuietInterval>& _quietIntervals);

                    /**
                     * 判断参数 QuietIntervals 是否已赋值
                     * @return QuietIntervals 是否已赋值
                     * 
                     */
                    bool QuietIntervalsHasBeenSet() const;

                private:

                    /**
                     * 告警次数
                     */
                    uint64_t m_notifyCount;
                    bool m_notifyCountHasBeenSet;

                    /**
                     * 告警间隔，分钟
                     */
                    uint64_t m_notifyInterval;
                    bool m_notifyIntervalHasBeenSet;

                    /**
                     * 免打扰时间，例如示例值
[{DaysOfWeek: [1, 2], StartTime: "00:00:00", EndTime: "09:00:00"}]	
每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmQuietInterval> m_quietIntervals;
                    bool m_quietIntervalsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTIFICATIONFATIGUE_H_
