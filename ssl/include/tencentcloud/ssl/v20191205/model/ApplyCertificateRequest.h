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
                     * 获取证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * @return DvAuthMethod 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * 
                     */
                    std::string GetDvAuthMethod() const;

                    /**
                     * 设置证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * @param _dvAuthMethod 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * 
                     */
                    void SetDvAuthMethod(const std::string& _dvAuthMethod);

                    /**
                     * 判断参数 DvAuthMethod 是否已赋值
                     * @return DvAuthMethod 是否已赋值
                     * 
                     */
                    bool DvAuthMethodHasBeenSet() const;

                    /**
                     * 获取证书绑定的域名。
                     * @return DomainName 证书绑定的域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置证书绑定的域名。
                     * @param _domainName 证书绑定的域名。
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
                     * 获取证书关联的项目 ID。 默认为0（默认项目）
                     * @return ProjectId 证书关联的项目 ID。 默认为0（默认项目）
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置证书关联的项目 ID。 默认为0（默认项目）
                     * @param _projectId 证书关联的项目 ID。 默认为0（默认项目）
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书类型， 可不传，目前仅支持类型83。83 = TrustAsia C1 DV Free。
                     * @return PackageType 证书类型， 可不传，目前仅支持类型83。83 = TrustAsia C1 DV Free。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置证书类型， 可不传，目前仅支持类型83。83 = TrustAsia C1 DV Free。
                     * @param _packageType 证书类型， 可不传，目前仅支持类型83。83 = TrustAsia C1 DV Free。
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
                     * 获取证书订单关联邮箱。默认为腾讯云账号邮箱， 不存在则关联固定邮箱
                     * @return ContactEmail 证书订单关联邮箱。默认为腾讯云账号邮箱， 不存在则关联固定邮箱
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置证书订单关联邮箱。默认为腾讯云账号邮箱， 不存在则关联固定邮箱
                     * @param _contactEmail 证书订单关联邮箱。默认为腾讯云账号邮箱， 不存在则关联固定邮箱
                     * 
                     */
                    void SetContactEmail(const std::string& _contactEmail);

                    /**
                     * 判断参数 ContactEmail 是否已赋值
                     * @return ContactEmail 是否已赋值
                     * 
                     */
                    bool ContactEmailHasBeenSet() const;

                    /**
                     * 获取证书关联手机号码，  不存在则关联固定手机号码
                     * @return ContactPhone 证书关联手机号码，  不存在则关联固定手机号码
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置证书关联手机号码，  不存在则关联固定手机号码
                     * @param _contactPhone 证书关联手机号码，  不存在则关联固定手机号码
                     * 
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取证书有效期，默认3（月），目前仅支持3个月。
                     * @return ValidityPeriod 证书有效期，默认3（月），目前仅支持3个月。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置证书有效期，默认3（月），目前仅支持3个月。
                     * @param _validityPeriod 证书有效期，默认3（月），目前仅支持3个月。
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
                     * 获取加密算法，取值为ECC、RSA， 默认为RSA
                     * @return CsrEncryptAlgo 加密算法，取值为ECC、RSA， 默认为RSA
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置加密算法，取值为ECC、RSA， 默认为RSA
                     * @param _csrEncryptAlgo 加密算法，取值为ECC、RSA， 默认为RSA
                     * 
                     */
                    void SetCsrEncryptAlgo(const std::string& _csrEncryptAlgo);

                    /**
                     * 判断参数 CsrEncryptAlgo 是否已赋值
                     * @return CsrEncryptAlgo 是否已赋值
                     * 
                     */
                    bool CsrEncryptAlgoHasBeenSet() const;

                    /**
                     * 获取密钥对参数，RSA仅支持2048。ECC仅支持prime256v1。加密算法选择ECC时，此参数必填
                     * @return CsrKeyParameter 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1。加密算法选择ECC时，此参数必填
                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置密钥对参数，RSA仅支持2048。ECC仅支持prime256v1。加密算法选择ECC时，此参数必填
                     * @param _csrKeyParameter 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1。加密算法选择ECC时，此参数必填
                     * 
                     */
                    void SetCsrKeyParameter(const std::string& _csrKeyParameter);

                    /**
                     * 判断参数 CsrKeyParameter 是否已赋值
                     * @return CsrKeyParameter 是否已赋值
                     * 
                     */
                    bool CsrKeyParameterHasBeenSet() const;

                    /**
                     * 获取私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密
                     * @return CsrKeyPassword 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密
                     * 
                     */
                    std::string GetCsrKeyPassword() const;

                    /**
                     * 设置私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密
                     * @param _csrKeyPassword 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密
                     * 
                     */
                    void SetCsrKeyPassword(const std::string& _csrKeyPassword);

                    /**
                     * 判断参数 CsrKeyPassword 是否已赋值
                     * @return CsrKeyPassword 是否已赋值
                     * 
                     */
                    bool CsrKeyPasswordHasBeenSet() const;

                    /**
                     * 获取证书别名
                     * @return Alias 证书别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书别名
                     * @param _alias 证书别名
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
                     * 获取旧证书 ID，用于证书续费（证书有效期在30天内，且未过期），会建立续费关系， 可用于托管； 不传则表示新申请证书
                     * @return OldCertificateId 旧证书 ID，用于证书续费（证书有效期在30天内，且未过期），会建立续费关系， 可用于托管； 不传则表示新申请证书
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置旧证书 ID，用于证书续费（证书有效期在30天内，且未过期），会建立续费关系， 可用于托管； 不传则表示新申请证书
                     * @param _oldCertificateId 旧证书 ID，用于证书续费（证书有效期在30天内，且未过期），会建立续费关系， 可用于托管； 不传则表示新申请证书
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取权益包ID，用于免费证书扩容包使用， 免费证书扩容包已下线
                     * @return PackageId 权益包ID，用于免费证书扩容包使用， 免费证书扩容包已下线
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置权益包ID，用于免费证书扩容包使用， 免费证书扩容包已下线
                     * @param _packageId 权益包ID，用于免费证书扩容包使用， 免费证书扩容包已下线
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * @return DeleteDnsAutoRecord 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * 
                     */
                    bool GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * @param _deleteDnsAutoRecord 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     * 
                     */
                    void SetDeleteDnsAutoRecord(const bool& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     * 
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                    /**
                     * 获取证书绑定的其他域名，待开放。目前不支持此参数
                     * @return DnsNames 证书绑定的其他域名，待开放。目前不支持此参数
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置证书绑定的其他域名，待开放。目前不支持此参数
                     * @param _dnsNames 证书绑定的其他域名，待开放。目前不支持此参数
                     * 
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     * 
                     */
                    bool DnsNamesHasBeenSet() const;

                private:

                    /**
                     * 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     */
                    std::string m_dvAuthMethod;
                    bool m_dvAuthMethodHasBeenSet;

                    /**
                     * 证书绑定的域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 证书关联的项目 ID。 默认为0（默认项目）
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书类型， 可不传，目前仅支持类型83。83 = TrustAsia C1 DV Free。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 证书订单关联邮箱。默认为腾讯云账号邮箱， 不存在则关联固定邮箱
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 证书关联手机号码，  不存在则关联固定手机号码
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 证书有效期，默认3（月），目前仅支持3个月。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 加密算法，取值为ECC、RSA， 默认为RSA
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * 密钥对参数，RSA仅支持2048。ECC仅支持prime256v1。加密算法选择ECC时，此参数必填
                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密
                     */
                    std::string m_csrKeyPassword;
                    bool m_csrKeyPasswordHasBeenSet;

                    /**
                     * 证书别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 旧证书 ID，用于证书续费（证书有效期在30天内，且未过期），会建立续费关系， 可用于托管； 不传则表示新申请证书
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 权益包ID，用于免费证书扩容包使用， 免费证书扩容包已下线
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 签发后是否删除自动域名验证记录， 默认为否；仅域名为DNS_AUTO验证类型支持传参
                     */
                    bool m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                    /**
                     * 证书绑定的其他域名，待开放。目前不支持此参数
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_APPLYCERTIFICATEREQUEST_H_
