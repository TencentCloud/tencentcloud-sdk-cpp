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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPNGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPNGATEWAYROUTESREQUEST_H_

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
                * DeleteVpnGatewayRoutes请求参数结构体
                */
                class DeleteVpnGatewayRoutesRequest : public AbstractModel
                {
                public:
                    DeleteVpnGatewayRoutesRequest();
                    ~DeleteVpnGatewayRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN网关实例ID
                     * @return VpnGatewayId VPN网关实例ID
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关实例ID
                     * @param _vpnGatewayId VPN网关实例ID
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
                     * 获取路由ID信息列表，可以通过[DescribeVpnGatewayRoutes](https://cloud.tencent.com/document/api/215/57676)接口查询。
                     * @return RouteIds 路由ID信息列表，可以通过[DescribeVpnGatewayRoutes](https://cloud.tencent.com/document/api/215/57676)接口查询。
                     * 
                     */
                    std::vector<std::string> GetRouteIds() const;

                    /**
                     * 设置路由ID信息列表，可以通过[DescribeVpnGatewayRoutes](https://cloud.tencent.com/document/api/215/57676)接口查询。
                     * @param _routeIds 路由ID信息列表，可以通过[DescribeVpnGatewayRoutes](https://cloud.tencent.com/document/api/215/57676)接口查询。
                     * 
                     */
                    void SetRouteIds(const std::vector<std::string>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                private:

                    /**
                     * VPN网关实例ID
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * 路由ID信息列表，可以通过[DescribeVpnGatewayRoutes](https://cloud.tencent.com/document/api/215/57676)接口查询。
                     */
                    std::vector<std::string> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPNGATEWAYROUTESREQUEST_H_
