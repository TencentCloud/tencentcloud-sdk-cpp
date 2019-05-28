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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 弹性伸缩事件通知
                */
                class AutoScalingNotification : public AbstractModel
                {
                public:
                    AutoScalingNotification();
                    ~AutoScalingNotification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param AutoScalingGroupId 伸缩组ID。
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取用户组ID列表。
                     * @return NotificationUserGroupIds 用户组ID列表。
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置用户组ID列表。
                     * @param NotificationUserGroupIds 用户组ID列表。
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                    /**
                     * 获取通知事件列表。
                     * @return NotificationTypes 通知事件列表。
                     */
                    std::vector<std::string> GetNotificationTypes() const;

                    /**
                     * 设置通知事件列表。
                     * @param NotificationTypes 通知事件列表。
                     */
                    void SetNotificationTypes(const std::vector<std::string>& _notificationTypes);

                    /**
                     * 判断参数 NotificationTypes 是否已赋值
                     * @return NotificationTypes 是否已赋值
                     */
                    bool NotificationTypesHasBeenSet() const;

                    /**
                     * 获取事件通知ID。
                     * @return AutoScalingNotificationId 事件通知ID。
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置事件通知ID。
                     * @param AutoScalingNotificationId 事件通知ID。
                     */
                    void SetAutoScalingNotificationId(const std::string& _autoScalingNotificationId);

                    /**
                     * 判断参数 AutoScalingNotificationId 是否已赋值
                     * @return AutoScalingNotificationId 是否已赋值
                     */
                    bool AutoScalingNotificationIdHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 用户组ID列表。
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * 通知事件列表。
                     */
                    std::vector<std::string> m_notificationTypes;
                    bool m_notificationTypesHasBeenSet;

                    /**
                     * 事件通知ID。
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_
