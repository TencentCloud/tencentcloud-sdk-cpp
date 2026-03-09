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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Filter.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeTopicDetail请求参数结构体
                */
                class DescribeTopicDetailRequest : public AbstractModel
                {
                public:
                    DescribeTopicDetailRequest();
                    ~DescribeTopicDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
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
                     * 获取<p>（过滤条件）按照topicName过滤，支持模糊查询</p>
                     * @return SearchWord <p>（过滤条件）按照topicName过滤，支持模糊查询</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>（过滤条件）按照topicName过滤，支持模糊查询</p>
                     * @param _searchWord <p>（过滤条件）按照topicName过滤，支持模糊查询</p>
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
                     * 获取<p>偏移量，不填默认为0</p>
                     * @return Offset <p>偏移量，不填默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，不填默认为0</p>
                     * @param _offset <p>偏移量，不填默认为0</p>
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
                     * 获取<p>返回数量，不填则默认 20，取值要大于0</p>
                     * @return Limit <p>返回数量，不填则默认 20，取值要大于0</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，不填则默认 20，取值要大于0</p>
                     * @param _limit <p>返回数量，不填则默认 20，取值要大于0</p>
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
                     * 获取<p>Acl预设策略名称</p>
                     * @return AclRuleName <p>Acl预设策略名称</p>
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置<p>Acl预设策略名称</p>
                     * @param _aclRuleName <p>Acl预设策略名称</p>
                     * 
                     */
                    void SetAclRuleName(const std::string& _aclRuleName);

                    /**
                     * 判断参数 AclRuleName 是否已赋值
                     * @return AclRuleName 是否已赋值
                     * 
                     */
                    bool AclRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>根据特定的属性排序(目前支持PartitionNum/CreateTime)，默认值为CreateTime。</p><p>该参数为空时，默认按CreateTime倒序排序</p>
                     * @return OrderBy <p>根据特定的属性排序(目前支持PartitionNum/CreateTime)，默认值为CreateTime。</p><p>该参数为空时，默认按CreateTime倒序排序</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>根据特定的属性排序(目前支持PartitionNum/CreateTime)，默认值为CreateTime。</p><p>该参数为空时，默认按CreateTime倒序排序</p>
                     * @param _orderBy <p>根据特定的属性排序(目前支持PartitionNum/CreateTime)，默认值为CreateTime。</p><p>该参数为空时，默认按CreateTime倒序排序</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>0-顺序、1-倒序，默认值为0。</p>
                     * @return OrderType <p>0-顺序、1-倒序，默认值为0。</p>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>0-顺序、1-倒序，默认值为0。</p>
                     * @param _orderType <p>0-顺序、1-倒序，默认值为0。</p>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>目前支持 ReplicaNum （副本数）筛选</p>
                     * @return Filters <p>目前支持 ReplicaNum （副本数）筛选</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>目前支持 ReplicaNum （副本数）筛选</p>
                     * @param _filters <p>目前支持 ReplicaNum （副本数）筛选</p>
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
                     * <p>ckafka集群实例Id，可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>（过滤条件）按照topicName过滤，支持模糊查询</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>偏移量，不填默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，不填则默认 20，取值要大于0</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Acl预设策略名称</p>
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * <p>根据特定的属性排序(目前支持PartitionNum/CreateTime)，默认值为CreateTime。</p><p>该参数为空时，默认按CreateTime倒序排序</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>0-顺序、1-倒序，默认值为0。</p>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>目前支持 ReplicaNum （副本数）筛选</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
