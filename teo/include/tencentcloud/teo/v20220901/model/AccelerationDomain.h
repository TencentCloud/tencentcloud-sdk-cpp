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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/OriginDetail.h>
#include <tencentcloud/teo/v20220901/model/AccelerationDomainCertificate.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 加速域名
                */
                class AccelerationDomain : public AbstractModel
                {
                public:
                    AccelerationDomain();
                    ~AccelerationDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>加速域名名称。</p>
                     * @return DomainName <p>加速域名名称。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>加速域名名称。</p>
                     * @param _domainName <p>加速域名名称。</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>加速域名状态</p><p>枚举值：</p><ul><li>online： 已生效</li><li>process： 部署中</li><li>offline： 已停用</li><li>init： 未生效，待激活站点</li></ul>
                     * @return DomainStatus <p>加速域名状态</p><p>枚举值：</p><ul><li>online： 已生效</li><li>process： 部署中</li><li>offline： 已停用</li><li>init： 未生效，待激活站点</li></ul>
                     * 
                     */
                    std::string GetDomainStatus() const;

                    /**
                     * 设置<p>加速域名状态</p><p>枚举值：</p><ul><li>online： 已生效</li><li>process： 部署中</li><li>offline： 已停用</li><li>init： 未生效，待激活站点</li></ul>
                     * @param _domainStatus <p>加速域名状态</p><p>枚举值：</p><ul><li>online： 已生效</li><li>process： 部署中</li><li>offline： 已停用</li><li>init： 未生效，待激活站点</li></ul>
                     * 
                     */
                    void SetDomainStatus(const std::string& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取<p>CNAME 地址。</p>
                     * @return Cname <p>CNAME 地址。</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME 地址。</p>
                     * @param _cname <p>CNAME 地址。</p>
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
                     * 获取<p>IPv6 状态，取值有：</p><li>follow：遵循站点IPv6配置；</li><li>on：开启状态；</li><li>off：关闭状态。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Status <p>IPv6 状态，取值有：</p><li>follow：遵循站点IPv6配置；</li><li>on：开启状态；</li><li>off：关闭状态。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置<p>IPv6 状态，取值有：</p><li>follow：遵循站点IPv6配置；</li><li>on：开启状态；</li><li>off：关闭状态。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv6Status <p>IPv6 状态，取值有：</p><li>follow：遵循站点IPv6配置；</li><li>on：开启状态；</li><li>off：关闭状态。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                    /**
                     * 获取<p>加速域名归属权验证状态，取值有： </p><li>pending：待验证；</li><li>finished：已完成验证。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentificationStatus <p>加速域名归属权验证状态，取值有： </p><li>pending：待验证；</li><li>finished：已完成验证。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentificationStatus() const;

                    /**
                     * 设置<p>加速域名归属权验证状态，取值有： </p><li>pending：待验证；</li><li>finished：已完成验证。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identificationStatus <p>加速域名归属权验证状态，取值有： </p><li>pending：待验证；</li><li>finished：已完成验证。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentificationStatus(const std::string& _identificationStatus);

                    /**
                     * 判断参数 IdentificationStatus 是否已赋值
                     * @return IdentificationStatus 是否已赋值
                     * 
                     */
                    bool IdentificationStatusHasBeenSet() const;

                    /**
                     * 获取<p>加速域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnershipVerification <p>加速域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>加速域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownershipVerification <p>加速域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p>
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

                    /**
                     * 获取<p>源站信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginDetail <p>源站信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginDetail GetOriginDetail() const;

                    /**
                     * 设置<p>源站信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originDetail <p>源站信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginDetail(const OriginDetail& _originDetail);

                    /**
                     * 判断参数 OriginDetail 是否已赋值
                     * @return OriginDetail 是否已赋值
                     * 
                     */
                    bool OriginDetailHasBeenSet() const;

                    /**
                     * 获取<p>回源协议，取值有：</p><li>FOLLOW：协议跟随；</li><li>HTTP：HTTP协议回源；</li><li>HTTPS：HTTPS协议回源。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginProtocol <p>回源协议，取值有：</p><li>FOLLOW：协议跟随；</li><li>HTTP：HTTP协议回源；</li><li>HTTPS：HTTPS协议回源。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置<p>回源协议，取值有：</p><li>FOLLOW：协议跟随；</li><li>HTTP：HTTP协议回源；</li><li>HTTPS：HTTPS协议回源。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originProtocol <p>回源协议，取值有：</p><li>FOLLOW：协议跟随；</li><li>HTTP：HTTP协议回源；</li><li>HTTPS：HTTPS协议回源。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取<p>HTTP 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpOriginPort <p>HTTP 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置<p>HTTP 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpOriginPort <p>HTTP 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpOriginPort(const uint64_t& _httpOriginPort);

                    /**
                     * 判断参数 HttpOriginPort 是否已赋值
                     * @return HttpOriginPort 是否已赋值
                     * 
                     */
                    bool HttpOriginPortHasBeenSet() const;

                    /**
                     * 获取<p>HTTPS 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpsOriginPort <p>HTTPS 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置<p>HTTPS 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpsOriginPort <p>HTTPS 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpsOriginPort(const uint64_t& _httpsOriginPort);

                    /**
                     * 判断参数 HttpsOriginPort 是否已赋值
                     * @return HttpsOriginPort 是否已赋值
                     * 
                     */
                    bool HttpsOriginPortHasBeenSet() const;

                    /**
                     * 获取<p>加速域名证书信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Certificate <p>加速域名证书信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccelerationDomainCertificate GetCertificate() const;

                    /**
                     * 设置<p>加速域名证书信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificate <p>加速域名证书信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificate(const AccelerationDomainCertificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreatedOn <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdOn <p>创建时间。</p>
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>修改时间。</p>
                     * @return ModifiedOn <p>修改时间。</p>
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _modifiedOn <p>修改时间。</p>
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>加速域名名称。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>加速域名状态</p><p>枚举值：</p><ul><li>online： 已生效</li><li>process： 部署中</li><li>offline： 已停用</li><li>init： 未生效，待激活站点</li></ul>
                     */
                    std::string m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * <p>CNAME 地址。</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>IPv6 状态，取值有：</p><li>follow：遵循站点IPv6配置；</li><li>on：开启状态；</li><li>off：关闭状态。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * <p>加速域名归属权验证状态，取值有： </p><li>pending：待验证；</li><li>finished：已完成验证。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identificationStatus;
                    bool m_identificationStatusHasBeenSet;

                    /**
                     * <p>加速域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * <p>源站信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginDetail m_originDetail;
                    bool m_originDetailHasBeenSet;

                    /**
                     * <p>回源协议，取值有：</p><li>FOLLOW：协议跟随；</li><li>HTTP：HTTP协议回源；</li><li>HTTPS：HTTPS协议回源。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * <p>HTTP 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * <p>HTTPS 回源端口。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * <p>加速域名证书信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccelerationDomainCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
