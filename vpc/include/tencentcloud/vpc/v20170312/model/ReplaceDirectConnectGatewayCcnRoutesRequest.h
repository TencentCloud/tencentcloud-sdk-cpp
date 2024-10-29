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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DirectConnectGatewayCcnRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ReplaceDirectConnectGatewayCcnRoutes请求参数结构体
                */
                class ReplaceDirectConnectGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    ReplaceDirectConnectGatewayCcnRoutesRequest();
                    ~ReplaceDirectConnectGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关ID，形如：dcg-prpqlmg1
                     * @return DirectConnectGatewayId 专线网关ID，形如：dcg-prpqlmg1
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关ID，形如：dcg-prpqlmg1
                     * @param _directConnectGatewayId 专线网关ID，形如：dcg-prpqlmg1
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
                     * 获取需要连通的IDC网段列表
                     * @return Routes 需要连通的IDC网段列表
                     * 
                     */
                    std::vector<DirectConnectGatewayCcnRoute> GetRoutes() const;

                    /**
                     * 设置需要连通的IDC网段列表
                     * @param _routes 需要连通的IDC网段列表
                     * 
                     */
                    void SetRoutes(const std::vector<DirectConnectGatewayCcnRoute>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

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

                private:

                    /**
                     * 专线网关ID，形如：dcg-prpqlmg1
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 需要连通的IDC网段列表
                     */
                    std::vector<DirectConnectGatewayCcnRoute> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * 地址类型，支持：IPv4、IPv6。默认IPv4。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
