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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcPeeringConnections请求参数结构体
                */
                class DescribeVpcPeeringConnectionsRequest : public AbstractModel
                {
                public:
                    DescribeVpcPeeringConnectionsRequest();
                    ~DescribeVpcPeeringConnectionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对等连接唯一ID数组。
                     * @return PeeringConnectionIds 对等连接唯一ID数组。
                     * 
                     */
                    std::vector<std::string> GetPeeringConnectionIds() const;

                    /**
                     * 设置对等连接唯一ID数组。
                     * @param _peeringConnectionIds 对等连接唯一ID数组。
                     * 
                     */
                    void SetPeeringConnectionIds(const std::vector<std::string>& _peeringConnectionIds);

                    /**
                     * 判断参数 PeeringConnectionIds 是否已赋值
                     * @return PeeringConnectionIds 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定PeeringConnectionIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>state String - （过滤条件）对等连接状态，可选值有：PENDING，投放中；ACTIVE，使用中；EXPIRED，已过期；REJECTED，拒绝。</li>
<li>peering-connection-name - String - （过滤条件）对等连接名称。</li>
                     * @return Filters 过滤条件，参数不支持同时指定PeeringConnectionIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>state String - （过滤条件）对等连接状态，可选值有：PENDING，投放中；ACTIVE，使用中；EXPIRED，已过期；REJECTED，拒绝。</li>
<li>peering-connection-name - String - （过滤条件）对等连接名称。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定PeeringConnectionIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>state String - （过滤条件）对等连接状态，可选值有：PENDING，投放中；ACTIVE，使用中；EXPIRED，已过期；REJECTED，拒绝。</li>
<li>peering-connection-name - String - （过滤条件）对等连接名称。</li>
                     * @param _filters 过滤条件，参数不支持同时指定PeeringConnectionIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>state String - （过滤条件）对等连接状态，可选值有：PENDING，投放中；ACTIVE，使用中；EXPIRED，已过期；REJECTED，拒绝。</li>
<li>peering-connection-name - String - （过滤条件）对等连接名称。</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
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
                     * 获取排序字段，可选值有：CreatedTime，PeeringConnectionName。
                     * @return OrderField 排序字段，可选值有：CreatedTime，PeeringConnectionName。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，可选值有：CreatedTime，PeeringConnectionName。
                     * @param _orderField 排序字段，可选值有：CreatedTime，PeeringConnectionName。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式：DESC，降序；ASC，升序。
                     * @return OrderDirection 排序方式：DESC，降序；ASC，升序。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方式：DESC，降序；ASC，升序。
                     * @param _orderDirection 排序方式：DESC，降序；ASC，升序。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 对等连接唯一ID数组。
                     */
                    std::vector<std::string> m_peeringConnectionIds;
                    bool m_peeringConnectionIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定PeeringConnectionIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>state String - （过滤条件）对等连接状态，可选值有：PENDING，投放中；ACTIVE，使用中；EXPIRED，已过期；REJECTED，拒绝。</li>
<li>peering-connection-name - String - （过滤条件）对等连接名称。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，可选值有：CreatedTime，PeeringConnectionName。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式：DESC，降序；ASC，升序。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_H_
