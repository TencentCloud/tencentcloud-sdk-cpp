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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_

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
                * DescribeCustomerGateways请求参数结构体
                */
                class DescribeCustomerGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeCustomerGatewaysRequest();
                    ~DescribeCustomerGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>对端网关ID，例如：cgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。</p>
                     * @return CustomerGatewayIds <p>对端网关ID，例如：cgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。</p>
                     * 
                     */
                    std::vector<std::string> GetCustomerGatewayIds() const;

                    /**
                     * 设置<p>对端网关ID，例如：cgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。</p>
                     * @param _customerGatewayIds <p>对端网关ID，例如：cgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。</p>
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
                     * 获取<p>过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。<li>customer-gateway-id - String - （过滤条件）用户网关唯一ID形如：<code>cgw-mgp33pll</code>。</li><li>customer-gateway-name - String - （过滤条件）用户网关名称形如：<code>test-cgw</code>。</li><li>ip-address - String - （过滤条件）公网地址形如：<code>58.211.1.12</code>。</li><li>ip-version - String - （过滤条件）公网地址类型,可选值[&#39;IPv4&#39;,&#39;IPv6&#39;]。</li></p>
                     * @return Filters <p>过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。<li>customer-gateway-id - String - （过滤条件）用户网关唯一ID形如：<code>cgw-mgp33pll</code>。</li><li>customer-gateway-name - String - （过滤条件）用户网关名称形如：<code>test-cgw</code>。</li><li>ip-address - String - （过滤条件）公网地址形如：<code>58.211.1.12</code>。</li><li>ip-version - String - （过滤条件）公网地址类型,可选值[&#39;IPv4&#39;,&#39;IPv6&#39;]。</li></p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。<li>customer-gateway-id - String - （过滤条件）用户网关唯一ID形如：<code>cgw-mgp33pll</code>。</li><li>customer-gateway-name - String - （过滤条件）用户网关名称形如：<code>test-cgw</code>。</li><li>ip-address - String - （过滤条件）公网地址形如：<code>58.211.1.12</code>。</li><li>ip-version - String - （过滤条件）公网地址类型,可选值[&#39;IPv4&#39;,&#39;IPv6&#39;]。</li></p>
                     * @param _filters <p>过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。<li>customer-gateway-id - String - （过滤条件）用户网关唯一ID形如：<code>cgw-mgp33pll</code>。</li><li>customer-gateway-name - String - （过滤条件）用户网关名称形如：<code>test-cgw</code>。</li><li>ip-address - String - （过滤条件）公网地址形如：<code>58.211.1.12</code>。</li><li>ip-version - String - （过滤条件）公网地址类型,可选值[&#39;IPv4&#39;,&#39;IPv6&#39;]。</li></p>
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
                     * 获取<p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/11646">简介</a>中的相关小节。</p>
                     * @return Offset <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/11646">简介</a>中的相关小节。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/11646">简介</a>中的相关小节。</p>
                     * @param _offset <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/11646">简介</a>中的相关小节。</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>对端网关ID，例如：cgw-2wqq41m9。每次请求的实例的上限为100。参数不支持同时指定CustomerGatewayIds和Filters。</p>
                     */
                    std::vector<std::string> m_customerGatewayIds;
                    bool m_customerGatewayIdsHasBeenSet;

                    /**
                     * <p>过滤条件，详见下表：实例过滤条件表。每次请求的Filters的上限为10，Filter.Values的上限为5。参数不支持同时指定CustomerGatewayIds和Filters。<li>customer-gateway-id - String - （过滤条件）用户网关唯一ID形如：<code>cgw-mgp33pll</code>。</li><li>customer-gateway-name - String - （过滤条件）用户网关名称形如：<code>test-cgw</code>。</li><li>ip-address - String - （过滤条件）公网地址形如：<code>58.211.1.12</code>。</li><li>ip-version - String - （过滤条件）公网地址类型,可选值[&#39;IPv4&#39;,&#39;IPv6&#39;]。</li></p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。关于Offset的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/11646">简介</a>中的相关小节。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_
