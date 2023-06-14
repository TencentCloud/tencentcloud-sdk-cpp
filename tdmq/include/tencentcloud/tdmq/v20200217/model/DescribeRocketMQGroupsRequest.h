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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_

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
                * DescribeRocketMQGroups请求参数结构体
                */
                class DescribeRocketMQGroupsRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQGroupsRequest();
                    ~DescribeRocketMQGroupsRequest() = default;
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
                     * 获取限制条数
                     * @return Limit 限制条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制条数
                     * @param _limit 限制条数
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
                     * 获取主题名称，输入此参数可查询该主题下所有的订阅组
                     * @return FilterTopic 主题名称，输入此参数可查询该主题下所有的订阅组
                     * 
                     */
                    std::string GetFilterTopic() const;

                    /**
                     * 设置主题名称，输入此参数可查询该主题下所有的订阅组
                     * @param _filterTopic 主题名称，输入此参数可查询该主题下所有的订阅组
                     * 
                     */
                    void SetFilterTopic(const std::string& _filterTopic);

                    /**
                     * 判断参数 FilterTopic 是否已赋值
                     * @return FilterTopic 是否已赋值
                     * 
                     */
                    bool FilterTopicHasBeenSet() const;

                    /**
                     * 获取按消费组名称查询消费组，支持模糊查询
                     * @return FilterGroup 按消费组名称查询消费组，支持模糊查询
                     * 
                     */
                    std::string GetFilterGroup() const;

                    /**
                     * 设置按消费组名称查询消费组，支持模糊查询
                     * @param _filterGroup 按消费组名称查询消费组，支持模糊查询
                     * 
                     */
                    void SetFilterGroup(const std::string& _filterGroup);

                    /**
                     * 判断参数 FilterGroup 是否已赋值
                     * @return FilterGroup 是否已赋值
                     * 
                     */
                    bool FilterGroupHasBeenSet() const;

                    /**
                     * 获取按照指定字段排序，可选值为tps，accumulative
                     * @return SortedBy 按照指定字段排序，可选值为tps，accumulative
                     * 
                     */
                    std::string GetSortedBy() const;

                    /**
                     * 设置按照指定字段排序，可选值为tps，accumulative
                     * @param _sortedBy 按照指定字段排序，可选值为tps，accumulative
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
                     * 获取按升序或降序排列，可选值为asc，desc
                     * @return SortOrder 按升序或降序排列，可选值为asc，desc
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置按升序或降序排列，可选值为asc，desc
                     * @param _sortOrder 按升序或降序排列，可选值为asc，desc
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取订阅组名称，指定此参数后将只返回该订阅组信息
                     * @return FilterOneGroup 订阅组名称，指定此参数后将只返回该订阅组信息
                     * 
                     */
                    std::string GetFilterOneGroup() const;

                    /**
                     * 设置订阅组名称，指定此参数后将只返回该订阅组信息
                     * @param _filterOneGroup 订阅组名称，指定此参数后将只返回该订阅组信息
                     * 
                     */
                    void SetFilterOneGroup(const std::string& _filterOneGroup);

                    /**
                     * 判断参数 FilterOneGroup 是否已赋值
                     * @return FilterOneGroup 是否已赋值
                     * 
                     */
                    bool FilterOneGroupHasBeenSet() const;

                    /**
                     * 获取group类型
                     * @return Types group类型
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置group类型
                     * @param _types group类型
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

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
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 主题名称，输入此参数可查询该主题下所有的订阅组
                     */
                    std::string m_filterTopic;
                    bool m_filterTopicHasBeenSet;

                    /**
                     * 按消费组名称查询消费组，支持模糊查询
                     */
                    std::string m_filterGroup;
                    bool m_filterGroupHasBeenSet;

                    /**
                     * 按照指定字段排序，可选值为tps，accumulative
                     */
                    std::string m_sortedBy;
                    bool m_sortedByHasBeenSet;

                    /**
                     * 按升序或降序排列，可选值为asc，desc
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 订阅组名称，指定此参数后将只返回该订阅组信息
                     */
                    std::string m_filterOneGroup;
                    bool m_filterOneGroupHasBeenSet;

                    /**
                     * group类型
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGROUPSREQUEST_H_
