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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONPOLICY_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/DefaultProtectionConfig.h>
#include <tencentcloud/antiddos/v20250903/model/IPACLRules.h>
#include <tencentcloud/antiddos/v20250903/model/PortACLRules.h>
#include <tencentcloud/antiddos/v20250903/model/SpeedLimitRules.h>
#include <tencentcloud/antiddos/v20250903/model/PacketFilterRules.h>
#include <tencentcloud/antiddos/v20250903/model/GeoBlockingConfig.h>
#include <tencentcloud/antiddos/v20250903/model/ProtocolBlockingConfig.h>
#include <tencentcloud/antiddos/v20250903/model/ConnectionProtectionConfig.h>
#include <tencentcloud/antiddos/v20250903/model/TrafficSignatureConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 防护实例的 L3/4 DDoS 防护策略。
                */
                class ProtectionPolicy : public AbstractModel
                {
                public:
                    ProtectionPolicy();
                    ~ProtectionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>默认防护配置。</p>
                     * @return DefaultProtection <p>默认防护配置。</p>
                     * 
                     */
                    DefaultProtectionConfig GetDefaultProtection() const;

                    /**
                     * 设置<p>默认防护配置。</p>
                     * @param _defaultProtection <p>默认防护配置。</p>
                     * 
                     */
                    void SetDefaultProtection(const DefaultProtectionConfig& _defaultProtection);

                    /**
                     * 判断参数 DefaultProtection 是否已赋值
                     * @return DefaultProtection 是否已赋值
                     * 
                     */
                    bool DefaultProtectionHasBeenSet() const;

                    /**
                     * 获取<p>IP 黑白名单规则列表。</p>
                     * @return IPACLRules <p>IP 黑白名单规则列表。</p>
                     * 
                     */
                    IPACLRules GetIPACLRules() const;

                    /**
                     * 设置<p>IP 黑白名单规则列表。</p>
                     * @param _iPACLRules <p>IP 黑白名单规则列表。</p>
                     * 
                     */
                    void SetIPACLRules(const IPACLRules& _iPACLRules);

                    /**
                     * 判断参数 IPACLRules 是否已赋值
                     * @return IPACLRules 是否已赋值
                     * 
                     */
                    bool IPACLRulesHasBeenSet() const;

                    /**
                     * 获取<p>端口过滤规则列表。</p>
                     * @return PortACLRules <p>端口过滤规则列表。</p>
                     * 
                     */
                    PortACLRules GetPortACLRules() const;

                    /**
                     * 设置<p>端口过滤规则列表。</p>
                     * @param _portACLRules <p>端口过滤规则列表。</p>
                     * 
                     */
                    void SetPortACLRules(const PortACLRules& _portACLRules);

                    /**
                     * 判断参数 PortACLRules 是否已赋值
                     * @return PortACLRules 是否已赋值
                     * 
                     */
                    bool PortACLRulesHasBeenSet() const;

                    /**
                     * 获取<p>限速规则列表。</p>
                     * @return SpeedLimitRules <p>限速规则列表。</p>
                     * 
                     */
                    SpeedLimitRules GetSpeedLimitRules() const;

                    /**
                     * 设置<p>限速规则列表。</p>
                     * @param _speedLimitRules <p>限速规则列表。</p>
                     * 
                     */
                    void SetSpeedLimitRules(const SpeedLimitRules& _speedLimitRules);

                    /**
                     * 判断参数 SpeedLimitRules 是否已赋值
                     * @return SpeedLimitRules 是否已赋值
                     * 
                     */
                    bool SpeedLimitRulesHasBeenSet() const;

                    /**
                     * 获取<p>包特征过滤规则列表。</p>
                     * @return PacketFilterRules <p>包特征过滤规则列表。</p>
                     * 
                     */
                    PacketFilterRules GetPacketFilterRules() const;

                    /**
                     * 设置<p>包特征过滤规则列表。</p>
                     * @param _packetFilterRules <p>包特征过滤规则列表。</p>
                     * 
                     */
                    void SetPacketFilterRules(const PacketFilterRules& _packetFilterRules);

                    /**
                     * 判断参数 PacketFilterRules 是否已赋值
                     * @return PacketFilterRules 是否已赋值
                     * 
                     */
                    bool PacketFilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>区域封禁配置。</p>
                     * @return GeoBlocking <p>区域封禁配置。</p>
                     * 
                     */
                    GeoBlockingConfig GetGeoBlocking() const;

                    /**
                     * 设置<p>区域封禁配置。</p>
                     * @param _geoBlocking <p>区域封禁配置。</p>
                     * 
                     */
                    void SetGeoBlocking(const GeoBlockingConfig& _geoBlocking);

                    /**
                     * 判断参数 GeoBlocking 是否已赋值
                     * @return GeoBlocking 是否已赋值
                     * 
                     */
                    bool GeoBlockingHasBeenSet() const;

                    /**
                     * 获取<p>协议封禁配置。</p>
                     * @return ProtocolBlocking <p>协议封禁配置。</p>
                     * 
                     */
                    ProtocolBlockingConfig GetProtocolBlocking() const;

                    /**
                     * 设置<p>协议封禁配置。</p>
                     * @param _protocolBlocking <p>协议封禁配置。</p>
                     * 
                     */
                    void SetProtocolBlocking(const ProtocolBlockingConfig& _protocolBlocking);

                    /**
                     * 判断参数 ProtocolBlocking 是否已赋值
                     * @return ProtocolBlocking 是否已赋值
                     * 
                     */
                    bool ProtocolBlockingHasBeenSet() const;

                    /**
                     * 获取<p>连接类攻击防护配置。</p>
                     * @return ConnectionProtection <p>连接类攻击防护配置。</p>
                     * 
                     */
                    ConnectionProtectionConfig GetConnectionProtection() const;

                    /**
                     * 设置<p>连接类攻击防护配置。</p>
                     * @param _connectionProtection <p>连接类攻击防护配置。</p>
                     * 
                     */
                    void SetConnectionProtection(const ConnectionProtectionConfig& _connectionProtection);

                    /**
                     * 判断参数 ConnectionProtection 是否已赋值
                     * @return ConnectionProtection 是否已赋值
                     * 
                     */
                    bool ConnectionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>流量签名配置。</p>
                     * @return TrafficSignature <p>流量签名配置。</p>
                     * 
                     */
                    TrafficSignatureConfig GetTrafficSignature() const;

                    /**
                     * 设置<p>流量签名配置。</p>
                     * @param _trafficSignature <p>流量签名配置。</p>
                     * 
                     */
                    void SetTrafficSignature(const TrafficSignatureConfig& _trafficSignature);

                    /**
                     * 判断参数 TrafficSignature 是否已赋值
                     * @return TrafficSignature 是否已赋值
                     * 
                     */
                    bool TrafficSignatureHasBeenSet() const;

                private:

                    /**
                     * <p>默认防护配置。</p>
                     */
                    DefaultProtectionConfig m_defaultProtection;
                    bool m_defaultProtectionHasBeenSet;

                    /**
                     * <p>IP 黑白名单规则列表。</p>
                     */
                    IPACLRules m_iPACLRules;
                    bool m_iPACLRulesHasBeenSet;

                    /**
                     * <p>端口过滤规则列表。</p>
                     */
                    PortACLRules m_portACLRules;
                    bool m_portACLRulesHasBeenSet;

                    /**
                     * <p>限速规则列表。</p>
                     */
                    SpeedLimitRules m_speedLimitRules;
                    bool m_speedLimitRulesHasBeenSet;

                    /**
                     * <p>包特征过滤规则列表。</p>
                     */
                    PacketFilterRules m_packetFilterRules;
                    bool m_packetFilterRulesHasBeenSet;

                    /**
                     * <p>区域封禁配置。</p>
                     */
                    GeoBlockingConfig m_geoBlocking;
                    bool m_geoBlockingHasBeenSet;

                    /**
                     * <p>协议封禁配置。</p>
                     */
                    ProtocolBlockingConfig m_protocolBlocking;
                    bool m_protocolBlockingHasBeenSet;

                    /**
                     * <p>连接类攻击防护配置。</p>
                     */
                    ConnectionProtectionConfig m_connectionProtection;
                    bool m_connectionProtectionHasBeenSet;

                    /**
                     * <p>流量签名配置。</p>
                     */
                    TrafficSignatureConfig m_trafficSignature;
                    bool m_trafficSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONPOLICY_H_
