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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBShards请求参数结构体
                */
                class DescribeDCDBShardsRequest : public AbstractModel
                {
                public:
                    DescribeDCDBShardsRequest();
                    ~DescribeDCDBShardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如：dcdbt-ow728lmc。
                     * @return InstanceId 实例ID，形如：dcdbt-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如：dcdbt-ow728lmc。
                     * @param _instanceId 实例ID，形如：dcdbt-ow728lmc。
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
                     * 获取分片ID列表。
                     * @return ShardInstanceIds 分片ID列表。
                     * 
                     */
                    std::vector<std::string> GetShardInstanceIds() const;

                    /**
                     * 设置分片ID列表。
                     * @param _shardInstanceIds 分片ID列表。
                     * 
                     */
                    void SetShardInstanceIds(const std::vector<std::string>& _shardInstanceIds);

                    /**
                     * 判断参数 ShardInstanceIds 是否已赋值
                     * @return ShardInstanceIds 是否已赋值
                     * 
                     */
                    bool ShardInstanceIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
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
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param _limit 返回数量，默认为 20，最大值为 100。
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
                     * 获取排序字段， 目前仅支持 createtime
                     * @return OrderBy 排序字段， 目前仅支持 createtime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段， 目前仅支持 createtime
                     * @param _orderBy 排序字段， 目前仅支持 createtime
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
                     * 获取排序类型， desc 或者 asc
                     * @return OrderByType 排序类型， desc 或者 asc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型， desc 或者 asc
                     * @param _orderByType 排序类型， desc 或者 asc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如：dcdbt-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分片ID列表。
                     */
                    std::vector<std::string> m_shardInstanceIds;
                    bool m_shardInstanceIdsHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段， 目前仅支持 createtime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型， desc 或者 asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSREQUEST_H_
