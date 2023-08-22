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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_

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
                * CreateTopic请求参数结构体
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
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
                     * 获取主题名，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @return TopicName 主题名，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @param _topicName 主题名，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
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
                     * 获取入参为1，即是创建非分区topic，无分区；入参大于1，表示分区topic的分区数，最大不允许超过128。
                     * @return Partitions 入参为1，即是创建非分区topic，无分区；入参大于1，表示分区topic的分区数，最大不允许超过128。
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置入参为1，即是创建非分区topic，无分区；入参大于1，表示分区topic的分区数，最大不允许超过128。
                     * @param _partitions 入参为1，即是创建非分区topic，无分区；入参大于1，表示分区topic的分区数，最大不允许超过128。
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
                     * 获取该入参将逐步弃用，可切换至PulsarTopicType参数
0： 普通消息；
1 ：全局顺序消息；
2 ：局部顺序消息；
3 ：重试队列；
4 ：死信队列。
                     * @return TopicType 该入参将逐步弃用，可切换至PulsarTopicType参数
0： 普通消息；
1 ：全局顺序消息；
2 ：局部顺序消息；
3 ：重试队列；
4 ：死信队列。
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置该入参将逐步弃用，可切换至PulsarTopicType参数
0： 普通消息；
1 ：全局顺序消息；
2 ：局部顺序消息；
3 ：重试队列；
4 ：死信队列。
                     * @param _topicType 该入参将逐步弃用，可切换至PulsarTopicType参数
0： 普通消息；
1 ：全局顺序消息；
2 ：局部顺序消息；
3 ：重试队列；
4 ：死信队列。
                     * 
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

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
                     * 获取Pulsar 主题类型
0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
                     * @return PulsarTopicType Pulsar 主题类型
0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
                     * 
                     */
                    int64_t GetPulsarTopicType() const;

                    /**
                     * 设置Pulsar 主题类型
0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
                     * @param _pulsarTopicType Pulsar 主题类型
0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
                     * 
                     */
                    void SetPulsarTopicType(const int64_t& _pulsarTopicType);

                    /**
                     * 判断参数 PulsarTopicType 是否已赋值
                     * @return PulsarTopicType 是否已赋值
                     * 
                     */
                    bool PulsarTopicTypeHasBeenSet() const;

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

                private:

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 入参为1，即是创建非分区topic，无分区；入参大于1，表示分区topic的分区数，最大不允许超过128。
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 备注，128字符以内。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 该入参将逐步弃用，可切换至PulsarTopicType参数
0： 普通消息；
1 ：全局顺序消息；
2 ：局部顺序消息；
3 ：重试队列；
4 ：死信队列。
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Pulsar 主题类型
0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
                     */
                    int64_t m_pulsarTopicType;
                    bool m_pulsarTopicTypeHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒，取值范围：60秒~15天。
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATETOPICREQUEST_H_
