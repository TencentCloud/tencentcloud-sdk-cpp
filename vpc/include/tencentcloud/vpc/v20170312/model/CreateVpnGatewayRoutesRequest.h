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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpnGatewayRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpnGatewayRoutes请求参数结构体
                */
                class CreateVpnGatewayRoutesRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewayRoutesRequest();
                    ~CreateVpnGatewayRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN网关的ID
                     * @return VpnGatewayId VPN网关的ID
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关的ID
                     * @param _vpnGatewayId VPN网关的ID
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPN网关目的路由列表
                     * @return Routes VPN网关目的路由列表
                     * 
                     */
                    std::vector<VpnGatewayRoute> GetRoutes() const;

                    /**
                     * 设置VPN网关目的路由列表
                     * @param _routes VPN网关目的路由列表
                     * 
                     */
                    void SetRoutes(const std::vector<VpnGatewayRoute>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * VPN网关的ID
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPN网关目的路由列表
                     */
                    std::vector<VpnGatewayRoute> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYROUTESREQUEST_H_
