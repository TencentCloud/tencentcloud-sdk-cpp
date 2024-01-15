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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisTopBigKeys请求参数结构体
                */
                class DescribeRedisTopBigKeysRequest : public AbstractModel
                {
                public:
                    DescribeRedisTopBigKeysRequest();
                    ~DescribeRedisTopBigKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取查询日期，如2021-05-27，最早可为前30天的日期。
                     * @return Date 查询日期，如2021-05-27，最早可为前30天的日期。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置查询日期，如2021-05-27，最早可为前30天的日期。
                     * @param _date 查询日期，如2021-05-27，最早可为前30天的日期。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取排序字段，取值包括Capacity - 内存，ItemCount - 元素数量，默认为Capacity。
                     * @return SortBy 排序字段，取值包括Capacity - 内存，ItemCount - 元素数量，默认为Capacity。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，取值包括Capacity - 内存，ItemCount - 元素数量，默认为Capacity。
                     * @param _sortBy 排序字段，取值包括Capacity - 内存，ItemCount - 元素数量，默认为Capacity。
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取key类型筛选条件，默认为不进行筛选，取值包括string, list, set, hash, sortedset, stream。
                     * @return KeyType key类型筛选条件，默认为不进行筛选，取值包括string, list, set, hash, sortedset, stream。
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置key类型筛选条件，默认为不进行筛选，取值包括string, list, set, hash, sortedset, stream。
                     * @param _keyType key类型筛选条件，默认为不进行筛选，取值包括string, list, set, hash, sortedset, stream。
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取查询数目，默认为20，最大值为100。
                     * @return Limit 查询数目，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数目，默认为20，最大值为100。
                     * @param _limit 查询数目，默认为20，最大值为100。
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
                     * 获取异步任务ID。当为空时，选择最近任务的ID。
                     * @return AsyncRequestId 异步任务ID。当为空时，选择最近任务的ID。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务ID。当为空时，选择最近任务的ID。
                     * @param _asyncRequestId 异步任务ID。当为空时，选择最近任务的ID。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取分片节点序号列表。当列表为空时，选择所有分片节点。
                     * @return ShardIds 分片节点序号列表。当列表为空时，选择所有分片节点。
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置分片节点序号列表。当列表为空时，选择所有分片节点。
                     * @param _shardIds 分片节点序号列表。当列表为空时，选择所有分片节点。
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询日期，如2021-05-27，最早可为前30天的日期。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 排序字段，取值包括Capacity - 内存，ItemCount - 元素数量，默认为Capacity。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * key类型筛选条件，默认为不进行筛选，取值包括string, list, set, hash, sortedset, stream。
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 查询数目，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 异步任务ID。当为空时，选择最近任务的ID。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 分片节点序号列表。当列表为空时，选择所有分片节点。
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSREQUEST_H_
