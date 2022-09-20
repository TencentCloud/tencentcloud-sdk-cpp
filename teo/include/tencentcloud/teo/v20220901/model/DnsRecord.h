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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DNS 记录
                */
                class DnsRecord : public AbstractModel
                {
                public:
                    DnsRecord();
                    ~DnsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录 ID。
                     * @return DnsRecordId 记录 ID。
                     */
                    std::string GetDnsRecordId() const;

                    /**
                     * 设置记录 ID。
                     * @param DnsRecordId 记录 ID。
                     */
                    void SetDnsRecordId(const std::string& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     */
                    bool DnsRecordIdHasBeenSet() const;

                    /**
                     * 获取DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>
                     * @return DnsRecordType DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>
                     */
                    std::string GetDnsRecordType() const;

                    /**
                     * 设置DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>
                     * @param DnsRecordType DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>
                     */
                    void SetDnsRecordType(const std::string& _dnsRecordType);

                    /**
                     * 判断参数 DnsRecordType 是否已赋值
                     * @return DnsRecordType 是否已赋值
                     */
                    bool DnsRecordTypeHasBeenSet() const;

                    /**
                     * 获取记录名称。
                     * @return DnsRecordName 记录名称。
                     */
                    std::string GetDnsRecordName() const;

                    /**
                     * 设置记录名称。
                     * @param DnsRecordName 记录名称。
                     */
                    void SetDnsRecordName(const std::string& _dnsRecordName);

                    /**
                     * 判断参数 DnsRecordName 是否已赋值
                     * @return DnsRecordName 是否已赋值
                     */
                    bool DnsRecordNameHasBeenSet() const;

                    /**
                     * 获取记录值。
                     * @return Content 记录值。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置记录值。
                     * @param Content 记录值。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>
                     * @return Mode 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>
                     */
                    std::string GetMode() const;

                    /**
                     * 设置代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>
                     * @param Mode 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取缓存时间，数值越小，修改记录各地生效时间越快，单位：秒。
                     * @return TTL 缓存时间，数值越小，修改记录各地生效时间越快，单位：秒。
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置缓存时间，数值越小，修改记录各地生效时间越快，单位：秒。
                     * @param TTL 缓存时间，数值越小，修改记录各地生效时间越快，单位：秒。
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取MX记录优先级，数值越小越优先。
                     * @return Priority MX记录优先级，数值越小越优先。
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置MX记录优先级，数值越小越优先。
                     * @param Priority MX记录优先级，数值越小越优先。
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedOn 创建时间。
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedOn 创建时间。
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取修改时间。
                     * @return ModifiedOn 修改时间。
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置修改时间。
                     * @param ModifiedOn 修改时间。
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取域名锁定状态。
                     * @return Locked 域名锁定状态。
                     */
                    bool GetLocked() const;

                    /**
                     * 设置域名锁定状态。
                     * @param Locked 域名锁定状态。
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param ZoneId 站点 ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param ZoneName 站点名称。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取记录解析状态，取值有：
<li>active：生效；</li>
<li>pending：不生效。</li>
                     * @return Status 记录解析状态，取值有：
<li>active：生效；</li>
<li>pending：不生效。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置记录解析状态，取值有：
<li>active：生效；</li>
<li>pending：不生效。</li>
                     * @param Status 记录解析状态，取值有：
<li>active：生效；</li>
<li>pending：不生效。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cname CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取域名服务类型，取值有：
<li>lb：负载均衡；</li>
<li>security：安全；</li>
<li>l4：四层代理。</li>
                     * @return DomainStatus 域名服务类型，取值有：
<li>lb：负载均衡；</li>
<li>security：安全；</li>
<li>l4：四层代理。</li>
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置域名服务类型，取值有：
<li>lb：负载均衡；</li>
<li>security：安全；</li>
<li>l4：四层代理。</li>
                     * @param DomainStatus 域名服务类型，取值有：
<li>lb：负载均衡；</li>
<li>security：安全；</li>
<li>l4：四层代理。</li>
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                private:

                    /**
                     * 记录 ID。
                     */
                    std::string m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                    /**
                     * DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>
                     */
                    std::string m_dnsRecordType;
                    bool m_dnsRecordTypeHasBeenSet;

                    /**
                     * 记录名称。
                     */
                    std::string m_dnsRecordName;
                    bool m_dnsRecordNameHasBeenSet;

                    /**
                     * 记录值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 缓存时间，数值越小，修改记录各地生效时间越快，单位：秒。
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX记录优先级，数值越小越优先。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 域名锁定状态。
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 记录解析状态，取值有：
<li>active：生效；</li>
<li>pending：不生效。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 域名服务类型，取值有：
<li>lb：负载均衡；</li>
<li>security：安全；</li>
<li>l4：四层代理。</li>
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSRECORD_H_
