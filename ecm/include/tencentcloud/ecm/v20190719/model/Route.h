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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 路由策略
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目的IPv4网段
                     * @return DestinationCidrBlock 目的IPv4网段
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的IPv4网段
                     * @param _destinationCidrBlock 目的IPv4网段
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
                     * 获取下一跳类型
NORMAL_CVM：普通云服务器；
                     * @return GatewayType 下一跳类型
NORMAL_CVM：普通云服务器；
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳类型
NORMAL_CVM：普通云服务器；
                     * @param _gatewayType 下一跳类型
NORMAL_CVM：普通云服务器；
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
                     * 获取下一跳地址
这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址
当 GatewayType 为 EIP 时，GatewayId 固定值 '0'
                     * @return GatewayId 下一跳地址
这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址
当 GatewayType 为 EIP 时，GatewayId 固定值 '0'
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置下一跳地址
这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址
当 GatewayType 为 EIP 时，GatewayId 固定值 '0'
                     * @param _gatewayId 下一跳地址
这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址
当 GatewayType 为 EIP 时，GatewayId 固定值 '0'
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
                     * 获取路由策略唯一ID
                     * @return RouteItemId 路由策略唯一ID
                     * 
                     */
                    std::string GetRouteItemId() const;

                    /**
                     * 设置路由策略唯一ID
                     * @param _routeItemId 路由策略唯一ID
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
                     * 获取路由策略描述
                     * @return RouteDescription 路由策略描述
                     * 
                     */
                    std::string GetRouteDescription() const;

                    /**
                     * 设置路由策略描述
                     * @param _routeDescription 路由策略描述
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
                     * 获取路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略
                     * @return RouteId 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略
                     * 
                     */
                    uint64_t GetRouteId() const;

                    /**
                     * 设置路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略
                     * @param _routeId 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略
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

                private:

                    /**
                     * 目的IPv4网段
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型
NORMAL_CVM：普通云服务器；
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 下一跳地址
这里只需要指定不同下一跳类型的网关ID，系统会自动匹配到下一跳地址
当 GatewayType 为 EIP 时，GatewayId 固定值 '0'
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 路由策略唯一ID
                     */
                    std::string m_routeItemId;
                    bool m_routeItemIdHasBeenSet;

                    /**
                     * 路由策略描述
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
                     * 路由策略ID。IPv4路由策略ID是有意义的值，IPv6路由策略是无意义的值0。后续建议完全使用字符串唯一ID `RouteItemId`操作路由策略
                     */
                    uint64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ROUTE_H_
