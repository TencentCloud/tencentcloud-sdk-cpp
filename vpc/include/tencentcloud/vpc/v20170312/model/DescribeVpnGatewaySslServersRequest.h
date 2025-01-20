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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLSERVERSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/FilterObject.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpnGatewaySslServers请求参数结构体
                */
                class DescribeVpnGatewaySslServersRequest : public AbstractModel
                {
                public:
                    DescribeVpnGatewaySslServersRequest();
                    ~DescribeVpnGatewaySslServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
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
                     * 获取SSL-VPN-SERVER实例ID。形如：vpns-0p4rj60。每次请求的实例的上限为100。参数不支持同时指定SslVpnServerIds和Filters。
                     * @return SslVpnServerIds SSL-VPN-SERVER实例ID。形如：vpns-0p4rj60。每次请求的实例的上限为100。参数不支持同时指定SslVpnServerIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetSslVpnServerIds() const;

                    /**
                     * 设置SSL-VPN-SERVER实例ID。形如：vpns-0p4rj60。每次请求的实例的上限为100。参数不支持同时指定SslVpnServerIds和Filters。
                     * @param _sslVpnServerIds SSL-VPN-SERVER实例ID。形如：vpns-0p4rj60。每次请求的实例的上限为100。参数不支持同时指定SslVpnServerIds和Filters。
                     * 
                     */
                    void SetSslVpnServerIds(const std::vector<std::string>& _sslVpnServerIds);

                    /**
                     * 判断参数 SslVpnServerIds 是否已赋值
                     * @return SslVpnServerIds 是否已赋值
                     * 
                     */
                    bool SslVpnServerIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定SslVpnServerIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>vpn-gateway-id - String - （过滤条件）VPN实例ID，形如：vpngw-5aluhh9t。</li>
<li>vpn-gateway-name - String - （过滤条件）VPN实例名称。</li>
<li>ssl-vpn-server-name - String - （过滤条件）SSL-VPN-SERVER实例名称。</li>
<li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID，形如：vpns-xxx。</li>
                     * @return Filters 过滤条件，参数不支持同时指定SslVpnServerIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>vpn-gateway-id - String - （过滤条件）VPN实例ID，形如：vpngw-5aluhh9t。</li>
<li>vpn-gateway-name - String - （过滤条件）VPN实例名称。</li>
<li>ssl-vpn-server-name - String - （过滤条件）SSL-VPN-SERVER实例名称。</li>
<li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID，形如：vpns-xxx。</li>
                     * 
                     */
                    std::vector<FilterObject> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定SslVpnServerIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>vpn-gateway-id - String - （过滤条件）VPN实例ID，形如：vpngw-5aluhh9t。</li>
<li>vpn-gateway-name - String - （过滤条件）VPN实例名称。</li>
<li>ssl-vpn-server-name - String - （过滤条件）SSL-VPN-SERVER实例名称。</li>
<li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID，形如：vpns-xxx。</li>
                     * @param _filters 过滤条件，参数不支持同时指定SslVpnServerIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>vpn-gateway-id - String - （过滤条件）VPN实例ID，形如：vpngw-5aluhh9t。</li>
<li>vpn-gateway-name - String - （过滤条件）VPN实例名称。</li>
<li>ssl-vpn-server-name - String - （过滤条件）SSL-VPN-SERVER实例名称。</li>
<li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID，形如：vpns-xxx。</li>
                     * 
                     */
                    void SetFilters(const std::vector<FilterObject>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取vpn门户使用。 默认Flase
                     * @return IsVpnPortal vpn门户使用。 默认Flase
                     * 
                     */
                    bool GetIsVpnPortal() const;

                    /**
                     * 设置vpn门户使用。 默认Flase
                     * @param _isVpnPortal vpn门户使用。 默认Flase
                     * 
                     */
                    void SetIsVpnPortal(const bool& _isVpnPortal);

                    /**
                     * 判断参数 IsVpnPortal 是否已赋值
                     * @return IsVpnPortal 是否已赋值
                     * 
                     */
                    bool IsVpnPortalHasBeenSet() const;

                private:

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * SSL-VPN-SERVER实例ID。形如：vpns-0p4rj60。每次请求的实例的上限为100。参数不支持同时指定SslVpnServerIds和Filters。
                     */
                    std::vector<std::string> m_sslVpnServerIds;
                    bool m_sslVpnServerIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定SslVpnServerIds和Filters。
<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>vpn-gateway-id - String - （过滤条件）VPN实例ID，形如：vpngw-5aluhh9t。</li>
<li>vpn-gateway-name - String - （过滤条件）VPN实例名称。</li>
<li>ssl-vpn-server-name - String - （过滤条件）SSL-VPN-SERVER实例名称。</li>
<li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID，形如：vpns-xxx。</li>
                     */
                    std::vector<FilterObject> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * vpn门户使用。 默认Flase
                     */
                    bool m_isVpnPortal;
                    bool m_isVpnPortalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLSERVERSREQUEST_H_
