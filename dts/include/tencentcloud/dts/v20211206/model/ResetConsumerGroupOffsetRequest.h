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
                     * 获取<p>订阅实例id，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @return SubscribeId <p>订阅实例id，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置<p>订阅实例id，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @param _subscribeId <p>订阅实例id，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
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
                     * 获取<p>订阅的kafka topic，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @return TopicName <p>订阅的kafka topic，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>订阅的kafka topic，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @param _topicName <p>订阅的kafka topic，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
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
                     * 获取<p>消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过<a href="https://cloud.tencent.com/document/api/571/102947">DescribeConsumerGroups</a>接口获取。</p>
                     * @return ConsumerGroupName <p>消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过<a href="https://cloud.tencent.com/document/api/571/102947">DescribeConsumerGroups</a>接口获取。</p>
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置<p>消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过<a href="https://cloud.tencent.com/document/api/571/102947">DescribeConsumerGroups</a>接口获取。</p>
                     * @param _consumerGroupName <p>消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过<a href="https://cloud.tencent.com/document/api/571/102947">DescribeConsumerGroups</a>接口获取。</p>
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
                     * 获取<p>需要修改offset的分区编号，可通过<a href="https://cloud.tencent.com/document/api/571/102946">DescribeOffsetByTime</a>接口获取。</p>
                     * @return PartitionNos <p>需要修改offset的分区编号，可通过<a href="https://cloud.tencent.com/document/api/571/102946">DescribeOffsetByTime</a>接口获取。</p>
                     * 
                     */
                    std::vector<int64_t> GetPartitionNos() const;

                    /**
                     * 设置<p>需要修改offset的分区编号，可通过<a href="https://cloud.tencent.com/document/api/571/102946">DescribeOffsetByTime</a>接口获取。</p>
                     * @param _partitionNos <p>需要修改offset的分区编号，可通过<a href="https://cloud.tencent.com/document/api/571/102946">DescribeOffsetByTime</a>接口获取。</p>
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
                     * 获取<p>重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费</p>
                     * @return ResetMode <p>重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费</p>
                     * 
                     */
                    std::string GetResetMode() const;

                    /**
                     * 设置<p>重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费</p>
                     * @param _resetMode <p>重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费</p>
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
                     * 获取<p>当 <code>ResetMode</code> 为 <code>datetime</code> 时该项需要填。当 <code>DateTimeISOFormat=true</code> 时按 RFC 3339 传入（如 <code>2026-04-23T20:21:35+08:00</code>），否则按 <code>Y-m-d h:m:s</code>（北京时间）传入。如果不填，默认用 0 时间，效果与 <code>earliest</code> 相同。 </p><p>参数格式：2026-04-23T20:21:35+08:00</p>
                     * @return ResetDatetime <p>当 <code>ResetMode</code> 为 <code>datetime</code> 时该项需要填。当 <code>DateTimeISOFormat=true</code> 时按 RFC 3339 传入（如 <code>2026-04-23T20:21:35+08:00</code>），否则按 <code>Y-m-d h:m:s</code>（北京时间）传入。如果不填，默认用 0 时间，效果与 <code>earliest</code> 相同。 </p><p>参数格式：2026-04-23T20:21:35+08:00</p>
                     * 
                     */
                    std::string GetResetDatetime() const;

                    /**
                     * 设置<p>当 <code>ResetMode</code> 为 <code>datetime</code> 时该项需要填。当 <code>DateTimeISOFormat=true</code> 时按 RFC 3339 传入（如 <code>2026-04-23T20:21:35+08:00</code>），否则按 <code>Y-m-d h:m:s</code>（北京时间）传入。如果不填，默认用 0 时间，效果与 <code>earliest</code> 相同。 </p><p>参数格式：2026-04-23T20:21:35+08:00</p>
                     * @param _resetDatetime <p>当 <code>ResetMode</code> 为 <code>datetime</code> 时该项需要填。当 <code>DateTimeISOFormat=true</code> 时按 RFC 3339 传入（如 <code>2026-04-23T20:21:35+08:00</code>），否则按 <code>Y-m-d h:m:s</code>（北京时间）传入。如果不填，默认用 0 时间，效果与 <code>earliest</code> 相同。 </p><p>参数格式：2026-04-23T20:21:35+08:00</p>
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
                     * <p>订阅实例id，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * <p>订阅的kafka topic，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过<a href="https://cloud.tencent.com/document/api/571/102947">DescribeConsumerGroups</a>接口获取。</p>
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * <p>需要修改offset的分区编号，可通过<a href="https://cloud.tencent.com/document/api/571/102946">DescribeOffsetByTime</a>接口获取。</p>
                     */
                    std::vector<int64_t> m_partitionNos;
                    bool m_partitionNosHasBeenSet;

                    /**
                     * <p>重置方式。枚举值为 earliest-从最开始位置开始消费；latest-从最新位置开始消费；datetime-从指定时间前最近的checkpoint开始消费</p>
                     */
                    std::string m_resetMode;
                    bool m_resetModeHasBeenSet;

                    /**
                     * <p>当 <code>ResetMode</code> 为 <code>datetime</code> 时该项需要填。当 <code>DateTimeISOFormat=true</code> 时按 RFC 3339 传入（如 <code>2026-04-23T20:21:35+08:00</code>），否则按 <code>Y-m-d h:m:s</code>（北京时间）传入。如果不填，默认用 0 时间，效果与 <code>earliest</code> 相同。 </p><p>参数格式：2026-04-23T20:21:35+08:00</p>
                     */
                    std::string m_resetDatetime;
                    bool m_resetDatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESETCONSUMERGROUPOFFSETREQUEST_H_
