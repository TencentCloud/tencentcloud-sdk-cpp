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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyNotificationConfiguration请求参数结构体
                */
                class ModifyNotificationConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyNotificationConfigurationRequest();
                    ~ModifyNotificationConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的通知ID。
                     * @return AutoScalingNotificationId 待修改的通知ID。
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置待修改的通知ID。
                     * @param AutoScalingNotificationId 待修改的通知ID。
                     */
                    void SetAutoScalingNotificationId(const std::string& _autoScalingNotificationId);

                    /**
                     * 判断参数 AutoScalingNotificationId 是否已赋值
                     * @return AutoScalingNotificationId 是否已赋值
                     */
                    bool AutoScalingNotificationIdHasBeenSet() const;

                    /**
                     * 获取通知类型，即为需要订阅的通知类型集合，取值范围如下：
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * @return NotificationTypes 通知类型，即为需要订阅的通知类型集合，取值范围如下：
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     */
                    std::vector<std::string> GetNotificationTypes() const;

                    /**
                     * 设置通知类型，即为需要订阅的通知类型集合，取值范围如下：
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * @param NotificationTypes 通知类型，即为需要订阅的通知类型集合，取值范围如下：
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     */
                    void SetNotificationTypes(const std::vector<std::string>& _notificationTypes);

                    /**
                     * 判断参数 NotificationTypes 是否已赋值
                     * @return NotificationTypes 是否已赋值
                     */
                    bool NotificationTypesHasBeenSet() const;

                    /**
                     * 获取通知组ID，即为用户组ID集合，用户组ID可以通过[DescribeUserGroup](https://cloud.tencent.com/document/api/378/4404)查询。
                     * @return NotificationUserGroupIds 通知组ID，即为用户组ID集合，用户组ID可以通过[DescribeUserGroup](https://cloud.tencent.com/document/api/378/4404)查询。
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置通知组ID，即为用户组ID集合，用户组ID可以通过[DescribeUserGroup](https://cloud.tencent.com/document/api/378/4404)查询。
                     * @param NotificationUserGroupIds 通知组ID，即为用户组ID集合，用户组ID可以通过[DescribeUserGroup](https://cloud.tencent.com/document/api/378/4404)查询。
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 待修改的通知ID。
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                    /**
                     * 通知类型，即为需要订阅的通知类型集合，取值范围如下：
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     */
                    std::vector<std::string> m_notificationTypes;
                    bool m_notificationTypesHasBeenSet;

                    /**
                     * 通知组ID，即为用户组ID集合，用户组ID可以通过[DescribeUserGroup](https://cloud.tencent.com/document/api/378/4404)查询。
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_
