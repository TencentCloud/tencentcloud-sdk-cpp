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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTREQUEST_H_

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
                * DescribeRedisProcessList请求参数结构体
                */
                class DescribeRedisProcessListRequest : public AbstractModel
                {
                public:
                    DescribeRedisProcessListRequest();
                    ~DescribeRedisProcessListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Redis 实例ID。
                     * @return InstanceId Redis 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Redis 实例ID。
                     * @param _instanceId Redis 实例ID。
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
                     * 获取查询的Proxy节点数量上限，默认值为20，最大值为50。
                     * @return Limit 查询的Proxy节点数量上限，默认值为20，最大值为50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询的Proxy节点数量上限，默认值为20，最大值为50。
                     * @param _limit 查询的Proxy节点数量上限，默认值为20，最大值为50。
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
                     * 获取Proxy节点的偏移量，默认值为0。
                     * @return Offset Proxy节点的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Proxy节点的偏移量，默认值为0。
                     * @param _offset Proxy节点的偏移量，默认值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Redis 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括 "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 查询的Proxy节点数量上限，默认值为20，最大值为50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Proxy节点的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISPROCESSLISTREQUEST_H_
