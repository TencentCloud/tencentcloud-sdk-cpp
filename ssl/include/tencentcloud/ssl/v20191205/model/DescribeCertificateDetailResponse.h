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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/DvAuthDetail.h>
#include <tencentcloud/ssl/v20191205/model/SubmittedData.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateDetail返回参数结构体
                */
                class DescribeCertificateDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertificateDetailResponse();
                    ~DescribeCertificateDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 用户 UIN。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书来源：trustasia = 亚洲诚信，upload = 用户上传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 证书来源：trustasia = 亚洲诚信，upload = 用户上传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFrom() const;

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证书套餐类型：1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书，25 = Wotrus 域名型证书，26 = Wotrus 域名型多域名证书，27 = Wotrus 域名型通配符证书，28 = Wotrus 企业型证书，29 = Wotrus 企业型多域名证书，30 = Wotrus 企业型通配符证书，31 = Wotrus 增强型证书，32 = Wotrus 增强型多域名证书，33 = DNSPod 国密域名型证书，34 = DNSPod 国密域名型多域名证书，35 = DNSPod 国密域名型通配符证书，37 = DNSPod 国密企业型证书，38 = DNSPod 国密企业型多域名证书，39 = DNSPod 国密企业型通配符证书，40 = DNSPod 国密增强型证书，41 = DNSPod 国密增强型多域名证书，42 = TrustAsia 域名型通配符多域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 证书套餐类型：1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书，25 = Wotrus 域名型证书，26 = Wotrus 域名型多域名证书，27 = Wotrus 域名型通配符证书，28 = Wotrus 企业型证书，29 = Wotrus 企业型多域名证书，30 = Wotrus 企业型通配符证书，31 = Wotrus 增强型证书，32 = Wotrus 增强型多域名证书，33 = DNSPod 国密域名型证书，34 = DNSPod 国密域名型多域名证书，35 = DNSPod 国密域名型通配符证书，37 = DNSPod 国密企业型证书，38 = DNSPod 国密企业型多域名证书，39 = DNSPod 国密企业型通配符证书，40 = DNSPod 国密增强型证书，41 = DNSPod 国密增强型多域名证书，42 = TrustAsia 域名型通配符多域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageType() const;

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductZhName 颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 备注名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlias() const;

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMsg 状态信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyType 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，EMAIL = 邮件验证。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取漏洞扫描状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityStatus 漏洞扫描状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertBeginTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书失效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertEndTime 证书失效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取证书有效期：单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidityPeriod 证书有效期：单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取申请时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 申请时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateExtra 证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取证书私钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificatePrivateKey 证书私钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取证书公钥（即证书内容）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificatePublicKey 证书公钥（即证书内容）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取DV 认证信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthDetail DV 认证信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DvAuthDetail GetDvAuthDetail() const;

                    /**
                     * 判断参数 DvAuthDetail 是否已赋值
                     * @return DvAuthDetail 是否已赋值
                     */
                    bool DvAuthDetailHasBeenSet() const;

                    /**
                     * 获取漏洞扫描评估报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityReport 漏洞扫描评估报告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVulnerabilityReport() const;

                    /**
                     * 判断参数 VulnerabilityReport 是否已赋值
                     * @return VulnerabilityReport 是否已赋值
                     */
                    bool VulnerabilityReportHasBeenSet() const;

                    /**
                     * 获取证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateId 证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeName 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTypeName() const;

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusName 状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusName() const;

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectAltName 证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip 是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsVip() const;

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWildcard 是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDv 是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsDv() const;

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVulnerability 是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmittedData 提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubmittedData GetSubmittedData() const;

                    /**
                     * 判断参数 SubmittedData 是否已赋值
                     * @return SubmittedData 是否已赋值
                     */
                    bool SubmittedDataHasBeenSet() const;

                    /**
                     * 获取是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewAble 是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetRenewAble() const;

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deployable 是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeployable() const;

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取关联标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 关联标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

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
                     * 证书来源：trustasia = 亚洲诚信，upload = 用户上传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 证书类型：CA = 客户端证书，SVR = 服务器证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证书套餐类型：1 = GeoTrust DV SSL CA - G3， 2 = TrustAsia TLS RSA CA， 3 = SecureSite 增强型企业版（EV Pro）， 4 = SecureSite 增强型（EV）， 5 = SecureSite 企业型专业版（OV Pro）， 6 = SecureSite 企业型（OV）， 7 = SecureSite 企业型（OV）通配符， 8 = Geotrust 增强型（EV）， 9 = Geotrust 企业型（OV）， 10 = Geotrust 企业型（OV）通配符， 11 = TrustAsia 域名型多域名 SSL 证书， 12 = TrustAsia 域名型（DV）通配符， 13 = TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14 = TrustAsia 企业型（OV）SSL 证书（D3）， 15 = TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16 = TrustAsia 增强型 （EV）SSL 证书（D3）， 17 = TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18 = GlobalSign 企业型（OV）SSL 证书， 19 = GlobalSign 企业型通配符 （OV）SSL 证书， 20 = GlobalSign 增强型 （EV）SSL 证书， 21 = TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22 = GlobalSign 企业型多域名（OV）SSL 证书， 23 = GlobalSign 企业型通配符多域名（OV）SSL 证书， 24 = GlobalSign 增强型多域名（EV）SSL 证书，25 = Wotrus 域名型证书，26 = Wotrus 域名型多域名证书，27 = Wotrus 域名型通配符证书，28 = Wotrus 企业型证书，29 = Wotrus 企业型多域名证书，30 = Wotrus 企业型通配符证书，31 = Wotrus 增强型证书，32 = Wotrus 增强型多域名证书，33 = DNSPod 国密域名型证书，34 = DNSPod 国密域名型多域名证书，35 = DNSPod 国密域名型通配符证书，37 = DNSPod 国密企业型证书，38 = DNSPod 国密企业型多域名证书，39 = DNSPod 国密企业型通配符证书，40 = DNSPod 国密增强型证书，41 = DNSPod 国密增强型多域名证书，42 = TrustAsia 域名型通配符多域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 颁发者。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * 域名。
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
                     * 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 已添加DNS记录，5 = 企业证书，待提交，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * 漏洞扫描状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书失效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * 证书有效期：单位（月）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 申请时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 证书扩展信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * 证书私钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 证书公钥（即证书内容）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * DV 认证信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DvAuthDetail m_dvAuthDetail;
                    bool m_dvAuthDetailHasBeenSet;

                    /**
                     * 漏洞扫描评估报告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulnerabilityReport;
                    bool m_vulnerabilityReportHasBeenSet;

                    /**
                     * 证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 状态描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 证书包含的多个域名（包含主域名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 是否为 VIP 客户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 是否为泛域名证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * 是否为 DV 版证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * 是否启用了漏洞扫描功能。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * 提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubmittedData m_submittedData;
                    bool m_submittedDataHasBeenSet;

                    /**
                     * 是否可重颁发证书。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * 是否可部署。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * 关联标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
