/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_

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
                * 路由接收策略条目。
                */
                class RoutePolicyEntry : public AbstractModel
                {
                public:
                    RoutePolicyEntry();
                    ~RoutePolicyEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由策略条目IPv4唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicyEntryId 路由策略条目IPv4唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoutePolicyEntryId() const;

                    /**
                     * 设置路由策略条目IPv4唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routePolicyEntryId 路由策略条目IPv4唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutePolicyEntryId(const std::string& _routePolicyEntryId);

                    /**
                     * 判断参数 RoutePolicyEntryId 是否已赋值
                     * @return RoutePolicyEntryId 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntryIdHasBeenSet() const;

                    /**
                     * 获取目标网段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrBlock 目标网段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置目标网段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cidrBlock 目标网段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取路由策略规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 路由策略规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置路由策略规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 路由策略规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取路由类型。
USER：用户自定义类型。
NETD：网络探测下发的路由。
CCN：云联网路由。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteType 路由类型。
USER：用户自定义类型。
NETD：网络探测下发的路由。
CCN：云联网路由。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置路由类型。
USER：用户自定义类型。
NETD：网络探测下发的路由。
CCN：云联网路由。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routeType 路由类型。
USER：用户自定义类型。
NETD：网络探测下发的路由。
CCN：云联网路由。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取下一跳类型。目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
EIP：云服务器的公网IP；
LOCAL_GATEWAY：本地网关;
PVGW：PVGW网关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayType 下一跳类型。目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
EIP：云服务器的公网IP；
LOCAL_GATEWAY：本地网关;
PVGW：PVGW网关。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置下一跳类型。目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
EIP：云服务器的公网IP；
LOCAL_GATEWAY：本地网关;
PVGW：PVGW网关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayType 下一跳类型。目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
EIP：云服务器的公网IP；
LOCAL_GATEWAY：本地网关;
PVGW：PVGW网关。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网关唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayId 网关唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayId 网关唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取优先级。数值越小，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 优先级。数值越小，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置优先级。数值越小，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 优先级。数值越小，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取动作。
DROP：丢弃。
DISABLE：接收且禁用。
ACCEPT：接收且启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 动作。
DROP：丢弃。
DISABLE：接收且禁用。
ACCEPT：接收且启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作。
DROP：丢弃。
DISABLE：接收且禁用。
ACCEPT：接收且启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 动作。
DROP：丢弃。
DISABLE：接收且禁用。
ACCEPT：接收且启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 路由策略条目IPv4唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routePolicyEntryId;
                    bool m_routePolicyEntryIdHasBeenSet;

                    /**
                     * 目标网段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 路由策略规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 路由类型。
USER：用户自定义类型。
NETD：网络探测下发的路由。
CCN：云联网路由。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * 下一跳类型。目前我们支持的类型有：
CVM：公网网关类型的云服务器；
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
HAVIP：高可用虚拟IP；
NAT：NAT网关; 
EIP：云服务器的公网IP；
LOCAL_GATEWAY：本地网关;
PVGW：PVGW网关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 网关唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 优先级。数值越小，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 动作。
DROP：丢弃。
DISABLE：接收且禁用。
ACCEPT：接收且启用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 地域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTEPOLICYENTRY_H_
