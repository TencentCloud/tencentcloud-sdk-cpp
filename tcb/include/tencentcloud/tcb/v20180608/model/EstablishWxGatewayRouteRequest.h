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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHWXGATEWAYROUTEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHWXGATEWAYROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EstablishWxGatewayRoute请求参数结构体
                */
                class EstablishWxGatewayRouteRequest : public AbstractModel
                {
                public:
                    EstablishWxGatewayRouteRequest();
                    ~EstablishWxGatewayRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关id
                     * @return GatewayId 网关id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关id
                     * @param _gatewayId 网关id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return GatewayRouteName 服务名称
                     * 
                     */
                    std::string GetGatewayRouteName() const;

                    /**
                     * 设置服务名称
                     * @param _gatewayRouteName 服务名称
                     * 
                     */
                    void SetGatewayRouteName(const std::string& _gatewayRouteName);

                    /**
                     * 判断参数 GatewayRouteName 是否已赋值
                     * @return GatewayRouteName 是否已赋值
                     * 
                     */
                    bool GatewayRouteNameHasBeenSet() const;

                    /**
                     * 获取服务地址
                     * @return GatewayRouteAddr 服务地址
                     * 
                     */
                    std::string GetGatewayRouteAddr() const;

                    /**
                     * 设置服务地址
                     * @param _gatewayRouteAddr 服务地址
                     * 
                     */
                    void SetGatewayRouteAddr(const std::string& _gatewayRouteAddr);

                    /**
                     * 判断参数 GatewayRouteAddr 是否已赋值
                     * @return GatewayRouteAddr 是否已赋值
                     * 
                     */
                    bool GatewayRouteAddrHasBeenSet() const;

                    /**
                     * 获取协议类型 http/https
                     * @return GatewayRouteProtocol 协议类型 http/https
                     * 
                     */
                    std::string GetGatewayRouteProtocol() const;

                    /**
                     * 设置协议类型 http/https
                     * @param _gatewayRouteProtocol 协议类型 http/https
                     * 
                     */
                    void SetGatewayRouteProtocol(const std::string& _gatewayRouteProtocol);

                    /**
                     * 判断参数 GatewayRouteProtocol 是否已赋值
                     * @return GatewayRouteProtocol 是否已赋值
                     * 
                     */
                    bool GatewayRouteProtocolHasBeenSet() const;

                    /**
                     * 获取服务描述
                     * @return GatewayRouteDesc 服务描述
                     * 
                     */
                    std::string GetGatewayRouteDesc() const;

                    /**
                     * 设置服务描述
                     * @param _gatewayRouteDesc 服务描述
                     * 
                     */
                    void SetGatewayRouteDesc(const std::string& _gatewayRouteDesc);

                    /**
                     * 判断参数 GatewayRouteDesc 是否已赋值
                     * @return GatewayRouteDesc 是否已赋值
                     * 
                     */
                    bool GatewayRouteDescHasBeenSet() const;

                private:

                    /**
                     * 网关id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_gatewayRouteName;
                    bool m_gatewayRouteNameHasBeenSet;

                    /**
                     * 服务地址
                     */
                    std::string m_gatewayRouteAddr;
                    bool m_gatewayRouteAddrHasBeenSet;

                    /**
                     * 协议类型 http/https
                     */
                    std::string m_gatewayRouteProtocol;
                    bool m_gatewayRouteProtocolHasBeenSet;

                    /**
                     * 服务描述
                     */
                    std::string m_gatewayRouteDesc;
                    bool m_gatewayRouteDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ESTABLISHWXGATEWAYROUTEREQUEST_H_
