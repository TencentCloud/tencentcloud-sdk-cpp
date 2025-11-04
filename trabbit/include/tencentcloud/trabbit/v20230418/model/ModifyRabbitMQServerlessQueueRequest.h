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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyRabbitMQServerlessQueue请求参数结构体
                */
                class ModifyRabbitMQServerlessQueueRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessQueueRequest();
                    ~ModifyRabbitMQServerlessQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Vhost参数
                     * @return VirtualHost Vhost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost参数
                     * @param _virtualHost Vhost参数
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取队列名称
                     * @return QueueName 队列名称
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称
                     * @param _queueName 队列名称
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
                     * 获取新修改的备注
                     * @return Remark 新修改的备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置新修改的备注
                     * @param _remark 新修改的备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取MessageTTL参数单位ms,classic类型专用	
                     * @return MessageTTL MessageTTL参数单位ms,classic类型专用	
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 设置MessageTTL参数单位ms,classic类型专用	
                     * @param _messageTTL MessageTTL参数单位ms,classic类型专用	
                     * 
                     */
                    void SetMessageTTL(const int64_t& _messageTTL);

                    /**
                     * 判断参数 MessageTTL 是否已赋值
                     * @return MessageTTL 是否已赋值
                     * 
                     */
                    bool MessageTTLHasBeenSet() const;

                    /**
                     * 获取DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * @return DeadLetterExchange DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * @param _deadLetterExchange DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * 
                     */
                    void SetDeadLetterExchange(const std::string& _deadLetterExchange);

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     * 
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * @return DeadLetterRoutingKey DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * @param _deadLetterRoutingKey DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * 
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 新修改的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * MessageTTL参数单位ms,classic类型专用	
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_
