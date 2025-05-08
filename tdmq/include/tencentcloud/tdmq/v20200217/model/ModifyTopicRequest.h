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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYTOPICREQUEST_H_

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
                * ModifyTopic请求参数结构体
                */
                class ModifyTopicRequest : public AbstractModel
                {
                public:
                    ModifyTopicRequest();
                    ~ModifyTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param _environmentId 环境（命名空间）名称。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取主题名。
                     * @return TopicName 主题名。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名。
                     * @param _topicName 主题名。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取分区数，必须大于或者等于原分区数，若想维持原分区数请输入原数目，修改分区数仅对非全局顺序消息起效果，不允许超过32个分区。
                     * @return Partitions 分区数，必须大于或者等于原分区数，若想维持原分区数请输入原数目，修改分区数仅对非全局顺序消息起效果，不允许超过32个分区。
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置分区数，必须大于或者等于原分区数，若想维持原分区数请输入原数目，修改分区数仅对非全局顺序消息起效果，不允许超过32个分区。
                     * @param _partitions 分区数，必须大于或者等于原分区数，若想维持原分区数请输入原数目，修改分区数仅对非全局顺序消息起效果，不允许超过32个分区。
                     * 
                     */
                    void SetPartitions(const uint64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param _clusterId Pulsar 集群的ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取备注，128字符以内。
                     * @return Remark 备注，128字符以内。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，128字符以内。
                     * @param _remark 备注，128字符以内。
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
                     * 获取未消费消息过期时间，单位：秒，取值范围：60秒~15天。

                     * @return MsgTTL 未消费消息过期时间，单位：秒，取值范围：60秒~15天。

                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 设置未消费消息过期时间，单位：秒，取值范围：60秒~15天。

                     * @param _msgTTL 未消费消息过期时间，单位：秒，取值范围：60秒~15天。

                     * 
                     */
                    void SetMsgTTL(const uint64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取不传默认是原生策略，DefaultPolicy表示当订阅下达到最大未确认消息数 5000 时，服务端将不再向当前订阅下的所有消费者推送消息，DynamicPolicy表示动态调整订阅下的最大未确认消息数，具体配额是在 5000 和消费者数量*20之间取最大值。每个消费者默认最大 unack 消息数为 20，超过该限制时仅影响该消费者，不影响其他消费者。
                     * @return UnackPolicy 不传默认是原生策略，DefaultPolicy表示当订阅下达到最大未确认消息数 5000 时，服务端将不再向当前订阅下的所有消费者推送消息，DynamicPolicy表示动态调整订阅下的最大未确认消息数，具体配额是在 5000 和消费者数量*20之间取最大值。每个消费者默认最大 unack 消息数为 20，超过该限制时仅影响该消费者，不影响其他消费者。
                     * 
                     */
                    std::string GetUnackPolicy() const;

                    /**
                     * 设置不传默认是原生策略，DefaultPolicy表示当订阅下达到最大未确认消息数 5000 时，服务端将不再向当前订阅下的所有消费者推送消息，DynamicPolicy表示动态调整订阅下的最大未确认消息数，具体配额是在 5000 和消费者数量*20之间取最大值。每个消费者默认最大 unack 消息数为 20，超过该限制时仅影响该消费者，不影响其他消费者。
                     * @param _unackPolicy 不传默认是原生策略，DefaultPolicy表示当订阅下达到最大未确认消息数 5000 时，服务端将不再向当前订阅下的所有消费者推送消息，DynamicPolicy表示动态调整订阅下的最大未确认消息数，具体配额是在 5000 和消费者数量*20之间取最大值。每个消费者默认最大 unack 消息数为 20，超过该限制时仅影响该消费者，不影响其他消费者。
                     * 
                     */
                    void SetUnackPolicy(const std::string& _unackPolicy);

                    /**
                     * 判断参数 UnackPolicy 是否已赋值
                     * @return UnackPolicy 是否已赋值
                     * 
                     */
                    bool UnackPolicyHasBeenSet() const;

                    /**
                     * 获取是否开启异常消费者隔离
                     * @return IsolateConsumerEnable 是否开启异常消费者隔离
                     * 
                     */
                    bool GetIsolateConsumerEnable() const;

                    /**
                     * 设置是否开启异常消费者隔离
                     * @param _isolateConsumerEnable 是否开启异常消费者隔离
                     * 
                     */
                    void SetIsolateConsumerEnable(const bool& _isolateConsumerEnable);

                    /**
                     * 判断参数 IsolateConsumerEnable 是否已赋值
                     * @return IsolateConsumerEnable 是否已赋值
                     * 
                     */
                    bool IsolateConsumerEnableHasBeenSet() const;

                    /**
                     * 获取消费者 Ack 超时时间，单位：秒，范围60-（3600*24
                     * @return AckTimeOut 消费者 Ack 超时时间，单位：秒，范围60-（3600*24
                     * 
                     */
                    int64_t GetAckTimeOut() const;

                    /**
                     * 设置消费者 Ack 超时时间，单位：秒，范围60-（3600*24
                     * @param _ackTimeOut 消费者 Ack 超时时间，单位：秒，范围60-（3600*24
                     * 
                     */
                    void SetAckTimeOut(const int64_t& _ackTimeOut);

                    /**
                     * 判断参数 AckTimeOut 是否已赋值
                     * @return AckTimeOut 是否已赋值
                     * 
                     */
                    bool AckTimeOutHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 分区数，必须大于或者等于原分区数，若想维持原分区数请输入原数目，修改分区数仅对非全局顺序消息起效果，不允许超过32个分区。
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备注，128字符以内。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒，取值范围：60秒~15天。

                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 不传默认是原生策略，DefaultPolicy表示当订阅下达到最大未确认消息数 5000 时，服务端将不再向当前订阅下的所有消费者推送消息，DynamicPolicy表示动态调整订阅下的最大未确认消息数，具体配额是在 5000 和消费者数量*20之间取最大值。每个消费者默认最大 unack 消息数为 20，超过该限制时仅影响该消费者，不影响其他消费者。
                     */
                    std::string m_unackPolicy;
                    bool m_unackPolicyHasBeenSet;

                    /**
                     * 是否开启异常消费者隔离
                     */
                    bool m_isolateConsumerEnable;
                    bool m_isolateConsumerEnableHasBeenSet;

                    /**
                     * 消费者 Ack 超时时间，单位：秒，范围60-（3600*24
                     */
                    int64_t m_ackTimeOut;
                    bool m_ackTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYTOPICREQUEST_H_
