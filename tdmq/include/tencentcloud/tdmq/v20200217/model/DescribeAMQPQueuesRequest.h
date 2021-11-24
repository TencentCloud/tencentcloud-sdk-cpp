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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPQUEUESREQUEST_H_

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
                * DescribeAMQPQueues请求参数结构体
                */
                class DescribeAMQPQueuesRequest : public AbstractModel
                {
                public:
                    DescribeAMQPQueuesRequest();
                    ~DescribeAMQPQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param Offset 查询偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询限制数
                     * @return Limit 查询限制数
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询限制数
                     * @param Limit 查询限制数
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取Vhost名称
                     * @return VHostId Vhost名称
                     */
                    std::string GetVHostId() const;

                    /**
                     * 设置Vhost名称
                     * @param VHostId Vhost名称
                     */
                    void SetVHostId(const std::string& _vHostId);

                    /**
                     * 判断参数 VHostId 是否已赋值
                     * @return VHostId 是否已赋值
                     */
                    bool VHostIdHasBeenSet() const;

                    /**
                     * 获取按队列名称搜索，支持模糊查询
                     * @return NameKeyword 按队列名称搜索，支持模糊查询
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置按队列名称搜索，支持模糊查询
                     * @param NameKeyword 按队列名称搜索，支持模糊查询
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取查询结果排序规则，ASC为升序，DESC为降序
                     * @return SortOrder 查询结果排序规则，ASC为升序，DESC为降序
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置查询结果排序规则，ASC为升序，DESC为降序
                     * @param SortOrder 查询结果排序规则，ASC为升序，DESC为降序
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）、Tps
                     * @return SortedBy 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）、Tps
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）、Tps
                     * @param SortedBy 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）、Tps
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取队列名称，指定此参数后将只返回该队列信息
                     * @return FilterOneQueue 队列名称，指定此参数后将只返回该队列信息
                     */
                    std::string GetFilterOneQueue() const;

                    /**
                     * 设置队列名称，指定此参数后将只返回该队列信息
                     * @param FilterOneQueue 队列名称，指定此参数后将只返回该队列信息
                     */
                    void SetFilterOneQueue(const std::string& _filterOneQueue);

                    /**
                     * 判断参数 FilterOneQueue 是否已赋值
                     * @return FilterOneQueue 是否已赋值
                     */
                    bool FilterOneQueueHasBeenSet() const;

                private:

                    /**
                     * 查询偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询限制数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Vhost名称
                     */
                    std::string m_vHostId;
                    bool m_vHostIdHasBeenSet;

                    /**
                     * 按队列名称搜索，支持模糊查询
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * 查询结果排序规则，ASC为升序，DESC为降序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）、Tps
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * 队列名称，指定此参数后将只返回该队列信息
                     */
                    std::string m_filterOneQueue;
                    bool m_filterOneQueueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPQUEUESREQUEST_H_
