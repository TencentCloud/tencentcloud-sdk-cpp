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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 的内容。
                */
                class Certificates : public AbstractModel
                {
                public:
                    Certificates();
                    ~Certificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 证书来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置证书来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _from 证书来源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取证书套餐类型：
null = 用户上传证书（没有套餐类型），
1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 证书套餐类型：
null = 用户上传证书（没有套餐类型），
1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置证书套餐类型：
null = 用户上传证书（没有套餐类型），
1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType 证书套餐类型：
null = 用户上传证书（没有套餐类型），
1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductZhName 颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productZhName 颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取主域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 主域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置主域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 主域名。
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
                     * 获取备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取状态。0：审核中，1：已通过，2：审核失败，3：已过期，4：验证方式为 DNS_AUTO 类型的证书， 已添加DNS记录，5：企业证书，待提交，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函，9：证书吊销中，10：已吊销，11：重颁发中，12：待上传吊销确认函，13：免费证书待提交资料状态，14：已退款，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态。0：审核中，1：已通过，2：审核失败，3：已过期，4：验证方式为 DNS_AUTO 类型的证书， 已添加DNS记录，5：企业证书，待提交，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函，9：证书吊销中，10：已吊销，11：重颁发中，12：待上传吊销确认函，13：免费证书待提交资料状态，14：已退款，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态。0：审核中，1：已通过，2：审核失败，3：已过期，4：验证方式为 DNS_AUTO 类型的证书， 已添加DNS记录，5：企业证书，待提交，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函，9：证书吊销中，10：已吊销，11：重颁发中，12：待上传吊销确认函，13：免费证书待提交资料状态，14：已退款，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态。0：审核中，1：已通过，2：审核失败，3：已过期，4：验证方式为 DNS_AUTO 类型的证书， 已添加DNS记录，5：企业证书，待提交，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函，9：证书吊销中，10：已吊销，11：重颁发中，12：待上传吊销确认函，13：免费证书待提交资料状态，14：已退款，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateExtra 证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 设置证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificateExtra 证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificateExtra(const CertificateExtra& _certificateExtra);

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMsg 状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMsg 状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyType 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyType 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertBeginTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certBeginTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertEndTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certEndTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取证书有效期，单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidityPeriod 证书有效期，单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置证书有效期，单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validityPeriod 证书有效期，单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateId 证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificateId 证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书包含的多个域名（包含主域名）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectAltName 证书包含的多个域名（包含主域名）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置证书包含的多个域名（包含主域名）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectAltName 证书包含的多个域名（包含主域名）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageTypeName 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageTypeName() const;

                    /**
                     * 设置证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageTypeName 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageTypeName(const std::string& _packageTypeName);

                    /**
                     * 判断参数 PackageTypeName 是否已赋值
                     * @return PackageTypeName 是否已赋值
                     * 
                     */
                    bool PackageTypeNameHasBeenSet() const;

                    /**
                     * 获取状态名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusName 状态名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置状态名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusName 状态名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip 是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVip 是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDv 是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDv 是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWildcard 是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWildcard 是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVulnerability 是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVulnerability 是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewAble 是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 设置是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewAble 是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewAble(const bool& _renewAble);

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectInfo 项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProjectInfo GetProjectInfo() const;

                    /**
                     * 设置项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectInfo 项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectInfo(const ProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取关联的云资源，暂不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoundResource 关联的云资源，暂不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBoundResource() const;

                    /**
                     * 设置关联的云资源，暂不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boundResource 关联的云资源，暂不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoundResource(const std::vector<std::string>& _boundResource);

                    /**
                     * 判断参数 BoundResource 是否已赋值
                     * @return BoundResource 是否已赋值
                     * 
                     */
                    bool BoundResourceHasBeenSet() const;

                    /**
                     * 获取是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deployable 是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 设置是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployable 是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployable(const bool& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否已忽略到期通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIgnore 是否已忽略到期通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsIgnore() const;

                    /**
                     * 设置是否已忽略到期通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIgnore 是否已忽略到期通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIgnore(const bool& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取是否国密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSM 是否国密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSM() const;

                    /**
                     * 设置是否国密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSM 是否国密证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSM(const bool& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取证书算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptAlgorithm 证书算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置证书算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptAlgorithm 证书算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取上传CA证书的加密算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CAEncryptAlgorithms 上传CA证书的加密算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCAEncryptAlgorithms() const;

                    /**
                     * 设置上传CA证书的加密算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cAEncryptAlgorithms 上传CA证书的加密算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCAEncryptAlgorithms(const std::vector<std::string>& _cAEncryptAlgorithms);

                    /**
                     * 判断参数 CAEncryptAlgorithms 是否已赋值
                     * @return CAEncryptAlgorithms 是否已赋值
                     * 
                     */
                    bool CAEncryptAlgorithmsHasBeenSet() const;

                    /**
                     * 获取上传CA证书的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CAEndTimes 上传CA证书的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCAEndTimes() const;

                    /**
                     * 设置上传CA证书的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cAEndTimes 上传CA证书的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCAEndTimes(const std::vector<std::string>& _cAEndTimes);

                    /**
                     * 判断参数 CAEndTimes 是否已赋值
                     * @return CAEndTimes 是否已赋值
                     * 
                     */
                    bool CAEndTimesHasBeenSet() const;

                    /**
                     * 获取上传CA证书的通用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CACommonNames 上传CA证书的通用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCACommonNames() const;

                    /**
                     * 设置上传CA证书的通用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cACommonNames 上传CA证书的通用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCACommonNames(const std::vector<std::string>& _cACommonNames);

                    /**
                     * 判断参数 CACommonNames 是否已赋值
                     * @return CACommonNames 是否已赋值
                     * 
                     */
                    bool CACommonNamesHasBeenSet() const;

                    /**
                     * 获取证书预审核信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreAuditInfo 证书预审核信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PreAuditInfo GetPreAuditInfo() const;

                    /**
                     * 设置证书预审核信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preAuditInfo 证书预审核信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreAuditInfo(const PreAuditInfo& _preAuditInfo);

                    /**
                     * 判断参数 PreAuditInfo 是否已赋值
                     * @return PreAuditInfo 是否已赋值
                     * 
                     */
                    bool PreAuditInfoHasBeenSet() const;

                    /**
                     * 获取是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostingStatus 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHostingStatus() const;

                    /**
                     * 设置托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostingStatus 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostingStatus(const int64_t& _hostingStatus);

                    /**
                     * 判断参数 HostingStatus 是否已赋值
                     * @return HostingStatus 是否已赋值
                     * 
                     */
                    bool HostingStatusHasBeenSet() const;

                    /**
                     * 获取托管完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostingCompleteTime 托管完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostingCompleteTime() const;

                    /**
                     * 设置托管完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostingCompleteTime 托管完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostingCompleteTime(const std::string& _hostingCompleteTime);

                    /**
                     * 判断参数 HostingCompleteTime 是否已赋值
                     * @return HostingCompleteTime 是否已赋值
                     * 
                     */
                    bool HostingCompleteTimeHasBeenSet() const;

                    /**
                     * 获取托管新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostingRenewCertId 托管新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostingRenewCertId() const;

                    /**
                     * 设置托管新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostingRenewCertId 托管新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostingRenewCertId(const std::string& _hostingRenewCertId);

                    /**
                     * 判断参数 HostingRenewCertId 是否已赋值
                     * @return HostingRenewCertId 是否已赋值
                     * 
                     */
                    bool HostingRenewCertIdHasBeenSet() const;

                private:

                    /**
                     * 用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书来源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 证书套餐类型：
null = 用户上传证书（没有套餐类型），
1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * 主域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 状态。0：审核中，1：已通过，2：审核失败，3：已过期，4：验证方式为 DNS_AUTO 类型的证书， 已添加DNS记录，5：企业证书，待提交，6：订单取消中，7：已取消，8：已提交资料， 待上传确认函，9：证书吊销中，10：已吊销，11：重颁发中，12：待上传吊销确认函，13：免费证书待提交资料状态，14：已退款，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * 状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * 证书有效期，单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书包含的多个域名（包含主域名）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageTypeName;
                    bool m_packageTypeNameHasBeenSet;

                    /**
                     * 状态名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * 是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * 是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * 是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * 项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * 关联的云资源，暂不可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_boundResource;
                    bool m_boundResourceHasBeenSet;

                    /**
                     * 是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否已忽略到期通知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * 是否国密证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * 证书算法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 上传CA证书的加密算法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cAEncryptAlgorithms;
                    bool m_cAEncryptAlgorithmsHasBeenSet;

                    /**
                     * 上传CA证书的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cAEndTimes;
                    bool m_cAEndTimesHasBeenSet;

                    /**
                     * 上传CA证书的通用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cACommonNames;
                    bool m_cACommonNamesHasBeenSet;

                    /**
                     * 证书预审核信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PreAuditInfo m_preAuditInfo;
                    bool m_preAuditInfoHasBeenSet;

                    /**
                     * 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hostingStatus;
                    bool m_hostingStatusHasBeenSet;

                    /**
                     * 托管完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostingCompleteTime;
                    bool m_hostingCompleteTimeHasBeenSet;

                    /**
                     * 托管新证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostingRenewCertId;
                    bool m_hostingRenewCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
