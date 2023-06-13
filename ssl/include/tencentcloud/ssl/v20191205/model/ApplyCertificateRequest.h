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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ApplyCertificate请求参数结构体
                */
                class ApplyCertificateRequest : public AbstractModel
                {
                public:
                    ApplyCertificateRequest();
                    ~ApplyCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证方式：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证。
                     * @return DvAuthMethod 验证方式：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证。
                     */
                    std::string GetDvAuthMethod() const;

                    /**
                     * 设置验证方式：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证。
                     * @param DvAuthMethod 验证方式：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证。
                     */
                    void SetDvAuthMethod(const std::string& _dvAuthMethod);

                    /**
                     * 判断参数 DvAuthMethod 是否已赋值
                     * @return DvAuthMethod 是否已赋值
                     */
                    bool DvAuthMethodHasBeenSet() const;

                    /**
                     * 获取域名。
                     * @return DomainName 域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名。
                     * @param DomainName 域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param ProjectId 项目 ID。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书类型，目前仅支持类型2。2 = TrustAsia TLS RSA CA。
                     * @return PackageType 证书类型，目前仅支持类型2。2 = TrustAsia TLS RSA CA。
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置证书类型，目前仅支持类型2。2 = TrustAsia TLS RSA CA。
                     * @param PackageType 证书类型，目前仅支持类型2。2 = TrustAsia TLS RSA CA。
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取邮箱。
                     * @return ContactEmail 邮箱。
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置邮箱。
                     * @param ContactEmail 邮箱。
                     */
                    void SetContactEmail(const std::string& _contactEmail);

                    /**
                     * 判断参数 ContactEmail 是否已赋值
                     * @return ContactEmail 是否已赋值
                     */
                    bool ContactEmailHasBeenSet() const;

                    /**
                     * 获取手机。
                     * @return ContactPhone 手机。
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置手机。
                     * @param ContactPhone 手机。
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取有效期，默认12个月，目前仅支持12个月。
                     * @return ValidityPeriod 有效期，默认12个月，目前仅支持12个月。
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置有效期，默认12个月，目前仅支持12个月。
                     * @param ValidityPeriod 有效期，默认12个月，目前仅支持12个月。
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取加密算法，支持 RSA及ECC。
                     * @return CsrEncryptAlgo 加密算法，支持 RSA及ECC。
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置加密算法，支持 RSA及ECC。
                     * @param CsrEncryptAlgo 加密算法，支持 RSA及ECC。
                     */
                    void SetCsrEncryptAlgo(const std::string& _csrEncryptAlgo);

                    /**
                     * 判断参数 CsrEncryptAlgo 是否已赋值
                     * @return CsrEncryptAlgo 是否已赋值
                     */
                    bool CsrEncryptAlgoHasBeenSet() const;

                    /**
                     * 获取密钥对参数，RSA仅支持2048。ECC仅支持prime256v1
                     * @return CsrKeyParameter 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置密钥对参数，RSA仅支持2048。ECC仅支持prime256v1
                     * @param CsrKeyParameter 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1
                     */
                    void SetCsrKeyParameter(const std::string& _csrKeyParameter);

                    /**
                     * 判断参数 CsrKeyParameter 是否已赋值
                     * @return CsrKeyParameter 是否已赋值
                     */
                    bool CsrKeyParameterHasBeenSet() const;

                    /**
                     * 获取CSR 的加密密码。
                     * @return CsrKeyPassword CSR 的加密密码。
                     */
                    std::string GetCsrKeyPassword() const;

                    /**
                     * 设置CSR 的加密密码。
                     * @param CsrKeyPassword CSR 的加密密码。
                     */
                    void SetCsrKeyPassword(const std::string& _csrKeyPassword);

                    /**
                     * 判断参数 CsrKeyPassword 是否已赋值
                     * @return CsrKeyPassword 是否已赋值
                     */
                    bool CsrKeyPasswordHasBeenSet() const;

                    /**
                     * 获取备注名称。
                     * @return Alias 备注名称。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注名称。
                     * @param Alias 备注名称。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取原证书 ID，用于重新申请。
                     * @return OldCertificateId 原证书 ID，用于重新申请。
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置原证书 ID，用于重新申请。
                     * @param OldCertificateId 原证书 ID，用于重新申请。
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取权益包ID，用于免费证书扩容包使用
                     * @return PackageId 权益包ID，用于免费证书扩容包使用
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置权益包ID，用于免费证书扩容包使用
                     * @param PackageId 权益包ID，用于免费证书扩容包使用
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * @return DeleteDnsAutoRecord 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     */
                    bool GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * @param DeleteDnsAutoRecord 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     */
                    void SetDeleteDnsAutoRecord(const bool& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                private:

                    /**
                     * 验证方式：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证。
                     */
                    std::string m_dvAuthMethod;
                    bool m_dvAuthMethodHasBeenSet;

                    /**
                     * 域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书类型，目前仅支持类型2。2 = TrustAsia TLS RSA CA。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 邮箱。
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 手机。
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 有效期，默认12个月，目前仅支持12个月。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 加密算法，支持 RSA及ECC。
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1
                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * CSR 的加密密码。
                     */
                    std::string m_csrKeyPassword;
                    bool m_csrKeyPasswordHasBeenSet;

                    /**
                     * 备注名称。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 原证书 ID，用于重新申请。
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 权益包ID，用于免费证书扩容包使用
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     */
                    bool m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
