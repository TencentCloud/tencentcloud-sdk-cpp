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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYSREQUEST_H_

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
                * DescribePrivateNatGateways请求参数结构体
                */
                class DescribePrivateNatGatewaysRequest : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewaysRequest();
                    ~DescribePrivateNatGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私网网关唯一`ID`，形如：`intranat-0g3blj80`。
                     * @return NatGatewayIds 私网网关唯一`ID`，形如：`intranat-0g3blj80`。
                     * 
                     */
                    std::vector<std::string> GetNatGatewayIds() const;

                    /**
                     * 设置私网网关唯一`ID`，形如：`intranat-0g3blj80`。
                     * @param _natGatewayIds 私网网关唯一`ID`，形如：`intranat-0g3blj80`。
                     * 
                     */
                    void SetNatGatewayIds(const std::vector<std::string>& _natGatewayIds);

                    /**
                     * 判断参数 NatGatewayIds 是否已赋值
                     * @return NatGatewayIds 是否已赋值
                     * 
                     */
                    bool NatGatewayIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>NatGatewayId - String - 私网网关唯一`ID`，形如：`intranat-0g3blj80`。</li>
<li>NatGatewayName - String - 专线网关名称，默认模糊查询。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>TagKey - Tag数组 - 私网网关标签键值对数组</li>
                     * @return Filters 过滤条件。
<li>NatGatewayId - String - 私网网关唯一`ID`，形如：`intranat-0g3blj80`。</li>
<li>NatGatewayName - String - 专线网关名称，默认模糊查询。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>TagKey - Tag数组 - 私网网关标签键值对数组</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>NatGatewayId - String - 私网网关唯一`ID`，形如：`intranat-0g3blj80`。</li>
<li>NatGatewayName - String - 专线网关名称，默认模糊查询。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>TagKey - Tag数组 - 私网网关标签键值对数组</li>
                     * @param _filters 过滤条件。
<li>NatGatewayId - String - 私网网关唯一`ID`，形如：`intranat-0g3blj80`。</li>
<li>NatGatewayName - String - 专线网关名称，默认模糊查询。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>TagKey - Tag数组 - 私网网关标签键值对数组</li>
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20。
                     * @return Limit 返回数量，默认为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20。
                     * @param _limit 返回数量，默认为20。
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
                     * 获取排序字段。可选值："NatGatewayId"、"NatGatewayName"、"CreatedTime"
                     * @return OrderField 排序字段。可选值："NatGatewayId"、"NatGatewayName"、"CreatedTime"
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。可选值："NatGatewayId"、"NatGatewayName"、"CreatedTime"
                     * @param _orderField 排序字段。可选值："NatGatewayId"、"NatGatewayName"、"CreatedTime"
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
                     * 获取排序方式。可选值："ASC"、"DESC"。
                     * @return OrderDirection 排序方式。可选值："ASC"、"DESC"。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方式。可选值："ASC"、"DESC"。
                     * @param _orderDirection 排序方式。可选值："ASC"、"DESC"。
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
                     * 私网网关唯一`ID`，形如：`intranat-0g3blj80`。
                     */
                    std::vector<std::string> m_natGatewayIds;
                    bool m_natGatewayIdsHasBeenSet;

                    /**
                     * 过滤条件。
<li>NatGatewayId - String - 私网网关唯一`ID`，形如：`intranat-0g3blj80`。</li>
<li>NatGatewayName - String - 专线网关名称，默认模糊查询。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>TagKey - Tag数组 - 私网网关标签键值对数组</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。可选值："NatGatewayId"、"NatGatewayName"、"CreatedTime"
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式。可选值："ASC"、"DESC"。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYSREQUEST_H_
