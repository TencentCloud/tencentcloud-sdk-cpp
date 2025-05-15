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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_NOTIFICATIONTARGET_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_NOTIFICATIONTARGET_H_

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
                * 通知目标
                */
                class NotificationTarget : public AbstractModel
                {
                public:
                    NotificationTarget();
                    ~NotificationTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标类型，取值范围包括`CMQ_QUEUE`、`CMQ_TOPIC`、`TDMQ_CMQ_QUEUE`、`TDMQ_CMQ_TOPIC`。
<li> CMQ_QUEUE，指腾讯云消息队列-队列模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_QUEUE 使用。</li>
<li> CMQ_TOPIC，指腾讯云消息队列-主题模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_TOPIC 使用。</li>
<li> TDMQ_CMQ_QUEUE，指腾讯云 TDMQ 消息队列-队列模型。</li>
<li> TDMQ_CMQ_TOPIC，指腾讯云 TDMQ 消息队列-主题模型。</li>
                     * @return TargetType 目标类型，取值范围包括`CMQ_QUEUE`、`CMQ_TOPIC`、`TDMQ_CMQ_QUEUE`、`TDMQ_CMQ_TOPIC`。
<li> CMQ_QUEUE，指腾讯云消息队列-队列模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_QUEUE 使用。</li>
<li> CMQ_TOPIC，指腾讯云消息队列-主题模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_TOPIC 使用。</li>
<li> TDMQ_CMQ_QUEUE，指腾讯云 TDMQ 消息队列-队列模型。</li>
<li> TDMQ_CMQ_TOPIC，指腾讯云 TDMQ 消息队列-主题模型。</li>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置目标类型，取值范围包括`CMQ_QUEUE`、`CMQ_TOPIC`、`TDMQ_CMQ_QUEUE`、`TDMQ_CMQ_TOPIC`。
<li> CMQ_QUEUE，指腾讯云消息队列-队列模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_QUEUE 使用。</li>
<li> CMQ_TOPIC，指腾讯云消息队列-主题模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_TOPIC 使用。</li>
<li> TDMQ_CMQ_QUEUE，指腾讯云 TDMQ 消息队列-队列模型。</li>
<li> TDMQ_CMQ_TOPIC，指腾讯云 TDMQ 消息队列-主题模型。</li>
                     * @param _targetType 目标类型，取值范围包括`CMQ_QUEUE`、`CMQ_TOPIC`、`TDMQ_CMQ_QUEUE`、`TDMQ_CMQ_TOPIC`。
<li> CMQ_QUEUE，指腾讯云消息队列-队列模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_QUEUE 使用。</li>
<li> CMQ_TOPIC，指腾讯云消息队列-主题模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_TOPIC 使用。</li>
<li> TDMQ_CMQ_QUEUE，指腾讯云 TDMQ 消息队列-队列模型。</li>
<li> TDMQ_CMQ_TOPIC，指腾讯云 TDMQ 消息队列-主题模型。</li>
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
                     * 获取队列名称，如果`TargetType`取值为`CMQ_QUEUE` 或 `TDMQ_CMQ_QUEUE`，则本字段必填。
                     * @return QueueName 队列名称，如果`TargetType`取值为`CMQ_QUEUE` 或 `TDMQ_CMQ_QUEUE`，则本字段必填。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称，如果`TargetType`取值为`CMQ_QUEUE` 或 `TDMQ_CMQ_QUEUE`，则本字段必填。
                     * @param _queueName 队列名称，如果`TargetType`取值为`CMQ_QUEUE` 或 `TDMQ_CMQ_QUEUE`，则本字段必填。
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
                     * 获取主题名称，如果`TargetType`取值为`CMQ_TOPIC` 或 `TDMQ_CMQ_TOPIC`，则本字段必填。
                     * @return TopicName 主题名称，如果`TargetType`取值为`CMQ_TOPIC` 或 `TDMQ_CMQ_TOPIC`，则本字段必填。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称，如果`TargetType`取值为`CMQ_TOPIC` 或 `TDMQ_CMQ_TOPIC`，则本字段必填。
                     * @param _topicName 主题名称，如果`TargetType`取值为`CMQ_TOPIC` 或 `TDMQ_CMQ_TOPIC`，则本字段必填。
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
                     * 目标类型，取值范围包括`CMQ_QUEUE`、`CMQ_TOPIC`、`TDMQ_CMQ_QUEUE`、`TDMQ_CMQ_TOPIC`。
<li> CMQ_QUEUE，指腾讯云消息队列-队列模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_QUEUE 使用。</li>
<li> CMQ_TOPIC，指腾讯云消息队列-主题模型，对应产品已下线，[建议切换](https://cloud.tencent.com/document/product/1496/83970) TDMQ_CMQ_TOPIC 使用。</li>
<li> TDMQ_CMQ_QUEUE，指腾讯云 TDMQ 消息队列-队列模型。</li>
<li> TDMQ_CMQ_TOPIC，指腾讯云 TDMQ 消息队列-主题模型。</li>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 队列名称，如果`TargetType`取值为`CMQ_QUEUE` 或 `TDMQ_CMQ_QUEUE`，则本字段必填。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 主题名称，如果`TargetType`取值为`CMQ_TOPIC` 或 `TDMQ_CMQ_TOPIC`，则本字段必填。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_NOTIFICATIONTARGET_H_
