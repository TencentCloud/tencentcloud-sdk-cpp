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
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取用户组ID列表。
                     * @return NotificationUserGroupIds 用户组ID列表。
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置用户组ID列表。
                     * @param _notificationUserGroupIds 用户组ID列表。
                     * 
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     * 
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                    /**
                     * 获取通知事件列表。取值范围如下:
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * @return NotificationTypes 通知事件列表。取值范围如下:
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * 
                     */
                    std::vector<std::string> GetNotificationTypes() const;

                    /**
                     * 设置通知事件列表。取值范围如下:
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * @param _notificationTypes 通知事件列表。取值范围如下:
<li>SCALE_OUT_SUCCESSFUL：扩容成功</li>
<li>SCALE_OUT_FAILED：扩容失败</li>
<li>SCALE_IN_SUCCESSFUL：缩容成功</li>
<li>SCALE_IN_FAILED：缩容失败</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL：替换不健康子机成功</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED：替换不健康子机失败</li>
                     * 
                     */
                    void SetNotificationTypes(const std::vector<std::string>& _notificationTypes);

                    /**
                     * 判断参数 NotificationTypes 是否已赋值
                     * @return NotificationTypes 是否已赋值
                     * 
                     */
                    bool NotificationTypesHasBeenSet() const;

                    /**
                     * 获取事件通知ID。
                     * @return AutoScalingNotificationId 事件通知ID。
                     * 
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置事件通知ID。
                     * @param _autoScalingNotificationId 事件通知ID。
                     * 
                     */
                    void SetAutoScalingNotificationId(const std::string& _autoScalingNotificationId);

                    /**
                     * 判断参数 AutoScalingNotificationId 是否已赋值
                     * @return AutoScalingNotificationId 是否已赋值
                     * 
                     */
                    bool AutoScalingNotificationIdHasBeenSet() const;

                    /**
                     * 获取通知接收端类型。取值范围如下：
USER_GROUP：用户组
TDMQ_CMQ_TOPIC：TDMQ CMQ 主题
TDMQ_CMQ_QUEUE：TDMQ CMQ 队列
CMQ_QUEUE：CMQ 队列，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
CMQ_TOPIC：CMQ 主题，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
                     * @return TargetType 通知接收端类型。取值范围如下：
USER_GROUP：用户组
TDMQ_CMQ_TOPIC：TDMQ CMQ 主题
TDMQ_CMQ_QUEUE：TDMQ CMQ 队列
CMQ_QUEUE：CMQ 队列，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
CMQ_TOPIC：CMQ 主题，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置通知接收端类型。取值范围如下：
USER_GROUP：用户组
TDMQ_CMQ_TOPIC：TDMQ CMQ 主题
TDMQ_CMQ_QUEUE：TDMQ CMQ 队列
CMQ_QUEUE：CMQ 队列，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
CMQ_TOPIC：CMQ 主题，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
                     * @param _targetType 通知接收端类型。取值范围如下：
USER_GROUP：用户组
TDMQ_CMQ_TOPIC：TDMQ CMQ 主题
TDMQ_CMQ_QUEUE：TDMQ CMQ 队列
CMQ_QUEUE：CMQ 队列，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
CMQ_TOPIC：CMQ 主题，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取TDMQ CMQ 队列名。
                     * @return QueueName TDMQ CMQ 队列名。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置TDMQ CMQ 队列名。
                     * @param _queueName TDMQ CMQ 队列名。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取TDMQ CMQ 主题名。
                     * @return TopicName TDMQ CMQ 主题名。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TDMQ CMQ 主题名。
                     * @param _topicName TDMQ CMQ 主题名。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

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
                     * 通知事件列表。取值范围如下:
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
                     * 事件通知ID。
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                    /**
                     * 通知接收端类型。取值范围如下：
USER_GROUP：用户组
TDMQ_CMQ_TOPIC：TDMQ CMQ 主题
TDMQ_CMQ_QUEUE：TDMQ CMQ 队列
CMQ_QUEUE：CMQ 队列，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
CMQ_TOPIC：CMQ 主题，[CMQ 接口已下线](https://cloud.tencent.com/document/product/1496/83970)，已无法选用
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TDMQ CMQ 队列名。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * TDMQ CMQ 主题名。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_
