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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/SwitchConfig.h>
#include <tencentcloud/makers/v20261113/model/ForceRedirectConfig.h>
#include <tencentcloud/makers/v20261113/model/HstsConfig.h>
#include <tencentcloud/makers/v20261113/model/OwnershipVerification.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 站点下的自定义域名
                */
                class ZoneDomain : public AbstractModel
                {
                public:
                    ZoneDomain();
                    ~ZoneDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom 或 Preset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>Custom 或 Preset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Custom 或 Preset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>Custom 或 Preset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>绑定的环境 slug，默认 Production</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env <p>绑定的环境 slug，默认 Production</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>绑定的环境 slug，默认 Production</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env <p>绑定的环境 slug，默认 Production</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>加速区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area <p>加速区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>加速区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area <p>加速区域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>CNAME</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname <p>CNAME</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname <p>CNAME</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>主域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainDomain <p>主域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 设置<p>主域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainDomain <p>主域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainDomain(const std::string& _mainDomain);

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     * 
                     */
                    bool MainDomainHasBeenSet() const;

                    /**
                     * 获取<p>IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 <p>IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SwitchConfig GetIpv6() const;

                    /**
                     * 设置<p>IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6 <p>IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6(const SwitchConfig& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取<p>HTTP/2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Http2 <p>HTTP/2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SwitchConfig GetHttp2() const;

                    /**
                     * 设置<p>HTTP/2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _http2 <p>HTTP/2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttp2(const SwitchConfig& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取<p>OCSP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcspStapling <p>OCSP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SwitchConfig GetOcspStapling() const;

                    /**
                     * 设置<p>OCSP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocspStapling <p>OCSP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcspStapling(const SwitchConfig& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     * 
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取<p>强制 HTTPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect <p>强制 HTTPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirectConfig GetForceRedirect() const;

                    /**
                     * 设置<p>强制 HTTPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirect <p>强制 HTTPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceRedirect(const ForceRedirectConfig& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取<p>HSTS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hsts <p>HSTS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HstsConfig GetHsts() const;

                    /**
                     * 设置<p>HSTS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hsts <p>HSTS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHsts(const HstsConfig& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     * 
                     */
                    bool HstsHasBeenSet() const;

                    /**
                     * 获取<p>归属校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnershipVerification <p>归属校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>归属校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownershipVerification <p>归属校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * <p>Custom 或 Preset</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>绑定的环境 slug，默认 Production</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>站点 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>加速区域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>CNAME</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>主域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                    /**
                     * <p>IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchConfig m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * <p>HTTP/2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchConfig m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * <p>OCSP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchConfig m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * <p>强制 HTTPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirectConfig m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * <p>HSTS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HstsConfig m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * <p>归属校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ZONEDOMAIN_H_
