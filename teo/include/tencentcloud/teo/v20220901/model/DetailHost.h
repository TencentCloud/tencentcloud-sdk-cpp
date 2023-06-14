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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AccelerateType.h>
#include <tencentcloud/teo/v20220901/model/Https.h>
#include <tencentcloud/teo/v20220901/model/CacheConfig.h>
#include <tencentcloud/teo/v20220901/model/Origin.h>
#include <tencentcloud/teo/v20220901/model/SecurityType.h>
#include <tencentcloud/teo/v20220901/model/CacheKey.h>
#include <tencentcloud/teo/v20220901/model/Compression.h>
#include <tencentcloud/teo/v20220901/model/Waf.h>
#include <tencentcloud/teo/v20220901/model/CC.h>
#include <tencentcloud/teo/v20220901/model/DDoS.h>
#include <tencentcloud/teo/v20220901/model/SmartRouting.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/ClientIpCountry.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 域名配置信息
                */
                class DetailHost : public AbstractModel
                {
                public:
                    DetailHost();
                    ~DetailHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取加速服务状态，取值为：
<li> process：部署中；</li>
<li> online：已启动；</li>
<li> offline：已关闭。</li>
                     * @return Status 加速服务状态，取值为：
<li> process：部署中；</li>
<li> online：已启动；</li>
<li> offline：已关闭。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置加速服务状态，取值为：
<li> process：部署中；</li>
<li> online：已启动；</li>
<li> offline：已关闭。</li>
                     * @param _status 加速服务状态，取值为：
<li> process：部署中；</li>
<li> online：已启动；</li>
<li> offline：已关闭。</li>
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
                     * 获取域名。
                     * @return Host 域名。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置域名。
                     * @param _host 域名。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param _zoneName 站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取分配的Cname域名
                     * @return Cname 分配的Cname域名
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置分配的Cname域名
                     * @param _cname 分配的Cname域名
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
                     * 获取资源ID。
                     * @return Id 资源ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID。
                     * @param _id 资源ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取锁状态。
                     * @return Lock 锁状态。
                     * 
                     */
                    int64_t GetLock() const;

                    /**
                     * 设置锁状态。
                     * @param _lock 锁状态。
                     * 
                     */
                    void SetLock(const int64_t& _lock);

                    /**
                     * 判断参数 Lock 是否已赋值
                     * @return Lock 是否已赋值
                     * 
                     */
                    bool LockHasBeenSet() const;

                    /**
                     * 获取域名状态类型。
                     * @return Mode 域名状态类型。
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置域名状态类型。
                     * @param _mode 域名状态类型。
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取域名加速地域，取值有：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * @return Area 域名加速地域，取值有：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速地域，取值有：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * @param _area 域名加速地域，取值有：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
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
                     * 获取加速类型配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccelerateType 加速类型配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccelerateType GetAccelerateType() const;

                    /**
                     * 设置加速类型配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accelerateType 加速类型配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccelerateType(const AccelerateType& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     * 
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取Https配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https Https配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取缓存配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheConfig 缓存配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置缓存配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheConfig 缓存配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                    /**
                     * 获取源站配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 源站配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _origin 源站配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取安全类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityType 安全类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SecurityType GetSecurityType() const;

                    /**
                     * 设置安全类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityType 安全类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityType(const SecurityType& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取缓存键配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 缓存键配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置缓存键配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 缓存键配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取智能压缩配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 智能压缩配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Waf防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Waf Waf防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Waf GetWaf() const;

                    /**
                     * 设置Waf防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waf Waf防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaf(const Waf& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取CC防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CC CC防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CC GetCC() const;

                    /**
                     * 设置CC防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cC CC防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCC(const CC& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDoS防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DDoS DDoS防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DDoS GetDDoS() const;

                    /**
                     * 设置DDoS防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dDoS DDoS防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDDoS(const DDoS& _dDoS);

                    /**
                     * 判断参数 DDoS 是否已赋值
                     * @return DDoS 是否已赋值
                     * 
                     */
                    bool DDoSHasBeenSet() const;

                    /**
                     * 获取智能路由配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRouting 智能路由配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置智能路由配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartRouting 智能路由配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取Ipv6访问配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 Ipv6访问配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6访问配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6 Ipv6访问配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIpCountry 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIpCountry 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIpCountry(const ClientIpCountry& _clientIpCountry);

                    /**
                     * 判断参数 ClientIpCountry 是否已赋值
                     * @return ClientIpCountry 是否已赋值
                     * 
                     */
                    bool ClientIpCountryHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速服务状态，取值为：
<li> process：部署中；</li>
<li> online：已启动；</li>
<li> offline：已关闭。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 分配的Cname域名
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 资源ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 锁状态。
                     */
                    int64_t m_lock;
                    bool m_lockHasBeenSet;

                    /**
                     * 域名状态类型。
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 域名加速地域，取值有：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 加速类型配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccelerateType m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Https配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 缓存配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * 源站配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 安全类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SecurityType m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 缓存键配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 智能压缩配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Waf防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Waf m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * CC防护配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CC m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDoS防护配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoS m_dDoS;
                    bool m_dDoSHasBeenSet;

                    /**
                     * 智能路由配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * Ipv6访问配置项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETAILHOST_H_
