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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_

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
                * DescribeRedisTopKeyPrefixList请求参数结构体
                */
                class DescribeRedisTopKeyPrefixListRequest : public AbstractModel
                {
                public:
                    DescribeRedisTopKeyPrefixListRequest();
                    ~DescribeRedisTopKeyPrefixListRequest() = default;
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
                     * 获取查询数目，默认为20，最大值为500。
                     * @return Limit 查询数目，默认为20，最大值为500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数目，默认为20，最大值为500。
                     * @param _limit 查询数目，默认为20，最大值为500。
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
                     * 获取分片ID数组。
                     * @return ShardIds 分片ID数组。
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置分片ID数组。
                     * @param _shardIds 分片ID数组。
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
                     * 查询数目，默认为20，最大值为500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分片ID数组。
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPKEYPREFIXLISTREQUEST_H_
