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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessQueues请求参数结构体
                */
                class DescribeRabbitMQServerlessQueuesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessQueuesRequest();
                    ~DescribeRabbitMQServerlessQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return InstanceId <p>实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _instanceId <p>实例Id</p>
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
                     * 获取<p>Vhost参数</p>
                     * @return VirtualHost <p>Vhost参数</p>
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置<p>Vhost参数</p>
                     * @param _virtualHost <p>Vhost参数</p>
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
                     * 获取<p>分页Offset</p>
                     * @return Offset <p>分页Offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页Offset</p>
                     * @param _offset <p>分页Offset</p>
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
                     * 获取<p>分页Limit</p>
                     * @return Limit <p>分页Limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页Limit</p>
                     * @param _limit <p>分页Limit</p>
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
                     * 获取<p>搜索关键词</p>
                     * @return SearchWord <p>搜索关键词</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索关键词</p>
                     * @param _searchWord <p>搜索关键词</p>
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
                     * 获取<p>队列类型筛选，不填或 &quot;all&quot;：classic 和 quorum 队列；&quot;classic&quot;：筛选 classic 队列；&quot;quorum&quot;：筛选 quorum 队列</p>
                     * @return QueueType <p>队列类型筛选，不填或 &quot;all&quot;：classic 和 quorum 队列；&quot;classic&quot;：筛选 classic 队列；&quot;quorum&quot;：筛选 quorum 队列</p>
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置<p>队列类型筛选，不填或 &quot;all&quot;：classic 和 quorum 队列；&quot;classic&quot;：筛选 classic 队列；&quot;quorum&quot;：筛选 quorum 队列</p>
                     * @param _queueType <p>队列类型筛选，不填或 &quot;all&quot;：classic 和 quorum 队列；&quot;classic&quot;：筛选 classic 队列；&quot;quorum&quot;：筛选 quorum 队列</p>
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
                     * 获取<p>排序依据的字段：<br>messages_ready - 消息堆积数；<br>publish - 生产速率；<br>deliver - 消费速率；<br>consumers - 在线消费者数量；</p>
                     * @return SortElement <p>排序依据的字段：<br>messages_ready - 消息堆积数；<br>publish - 生产速率；<br>deliver - 消费速率；<br>consumers - 在线消费者数量；</p>
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置<p>排序依据的字段：<br>messages_ready - 消息堆积数；<br>publish - 生产速率；<br>deliver - 消费速率；<br>consumers - 在线消费者数量；</p>
                     * @param _sortElement <p>排序依据的字段：<br>messages_ready - 消息堆积数；<br>publish - 生产速率；<br>deliver - 消费速率；<br>consumers - 在线消费者数量；</p>
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
                     * 获取<p>排序顺序，asc 或 desc</p>
                     * @return SortOrder <p>排序顺序，asc 或 desc</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序顺序，asc 或 desc</p>
                     * @param _sortOrder <p>排序顺序，asc 或 desc</p>
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
                     * <p>实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Vhost参数</p>
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * <p>分页Offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页Limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>搜索关键词</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>队列类型筛选，不填或 &quot;all&quot;：classic 和 quorum 队列；&quot;classic&quot;：筛选 classic 队列；&quot;quorum&quot;：筛选 quorum 队列</p>
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * <p>排序依据的字段：<br>messages_ready - 消息堆积数；<br>publish - 生产速率；<br>deliver - 消费速率；<br>consumers - 在线消费者数量；</p>
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * <p>排序顺序，asc 或 desc</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_
