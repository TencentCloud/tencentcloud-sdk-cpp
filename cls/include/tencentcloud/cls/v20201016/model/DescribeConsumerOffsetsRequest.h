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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConsumerOffsets请求参数结构体
                */
                class DescribeConsumerOffsetsRequest : public AbstractModel
                {
                public:
                    DescribeConsumerOffsetsRequest();
                    ~DescribeConsumerOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题对应的消费组标识
                     * @return ConsumerGroup 日志主题对应的消费组标识
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置日志主题对应的消费组标识
                     * @param _consumerGroup 日志主题对应的消费组标识
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
                     * 获取时间戳(秒级时间戳)
                     * @return From 时间戳(秒级时间戳)
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置时间戳(秒级时间戳)
                     * @param _from 时间戳(秒级时间戳)
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取日志集id(日志主题对应的id)
                     * @return LogsetId 日志集id(日志主题对应的id)
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id(日志主题对应的id)
                     * @param _logsetId 日志集id(日志主题对应的id)
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
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取分区id
                     * @return PartitionId 分区id
                     * 
                     */
                    std::string GetPartitionId() const;

                    /**
                     * 设置分区id
                     * @param _partitionId 分区id
                     * 
                     */
                    void SetPartitionId(const std::string& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                private:

                    /**
                     * 日志主题对应的消费组标识
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 时间戳(秒级时间戳)
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 日志集id(日志主题对应的id)
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 分区id
                     */
                    std::string m_partitionId;
                    bool m_partitionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMEROFFSETSREQUEST_H_
