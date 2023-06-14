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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_ROUTEPOLICY_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_ROUTEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 路由条目
                */
                class RoutePolicy : public AbstractModel
                {
                public:
                    RoutePolicy();
                    ~RoutePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目的网段
                     * @return DestinationCidrBlock 目的网段
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的网段
                     * @param _destinationCidrBlock 目的网段
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取下一跳类型，目前我们支持的类型有：
LOCAL：物理机默认路由；
VPN：VPN网关；
PEERCONNECTION：对等连接；
CPM：物理机自定义路由；
CCN：云联网；
TGW：公网默认路由；
SSLVPN : SSH SSL VPN网关。
                     * @return GatewayType 下一跳类型，目前我们支持的类型有：
LOCAL：物理机默认路由；
VPN：VPN网关；
PEERCONNECTION：对等连接；
CPM：物理机自定义路由；
CCN：云联网；
TGW：公网默认路由；
SSLVPN : SSH SSL VPN网关。
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳类型，目前我们支持的类型有：
LOCAL：物理机默认路由；
VPN：VPN网关；
PEERCONNECTION：对等连接；
CPM：物理机自定义路由；
CCN：云联网；
TGW：公网默认路由；
SSLVPN : SSH SSL VPN网关。
                     * @param _gatewayType 下一跳类型，目前我们支持的类型有：
LOCAL：物理机默认路由；
VPN：VPN网关；
PEERCONNECTION：对等连接；
CPM：物理机自定义路由；
CCN：云联网；
TGW：公网默认路由；
SSLVPN : SSH SSL VPN网关。
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
                     * @return GatewayId 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
                     * @param _gatewayId 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
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
                     * 获取路由策略描述。
                     * @return RouteDescription 路由策略描述。
                     * 
                     */
                    std::string GetRouteDescription() const;

                    /**
                     * 设置路由策略描述。
                     * @param _routeDescription 路由策略描述。
                     * 
                     */
                    void SetRouteDescription(const std::string& _routeDescription);

                    /**
                     * 判断参数 RouteDescription 是否已赋值
                     * @return RouteDescription 是否已赋值
                     * 
                     */
                    bool RouteDescriptionHasBeenSet() const;

                    /**
                     * 获取路由策略ID
                     * @return RoutePolicyId 路由策略ID
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置路由策略ID
                     * @param _routePolicyId 路由策略ID
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                    /**
                     * 获取路由类型，目前我们支持的类型有：
USER：用户自定义路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和编辑USER 类型的路由。
                     * @return RoutePolicyType 路由类型，目前我们支持的类型有：
USER：用户自定义路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和编辑USER 类型的路由。
                     * 
                     */
                    std::string GetRoutePolicyType() const;

                    /**
                     * 设置路由类型，目前我们支持的类型有：
USER：用户自定义路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和编辑USER 类型的路由。
                     * @param _routePolicyType 路由类型，目前我们支持的类型有：
USER：用户自定义路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和编辑USER 类型的路由。
                     * 
                     */
                    void SetRoutePolicyType(const std::string& _routePolicyType);

                    /**
                     * 判断参数 RoutePolicyType 是否已赋值
                     * @return RoutePolicyType 是否已赋值
                     * 
                     */
                    bool RoutePolicyTypeHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 目的网段
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型，目前我们支持的类型有：
LOCAL：物理机默认路由；
VPN：VPN网关；
PEERCONNECTION：对等连接；
CPM：物理机自定义路由；
CCN：云联网；
TGW：公网默认路由；
SSLVPN : SSH SSL VPN网关。
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 路由策略描述。
                     */
                    std::string m_routeDescription;
                    bool m_routeDescriptionHasBeenSet;

                    /**
                     * 路由策略ID
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * 路由类型，目前我们支持的类型有：
USER：用户自定义路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和编辑USER 类型的路由。
                     */
                    std::string m_routePolicyType;
                    bool m_routePolicyTypeHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_ROUTEPOLICY_H_
