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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/Filter.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeCustomerGateways请求参数结构体
                */
                class DescribeCustomerGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeCustomerGatewaysRequest();
                    ~DescribeCustomerGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对端网关ID，例如：bmcgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。
                     * @return CustomerGatewayIds 对端网关ID，例如：bmcgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetCustomerGatewayIds() const;

                    /**
                     * 设置对端网关ID，例如：bmcgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。
                     * @param _customerGatewayIds 对端网关ID，例如：bmcgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。
                     * 
                     */
                    void SetCustomerGatewayIds(const std::vector<std::string>& _customerGatewayIds);

                    /**
                     * 判断参数 CustomerGatewayIds 是否已赋值
                     * @return CustomerGatewayIds 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。
<li>customergateway-name - String - （过滤条件）对端网关名称。</li>
<li>ip-address - String - （过滤条件)对端网关地址。</li>
<li>customergateway-id - String - （过滤条件）对端网关唯一ID。</li>
<li>zone - String - （过滤条件）对端所在可用区，形如：ap-guangzhou-2。</li>
                     * @return Filters 过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。
<li>customergateway-name - String - （过滤条件）对端网关名称。</li>
<li>ip-address - String - （过滤条件)对端网关地址。</li>
<li>customergateway-id - String - （过滤条件）对端网关唯一ID。</li>
<li>zone - String - （过滤条件）对端所在可用区，形如：ap-guangzhou-2。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。
<li>customergateway-name - String - （过滤条件）对端网关名称。</li>
<li>ip-address - String - （过滤条件)对端网关地址。</li>
<li>customergateway-id - String - （过滤条件）对端网关唯一ID。</li>
<li>zone - String - （过滤条件）对端所在可用区，形如：ap-guangzhou-2。</li>
                     * @param _filters 过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。
<li>customergateway-name - String - （过滤条件）对端网关名称。</li>
<li>ip-address - String - （过滤条件)对端网关地址。</li>
<li>customergateway-id - String - （过滤条件）对端网关唯一ID。</li>
<li>zone - String - （过滤条件）对端所在可用区，形如：ap-guangzhou-2。</li>
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
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取排序字段, 支持"CreateTime"排序
                     * @return OrderField 排序字段, 支持"CreateTime"排序
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段, 支持"CreateTime"排序
                     * @param _orderField 排序字段, 支持"CreateTime"排序
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
                     * 获取排序方向, “asc”、“desc”
                     * @return OrderDirection 排序方向, “asc”、“desc”
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方向, “asc”、“desc”
                     * @param _orderDirection 排序方向, “asc”、“desc”
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
                     * 对端网关ID，例如：bmcgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。
                     */
                    std::vector<std::string> m_customerGatewayIds;
                    bool m_customerGatewayIdsHasBeenSet;

                    /**
                     * 过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。
<li>customergateway-name - String - （过滤条件）对端网关名称。</li>
<li>ip-address - String - （过滤条件)对端网关地址。</li>
<li>customergateway-id - String - （过滤条件）对端网关唯一ID。</li>
<li>zone - String - （过滤条件）对端所在可用区，形如：ap-guangzhou-2。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段, 支持"CreateTime"排序
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方向, “asc”、“desc”
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_
