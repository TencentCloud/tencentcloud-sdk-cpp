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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 路由策略对象
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建IPv4目的网段，取值不能在私有网络网段内，例如：112.20.51.0/24。
                     * @return DestinationCidrBlock 创建IPv4目的网段，取值不能在私有网络网段内，例如：112.20.51.0/24。
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置创建IPv4目的网段，取值不能在私有网络网段内，例如：112.20.51.0/24。
                     * @param _destinationCidrBlock 创建IPv4目的网段，取值不能在私有网络网段内，例如：112.20.51.0/24。
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
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：公网NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
LOCAL_GATEWAY：CDC本地网关；
INTRANAT：私网NAT网关；
USER_CCN；云联网（自定义路由）。

                     * @return GatewayType 下一跳类型，目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：公网NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
LOCAL_GATEWAY：CDC本地网关；
INTRANAT：私网NAT网关；
USER_CCN；云联网（自定义路由）。

                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳类型，目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：公网NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
LOCAL_GATEWAY：CDC本地网关；
INTRANAT：私网NAT网关；
USER_CCN；云联网（自定义路由）。

                     * @param _gatewayType 下一跳类型，目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：公网NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
LOCAL_GATEWAY：CDC本地网关；
INTRANAT：私网NAT网关；
USER_CCN；云联网（自定义路由）。

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
特殊说明：
GatewayType为NORMAL_CVM时，GatewayId填写实例的内网IP。
GatewayType为EIP时，GatewayId填写0。
                     * @return GatewayId 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
特殊说明：
GatewayType为NORMAL_CVM时，GatewayId填写实例的内网IP。
GatewayType为EIP时，GatewayId填写0。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
特殊说明：
GatewayType为NORMAL_CVM时，GatewayId填写实例的内网IP。
GatewayType为EIP时，GatewayId填写0。
                     * @param _gatewayId 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
特殊说明：
GatewayType为NORMAL_CVM时，GatewayId填写实例的内网IP。
GatewayType为EIP时，GatewayId填写0。
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
                     * 获取路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略。
该字段在删除时必填，其他字段无需填写。
                     * @return RouteId 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略。
该字段在删除时必填，其他字段无需填写。
                     * 
                     */
                    uint64_t GetRouteId() const;

                    /**
                     * 设置路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略。
该字段在删除时必填，其他字段无需填写。
                     * @param _routeId 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略。
该字段在删除时必填，其他字段无需填写。
                     * 
                     */
                    void SetRouteId(const uint64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

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

                    /**
                     * 获取路由类型，目前我们支持的类型有：
USER：用户路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和操作 USER 类型的路由。
                     * @return RouteType 路由类型，目前我们支持的类型有：
USER：用户路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和操作 USER 类型的路由。
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置路由类型，目前我们支持的类型有：
USER：用户路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和操作 USER 类型的路由。
                     * @param _routeType 路由类型，目前我们支持的类型有：
USER：用户路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和操作 USER 类型的路由。
                     * 
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取路由表实例ID，例如：rtb-azd4dt1c。
                     * @return RouteTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-azd4dt1c。
                     * @param _routeTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取创建IPv6目的网段，取值不能在私有网络网段内，例如：2402:4e00:1000:810b::/64。
                     * @return DestinationIpv6CidrBlock 创建IPv6目的网段，取值不能在私有网络网段内，例如：2402:4e00:1000:810b::/64。
                     * 
                     */
                    std::string GetDestinationIpv6CidrBlock() const;

                    /**
                     * 设置创建IPv6目的网段，取值不能在私有网络网段内，例如：2402:4e00:1000:810b::/64。
                     * @param _destinationIpv6CidrBlock 创建IPv6目的网段，取值不能在私有网络网段内，例如：2402:4e00:1000:810b::/64。
                     * 
                     */
                    void SetDestinationIpv6CidrBlock(const std::string& _destinationIpv6CidrBlock);

                    /**
                     * 判断参数 DestinationIpv6CidrBlock 是否已赋值
                     * @return DestinationIpv6CidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationIpv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取路由唯一策略ID。
                     * @return RouteItemId 路由唯一策略ID。
                     * 
                     */
                    std::string GetRouteItemId() const;

                    /**
                     * 设置路由唯一策略ID。
                     * @param _routeItemId 路由唯一策略ID。
                     * 
                     */
                    void SetRouteItemId(const std::string& _routeItemId);

                    /**
                     * 判断参数 RouteItemId 是否已赋值
                     * @return RouteItemId 是否已赋值
                     * 
                     */
                    bool RouteItemIdHasBeenSet() const;

                    /**
                     * 获取路由策略是否发布到云联网。该字段仅做出参使用，作为入参字段时此参数不生效。
                     * @return PublishedToVbc 路由策略是否发布到云联网。该字段仅做出参使用，作为入参字段时此参数不生效。
                     * 
                     */
                    bool GetPublishedToVbc() const;

                    /**
                     * 设置路由策略是否发布到云联网。该字段仅做出参使用，作为入参字段时此参数不生效。
                     * @param _publishedToVbc 路由策略是否发布到云联网。该字段仅做出参使用，作为入参字段时此参数不生效。
                     * 
                     */
                    void SetPublishedToVbc(const bool& _publishedToVbc);

                    /**
                     * 判断参数 PublishedToVbc 是否已赋值
                     * @return PublishedToVbc 是否已赋值
                     * 
                     */
                    bool PublishedToVbcHasBeenSet() const;

                    /**
                     * 获取路由策略创建时间
                     * @return CreatedTime 路由策略创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置路由策略创建时间
                     * @param _createdTime 路由策略创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取CDC 集群唯一 ID。
                     * @return CdcId CDC 集群唯一 ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC 集群唯一 ID。
                     * @param _cdcId CDC 集群唯一 ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * 创建IPv4目的网段，取值不能在私有网络网段内，例如：112.20.51.0/24。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型，目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：公网NAT网关; 
NORMAL_CVM：普通云服务器；
EIP：云服务器的公网IP；
LOCAL_GATEWAY：CDC本地网关；
INTRANAT：私网NAT网关；
USER_CCN；云联网（自定义路由）。

                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 下一跳地址，这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址。
特殊说明：
GatewayType为NORMAL_CVM时，GatewayId填写实例的内网IP。
GatewayType为EIP时，GatewayId填写0。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略。
该字段在删除时必填，其他字段无需填写。
                     */
                    uint64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 路由策略描述。
                     */
                    std::string m_routeDescription;
                    bool m_routeDescriptionHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 路由类型，目前我们支持的类型有：
USER：用户路由；
NETD：网络探测路由，创建网络探测实例时，系统默认下发，不可编辑与删除；
CCN：云联网路由，系统默认下发，不可编辑与删除。
用户只能添加和操作 USER 类型的路由。
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 创建IPv6目的网段，取值不能在私有网络网段内，例如：2402:4e00:1000:810b::/64。
                     */
                    std::string m_destinationIpv6CidrBlock;
                    bool m_destinationIpv6CidrBlockHasBeenSet;

                    /**
                     * 路由唯一策略ID。
                     */
                    std::string m_routeItemId;
                    bool m_routeItemIdHasBeenSet;

                    /**
                     * 路由策略是否发布到云联网。该字段仅做出参使用，作为入参字段时此参数不生效。
                     */
                    bool m_publishedToVbc;
                    bool m_publishedToVbcHasBeenSet;

                    /**
                     * 路由策略创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * CDC 集群唯一 ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTE_H_
