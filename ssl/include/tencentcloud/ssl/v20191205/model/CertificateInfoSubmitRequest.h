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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_

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
                * CertificateInfoSubmit请求参数结构体
                */
                class CertificateInfoSubmitRequest : public AbstractModel
                {
                public:
                    CertificateInfoSubmitRequest();
                    ~CertificateInfoSubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertId 证书 ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certId 证书 ID。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取CSR 生成方式：online = 在线生成, upload = 手动上传。
                     * @return GenCsrType CSR 生成方式：online = 在线生成, upload = 手动上传。
                     * 
                     */
                    std::string GetGenCsrType() const;

                    /**
                     * 设置CSR 生成方式：online = 在线生成, upload = 手动上传。
                     * @param _genCsrType CSR 生成方式：online = 在线生成, upload = 手动上传。
                     * 
                     */
                    void SetGenCsrType(const std::string& _genCsrType);

                    /**
                     * 判断参数 GenCsrType 是否已赋值
                     * @return GenCsrType 是否已赋值
                     * 
                     */
                    bool GenCsrTypeHasBeenSet() const;

                    /**
                     * 获取绑定证书的主域名。
                     * @return CertCommonName 绑定证书的主域名。
                     * 
                     */
                    std::string GetCertCommonName() const;

                    /**
                     * 设置绑定证书的主域名。
                     * @param _certCommonName 绑定证书的主域名。
                     * 
                     */
                    void SetCertCommonName(const std::string& _certCommonName);

                    /**
                     * 判断参数 CertCommonName 是否已赋值
                     * @return CertCommonName 是否已赋值
                     * 
                     */
                    bool CertCommonNameHasBeenSet() const;

                    /**
                     * 获取组织信息类型：1，个人； 2， 公司； 
                     * @return CompanyType 组织信息类型：1，个人； 2， 公司； 
                     * 
                     */
                    uint64_t GetCompanyType() const;

                    /**
                     * 设置组织信息类型：1，个人； 2， 公司； 
                     * @param _companyType 组织信息类型：1，个人； 2， 公司； 
                     * 
                     */
                    void SetCompanyType(const uint64_t& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取公司证件类型（）
                     * @return OrgIdType 公司证件类型（）
                     * 
                     */
                    std::string GetOrgIdType() const;

                    /**
                     * 设置公司证件类型（）
                     * @param _orgIdType 公司证件类型（）
                     * 
                     */
                    void SetOrgIdType(const std::string& _orgIdType);

                    /**
                     * 判断参数 OrgIdType 是否已赋值
                     * @return OrgIdType 是否已赋值
                     * 
                     */
                    bool OrgIdTypeHasBeenSet() const;

                    /**
                     * 获取公司证件号码
                     * @return OrgIdNumber 公司证件号码
                     * 
                     */
                    std::string GetOrgIdNumber() const;

                    /**
                     * 设置公司证件号码
                     * @param _orgIdNumber 公司证件号码
                     * 
                     */
                    void SetOrgIdNumber(const std::string& _orgIdNumber);

                    /**
                     * 判断参数 OrgIdNumber 是否已赋值
                     * @return OrgIdNumber 是否已赋值
                     * 
                     */
                    bool OrgIdNumberHasBeenSet() const;

                    /**
                     * 获取管理人证件类型
                     * @return AdminIdType 管理人证件类型
                     * 
                     */
                    std::string GetAdminIdType() const;

                    /**
                     * 设置管理人证件类型
                     * @param _adminIdType 管理人证件类型
                     * 
                     */
                    void SetAdminIdType(const std::string& _adminIdType);

                    /**
                     * 判断参数 AdminIdType 是否已赋值
                     * @return AdminIdType 是否已赋值
                     * 
                     */
                    bool AdminIdTypeHasBeenSet() const;

                    /**
                     * 获取管理人证件号码
                     * @return AdminIdNumber 管理人证件号码
                     * 
                     */
                    std::string GetAdminIdNumber() const;

                    /**
                     * 设置管理人证件号码
                     * @param _adminIdNumber 管理人证件号码
                     * 
                     */
                    void SetAdminIdNumber(const std::string& _adminIdNumber);

                    /**
                     * 判断参数 AdminIdNumber 是否已赋值
                     * @return AdminIdNumber 是否已赋值
                     * 
                     */
                    bool AdminIdNumberHasBeenSet() const;

                    /**
                     * 获取联系人证件类型
                     * @return TechIdType 联系人证件类型
                     * 
                     */
                    std::string GetTechIdType() const;

                    /**
                     * 设置联系人证件类型
                     * @param _techIdType 联系人证件类型
                     * 
                     */
                    void SetTechIdType(const std::string& _techIdType);

                    /**
                     * 判断参数 TechIdType 是否已赋值
                     * @return TechIdType 是否已赋值
                     * 
                     */
                    bool TechIdTypeHasBeenSet() const;

                    /**
                     * 获取联系人证件号码
                     * @return TechIdNumber 联系人证件号码
                     * 
                     */
                    std::string GetTechIdNumber() const;

                    /**
                     * 设置联系人证件号码
                     * @param _techIdNumber 联系人证件号码
                     * 
                     */
                    void SetTechIdNumber(const std::string& _techIdNumber);

                    /**
                     * 判断参数 TechIdNumber 是否已赋值
                     * @return TechIdNumber 是否已赋值
                     * 
                     */
                    bool TechIdNumberHasBeenSet() const;

                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param _companyId 公司ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取上传的 CSR 内容。如果GenCsrType为upload则该字段必传
                     * @return Csr 上传的 CSR 内容。如果GenCsrType为upload则该字段必传
                     * 
                     */
                    std::string GetCsr() const;

                    /**
                     * 设置上传的 CSR 内容。如果GenCsrType为upload则该字段必传
                     * @param _csr 上传的 CSR 内容。如果GenCsrType为upload则该字段必传
                     * 
                     */
                    void SetCsr(const std::string& _csr);

                    /**
                     * 判断参数 Csr 是否已赋值
                     * @return Csr 是否已赋值
                     * 
                     */
                    bool CsrHasBeenSet() const;

                    /**
                     * 获取域名数组（多域名证书可以上传）。
                     * @return DnsNames 域名数组（多域名证书可以上传）。
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置域名数组（多域名证书可以上传）。
                     * @param _dnsNames 域名数组（多域名证书可以上传）。
                     * 
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     * 
                     */
                    bool DnsNamesHasBeenSet() const;

                    /**
                     * 获取私钥密码（非必填）。
                     * @return KeyPass 私钥密码（非必填）。
                     * 
                     */
                    std::string GetKeyPass() const;

                    /**
                     * 设置私钥密码（非必填）。
                     * @param _keyPass 私钥密码（非必填）。
                     * 
                     */
                    void SetKeyPass(const std::string& _keyPass);

                    /**
                     * 判断参数 KeyPass 是否已赋值
                     * @return KeyPass 是否已赋值
                     * 
                     */
                    bool KeyPassHasBeenSet() const;

                    /**
                     * 获取公司名称。
                     * @return OrgOrganization 公司名称。
                     * 
                     */
                    std::string GetOrgOrganization() const;

                    /**
                     * 设置公司名称。
                     * @param _orgOrganization 公司名称。
                     * 
                     */
                    void SetOrgOrganization(const std::string& _orgOrganization);

                    /**
                     * 判断参数 OrgOrganization 是否已赋值
                     * @return OrgOrganization 是否已赋值
                     * 
                     */
                    bool OrgOrganizationHasBeenSet() const;

                    /**
                     * 获取部门名称。
                     * @return OrgDivision 部门名称。
                     * 
                     */
                    std::string GetOrgDivision() const;

                    /**
                     * 设置部门名称。
                     * @param _orgDivision 部门名称。
                     * 
                     */
                    void SetOrgDivision(const std::string& _orgDivision);

                    /**
                     * 判断参数 OrgDivision 是否已赋值
                     * @return OrgDivision 是否已赋值
                     * 
                     */
                    bool OrgDivisionHasBeenSet() const;

                    /**
                     * 获取公司详细地址。
                     * @return OrgAddress 公司详细地址。
                     * 
                     */
                    std::string GetOrgAddress() const;

                    /**
                     * 设置公司详细地址。
                     * @param _orgAddress 公司详细地址。
                     * 
                     */
                    void SetOrgAddress(const std::string& _orgAddress);

                    /**
                     * 判断参数 OrgAddress 是否已赋值
                     * @return OrgAddress 是否已赋值
                     * 
                     */
                    bool OrgAddressHasBeenSet() const;

                    /**
                     * 获取国家名称，如中国：CN 。
                     * @return OrgCountry 国家名称，如中国：CN 。
                     * 
                     */
                    std::string GetOrgCountry() const;

                    /**
                     * 设置国家名称，如中国：CN 。
                     * @param _orgCountry 国家名称，如中国：CN 。
                     * 
                     */
                    void SetOrgCountry(const std::string& _orgCountry);

                    /**
                     * 判断参数 OrgCountry 是否已赋值
                     * @return OrgCountry 是否已赋值
                     * 
                     */
                    bool OrgCountryHasBeenSet() const;

                    /**
                     * 获取公司所在城市。
                     * @return OrgCity 公司所在城市。
                     * 
                     */
                    std::string GetOrgCity() const;

                    /**
                     * 设置公司所在城市。
                     * @param _orgCity 公司所在城市。
                     * 
                     */
                    void SetOrgCity(const std::string& _orgCity);

                    /**
                     * 判断参数 OrgCity 是否已赋值
                     * @return OrgCity 是否已赋值
                     * 
                     */
                    bool OrgCityHasBeenSet() const;

                    /**
                     * 获取公司所在省份。
                     * @return OrgRegion 公司所在省份。
                     * 
                     */
                    std::string GetOrgRegion() const;

                    /**
                     * 设置公司所在省份。
                     * @param _orgRegion 公司所在省份。
                     * 
                     */
                    void SetOrgRegion(const std::string& _orgRegion);

                    /**
                     * 判断参数 OrgRegion 是否已赋值
                     * @return OrgRegion 是否已赋值
                     * 
                     */
                    bool OrgRegionHasBeenSet() const;

                    /**
                     * 获取公司座机区号。
                     * @return OrgPhoneArea 公司座机区号。
                     * 
                     */
                    std::string GetOrgPhoneArea() const;

                    /**
                     * 设置公司座机区号。
                     * @param _orgPhoneArea 公司座机区号。
                     * 
                     */
                    void SetOrgPhoneArea(const std::string& _orgPhoneArea);

                    /**
                     * 判断参数 OrgPhoneArea 是否已赋值
                     * @return OrgPhoneArea 是否已赋值
                     * 
                     */
                    bool OrgPhoneAreaHasBeenSet() const;

                    /**
                     * 获取公司座机号码。
                     * @return OrgPhoneNumber 公司座机号码。
                     * 
                     */
                    std::string GetOrgPhoneNumber() const;

                    /**
                     * 设置公司座机号码。
                     * @param _orgPhoneNumber 公司座机号码。
                     * 
                     */
                    void SetOrgPhoneNumber(const std::string& _orgPhoneNumber);

                    /**
                     * 判断参数 OrgPhoneNumber 是否已赋值
                     * @return OrgPhoneNumber 是否已赋值
                     * 
                     */
                    bool OrgPhoneNumberHasBeenSet() const;

                    /**
                     * 获取证书验证方式。验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * @return VerifyType 证书验证方式。验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置证书验证方式。验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * @param _verifyType 证书验证方式。验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
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
                     * 获取管理人名。
                     * @return AdminFirstName 管理人名。
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置管理人名。
                     * @param _adminFirstName 管理人名。
                     * 
                     */
                    void SetAdminFirstName(const std::string& _adminFirstName);

                    /**
                     * 判断参数 AdminFirstName 是否已赋值
                     * @return AdminFirstName 是否已赋值
                     * 
                     */
                    bool AdminFirstNameHasBeenSet() const;

                    /**
                     * 获取管理人姓。
                     * @return AdminLastName 管理人姓。
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置管理人姓。
                     * @param _adminLastName 管理人姓。
                     * 
                     */
                    void SetAdminLastName(const std::string& _adminLastName);

                    /**
                     * 判断参数 AdminLastName 是否已赋值
                     * @return AdminLastName 是否已赋值
                     * 
                     */
                    bool AdminLastNameHasBeenSet() const;

                    /**
                     * 获取管理人手机号码。
                     * @return AdminPhone 管理人手机号码。
                     * 
                     */
                    std::string GetAdminPhone() const;

                    /**
                     * 设置管理人手机号码。
                     * @param _adminPhone 管理人手机号码。
                     * 
                     */
                    void SetAdminPhone(const std::string& _adminPhone);

                    /**
                     * 判断参数 AdminPhone 是否已赋值
                     * @return AdminPhone 是否已赋值
                     * 
                     */
                    bool AdminPhoneHasBeenSet() const;

                    /**
                     * 获取管理人邮箱地址。
                     * @return AdminEmail 管理人邮箱地址。
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置管理人邮箱地址。
                     * @param _adminEmail 管理人邮箱地址。
                     * 
                     */
                    void SetAdminEmail(const std::string& _adminEmail);

                    /**
                     * 判断参数 AdminEmail 是否已赋值
                     * @return AdminEmail 是否已赋值
                     * 
                     */
                    bool AdminEmailHasBeenSet() const;

                    /**
                     * 获取管理人职位。
                     * @return AdminTitle 管理人职位。
                     * 
                     */
                    std::string GetAdminTitle() const;

                    /**
                     * 设置管理人职位。
                     * @param _adminTitle 管理人职位。
                     * 
                     */
                    void SetAdminTitle(const std::string& _adminTitle);

                    /**
                     * 判断参数 AdminTitle 是否已赋值
                     * @return AdminTitle 是否已赋值
                     * 
                     */
                    bool AdminTitleHasBeenSet() const;

                    /**
                     * 获取联系人名。
                     * @return TechFirstName 联系人名。
                     * 
                     */
                    std::string GetTechFirstName() const;

                    /**
                     * 设置联系人名。
                     * @param _techFirstName 联系人名。
                     * 
                     */
                    void SetTechFirstName(const std::string& _techFirstName);

                    /**
                     * 判断参数 TechFirstName 是否已赋值
                     * @return TechFirstName 是否已赋值
                     * 
                     */
                    bool TechFirstNameHasBeenSet() const;

                    /**
                     * 获取联系人姓。
                     * @return TechLastName 联系人姓。
                     * 
                     */
                    std::string GetTechLastName() const;

                    /**
                     * 设置联系人姓。
                     * @param _techLastName 联系人姓。
                     * 
                     */
                    void SetTechLastName(const std::string& _techLastName);

                    /**
                     * 判断参数 TechLastName 是否已赋值
                     * @return TechLastName 是否已赋值
                     * 
                     */
                    bool TechLastNameHasBeenSet() const;

                    /**
                     * 获取联系人邮箱地址。
                     * @return ContactEmail 联系人邮箱地址。
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置联系人邮箱地址。
                     * @param _contactEmail 联系人邮箱地址。
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
                     * 获取是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * @return AutoRenewFlag 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * @param _autoRenewFlag 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取证书加密参数
                     * @return CsrKeyParameter 证书加密参数
                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置证书加密参数
                     * @param _csrKeyParameter 证书加密参数
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
                     * 获取证书加密方式
                     * @return CsrEncryptAlgo 证书加密方式
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置证书加密方式
                     * @param _csrEncryptAlgo 证书加密方式
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
                     * 获取管理人ID
                     * @return ManagerId 管理人ID
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置管理人ID
                     * @param _managerId 管理人ID
                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return TechPhone 联系人电话
                     * 
                     */
                    std::string GetTechPhone() const;

                    /**
                     * 设置联系人电话
                     * @param _techPhone 联系人电话
                     * 
                     */
                    void SetTechPhone(const std::string& _techPhone);

                    /**
                     * 判断参数 TechPhone 是否已赋值
                     * @return TechPhone 是否已赋值
                     * 
                     */
                    bool TechPhoneHasBeenSet() const;

                    /**
                     * 获取联系人邮箱
                     * @return TechEmail 联系人邮箱
                     * 
                     */
                    std::string GetTechEmail() const;

                    /**
                     * 设置联系人邮箱
                     * @param _techEmail 联系人邮箱
                     * 
                     */
                    void SetTechEmail(const std::string& _techEmail);

                    /**
                     * 判断参数 TechEmail 是否已赋值
                     * @return TechEmail 是否已赋值
                     * 
                     */
                    bool TechEmailHasBeenSet() const;

                    /**
                     * 获取联系人职位
                     * @return TechTitle 联系人职位
                     * 
                     */
                    std::string GetTechTitle() const;

                    /**
                     * 设置联系人职位
                     * @param _techTitle 联系人职位
                     * 
                     */
                    void SetTechTitle(const std::string& _techTitle);

                    /**
                     * 判断参数 TechTitle 是否已赋值
                     * @return TechTitle 是否已赋值
                     * 
                     */
                    bool TechTitleHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * CSR 生成方式：online = 在线生成, upload = 手动上传。
                     */
                    std::string m_genCsrType;
                    bool m_genCsrTypeHasBeenSet;

                    /**
                     * 绑定证书的主域名。
                     */
                    std::string m_certCommonName;
                    bool m_certCommonNameHasBeenSet;

                    /**
                     * 组织信息类型：1，个人； 2， 公司； 
                     */
                    uint64_t m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * 公司证件类型（）
                     */
                    std::string m_orgIdType;
                    bool m_orgIdTypeHasBeenSet;

                    /**
                     * 公司证件号码
                     */
                    std::string m_orgIdNumber;
                    bool m_orgIdNumberHasBeenSet;

                    /**
                     * 管理人证件类型
                     */
                    std::string m_adminIdType;
                    bool m_adminIdTypeHasBeenSet;

                    /**
                     * 管理人证件号码
                     */
                    std::string m_adminIdNumber;
                    bool m_adminIdNumberHasBeenSet;

                    /**
                     * 联系人证件类型
                     */
                    std::string m_techIdType;
                    bool m_techIdTypeHasBeenSet;

                    /**
                     * 联系人证件号码
                     */
                    std::string m_techIdNumber;
                    bool m_techIdNumberHasBeenSet;

                    /**
                     * 公司ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 上传的 CSR 内容。如果GenCsrType为upload则该字段必传
                     */
                    std::string m_csr;
                    bool m_csrHasBeenSet;

                    /**
                     * 域名数组（多域名证书可以上传）。
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                    /**
                     * 私钥密码（非必填）。
                     */
                    std::string m_keyPass;
                    bool m_keyPassHasBeenSet;

                    /**
                     * 公司名称。
                     */
                    std::string m_orgOrganization;
                    bool m_orgOrganizationHasBeenSet;

                    /**
                     * 部门名称。
                     */
                    std::string m_orgDivision;
                    bool m_orgDivisionHasBeenSet;

                    /**
                     * 公司详细地址。
                     */
                    std::string m_orgAddress;
                    bool m_orgAddressHasBeenSet;

                    /**
                     * 国家名称，如中国：CN 。
                     */
                    std::string m_orgCountry;
                    bool m_orgCountryHasBeenSet;

                    /**
                     * 公司所在城市。
                     */
                    std::string m_orgCity;
                    bool m_orgCityHasBeenSet;

                    /**
                     * 公司所在省份。
                     */
                    std::string m_orgRegion;
                    bool m_orgRegionHasBeenSet;

                    /**
                     * 公司座机区号。
                     */
                    std::string m_orgPhoneArea;
                    bool m_orgPhoneAreaHasBeenSet;

                    /**
                     * 公司座机号码。
                     */
                    std::string m_orgPhoneNumber;
                    bool m_orgPhoneNumberHasBeenSet;

                    /**
                     * 证书验证方式。验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 管理人名。
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * 管理人姓。
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * 管理人手机号码。
                     */
                    std::string m_adminPhone;
                    bool m_adminPhoneHasBeenSet;

                    /**
                     * 管理人邮箱地址。
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * 管理人职位。
                     */
                    std::string m_adminTitle;
                    bool m_adminTitleHasBeenSet;

                    /**
                     * 联系人名。
                     */
                    std::string m_techFirstName;
                    bool m_techFirstNameHasBeenSet;

                    /**
                     * 联系人姓。
                     */
                    std::string m_techLastName;
                    bool m_techLastNameHasBeenSet;

                    /**
                     * 联系人邮箱地址。
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 证书加密参数
                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * 证书加密方式
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * 管理人ID
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_techPhone;
                    bool m_techPhoneHasBeenSet;

                    /**
                     * 联系人邮箱
                     */
                    std::string m_techEmail;
                    bool m_techEmailHasBeenSet;

                    /**
                     * 联系人职位
                     */
                    std::string m_techTitle;
                    bool m_techTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
