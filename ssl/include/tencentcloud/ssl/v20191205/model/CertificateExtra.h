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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 数组下，key为CertificateExtra 的内容。
                */
                class CertificateExtra : public AbstractModel
                {
                public:
                    CertificateExtra();
                    ~CertificateExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证书可配置域名数量。</p>
                     * @return DomainNumber <p>证书可配置域名数量。</p>
                     * 
                     */
                    std::string GetDomainNumber() const;

                    /**
                     * 设置<p>证书可配置域名数量。</p>
                     * @param _domainNumber <p>证书可配置域名数量。</p>
                     * 
                     */
                    void SetDomainNumber(const std::string& _domainNumber);

                    /**
                     * 判断参数 DomainNumber 是否已赋值
                     * @return DomainNumber 是否已赋值
                     * 
                     */
                    bool DomainNumberHasBeenSet() const;

                    /**
                     * 获取<p>续费原证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginCertificateId <p>续费原证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginCertificateId() const;

                    /**
                     * 设置<p>续费原证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originCertificateId <p>续费原证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginCertificateId(const std::string& _originCertificateId);

                    /**
                     * 判断参数 OriginCertificateId 是否已赋值
                     * @return OriginCertificateId 是否已赋值
                     * 
                     */
                    bool OriginCertificateIdHasBeenSet() const;

                    /**
                     * 获取<p>重颁发证书原始 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplacedBy <p>重颁发证书原始 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplacedBy() const;

                    /**
                     * 设置<p>重颁发证书原始 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replacedBy <p>重颁发证书原始 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplacedBy(const std::string& _replacedBy);

                    /**
                     * 判断参数 ReplacedBy 是否已赋值
                     * @return ReplacedBy 是否已赋值
                     * 
                     */
                    bool ReplacedByHasBeenSet() const;

                    /**
                     * 获取<p>重颁发证书ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplacedFor <p>重颁发证书ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplacedFor() const;

                    /**
                     * 设置<p>重颁发证书ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replacedFor <p>重颁发证书ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplacedFor(const std::string& _replacedFor);

                    /**
                     * 判断参数 ReplacedFor 是否已赋值
                     * @return ReplacedFor 是否已赋值
                     * 
                     */
                    bool ReplacedForHasBeenSet() const;

                    /**
                     * 获取<p>续费证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewOrder <p>续费证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewOrder() const;

                    /**
                     * 设置<p>续费证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewOrder <p>续费证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewOrder(const std::string& _renewOrder);

                    /**
                     * 判断参数 RenewOrder 是否已赋值
                     * @return RenewOrder 是否已赋值
                     * 
                     */
                    bool RenewOrderHasBeenSet() const;

                    /**
                     * 获取<p>是否是国密证书</p>
                     * @return SMCert <p>是否是国密证书</p>
                     * 
                     */
                    int64_t GetSMCert() const;

                    /**
                     * 设置<p>是否是国密证书</p>
                     * @param _sMCert <p>是否是国密证书</p>
                     * 
                     */
                    void SetSMCert(const int64_t& _sMCert);

                    /**
                     * 判断参数 SMCert 是否已赋值
                     * @return SMCert 是否已赋值
                     * 
                     */
                    bool SMCertHasBeenSet() const;

                    /**
                     * 获取<p>公司类型，取值：1（个人）；2（公司）</p>
                     * @return CompanyType <p>公司类型，取值：1（个人）；2（公司）</p>
                     * 
                     */
                    int64_t GetCompanyType() const;

                    /**
                     * 设置<p>公司类型，取值：1（个人）；2（公司）</p>
                     * @param _companyType <p>公司类型，取值：1（个人）；2（公司）</p>
                     * 
                     */
                    void SetCompanyType(const int64_t& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取<p>下一张订阅服务续期证书ID</p>
                     * @return ServiceRenewCertificateId <p>下一张订阅服务续期证书ID</p>
                     * 
                     */
                    std::string GetServiceRenewCertificateId() const;

                    /**
                     * 设置<p>下一张订阅服务续期证书ID</p>
                     * @param _serviceRenewCertificateId <p>下一张订阅服务续期证书ID</p>
                     * 
                     */
                    void SetServiceRenewCertificateId(const std::string& _serviceRenewCertificateId);

                    /**
                     * 判断参数 ServiceRenewCertificateId 是否已赋值
                     * @return ServiceRenewCertificateId 是否已赋值
                     * 
                     */
                    bool ServiceRenewCertificateIdHasBeenSet() const;

                    /**
                     * 获取<p>上一张订阅服务来源证书ID</p>
                     * @return ServiceOriginCertificateId <p>上一张订阅服务来源证书ID</p>
                     * 
                     */
                    std::string GetServiceOriginCertificateId() const;

                    /**
                     * 设置<p>上一张订阅服务来源证书ID</p>
                     * @param _serviceOriginCertificateId <p>上一张订阅服务来源证书ID</p>
                     * 
                     */
                    void SetServiceOriginCertificateId(const std::string& _serviceOriginCertificateId);

                    /**
                     * 判断参数 ServiceOriginCertificateId 是否已赋值
                     * @return ServiceOriginCertificateId 是否已赋值
                     * 
                     */
                    bool ServiceOriginCertificateIdHasBeenSet() const;

                private:

                    /**
                     * <p>证书可配置域名数量。</p>
                     */
                    std::string m_domainNumber;
                    bool m_domainNumberHasBeenSet;

                    /**
                     * <p>续费原证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originCertificateId;
                    bool m_originCertificateIdHasBeenSet;

                    /**
                     * <p>重颁发证书原始 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replacedBy;
                    bool m_replacedByHasBeenSet;

                    /**
                     * <p>重颁发证书ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replacedFor;
                    bool m_replacedForHasBeenSet;

                    /**
                     * <p>续费证书 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewOrder;
                    bool m_renewOrderHasBeenSet;

                    /**
                     * <p>是否是国密证书</p>
                     */
                    int64_t m_sMCert;
                    bool m_sMCertHasBeenSet;

                    /**
                     * <p>公司类型，取值：1（个人）；2（公司）</p>
                     */
                    int64_t m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * <p>下一张订阅服务续期证书ID</p>
                     */
                    std::string m_serviceRenewCertificateId;
                    bool m_serviceRenewCertificateIdHasBeenSet;

                    /**
                     * <p>上一张订阅服务来源证书ID</p>
                     */
                    std::string m_serviceOriginCertificateId;
                    bool m_serviceOriginCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
