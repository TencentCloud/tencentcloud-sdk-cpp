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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_

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
                * DescribeRabbitMQQueues请求参数结构体
                */
                class DescribeRabbitMQQueuesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQQueuesRequest();
                    ~DescribeRabbitMQQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @return InstanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @param _instanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 获取VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @return VirtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @param _virtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取分页 Offset，默认 0
                     * @return Offset 分页 Offset，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页 Offset，默认 0
                     * @param _offset 分页 Offset，默认 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页 Limit，默认 20
                     * @return Limit 分页 Limit，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 Limit，默认 20
                     * @param _limit 分页 Limit，默认 20
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
                     * 获取搜索关键词
                     * @return SearchWord 搜索关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词
                     * @param _searchWord 搜索关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取队列类型筛选，不填或 "all"：筛选普通队列 和 quorum 队列；"classic"：筛选 classic(普通) 队列；"quorum"：筛选 quorum 队列
                     * @return QueueType 队列类型筛选，不填或 "all"：筛选普通队列 和 quorum 队列；"classic"：筛选 classic(普通) 队列；"quorum"：筛选 quorum 队列
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置队列类型筛选，不填或 "all"：筛选普通队列 和 quorum 队列；"classic"：筛选 classic(普通) 队列；"quorum"：筛选 quorum 队列
                     * @param _queueType 队列类型筛选，不填或 "all"：筛选普通队列 和 quorum 队列；"classic"：筛选 classic(普通) 队列；"quorum"：筛选 quorum 队列
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取排序依据的字段：
ConsumerNumber - 在线消费者数量；
MessageHeapCount - 消息堆积数；
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * @return SortElement 排序依据的字段：
ConsumerNumber - 在线消费者数量；
MessageHeapCount - 消息堆积数；
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置排序依据的字段：
ConsumerNumber - 在线消费者数量；
MessageHeapCount - 消息堆积数；
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * @param _sortElement 排序依据的字段：
ConsumerNumber - 在线消费者数量；
MessageHeapCount - 消息堆积数；
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * @return SortOrder 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * @param _sortOrder 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 分页 Offset，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页 Limit，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 队列类型筛选，不填或 "all"：筛选普通队列 和 quorum 队列；"classic"：筛选 classic(普通) 队列；"quorum"：筛选 quorum 队列
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 排序依据的字段：
ConsumerNumber - 在线消费者数量；
MessageHeapCount - 消息堆积数；
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_
