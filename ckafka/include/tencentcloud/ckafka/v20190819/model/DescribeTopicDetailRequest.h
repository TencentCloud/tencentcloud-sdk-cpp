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
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取（过滤条件）按照topicName过滤，支持模糊查询
                     * @return SearchWord （过滤条件）按照topicName过滤，支持模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置（过滤条件）按照topicName过滤，支持模糊查询
                     * @param _searchWord （过滤条件）按照topicName过滤，支持模糊查询
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
                     * 获取偏移量，不填默认为0
                     * @return Offset 偏移量，不填默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，不填默认为0
                     * @param _offset 偏移量，不填默认为0
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
                     * 获取返回数量，不填则默认 10，最大值20，取值要大于0
                     * @return Limit 返回数量，不填则默认 10，最大值20，取值要大于0
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认 10，最大值20，取值要大于0
                     * @param _limit 返回数量，不填则默认 10，最大值20，取值要大于0
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
                     * 获取Acl预设策略名称
                     * @return AclRuleName Acl预设策略名称
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置Acl预设策略名称
                     * @param _aclRuleName Acl预设策略名称
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
                     * 获取根据特定的属性排序(目前支持PartitionNum/CreateTime)
                     * @return OrderBy 根据特定的属性排序(目前支持PartitionNum/CreateTime)
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置根据特定的属性排序(目前支持PartitionNum/CreateTime)
                     * @param _orderBy 根据特定的属性排序(目前支持PartitionNum/CreateTime)
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
                     * 获取0-顺序、1-倒序
                     * @return OrderType 0-顺序、1-倒序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置0-顺序、1-倒序
                     * @param _orderType 0-顺序、1-倒序
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
                     * 获取目前支持 ReplicaNum （副本数）筛选
                     * @return Filters 目前支持 ReplicaNum （副本数）筛选
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置目前支持 ReplicaNum （副本数）筛选
                     * @param _filters 目前支持 ReplicaNum （副本数）筛选
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
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * （过滤条件）按照topicName过滤，支持模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，不填默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认 10，最大值20，取值要大于0
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Acl预设策略名称
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * 根据特定的属性排序(目前支持PartitionNum/CreateTime)
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 0-顺序、1-倒序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 目前支持 ReplicaNum （副本数）筛选
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
