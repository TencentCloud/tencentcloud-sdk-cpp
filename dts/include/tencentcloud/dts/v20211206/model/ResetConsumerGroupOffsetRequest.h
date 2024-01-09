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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
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
                     * 获取订阅实例id
                     * @return SubscribeId 订阅实例id
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置订阅实例id
                     * @param _subscribeId 订阅实例id
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取订阅的kafka topic
                     * @return TopicName 订阅的kafka topic
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置订阅的kafka topic
                     * @param _topicName 订阅的kafka topic
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
                     * 获取消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}
                     * @return ConsumerGroupName 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}
                     * @param _consumerGroupName 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取需要修改offset的分区编号
                     * @return PartitionNos 需要修改offset的分区编号
                     * 
                     */
                    std::vector<int64_t> GetPartitionNos() const;

                    /**
                     * 设置需要修改offset的分区编号
                     * @param _partitionNos 需要修改offset的分区编号
                     * 
                     */
                    void SetPartitionNos(const std::vector<int64_t>& _partitionNos);

                    /**
                     * 判断参数 PartitionNos 是否已赋值
                     * @return PartitionNos 是否已赋值
                     * 
                     */
                    bool PartitionNosHasBeenSet() const;

                    /**
                     * 获取重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费
                     * @return ResetMode 重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费
                     * 
                     */
                    std::string GetResetMode() const;

                    /**
                     * 设置重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费
                     * @param _resetMode 重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费
                     * 
                     */
                    void SetResetMode(const std::string& _resetMode);

                    /**
                     * 判断参数 ResetMode 是否已赋值
                     * @return ResetMode 是否已赋值
                     * 
                     */
                    bool ResetModeHasBeenSet() const;

                    /**
                     * 获取当 ResetMode 为 datetime 时，该项需要填，格式为：Y-m-d h:m:s。如果不填，默认用0时间，效果与earliest相同。
                     * @return ResetDatetime 当 ResetMode 为 datetime 时，该项需要填，格式为：Y-m-d h:m:s。如果不填，默认用0时间，效果与earliest相同。
                     * 
                     */
                    std::string GetResetDatetime() const;

                    /**
                     * 设置当 ResetMode 为 datetime 时，该项需要填，格式为：Y-m-d h:m:s。如果不填，默认用0时间，效果与earliest相同。
                     * @param _resetDatetime 当 ResetMode 为 datetime 时，该项需要填，格式为：Y-m-d h:m:s。如果不填，默认用0时间，效果与earliest相同。
                     * 
                     */
                    void SetResetDatetime(const std::string& _resetDatetime);

                    /**
                     * 判断参数 ResetDatetime 是否已赋值
                     * @return ResetDatetime 是否已赋值
                     * 
                     */
                    bool ResetDatetimeHasBeenSet() const;

                private:

                    /**
                     * 订阅实例id
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 订阅的kafka topic
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 需要修改offset的分区编号
                     */
                    std::vector<int64_t> m_partitionNos;
                    bool m_partitionNosHasBeenSet;

                    /**
                     * 重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费
                     */
                    std::string m_resetMode;
                    bool m_resetModeHasBeenSet;

                    /**
                     * 当 ResetMode 为 datetime 时，该项需要填，格式为：Y-m-d h:m:s。如果不填，默认用0时间，效果与earliest相同。
                     */
                    std::string m_resetDatetime;
                    bool m_resetDatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
