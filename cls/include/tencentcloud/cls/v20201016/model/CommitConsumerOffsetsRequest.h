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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/TopicPartitionOffsetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CommitConsumerOffsets请求参数结构体
                */
                class CommitConsumerOffsetsRequest : public AbstractModel
                {
                public:
                    CommitConsumerOffsetsRequest();
                    ~CommitConsumerOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消费组标识
                     * @return ConsumerGroup 消费组标识
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组标识
                     * @param _consumerGroup 消费组标识
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
                     * 获取消费机器名称
                     * @return Consumer 消费机器名称
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置消费机器名称
                     * @param _consumer 消费机器名称
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
                     * 获取日志集id
                     * @return LogsetId 日志集id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id
                     * @param _logsetId 日志集id
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
                     * 获取topic分区点位信息
                     * @return TopicPartitionOffsetsInfo topic分区点位信息
                     * 
                     */
                    std::vector<TopicPartitionOffsetInfo> GetTopicPartitionOffsetsInfo() const;

                    /**
                     * 设置topic分区点位信息
                     * @param _topicPartitionOffsetsInfo topic分区点位信息
                     * 
                     */
                    void SetTopicPartitionOffsetsInfo(const std::vector<TopicPartitionOffsetInfo>& _topicPartitionOffsetsInfo);

                    /**
                     * 判断参数 TopicPartitionOffsetsInfo 是否已赋值
                     * @return TopicPartitionOffsetsInfo 是否已赋值
                     * 
                     */
                    bool TopicPartitionOffsetsInfoHasBeenSet() const;

                private:

                    /**
                     * 消费组标识
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 消费机器名称
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                    /**
                     * 日志集id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * topic分区点位信息
                     */
                    std::vector<TopicPartitionOffsetInfo> m_topicPartitionOffsetsInfo;
                    bool m_topicPartitionOffsetsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COMMITCONSUMEROFFSETSREQUEST_H_
