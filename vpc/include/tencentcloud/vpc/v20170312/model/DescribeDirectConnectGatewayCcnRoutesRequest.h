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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectGatewayCcnRoutes请求参数结构体
                */
                class DescribeDirectConnectGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    DescribeDirectConnectGatewayCcnRoutesRequest();
                    ~DescribeDirectConnectGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关ID，形如：`dcg-prpqlmg1`。
                     * @return DirectConnectGatewayId 专线网关ID，形如：`dcg-prpqlmg1`。
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关ID，形如：`dcg-prpqlmg1`。
                     * @param _directConnectGatewayId 专线网关ID，形如：`dcg-prpqlmg1`。
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取云联网路由学习类型，可选值：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置，默认值。</li>
                     * @return CcnRouteType 云联网路由学习类型，可选值：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置，默认值。</li>
                     * 
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置云联网路由学习类型，可选值：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置，默认值。</li>
                     * @param _ccnRouteType 云联网路由学习类型，可选值：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置，默认值。</li>
                     * 
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     * 
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取地址类型，支持：IPv4、IPv6。默认IPv4。
                     * @return AddressType 地址类型，支持：IPv4、IPv6。默认IPv4。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置地址类型，支持：IPv4、IPv6。默认IPv4。
                     * @param _addressType 地址类型，支持：IPv4、IPv6。默认IPv4。
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

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
                     * 获取返回数量。
                     * @return Limit 返回数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量。
                     * @param _limit 返回数量。
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
                     * 专线网关ID，形如：`dcg-prpqlmg1`。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 云联网路由学习类型，可选值：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置，默认值。</li>
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * 地址类型，支持：IPv4、IPv6。默认IPv4。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
