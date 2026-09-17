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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/edgezone/v20260401/model/PublicNetworkSegment.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * 公网实例信息，包含实例ID、可用区ID、实例名称、线路、路由模式等信息
                */
                class PublicNetworkInstanceInfo : public AbstractModel
                {
                public:
                    PublicNetworkInstanceInfo();
                    ~PublicNetworkInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网实例ID
                     * @return NetworkInstanceId 公网实例ID
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置公网实例ID
                     * @param _networkInstanceId 公网实例ID
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取公网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkInstanceName 公网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置公网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkInstanceName 公网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取带宽，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 带宽，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 带宽，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取线路信息
                     * @return Line 线路信息
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置线路信息
                     * @param _line 线路信息
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取路由模式，枚举值：STATIC、BGP、OSPF
                     * @return RouteMode 路由模式，枚举值：STATIC、BGP、OSPF
                     * 
                     */
                    std::string GetRouteMode() const;

                    /**
                     * 设置路由模式，枚举值：STATIC、BGP、OSPF
                     * @param _routeMode 路由模式，枚举值：STATIC、BGP、OSPF
                     * 
                     */
                    void SetRouteMode(const std::string& _routeMode);

                    /**
                     * 判断参数 RouteMode 是否已赋值
                     * @return RouteMode 是否已赋值
                     * 
                     */
                    bool RouteModeHasBeenSet() const;

                    /**
                     * 获取关联的物理服务器数量
                     * @return ServerCount 关联的物理服务器数量
                     * 
                     */
                    int64_t GetServerCount() const;

                    /**
                     * 设置关联的物理服务器数量
                     * @param _serverCount 关联的物理服务器数量
                     * 
                     */
                    void SetServerCount(const int64_t& _serverCount);

                    /**
                     * 判断参数 ServerCount 是否已赋值
                     * @return ServerCount 是否已赋值
                     * 
                     */
                    bool ServerCountHasBeenSet() const;

                    /**
                     * 获取已申请的Ipv4数量
                     * @return Ipv4Count 已申请的Ipv4数量
                     * 
                     */
                    int64_t GetIpv4Count() const;

                    /**
                     * 设置已申请的Ipv4数量
                     * @param _ipv4Count 已申请的Ipv4数量
                     * 
                     */
                    void SetIpv4Count(const int64_t& _ipv4Count);

                    /**
                     * 判断参数 Ipv4Count 是否已赋值
                     * @return Ipv4Count 是否已赋值
                     * 
                     */
                    bool Ipv4CountHasBeenSet() const;

                    /**
                     * 获取已申请的Ipv6数量
                     * @return Ipv6Count 已申请的Ipv6数量
                     * 
                     */
                    int64_t GetIpv6Count() const;

                    /**
                     * 设置已申请的Ipv6数量
                     * @param _ipv6Count 已申请的Ipv6数量
                     * 
                     */
                    void SetIpv6Count(const int64_t& _ipv6Count);

                    /**
                     * 判断参数 Ipv6Count 是否已赋值
                     * @return Ipv6Count 是否已赋值
                     * 
                     */
                    bool Ipv6CountHasBeenSet() const;

                    /**
                     * 获取关联的Ipv4网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv4CidrSet 关联的Ipv4网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicNetworkSegment> GetIpv4CidrSet() const;

                    /**
                     * 设置关联的Ipv4网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv4CidrSet 关联的Ipv4网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv4CidrSet(const std::vector<PublicNetworkSegment>& _ipv4CidrSet);

                    /**
                     * 判断参数 Ipv4CidrSet 是否已赋值
                     * @return Ipv4CidrSet 是否已赋值
                     * 
                     */
                    bool Ipv4CidrSetHasBeenSet() const;

                    /**
                     * 获取关联的Ipv6网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6CidrSet 关联的Ipv6网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicNetworkSegment> GetIpv6CidrSet() const;

                    /**
                     * 设置关联的Ipv6网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6CidrSet 关联的Ipv6网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6CidrSet(const std::vector<PublicNetworkSegment>& _ipv6CidrSet);

                    /**
                     * 判断参数 Ipv6CidrSet 是否已赋值
                     * @return Ipv6CidrSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrSetHasBeenSet() const;

                    /**
                     * 获取公网实例创建时间
                     * @return CreatedAt 公网实例创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置公网实例创建时间
                     * @param _createdAt 公网实例创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取公网实例修改时间
                     * @return UpdatedAt 公网实例修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置公网实例修改时间
                     * @param _updatedAt 公网实例修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 公网实例ID
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 公网实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * 带宽，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 线路信息
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 路由模式，枚举值：STATIC、BGP、OSPF
                     */
                    std::string m_routeMode;
                    bool m_routeModeHasBeenSet;

                    /**
                     * 关联的物理服务器数量
                     */
                    int64_t m_serverCount;
                    bool m_serverCountHasBeenSet;

                    /**
                     * 已申请的Ipv4数量
                     */
                    int64_t m_ipv4Count;
                    bool m_ipv4CountHasBeenSet;

                    /**
                     * 已申请的Ipv6数量
                     */
                    int64_t m_ipv6Count;
                    bool m_ipv6CountHasBeenSet;

                    /**
                     * 关联的Ipv4网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicNetworkSegment> m_ipv4CidrSet;
                    bool m_ipv4CidrSetHasBeenSet;

                    /**
                     * 关联的Ipv6网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicNetworkSegment> m_ipv6CidrSet;
                    bool m_ipv6CidrSetHasBeenSet;

                    /**
                     * 公网实例创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 公网实例修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PUBLICNETWORKINSTANCEINFO_H_
