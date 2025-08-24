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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQProducers请求参数结构体
                */
                class DescribeRocketMQProducersRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQProducersRequest();
                    ~DescribeRocketMQProducersRequest() = default;
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
                     * 获取命名空间
                     * @return NamespaceId 命名空间
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceId 命名空间
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
                     * 获取主题名
                     * @return Topic 主题名
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名
                     * @param _topic 主题名
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
                     * 获取分页offset
                     * @return Offset 分页offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset
                     * @param _offset 分页offset
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
                     * 获取分页limit
                     * @return Limit 分页limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页limit
                     * @param _limit 分页limit
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
                     * 获取过滤查询条件列表，支持以下过滤参数：

- ClientId：生产者客户端ID
- ClientIp：生产者客户端IP
                     * @return Filters 过滤查询条件列表，支持以下过滤参数：

- ClientId：生产者客户端ID
- ClientIp：生产者客户端IP
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤查询条件列表，支持以下过滤参数：

- ClientId：生产者客户端ID
- ClientIp：生产者客户端IP
                     * @param _filters 过滤查询条件列表，支持以下过滤参数：

- ClientId：生产者客户端ID
- ClientIp：生产者客户端IP
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 主题名
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 分页offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤查询条件列表，支持以下过滤参数：

- ClientId：生产者客户端ID
- ClientIp：生产者客户端IP
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPRODUCERSREQUEST_H_
