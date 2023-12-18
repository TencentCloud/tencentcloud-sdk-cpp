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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICSREQUEST_H_

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
                * DescribeRocketMQTopics请求参数结构体
                */
                class DescribeRocketMQTopicsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopicsRequest();
                    ~DescribeRocketMQTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取查询限制数
                     * @return Limit 查询限制数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询限制数
                     * @param _limit 查询限制数
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
                     * 获取按主题类型过滤查询结果，可选择Normal, GlobalOrder, PartitionedOrder, Transaction
                     * @return FilterType 按主题类型过滤查询结果，可选择Normal, GlobalOrder, PartitionedOrder, Transaction
                     * 
                     */
                    std::vector<std::string> GetFilterType() const;

                    /**
                     * 设置按主题类型过滤查询结果，可选择Normal, GlobalOrder, PartitionedOrder, Transaction
                     * @param _filterType 按主题类型过滤查询结果，可选择Normal, GlobalOrder, PartitionedOrder, Transaction
                     * 
                     */
                    void SetFilterType(const std::vector<std::string>& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取按主题名称搜索，支持模糊查询
                     * @return FilterName 按主题名称搜索，支持模糊查询
                     * 
                     */
                    std::string GetFilterName() const;

                    /**
                     * 设置按主题名称搜索，支持模糊查询
                     * @param _filterName 按主题名称搜索，支持模糊查询
                     * 
                     */
                    void SetFilterName(const std::string& _filterName);

                    /**
                     * 判断参数 FilterName 是否已赋值
                     * @return FilterName 是否已赋值
                     * 
                     */
                    bool FilterNameHasBeenSet() const;

                    /**
                     * 获取按订阅消费组名称过滤
                     * @return FilterGroup 按订阅消费组名称过滤
                     * 
                     */
                    std::string GetFilterGroup() const;

                    /**
                     * 设置按订阅消费组名称过滤
                     * @param _filterGroup 按订阅消费组名称过滤
                     * 
                     */
                    void SetFilterGroup(const std::string& _filterGroup);

                    /**
                     * 判断参数 FilterGroup 是否已赋值
                     * @return FilterGroup 是否已赋值
                     * 
                     */
                    bool FilterGroupHasBeenSet() const;

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
                     * 命名空间
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 按主题类型过滤查询结果，可选择Normal, GlobalOrder, PartitionedOrder, Transaction
                     */
                    std::vector<std::string> m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 按主题名称搜索，支持模糊查询
                     */
                    std::string m_filterName;
                    bool m_filterNameHasBeenSet;

                    /**
                     * 按订阅消费组名称过滤
                     */
                    std::string m_filterGroup;
                    bool m_filterGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPICSREQUEST_H_
