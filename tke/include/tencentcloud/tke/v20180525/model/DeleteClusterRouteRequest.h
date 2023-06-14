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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterRoute请求参数结构体
                */
                class DeleteClusterRouteRequest : public AbstractModel
                {
                public:
                    DeleteClusterRouteRequest();
                    ~DeleteClusterRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表名称。
                     * @return RouteTableName 路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称。
                     * @param _routeTableName 路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取下一跳地址。
                     * @return GatewayIp 下一跳地址。
                     * 
                     */
                    std::string GetGatewayIp() const;

                    /**
                     * 设置下一跳地址。
                     * @param _gatewayIp 下一跳地址。
                     * 
                     */
                    void SetGatewayIp(const std::string& _gatewayIp);

                    /**
                     * 判断参数 GatewayIp 是否已赋值
                     * @return GatewayIp 是否已赋值
                     * 
                     */
                    bool GatewayIpHasBeenSet() const;

                    /**
                     * 获取目的端CIDR。
                     * @return DestinationCidrBlock 目的端CIDR。
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的端CIDR。
                     * @param _destinationCidrBlock 目的端CIDR。
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 下一跳地址。
                     */
                    std::string m_gatewayIp;
                    bool m_gatewayIpHasBeenSet;

                    /**
                     * 目的端CIDR。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTEREQUEST_H_
