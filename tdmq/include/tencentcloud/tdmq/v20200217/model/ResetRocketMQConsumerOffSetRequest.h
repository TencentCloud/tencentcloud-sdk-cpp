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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_

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
                * ResetRocketMQConsumerOffSet请求参数结构体
                */
                class ResetRocketMQConsumerOffSetRequest : public AbstractModel
                {
                public:
                    ResetRocketMQConsumerOffSetRequest();
                    ~ResetRocketMQConsumerOffSetRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取命名空间名称
                     * @return NamespaceId 命名空间名称
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间名称
                     * @param NamespaceId 命名空间名称
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取消费组名称
                     * @return GroupId 消费组名称
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置消费组名称
                     * @param GroupId 消费组名称
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param Topic 主题名称
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取重置方式，0表示从最新位点开始，1表示从指定时间点开始
                     * @return Type 重置方式，0表示从最新位点开始，1表示从指定时间点开始
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置重置方式，0表示从最新位点开始，1表示从指定时间点开始
                     * @param Type 重置方式，0表示从最新位点开始，1表示从指定时间点开始
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取重置指定的时间戳，仅在 Type 为1是生效，以毫秒为单位
                     * @return ResetTimestamp 重置指定的时间戳，仅在 Type 为1是生效，以毫秒为单位
                     */
                    uint64_t GetResetTimestamp() const;

                    /**
                     * 设置重置指定的时间戳，仅在 Type 为1是生效，以毫秒为单位
                     * @param ResetTimestamp 重置指定的时间戳，仅在 Type 为1是生效，以毫秒为单位
                     */
                    void SetResetTimestamp(const uint64_t& _resetTimestamp);

                    /**
                     * 判断参数 ResetTimestamp 是否已赋值
                     * @return ResetTimestamp 是否已赋值
                     */
                    bool ResetTimestampHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 重置方式，0表示从最新位点开始，1表示从指定时间点开始
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 重置指定的时间戳，仅在 Type 为1是生效，以毫秒为单位
                     */
                    uint64_t m_resetTimestamp;
                    bool m_resetTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_
