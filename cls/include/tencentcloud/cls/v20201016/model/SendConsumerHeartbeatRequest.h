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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/TopicPartitionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SendConsumerHeartbeat请求参数结构体
                */
                class SendConsumerHeartbeatRequest : public AbstractModel
                {
                public:
                    SendConsumerHeartbeatRequest();
                    ~SendConsumerHeartbeatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取上报心跳的消费组标识
                     * @return ConsumerGroup 上报心跳的消费组标识
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置上报心跳的消费组标识
                     * @param _consumerGroup 上报心跳的消费组标识
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取上报心跳的消费者名称
（字母数字下划线，不允许数字、_开头， 长度小于256）
                     * @return Consumer 上报心跳的消费者名称
（字母数字下划线，不允许数字、_开头， 长度小于256）
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置上报心跳的消费者名称
（字母数字下划线，不允许数字、_开头， 长度小于256）
                     * @param _consumer 上报心跳的消费者名称
（字母数字下划线，不允许数字、_开头， 长度小于256）
                     * 
                     */
                    void SetConsumer(const std::string& _consumer);

                    /**
                     * 判断参数 Consumer 是否已赋值
                     * @return Consumer 是否已赋值
                     * 
                     */
                    bool ConsumerHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取topic 分区信息
                     * @return TopicPartitionsInfo topic 分区信息
                     * 
                     */
                    std::vector<TopicPartitionInfo> GetTopicPartitionsInfo() const;

                    /**
                     * 设置topic 分区信息
                     * @param _topicPartitionsInfo topic 分区信息
                     * 
                     */
                    void SetTopicPartitionsInfo(const std::vector<TopicPartitionInfo>& _topicPartitionsInfo);

                    /**
                     * 判断参数 TopicPartitionsInfo 是否已赋值
                     * @return TopicPartitionsInfo 是否已赋值
                     * 
                     */
                    bool TopicPartitionsInfoHasBeenSet() const;

                private:

                    /**
                     * 上报心跳的消费组标识
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 上报心跳的消费者名称
（字母数字下划线，不允许数字、_开头， 长度小于256）
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * topic 分区信息
                     */
                    std::vector<TopicPartitionInfo> m_topicPartitionsInfo;
                    bool m_topicPartitionsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SENDCONSUMERHEARTBEATREQUEST_H_
