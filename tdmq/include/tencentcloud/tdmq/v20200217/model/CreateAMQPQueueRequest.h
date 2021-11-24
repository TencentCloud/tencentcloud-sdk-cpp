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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPQUEUEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateAMQPQueue请求参数结构体
                */
                class CreateAMQPQueueRequest : public AbstractModel
                {
                public:
                    CreateAMQPQueueRequest();
                    ~CreateAMQPQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取队列名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return Queue 队列名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置队列名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param Queue 队列名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取队列所在的vhost名称
                     * @return VHostId 队列所在的vhost名称
                     */
                    std::string GetVHostId() const;

                    /**
                     * 设置队列所在的vhost名称
                     * @param VHostId 队列所在的vhost名称
                     */
                    void SetVHostId(const std::string& _vHostId);

                    /**
                     * 判断参数 VHostId 是否已赋值
                     * @return VHostId 是否已赋值
                     */
                    bool VHostIdHasBeenSet() const;

                    /**
                     * 获取是否自动清除
                     * @return AutoDelete 是否自动清除
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置是否自动清除
                     * @param AutoDelete 是否自动清除
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取队列说明，最大128个字符
                     * @return Remark 队列说明，最大128个字符
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置队列说明，最大128个字符
                     * @param Remark 队列说明，最大128个字符
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取死信exchange
                     * @return DeadLetterExchange 死信exchange
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置死信exchange
                     * @param DeadLetterExchange 死信exchange
                     */
                    void SetDeadLetterExchange(const std::string& _deadLetterExchange);

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取路由键
                     * @return DeadLetterRoutingKey 路由键
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置路由键
                     * @param DeadLetterRoutingKey 路由键
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                private:

                    /**
                     * 队列名称，3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 队列所在的vhost名称
                     */
                    std::string m_vHostId;
                    bool m_vHostIdHasBeenSet;

                    /**
                     * 是否自动清除
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 队列说明，最大128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 死信exchange
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * 路由键
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPQUEUEREQUEST_H_
