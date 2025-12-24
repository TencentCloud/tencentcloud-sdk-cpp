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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_NOTIFICATIONFATIGUE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_NOTIFICATIONFATIGUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmQuietInterval.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务告警通知疲劳度配置，包括通知次数、间隔、免打扰时间。
                */
                class NotificationFatigue : public AbstractModel
                {
                public:
                    NotificationFatigue();
                    ~NotificationFatigue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyCount 通知次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotifyCount() const;

                    /**
                     * 设置通知次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyCount 通知次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyCount(const int64_t& _notifyCount);

                    /**
                     * 判断参数 NotifyCount 是否已赋值
                     * @return NotifyCount 是否已赋值
                     * 
                     */
                    bool NotifyCountHasBeenSet() const;

                    /**
                     * 获取通知间隔，单位分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyInterval 通知间隔，单位分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotifyInterval() const;

                    /**
                     * 设置通知间隔，单位分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyInterval 通知间隔，单位分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyInterval(const int64_t& _notifyInterval);

                    /**
                     * 判断参数 NotifyInterval 是否已赋值
                     * @return NotifyInterval 是否已赋值
                     * 
                     */
                    bool NotifyIntervalHasBeenSet() const;

                    /**
                     * 获取免打扰时间，例如示例值每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuietIntervals 免打扰时间，例如示例值每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmQuietInterval> GetQuietIntervals() const;

                    /**
                     * 设置免打扰时间，例如示例值每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quietIntervals 免打扰时间，例如示例值每周一、周二的00:00到09:00免打扰
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
                     * 通知次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notifyCount;
                    bool m_notifyCountHasBeenSet;

                    /**
                     * 通知间隔，单位分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notifyInterval;
                    bool m_notifyIntervalHasBeenSet;

                    /**
                     * 免打扰时间，例如示例值每周一、周二的00:00到09:00免打扰
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmQuietInterval> m_quietIntervals;
                    bool m_quietIntervalsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_NOTIFICATIONFATIGUE_H_
