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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLCLIENTSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLCLIENTSREQUEST_H_

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
                * DescribeVpnGatewaySslClients请求参数结构体
                */
                class DescribeVpnGatewaySslClientsRequest : public AbstractModel
                {
                public:
                    DescribeVpnGatewaySslClientsRequest();
                    ~DescribeVpnGatewaySslClientsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，参数不支持同时指定SslVpnClientIds和Filters。<li>vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。</li><li>vpn-gateway-id - String - （过滤条件）VPN实例ID形如：vpngw-5aluhh9t。</li><li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID形如：vpns-1j2w6xpx。</li><li>ssl-vpn-client-id - String - （过滤条件）SSL-VPN-CLIENT实例ID形如：vpnc-3rlxp4nd。</li><li>ssl-vpn-client-name - String - （过滤条件）SSL-VPN-CLIENT实例名称。</li><li>ssl-vpn-client-inner-ip - String - （过滤条件）SSL-VPN-CLIENT私网IP。</li>
                     * @return Filters 过滤条件，参数不支持同时指定SslVpnClientIds和Filters。<li>vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。</li><li>vpn-gateway-id - String - （过滤条件）VPN实例ID形如：vpngw-5aluhh9t。</li><li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID形如：vpns-1j2w6xpx。</li><li>ssl-vpn-client-id - String - （过滤条件）SSL-VPN-CLIENT实例ID形如：vpnc-3rlxp4nd。</li><li>ssl-vpn-client-name - String - （过滤条件）SSL-VPN-CLIENT实例名称。</li><li>ssl-vpn-client-inner-ip - String - （过滤条件）SSL-VPN-CLIENT私网IP。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定SslVpnClientIds和Filters。<li>vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。</li><li>vpn-gateway-id - String - （过滤条件）VPN实例ID形如：vpngw-5aluhh9t。</li><li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID形如：vpns-1j2w6xpx。</li><li>ssl-vpn-client-id - String - （过滤条件）SSL-VPN-CLIENT实例ID形如：vpnc-3rlxp4nd。</li><li>ssl-vpn-client-name - String - （过滤条件）SSL-VPN-CLIENT实例名称。</li><li>ssl-vpn-client-inner-ip - String - （过滤条件）SSL-VPN-CLIENT私网IP。</li>
                     * @param _filters 过滤条件，参数不支持同时指定SslVpnClientIds和Filters。<li>vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。</li><li>vpn-gateway-id - String - （过滤条件）VPN实例ID形如：vpngw-5aluhh9t。</li><li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID形如：vpns-1j2w6xpx。</li><li>ssl-vpn-client-id - String - （过滤条件）SSL-VPN-CLIENT实例ID形如：vpnc-3rlxp4nd。</li><li>ssl-vpn-client-name - String - （过滤条件）SSL-VPN-CLIENT实例名称。</li><li>ssl-vpn-client-inner-ip - String - （过滤条件）SSL-VPN-CLIENT私网IP。</li>
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
                     * 获取偏移量，默认值0。
                     * @return Offset 偏移量，默认值0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值0。
                     * @param _offset 偏移量，默认值0。
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
                     * 获取请求对象个数，默认值20。
                     * @return Limit 请求对象个数，默认值20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数，默认值20。
                     * @param _limit 请求对象个数，默认值20。
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
                     * 获取SSL-VPN-CLIENT实例ID。形如：	
vpns-1jww3xpx。每次请求的实例的上限为100。参数不支持同时指定SslVpnClientIds和Filters。
                     * @return SslVpnClientIds SSL-VPN-CLIENT实例ID。形如：	
vpns-1jww3xpx。每次请求的实例的上限为100。参数不支持同时指定SslVpnClientIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetSslVpnClientIds() const;

                    /**
                     * 设置SSL-VPN-CLIENT实例ID。形如：	
vpns-1jww3xpx。每次请求的实例的上限为100。参数不支持同时指定SslVpnClientIds和Filters。
                     * @param _sslVpnClientIds SSL-VPN-CLIENT实例ID。形如：	
vpns-1jww3xpx。每次请求的实例的上限为100。参数不支持同时指定SslVpnClientIds和Filters。
                     * 
                     */
                    void SetSslVpnClientIds(const std::vector<std::string>& _sslVpnClientIds);

                    /**
                     * 判断参数 SslVpnClientIds 是否已赋值
                     * @return SslVpnClientIds 是否已赋值
                     * 
                     */
                    bool SslVpnClientIdsHasBeenSet() const;

                    /**
                     * 获取VPN门户网站使用。默认是False。
                     * @return IsVpnPortal VPN门户网站使用。默认是False。
                     * 
                     */
                    bool GetIsVpnPortal() const;

                    /**
                     * 设置VPN门户网站使用。默认是False。
                     * @param _isVpnPortal VPN门户网站使用。默认是False。
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
                     * 过滤条件，参数不支持同时指定SslVpnClientIds和Filters。<li>vpc-id - String - （过滤条件）VPC实例ID形如：vpc-f49l6u0z。</li><li>vpn-gateway-id - String - （过滤条件）VPN实例ID形如：vpngw-5aluhh9t。</li><li>ssl-vpn-server-id - String - （过滤条件）SSL-VPN-SERVER实例ID形如：vpns-1j2w6xpx。</li><li>ssl-vpn-client-id - String - （过滤条件）SSL-VPN-CLIENT实例ID形如：vpnc-3rlxp4nd。</li><li>ssl-vpn-client-name - String - （过滤条件）SSL-VPN-CLIENT实例名称。</li><li>ssl-vpn-client-inner-ip - String - （过滤条件）SSL-VPN-CLIENT私网IP。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认值0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数，默认值20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT实例ID。形如：	
vpns-1jww3xpx。每次请求的实例的上限为100。参数不支持同时指定SslVpnClientIds和Filters。
                     */
                    std::vector<std::string> m_sslVpnClientIds;
                    bool m_sslVpnClientIdsHasBeenSet;

                    /**
                     * VPN门户网站使用。默认是False。
                     */
                    bool m_isVpnPortal;
                    bool m_isVpnPortalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPNGATEWAYSSLCLIENTSREQUEST_H_
