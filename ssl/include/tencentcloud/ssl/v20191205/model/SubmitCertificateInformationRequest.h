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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_

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
                * SubmitCertificateInformation请求参数结构体
                */
                class SubmitCertificateInformationRequest : public AbstractModel
                {
                public:
                    SubmitCertificateInformationRequest();
                    ~SubmitCertificateInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
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
                     * 获取CSR 生成方式：online = 在线生成, parse = 手动上传。
                     * @return CsrType CSR 生成方式：online = 在线生成, parse = 手动上传。
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置CSR 生成方式：online = 在线生成, parse = 手动上传。
                     * @param _csrType CSR 生成方式：online = 在线生成, parse = 手动上传。
                     * 
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     * 
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取上传的 CSR 内容。
                     * @return CsrContent 上传的 CSR 内容。
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置上传的 CSR 内容。
                     * @param _csrContent 上传的 CSR 内容。
                     * 
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     * 
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取绑定证书的域名。
                     * @return CertificateDomain 绑定证书的域名。
                     * 
                     */
                    std::string GetCertificateDomain() const;

                    /**
                     * 设置绑定证书的域名。
                     * @param _certificateDomain 绑定证书的域名。
                     * 
                     */
                    void SetCertificateDomain(const std::string& _certificateDomain);

                    /**
                     * 判断参数 CertificateDomain 是否已赋值
                     * @return CertificateDomain 是否已赋值
                     * 
                     */
                    bool CertificateDomainHasBeenSet() const;

                    /**
                     * 获取上传的域名数组（多域名证书可以上传）。
                     * @return DomainList 上传的域名数组（多域名证书可以上传）。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置上传的域名数组（多域名证书可以上传）。
                     * @param _domainList 上传的域名数组（多域名证书可以上传）。
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取私钥密码（非必填）。
                     * @return KeyPassword 私钥密码（非必填）。
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置私钥密码（非必填）。
                     * @param _keyPassword 私钥密码（非必填）。
                     * 
                     */
                    void SetKeyPassword(const std::string& _keyPassword);

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取公司名称。
                     * @return OrganizationName 公司名称。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置公司名称。
                     * @param _organizationName 公司名称。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取部门名称。
                     * @return OrganizationDivision 部门名称。
                     * 
                     */
                    std::string GetOrganizationDivision() const;

                    /**
                     * 设置部门名称。
                     * @param _organizationDivision 部门名称。
                     * 
                     */
                    void SetOrganizationDivision(const std::string& _organizationDivision);

                    /**
                     * 判断参数 OrganizationDivision 是否已赋值
                     * @return OrganizationDivision 是否已赋值
                     * 
                     */
                    bool OrganizationDivisionHasBeenSet() const;

                    /**
                     * 获取公司详细地址。
                     * @return OrganizationAddress 公司详细地址。
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置公司详细地址。
                     * @param _organizationAddress 公司详细地址。
                     * 
                     */
                    void SetOrganizationAddress(const std::string& _organizationAddress);

                    /**
                     * 判断参数 OrganizationAddress 是否已赋值
                     * @return OrganizationAddress 是否已赋值
                     * 
                     */
                    bool OrganizationAddressHasBeenSet() const;

                    /**
                     * 获取国家名称，如中国：CN 。
                     * @return OrganizationCountry 国家名称，如中国：CN 。
                     * 
                     */
                    std::string GetOrganizationCountry() const;

                    /**
                     * 设置国家名称，如中国：CN 。
                     * @param _organizationCountry 国家名称，如中国：CN 。
                     * 
                     */
                    void SetOrganizationCountry(const std::string& _organizationCountry);

                    /**
                     * 判断参数 OrganizationCountry 是否已赋值
                     * @return OrganizationCountry 是否已赋值
                     * 
                     */
                    bool OrganizationCountryHasBeenSet() const;

                    /**
                     * 获取公司所在城市。
                     * @return OrganizationCity 公司所在城市。
                     * 
                     */
                    std::string GetOrganizationCity() const;

                    /**
                     * 设置公司所在城市。
                     * @param _organizationCity 公司所在城市。
                     * 
                     */
                    void SetOrganizationCity(const std::string& _organizationCity);

                    /**
                     * 判断参数 OrganizationCity 是否已赋值
                     * @return OrganizationCity 是否已赋值
                     * 
                     */
                    bool OrganizationCityHasBeenSet() const;

                    /**
                     * 获取公司所在省份。
                     * @return OrganizationRegion 公司所在省份。
                     * 
                     */
                    std::string GetOrganizationRegion() const;

                    /**
                     * 设置公司所在省份。
                     * @param _organizationRegion 公司所在省份。
                     * 
                     */
                    void SetOrganizationRegion(const std::string& _organizationRegion);

                    /**
                     * 判断参数 OrganizationRegion 是否已赋值
                     * @return OrganizationRegion 是否已赋值
                     * 
                     */
                    bool OrganizationRegionHasBeenSet() const;

                    /**
                     * 获取公司邮编。
                     * @return PostalCode 公司邮编。
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置公司邮编。
                     * @param _postalCode 公司邮编。
                     * 
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取公司座机区号。
                     * @return PhoneAreaCode 公司座机区号。
                     * 
                     */
                    std::string GetPhoneAreaCode() const;

                    /**
                     * 设置公司座机区号。
                     * @param _phoneAreaCode 公司座机区号。
                     * 
                     */
                    void SetPhoneAreaCode(const std::string& _phoneAreaCode);

                    /**
                     * 判断参数 PhoneAreaCode 是否已赋值
                     * @return PhoneAreaCode 是否已赋值
                     * 
                     */
                    bool PhoneAreaCodeHasBeenSet() const;

                    /**
                     * 获取公司座机号码。
                     * @return PhoneNumber 公司座机号码。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置公司座机号码。
                     * @param _phoneNumber 公司座机号码。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

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
                     * @return AdminPhoneNum 管理人手机号码。
                     * 
                     */
                    std::string GetAdminPhoneNum() const;

                    /**
                     * 设置管理人手机号码。
                     * @param _adminPhoneNum 管理人手机号码。
                     * 
                     */
                    void SetAdminPhoneNum(const std::string& _adminPhoneNum);

                    /**
                     * 判断参数 AdminPhoneNum 是否已赋值
                     * @return AdminPhoneNum 是否已赋值
                     * 
                     */
                    bool AdminPhoneNumHasBeenSet() const;

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
                     * @return AdminPosition 管理人职位。
                     * 
                     */
                    std::string GetAdminPosition() const;

                    /**
                     * 设置管理人职位。
                     * @param _adminPosition 管理人职位。
                     * 
                     */
                    void SetAdminPosition(const std::string& _adminPosition);

                    /**
                     * 判断参数 AdminPosition 是否已赋值
                     * @return AdminPosition 是否已赋值
                     * 
                     */
                    bool AdminPositionHasBeenSet() const;

                    /**
                     * 获取联系人名。
                     * @return ContactFirstName 联系人名。
                     * 
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 设置联系人名。
                     * @param _contactFirstName 联系人名。
                     * 
                     */
                    void SetContactFirstName(const std::string& _contactFirstName);

                    /**
                     * 判断参数 ContactFirstName 是否已赋值
                     * @return ContactFirstName 是否已赋值
                     * 
                     */
                    bool ContactFirstNameHasBeenSet() const;

                    /**
                     * 获取联系人姓。
                     * @return ContactLastName 联系人姓。
                     * 
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 设置联系人姓。
                     * @param _contactLastName 联系人姓。
                     * 
                     */
                    void SetContactLastName(const std::string& _contactLastName);

                    /**
                     * 判断参数 ContactLastName 是否已赋值
                     * @return ContactLastName 是否已赋值
                     * 
                     */
                    bool ContactLastNameHasBeenSet() const;

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
                     * 获取联系人手机号码。
                     * @return ContactNumber 联系人手机号码。
                     * 
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置联系人手机号码。
                     * @param _contactNumber 联系人手机号码。
                     * 
                     */
                    void SetContactNumber(const std::string& _contactNumber);

                    /**
                     * 判断参数 ContactNumber 是否已赋值
                     * @return ContactNumber 是否已赋值
                     * 
                     */
                    bool ContactNumberHasBeenSet() const;

                    /**
                     * 获取联系人职位。
                     * @return ContactPosition 联系人职位。
                     * 
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 设置联系人职位。
                     * @param _contactPosition 联系人职位。
                     * 
                     */
                    void SetContactPosition(const std::string& _contactPosition);

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     * 
                     */
                    bool ContactPositionHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * CSR 生成方式：online = 在线生成, parse = 手动上传。
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * 上传的 CSR 内容。
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * 绑定证书的域名。
                     */
                    std::string m_certificateDomain;
                    bool m_certificateDomainHasBeenSet;

                    /**
                     * 上传的域名数组（多域名证书可以上传）。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 私钥密码（非必填）。
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * 公司名称。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 部门名称。
                     */
                    std::string m_organizationDivision;
                    bool m_organizationDivisionHasBeenSet;

                    /**
                     * 公司详细地址。
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * 国家名称，如中国：CN 。
                     */
                    std::string m_organizationCountry;
                    bool m_organizationCountryHasBeenSet;

                    /**
                     * 公司所在城市。
                     */
                    std::string m_organizationCity;
                    bool m_organizationCityHasBeenSet;

                    /**
                     * 公司所在省份。
                     */
                    std::string m_organizationRegion;
                    bool m_organizationRegionHasBeenSet;

                    /**
                     * 公司邮编。
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 公司座机区号。
                     */
                    std::string m_phoneAreaCode;
                    bool m_phoneAreaCodeHasBeenSet;

                    /**
                     * 公司座机号码。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

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
                    std::string m_adminPhoneNum;
                    bool m_adminPhoneNumHasBeenSet;

                    /**
                     * 管理人邮箱地址。
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * 管理人职位。
                     */
                    std::string m_adminPosition;
                    bool m_adminPositionHasBeenSet;

                    /**
                     * 联系人名。
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * 联系人姓。
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * 联系人邮箱地址。
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 联系人手机号码。
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * 联系人职位。
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITCERTIFICATEINFORMATIONREQUEST_H_
