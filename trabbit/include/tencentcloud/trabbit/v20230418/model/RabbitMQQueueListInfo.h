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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQQueueListConsumerDetailInfo.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ队列列表成员信息
                */
                class RabbitMQQueueListInfo : public AbstractModel
                {
                public:
                    RabbitMQQueueListInfo();
                    ~RabbitMQQueueListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取队列名
                     * @return QueueName 队列名
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名
                     * @param _queueName 队列名
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
                     * 获取备注说明
                     * @return Remark 备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注说明
                     * @param _remark 备注说明
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
                     * 获取消费者信息
                     * @return ConsumerDetail 消费者信息
                     * 
                     */
                    RabbitMQQueueListConsumerDetailInfo GetConsumerDetail() const;

                    /**
                     * 设置消费者信息
                     * @param _consumerDetail 消费者信息
                     * 
                     */
                    void SetConsumerDetail(const RabbitMQQueueListConsumerDetailInfo& _consumerDetail);

                    /**
                     * 判断参数 ConsumerDetail 是否已赋值
                     * @return ConsumerDetail 是否已赋值
                     * 
                     */
                    bool ConsumerDetailHasBeenSet() const;

                    /**
                     * 获取队列类型，取值 "classic"，"quorum"
                     * @return QueueType 队列类型，取值 "classic"，"quorum"
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置队列类型，取值 "classic"，"quorum"
                     * @param _queueType 队列类型，取值 "classic"，"quorum"
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取消息堆积数
                     * @return MessageHeapCount 消息堆积数
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置消息堆积数
                     * @param _messageHeapCount 消息堆积数
                     * 
                     */
                    void SetMessageHeapCount(const int64_t& _messageHeapCount);

                    /**
                     * 判断参数 MessageHeapCount 是否已赋值
                     * @return MessageHeapCount 是否已赋值
                     * 
                     */
                    bool MessageHeapCountHasBeenSet() const;

                    /**
                     * 获取消息生产速率，每秒
                     * @return MessageRateIn 消息生产速率，每秒
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置消息生产速率，每秒
                     * @param _messageRateIn 消息生产速率，每秒
                     * 
                     */
                    void SetMessageRateIn(const double& _messageRateIn);

                    /**
                     * 判断参数 MessageRateIn 是否已赋值
                     * @return MessageRateIn 是否已赋值
                     * 
                     */
                    bool MessageRateInHasBeenSet() const;

                    /**
                     * 获取消息消费速率，每秒
                     * @return MessageRateOut 消息消费速率，每秒
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置消息消费速率，每秒
                     * @param _messageRateOut 消息消费速率，每秒
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取队列是否持久化，true 为持久化，false 为非持久化
                     * @return Durable 队列是否持久化，true 为持久化，false 为非持久化
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置队列是否持久化，true 为持久化，false 为非持久化
                     * @param _durable 队列是否持久化，true 为持久化，false 为非持久化
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取队列是否为自动删除队列，true 为自动删除，false 为非自动删除
                     * @return AutoDelete 队列是否为自动删除队列，true 为自动删除，false 为非自动删除
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置队列是否为自动删除队列，true 为自动删除，false 为非自动删除
                     * @param _autoDelete 队列是否为自动删除队列，true 为自动删除，false 为非自动删除
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取队列所属实例 ID
                     * @return InstanceId 队列所属实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置队列所属实例 ID
                     * @param _instanceId 队列所属实例 ID
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
                     * 获取队列所属虚拟主机名称
                     * @return VirtualHost 队列所属虚拟主机名称
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置队列所属虚拟主机名称
                     * @param _virtualHost 队列所属虚拟主机名称
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
                     * 获取队列所在主节点名称
                     * @return Node 队列所在主节点名称
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置队列所在主节点名称
                     * @param _node 队列所在主节点名称
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取生效的策略名称
                     * @return Policy 生效的策略名称
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置生效的策略名称
                     * @param _policy 生效的策略名称
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取扩展参数 key-value 对象
                     * @return Arguments 扩展参数 key-value 对象
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置扩展参数 key-value 对象
                     * @param _arguments 扩展参数 key-value 对象
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取是否独占队列
                     * @return Exclusive 是否独占队列
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 设置是否独占队列
                     * @param _exclusive 是否独占队列
                     * 
                     */
                    void SetExclusive(const bool& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                private:

                    /**
                     * 队列名
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 消费者信息
                     */
                    RabbitMQQueueListConsumerDetailInfo m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                    /**
                     * 队列类型，取值 "classic"，"quorum"
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 消息堆积数
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * 消息生产速率，每秒
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * 消息消费速率，每秒
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 队列是否持久化，true 为持久化，false 为非持久化
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * 队列是否为自动删除队列，true 为自动删除，false 为非自动删除
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 队列所属实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 队列所属虚拟主机名称
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 队列所在主节点名称
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * 生效的策略名称
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 扩展参数 key-value 对象
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * 是否独占队列
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_
