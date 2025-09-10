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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeConsumerGroup请求参数结构体
                */
                class DescribeConsumerGroupRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupRequest();
                    ~DescribeConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id,通过DescribeInstances接口获取
                     * @return InstanceId ckafka集群实例Id,通过DescribeInstances接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id,通过DescribeInstances接口获取
                     * @param _instanceId ckafka集群实例Id,通过DescribeInstances接口获取
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
                     * 获取用户需要查询的group名称。
                     * @return GroupName 用户需要查询的group名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户需要查询的group名称。
                     * @param _groupName 用户需要查询的group名称。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取用户需要查询的group中的对应的topic名称，如果指定了该参数，而group又未指定则忽略该参数。
                     * @return TopicName 用户需要查询的group中的对应的topic名称，如果指定了该参数，而group又未指定则忽略该参数。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置用户需要查询的group中的对应的topic名称，如果指定了该参数，而group又未指定则忽略该参数。
                     * @param _topicName 用户需要查询的group中的对应的topic名称，如果指定了该参数，而group又未指定则忽略该参数。
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
                     * 获取返回消费组的限制数量，最大支持50
                     * @return Limit 返回消费组的限制数量，最大支持50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回消费组的限制数量，最大支持50
                     * @param _limit 返回消费组的限制数量，最大支持50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取消费组列表的起始偏移量
                     * @return Offset 消费组列表的起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置消费组列表的起始偏移量
                     * @param _offset 消费组列表的起始偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id,通过DescribeInstances接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户需要查询的group名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户需要查询的group中的对应的topic名称，如果指定了该参数，而group又未指定则忽略该参数。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 返回消费组的限制数量，最大支持50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 消费组列表的起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_
