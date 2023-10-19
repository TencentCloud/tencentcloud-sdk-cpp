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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCONSUMERCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCONSUMERCONNECTIONSREQUEST_H_

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
                * DescribeRocketMQConsumerConnections请求参数结构体
                */
                class DescribeRocketMQConsumerConnectionsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQConsumerConnectionsRequest();
                    ~DescribeRocketMQConsumerConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceId 命名空间名称
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceId 命名空间名称
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取消费组ID
                     * @return GroupId 消费组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置消费组ID
                     * @param _groupId 消费组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）
                     * @return SortedBy 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）
                     * @param _sortedBy 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）
                     * 
                     */
                    void SetSortedBy(const std::string& _sortedBy);

                    /**
                     * 判断参数 SortedBy 是否已赋值
                     * @return SortedBy 是否已赋值
                     * 
                     */
                    bool SortedByHasBeenSet() const;

                    /**
                     * 获取查询结果排序规则，ASC为升序，DESC为降序
                     * @return SortOrder 查询结果排序规则，ASC为升序，DESC为降序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置查询结果排序规则，ASC为升序，DESC为降序
                     * @param _sortOrder 查询结果排序规则，ASC为升序，DESC为降序
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
                     * 消费组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 对查询结果排序，此为排序字段，目前支持Accumulative（消息堆积量）
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * 查询结果排序规则，ASC为升序，DESC为降序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQCONSUMERCONNECTIONSREQUEST_H_
