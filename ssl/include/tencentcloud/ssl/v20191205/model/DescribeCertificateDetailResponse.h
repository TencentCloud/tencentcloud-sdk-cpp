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
#include <tencentcloud/ssl/v20191205/model/RootCertificates.h>
#include <tencentcloud/ssl/v20191205/model/DvAuths.h>
#include <tencentcloud/ssl/v20191205/model/CertBasicInfo.h>


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
                     * 获取证书所属用户主账号 UIN。
                     * @return OwnerUin 证书所属用户主账号 UIN。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * @return From 证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取证书产品名称
                     * @return ProductZhName 证书产品名称
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取证书绑定通用名称域名。
                     * @return Domain 证书绑定通用名称域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取备注名称。
                     * @return Alias 备注名称。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * @return Status 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态信息。 取值范围：
//通用状态信息
1、PRE-REVIEWING：预审核中
2、LEGAL-REVIEWING：法务审核中
3、CA-REVIEWING：CA审核中
4、PENDING-DCV：域名验证中
5、WAIT-ISSUE：等待签发（域名验证已通过）
//证书审核失败状态信息
1、订单审核失败
2、CA审核失败，域名未通过安全审查
3、域名验证超时，订单自动关闭，请您重新进行证书申请
4、证书资料未通过证书CA机构审核，审核人员会致电您证书预留的联系方式，请您留意来电。后续可通过“修改资料”重新提交资料
待持续完善
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMsg 状态信息。 取值范围：
//通用状态信息
1、PRE-REVIEWING：预审核中
2、LEGAL-REVIEWING：法务审核中
3、CA-REVIEWING：CA审核中
4、PENDING-DCV：域名验证中
5、WAIT-ISSUE：等待签发（域名验证已通过）
//证书审核失败状态信息
1、订单审核失败
2、CA审核失败，域名未通过安全审查
3、域名验证超时，订单自动关闭，请您重新进行证书申请
4、证书资料未通过证书CA机构审核，审核人员会致电您证书预留的联系方式，请您留意来电。后续可通过“修改资料”重新提交资料
待持续完善
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMsg() const;

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
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取漏洞扫描状态。
                     * @return VulnerabilityStatus 漏洞扫描状态。
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertBeginTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书失效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertEndTime 证书失效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取证书有效期：单位（月）。
                     * @return ValidityPeriod 证书有效期：单位（月）。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取证书申请时间。
                     * @return InsertTime 证书申请时间。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取CA订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId CA订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取证书扩展信息。
                     * @return CertificateExtra 证书扩展信息。
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取私钥证书， 国密证书则为签名证书中的私钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificatePrivateKey 私钥证书， 国密证书则为签名证书中的私钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取公钥证书， 国密则为签名证书中的公钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificatePublicKey 公钥证书， 国密则为签名证书中的公钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取证书域名验证信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvAuthDetail 证书域名验证信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DvAuthDetail GetDvAuthDetail() const;

                    /**
                     * 判断参数 DvAuthDetail 是否已赋值
                     * @return DvAuthDetail 是否已赋值
                     * 
                     */
                    bool DvAuthDetailHasBeenSet() const;

                    /**
                     * 获取漏洞扫描评估报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityReport 漏洞扫描评估报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulnerabilityReport() const;

                    /**
                     * 判断参数 VulnerabilityReport 是否已赋值
                     * @return VulnerabilityReport 是否已赋值
                     * 
                     */
                    bool VulnerabilityReportHasBeenSet() const;

                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeName 证书类型名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取状态描述。
                     * @return StatusName 状态描述。
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取证书包含的多个域名（不包含主域名，主域名使用Domain字段）
                     * @return SubjectAltName 证书包含的多个域名（不包含主域名，主域名使用Domain字段）
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取是否为付费证书。
                     * @return IsVip 是否为付费证书。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取是否为泛域名证书。
                     * @return IsWildcard 是否为泛域名证书。
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取是否为 DV 版证书。
                     * @return IsDv 是否为 DV 版证书。
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取是否启用了漏洞扫描功能。
                     * @return IsVulnerability 是否启用了漏洞扫描功能。
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取付费证书提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmittedData 付费证书提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubmittedData GetSubmittedData() const;

                    /**
                     * 判断参数 SubmittedData 是否已赋值
                     * @return SubmittedData 是否已赋值
                     * 
                     */
                    bool SubmittedDataHasBeenSet() const;

                    /**
                     * 获取是否可续费。
                     * @return RenewAble 是否可续费。
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取是否可部署。
                     * @return Deployable 是否可部署。
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取关联标签列表。
                     * @return Tags 关联标签列表。
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取根证书。
                     * @return RootCert 根证书。
                     * 
                     */
                    RootCertificates GetRootCert() const;

                    /**
                     * 判断参数 RootCert 是否已赋值
                     * @return RootCert 是否已赋值
                     * 
                     */
                    bool RootCertHasBeenSet() const;

                    /**
                     * 获取国密加密证书公钥， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptCert 国密加密证书公钥， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptCert() const;

                    /**
                     * 判断参数 EncryptCert 是否已赋值
                     * @return EncryptCert 是否已赋值
                     * 
                     */
                    bool EncryptCertHasBeenSet() const;

                    /**
                     * 获取国密加密私钥证书， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptPrivateKey 国密加密私钥证书， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptPrivateKey() const;

                    /**
                     * 判断参数 EncryptPrivateKey 是否已赋值
                     * @return EncryptPrivateKey 是否已赋值
                     * 
                     */
                    bool EncryptPrivateKeyHasBeenSet() const;

                    /**
                     * 获取签名证书 SHA1指纹
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertFingerprint 签名证书 SHA1指纹
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertFingerprint() const;

                    /**
                     * 判断参数 CertFingerprint 是否已赋值
                     * @return CertFingerprint 是否已赋值
                     * 
                     */
                    bool CertFingerprintHasBeenSet() const;

                    /**
                     * 获取加密证书 SHA1指纹 （国密证书特有）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptCertFingerprint 加密证书 SHA1指纹 （国密证书特有）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptCertFingerprint() const;

                    /**
                     * 判断参数 EncryptCertFingerprint 是否已赋值
                     * @return EncryptCertFingerprint 是否已赋值
                     * 
                     */
                    bool EncryptCertFingerprintHasBeenSet() const;

                    /**
                     * 获取证书加密算法（国密证书特有）
                     * @return EncryptAlgorithm 证书加密算法（国密证书特有）
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取DV证书吊销验证值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DvRevokeAuthDetail DV证书吊销验证值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DvAuths> GetDvRevokeAuthDetail() const;

                    /**
                     * 判断参数 DvRevokeAuthDetail 是否已赋值
                     * @return DvRevokeAuthDetail 是否已赋值
                     * 
                     */
                    bool DvRevokeAuthDetailHasBeenSet() const;

                    /**
                     * 获取证书链信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertChainInfo 证书链信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CertBasicInfo> GetCertChainInfo() const;

                    /**
                     * 判断参数 CertChainInfo 是否已赋值
                     * @return CertChainInfo 是否已赋值
                     * 
                     */
                    bool CertChainInfoHasBeenSet() const;

                    /**
                     * 获取证书域名类型， 1（单域名）；2（多域名）；3（泛域名）；4（多泛域名）
                     * @return DomainType 证书域名类型， 1（单域名）；2（多域名）；3（泛域名）；4（多泛域名）
                     * 
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取证书类型，DV（域名型）；OV（企业型）；EV（增强型）
                     * @return CertType 证书类型，DV（域名型）；OV（企业型）；EV（增强型）
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                private:

                    /**
                     * 证书所属用户主账号 UIN。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 证书产品名称
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * 证书绑定通用名称域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 备注名称。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态信息。 取值范围：
//通用状态信息
1、PRE-REVIEWING：预审核中
2、LEGAL-REVIEWING：法务审核中
3、CA-REVIEWING：CA审核中
4、PENDING-DCV：域名验证中
5、WAIT-ISSUE：等待签发（域名验证已通过）
//证书审核失败状态信息
1、订单审核失败
2、CA审核失败，域名未通过安全审查
3、域名验证超时，订单自动关闭，请您重新进行证书申请
4、证书资料未通过证书CA机构审核，审核人员会致电您证书预留的联系方式，请您留意来电。后续可通过“修改资料”重新提交资料
待持续完善
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
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 证书申请时间。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * CA订单 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 证书扩展信息。
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * 私钥证书， 国密证书则为签名证书中的私钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 公钥证书， 国密则为签名证书中的公钥证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * 证书域名验证信息。
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
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 证书包含的多个域名（不包含主域名，主域名使用Domain字段）
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 是否为付费证书。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 是否为泛域名证书。
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * 是否为 DV 版证书。
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * 是否启用了漏洞扫描功能。
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * 付费证书提交的资料信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubmittedData m_submittedData;
                    bool m_submittedDataHasBeenSet;

                    /**
                     * 是否可续费。
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * 是否可部署。
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * 关联标签列表。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 根证书。
                     */
                    RootCertificates m_rootCert;
                    bool m_rootCertHasBeenSet;

                    /**
                     * 国密加密证书公钥， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptCert;
                    bool m_encryptCertHasBeenSet;

                    /**
                     * 国密加密私钥证书， 仅国密证书有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptPrivateKey;
                    bool m_encryptPrivateKeyHasBeenSet;

                    /**
                     * 签名证书 SHA1指纹
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certFingerprint;
                    bool m_certFingerprintHasBeenSet;

                    /**
                     * 加密证书 SHA1指纹 （国密证书特有）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptCertFingerprint;
                    bool m_encryptCertFingerprintHasBeenSet;

                    /**
                     * 证书加密算法（国密证书特有）
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * DV证书吊销验证值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DvAuths> m_dvRevokeAuthDetail;
                    bool m_dvRevokeAuthDetailHasBeenSet;

                    /**
                     * 证书链信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertBasicInfo> m_certChainInfo;
                    bool m_certChainInfoHasBeenSet;

                    /**
                     * 证书域名类型， 1（单域名）；2（多域名）；3（泛域名）；4（多泛域名）
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * 证书类型，DV（域名型）；OV（企业型）；EV（增强型）
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
