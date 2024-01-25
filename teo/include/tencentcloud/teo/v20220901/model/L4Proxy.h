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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDosProtectionConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 四层代理实例。
                */
                class L4Proxy : public AbstractModel
                {
                public:
                    L4Proxy();
                    ~L4Proxy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取四层代理实例 ID。
                     * @return ProxyId 四层代理实例 ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置四层代理实例 ID。
                     * @param _proxyId 四层代理实例 ID。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取四层代理实例名称。
                     * @return ProxyName 四层代理实例名称。
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置四层代理实例名称。
                     * @param _proxyName 四层代理实例名称。
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取四层代理实例的加速区域。 
<li>mainland：中国大陆可用区；</li>
<li>overseas： 全球可用区（不含中国大陆）；</li>
 <li>global：全球可用区。</li>	
                     * @return Area 四层代理实例的加速区域。 
<li>mainland：中国大陆可用区；</li>
<li>overseas： 全球可用区（不含中国大陆）；</li>
 <li>global：全球可用区。</li>	
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置四层代理实例的加速区域。 
<li>mainland：中国大陆可用区；</li>
<li>overseas： 全球可用区（不含中国大陆）；</li>
 <li>global：全球可用区。</li>	
                     * @param _area 四层代理实例的加速区域。 
<li>mainland：中国大陆可用区；</li>
<li>overseas： 全球可用区（不含中国大陆）；</li>
 <li>global：全球可用区。</li>	
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取接入 CNAME。
                     * @return Cname 接入 CNAME。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置接入 CNAME。
                     * @param _cname 接入 CNAME。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取开启固定 IP 后，该值会返回对应的接入 IP；未开启时，该值为空。
                     * @return Ips 开启固定 IP 后，该值会返回对应的接入 IP；未开启时，该值为空。
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置开启固定 IP 后，该值会返回对应的接入 IP；未开启时，该值为空。
                     * @param _ips 开启固定 IP 后，该值会返回对应的接入 IP；未开启时，该值为空。
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取四层代理实例状态。
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>	
<li>stopping：停用中；</li>
<li>banned：已封禁；</li>
<li>fail：部署失败/停用失败。</li>	
                     * @return Status 四层代理实例状态。
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>	
<li>stopping：停用中；</li>
<li>banned：已封禁；</li>
<li>fail：部署失败/停用失败。</li>	
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置四层代理实例状态。
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>	
<li>stopping：停用中；</li>
<li>banned：已封禁；</li>
<li>fail：部署失败/停用失败。</li>	
                     * @param _status 四层代理实例状态。
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>	
<li>stopping：停用中；</li>
<li>banned：已封禁；</li>
<li>fail：部署失败/停用失败。</li>	
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否开启 IPv6 访问。 
<li>on：开启；</li> 
<li>off：关闭。</li>
                     * @return Ipv6 是否开启 IPv6 访问。 
<li>on：开启；</li> 
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetIpv6() const;

                    /**
                     * 设置是否开启 IPv6 访问。 
<li>on：开启；</li> 
<li>off：关闭。</li>
                     * @param _ipv6 是否开启 IPv6 访问。 
<li>on：开启；</li> 
<li>off：关闭。</li>
                     * 
                     */
                    void SetIpv6(const std::string& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否开启固定 IP。
 <li>on：开启；</li> <li>off：关闭。</li>
                     * @return StaticIp 是否开启固定 IP。
 <li>on：开启；</li> <li>off：关闭。</li>
                     * 
                     */
                    std::string GetStaticIp() const;

                    /**
                     * 设置是否开启固定 IP。
 <li>on：开启；</li> <li>off：关闭。</li>
                     * @param _staticIp 是否开启固定 IP。
 <li>on：开启；</li> <li>off：关闭。</li>
                     * 
                     */
                    void SetStaticIp(const std::string& _staticIp);

                    /**
                     * 判断参数 StaticIp 是否已赋值
                     * @return StaticIp 是否已赋值
                     * 
                     */
                    bool StaticIpHasBeenSet() const;

                    /**
                     * 获取是否开启中国大陆网络优化。
 <li>on：开启</li> <li>off：关闭</li>
                     * @return AccelerateMainland 是否开启中国大陆网络优化。
 <li>on：开启</li> <li>off：关闭</li>
                     * 
                     */
                    std::string GetAccelerateMainland() const;

                    /**
                     * 设置是否开启中国大陆网络优化。
 <li>on：开启</li> <li>off：关闭</li>
                     * @param _accelerateMainland 是否开启中国大陆网络优化。
 <li>on：开启</li> <li>off：关闭</li>
                     * 
                     */
                    void SetAccelerateMainland(const std::string& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                    /**
                     * 获取安全防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDosProtectionConfig 安全防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DDosProtectionConfig GetDDosProtectionConfig() const;

                    /**
                     * 设置安全防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dDosProtectionConfig 安全防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDDosProtectionConfig(const DDosProtectionConfig& _dDosProtectionConfig);

                    /**
                     * 判断参数 DDosProtectionConfig 是否已赋值
                     * @return DDosProtectionConfig 是否已赋值
                     * 
                     */
                    bool DDosProtectionConfigHasBeenSet() const;

                    /**
                     * 获取四层代理实例下的转发规则数量。
                     * @return L4ProxyRuleCount 四层代理实例下的转发规则数量。
                     * 
                     */
                    int64_t GetL4ProxyRuleCount() const;

                    /**
                     * 设置四层代理实例下的转发规则数量。
                     * @param _l4ProxyRuleCount 四层代理实例下的转发规则数量。
                     * 
                     */
                    void SetL4ProxyRuleCount(const int64_t& _l4ProxyRuleCount);

                    /**
                     * 判断参数 L4ProxyRuleCount 是否已赋值
                     * @return L4ProxyRuleCount 是否已赋值
                     * 
                     */
                    bool L4ProxyRuleCountHasBeenSet() const;

                    /**
                     * 获取最新变更时间。
                     * @return UpdateTime 最新变更时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最新变更时间。
                     * @param _updateTime 最新变更时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 四层代理实例 ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 四层代理实例名称。
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 四层代理实例的加速区域。 
<li>mainland：中国大陆可用区；</li>
<li>overseas： 全球可用区（不含中国大陆）；</li>
 <li>global：全球可用区。</li>	
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 接入 CNAME。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 开启固定 IP 后，该值会返回对应的接入 IP；未开启时，该值为空。
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * 四层代理实例状态。
<li>online：已启用；</li>
<li>offline：已停用；</li>
<li>progress：部署中；</li>	
<li>stopping：停用中；</li>
<li>banned：已封禁；</li>
<li>fail：部署失败/停用失败。</li>	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否开启 IPv6 访问。 
<li>on：开启；</li> 
<li>off：关闭。</li>
                     */
                    std::string m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 是否开启固定 IP。
 <li>on：开启；</li> <li>off：关闭。</li>
                     */
                    std::string m_staticIp;
                    bool m_staticIpHasBeenSet;

                    /**
                     * 是否开启中国大陆网络优化。
 <li>on：开启</li> <li>off：关闭</li>
                     */
                    std::string m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * 安全防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDosProtectionConfig m_dDosProtectionConfig;
                    bool m_dDosProtectionConfigHasBeenSet;

                    /**
                     * 四层代理实例下的转发规则数量。
                     */
                    int64_t m_l4ProxyRuleCount;
                    bool m_l4ProxyRuleCountHasBeenSet;

                    /**
                     * 最新变更时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXY_H_
