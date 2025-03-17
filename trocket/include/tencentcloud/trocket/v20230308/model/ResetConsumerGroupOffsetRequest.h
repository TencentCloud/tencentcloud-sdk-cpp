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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ResetConsumerGroupOffset请求参数结构体
                */
                class ResetConsumerGroupOffsetRequest : public AbstractModel
                {
                public:
                    ResetConsumerGroupOffsetRequest();
                    ~ResetConsumerGroupOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取重置位点时间（单位：毫秒）-1表示重置到最新位点
                     * @return ResetTimestamp 重置位点时间（单位：毫秒）-1表示重置到最新位点
                     * 
                     */
                    int64_t GetResetTimestamp() const;

                    /**
                     * 设置重置位点时间（单位：毫秒）-1表示重置到最新位点
                     * @param _resetTimestamp 重置位点时间（单位：毫秒）-1表示重置到最新位点
                     * 
                     */
                    void SetResetTimestamp(const int64_t& _resetTimestamp);

                    /**
                     * 判断参数 ResetTimestamp 是否已赋值
                     * @return ResetTimestamp 是否已赋值
                     * 
                     */
                    bool ResetTimestampHasBeenSet() const;

                    /**
                     * 获取消费组名称
                     * @return ConsumerGroup 消费组名称
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称
                     * @param _consumerGroup 消费组名称
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 重置位点时间（单位：毫秒）-1表示重置到最新位点
                     */
                    int64_t m_resetTimestamp;
                    bool m_resetTimestampHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
