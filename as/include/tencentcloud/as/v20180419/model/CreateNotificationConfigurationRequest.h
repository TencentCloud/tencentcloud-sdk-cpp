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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_

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
                * CreateNotificationConfiguration请求参数结构体
                */
                class CreateNotificationConfigurationRequest : public AbstractModel
                {
                public:
                    CreateNotificationConfigurationRequest();
                    ~CreateNotificationConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
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
                     * 
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
                     * @param _notificationTypes 通知类型，即为需要订阅的通知类型集合，取值范围如下：
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
                     * 获取通知组ID，即为用户组ID集合，用户组ID可以通过[ListGroups](https://cloud.tencent.com/document/product/598/34589)查询。该参数仅在 TargetType 为 USER_GROUP 时生效。
                     * @return NotificationUserGroupIds 通知组ID，即为用户组ID集合，用户组ID可以通过[ListGroups](https://cloud.tencent.com/document/product/598/34589)查询。该参数仅在 TargetType 为 USER_GROUP 时生效。
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置通知组ID，即为用户组ID集合，用户组ID可以通过[ListGroups](https://cloud.tencent.com/document/product/598/34589)查询。该参数仅在 TargetType 为 USER_GROUP 时生效。
                     * @param _notificationUserGroupIds 通知组ID，即为用户组ID集合，用户组ID可以通过[ListGroups](https://cloud.tencent.com/document/product/598/34589)查询。该参数仅在 TargetType 为 USER_GROUP 时生效。
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
                     * 获取通知接收端类型，取值如下：
<li>USER_GROUP：用户组</li>
<li>TDMQ_CMQ_TOPIC：TDMQ CMQ 主题</li>
<li>TDMQ_CMQ_QUEUE：TDMQ CMQ 队列</li>
<li>CMQ_QUEUE：CMQ 队列，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>
<li>CMQ_TOPIC：CMQ 主题，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>

默认值为：`USER_GROUP`。
                     * @return TargetType 通知接收端类型，取值如下：
<li>USER_GROUP：用户组</li>
<li>TDMQ_CMQ_TOPIC：TDMQ CMQ 主题</li>
<li>TDMQ_CMQ_QUEUE：TDMQ CMQ 队列</li>
<li>CMQ_QUEUE：CMQ 队列，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>
<li>CMQ_TOPIC：CMQ 主题，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>

默认值为：`USER_GROUP`。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置通知接收端类型，取值如下：
<li>USER_GROUP：用户组</li>
<li>TDMQ_CMQ_TOPIC：TDMQ CMQ 主题</li>
<li>TDMQ_CMQ_QUEUE：TDMQ CMQ 队列</li>
<li>CMQ_QUEUE：CMQ 队列，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>
<li>CMQ_TOPIC：CMQ 主题，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>

默认值为：`USER_GROUP`。
                     * @param _targetType 通知接收端类型，取值如下：
<li>USER_GROUP：用户组</li>
<li>TDMQ_CMQ_TOPIC：TDMQ CMQ 主题</li>
<li>TDMQ_CMQ_QUEUE：TDMQ CMQ 队列</li>
<li>CMQ_QUEUE：CMQ 队列，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>
<li>CMQ_TOPIC：CMQ 主题，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>

默认值为：`USER_GROUP`。
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
                     * 获取TDMQ CMQ 队列名，如 TargetType 取值为 `TDMQ_CMQ_QUEUE` ，该字段必填。
                     * @return QueueName TDMQ CMQ 队列名，如 TargetType 取值为 `TDMQ_CMQ_QUEUE` ，该字段必填。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置TDMQ CMQ 队列名，如 TargetType 取值为 `TDMQ_CMQ_QUEUE` ，该字段必填。
                     * @param _queueName TDMQ CMQ 队列名，如 TargetType 取值为 `TDMQ_CMQ_QUEUE` ，该字段必填。
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
                     * 获取TDMQ CMQ 主题名，如 TargetType 取值为 `TDMQ_CMQ_TOPIC` ，该字段必填。
                     * @return TopicName TDMQ CMQ 主题名，如 TargetType 取值为 `TDMQ_CMQ_TOPIC` ，该字段必填。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TDMQ CMQ 主题名，如 TargetType 取值为 `TDMQ_CMQ_TOPIC` ，该字段必填。
                     * @param _topicName TDMQ CMQ 主题名，如 TargetType 取值为 `TDMQ_CMQ_TOPIC` ，该字段必填。
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
                     * 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

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
                     * 通知组ID，即为用户组ID集合，用户组ID可以通过[ListGroups](https://cloud.tencent.com/document/product/598/34589)查询。该参数仅在 TargetType 为 USER_GROUP 时生效。
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * 通知接收端类型，取值如下：
<li>USER_GROUP：用户组</li>
<li>TDMQ_CMQ_TOPIC：TDMQ CMQ 主题</li>
<li>TDMQ_CMQ_QUEUE：TDMQ CMQ 队列</li>
<li>CMQ_QUEUE：CMQ 队列，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>
<li>CMQ_TOPIC：CMQ 主题，[CMQ已下线](https://cloud.tencent.com/document/product/1496/83970)，目前仅推荐使用  TDMQ CMQ。</li>

默认值为：`USER_GROUP`。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TDMQ CMQ 队列名，如 TargetType 取值为 `TDMQ_CMQ_QUEUE` ，该字段必填。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * TDMQ CMQ 主题名，如 TargetType 取值为 `TDMQ_CMQ_TOPIC` ，该字段必填。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_
