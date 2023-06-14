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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_

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
                * 获取证书列表（DescribeCertificate）返回参数键为 SubmittedData 的内容。
                */
                class SubmittedData : public AbstractModel
                {
                public:
                    SubmittedData();
                    ~SubmittedData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CSR 类型，（online = 在线生成CSR，parse = 粘贴 CSR）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CsrType CSR 类型，（online = 在线生成CSR，parse = 粘贴 CSR）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置CSR 类型，（online = 在线生成CSR，parse = 粘贴 CSR）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _csrType CSR 类型，（online = 在线生成CSR，parse = 粘贴 CSR）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取CSR 内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CsrContent CSR 内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置CSR 内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _csrContent CSR 内容。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取域名信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateDomain 域名信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificateDomain() const;

                    /**
                     * 设置域名信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificateDomain 域名信息。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取DNS 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList DNS 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置DNS 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList DNS 信息。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取私钥密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyPassword 私钥密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置私钥密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyPassword 私钥密码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取企业或单位名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 企业或单位名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业或单位名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationName 企业或单位名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部门。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationDivision 部门。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationDivision() const;

                    /**
                     * 设置部门。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationDivision 部门。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationAddress 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationAddress 地址。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCountry 国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCountry() const;

                    /**
                     * 设置国家。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCountry 国家。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取市。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCity 市。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCity() const;

                    /**
                     * 设置市。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCity 市。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取省。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationRegion 省。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationRegion() const;

                    /**
                     * 设置省。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationRegion 省。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取邮政编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostalCode 邮政编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置邮政编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postalCode 邮政编码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取座机区号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneAreaCode 座机区号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneAreaCode() const;

                    /**
                     * 设置座机区号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneAreaCode 座机区号。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取座机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 座机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置座机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneNumber 座机号码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取管理员名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminFirstName 管理员名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置管理员名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminFirstName 管理员名。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取管理员姓。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminLastName 管理员姓。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置管理员姓。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminLastName 管理员姓。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取管理员电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminPhoneNum 管理员电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminPhoneNum() const;

                    /**
                     * 设置管理员电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminPhoneNum 管理员电话号码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取管理员邮箱地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminEmail 管理员邮箱地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置管理员邮箱地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminEmail 管理员邮箱地址。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取管理员职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminPosition 管理员职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminPosition() const;

                    /**
                     * 设置管理员职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminPosition 管理员职位。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactFirstName 联系人名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactFirstName() const;

                    /**
                     * 设置联系人名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactFirstName 联系人名。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactLastName 联系人姓。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactLastName() const;

                    /**
                     * 设置联系人姓。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactLastName 联系人姓。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取联系人电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactNumber 联系人电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactNumber() const;

                    /**
                     * 设置联系人电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactNumber 联系人电话号码。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取联系人邮箱地址，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactEmail 联系人邮箱地址，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置联系人邮箱地址，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactEmail 联系人邮箱地址，
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取联系人职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactPosition 联系人职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactPosition() const;

                    /**
                     * 设置联系人职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactPosition 联系人职位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContactPosition(const std::string& _contactPosition);

                    /**
                     * 判断参数 ContactPosition 是否已赋值
                     * @return ContactPosition 是否已赋值
                     * 
                     */
                    bool ContactPositionHasBeenSet() const;

                    /**
                     * 获取验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyType 验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyType 验证类型。
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

                private:

                    /**
                     * CSR 类型，（online = 在线生成CSR，parse = 粘贴 CSR）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * CSR 内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * 域名信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificateDomain;
                    bool m_certificateDomainHasBeenSet;

                    /**
                     * DNS 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 私钥密码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * 企业或单位名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 部门。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationDivision;
                    bool m_organizationDivisionHasBeenSet;

                    /**
                     * 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * 国家。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCountry;
                    bool m_organizationCountryHasBeenSet;

                    /**
                     * 市。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCity;
                    bool m_organizationCityHasBeenSet;

                    /**
                     * 省。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationRegion;
                    bool m_organizationRegionHasBeenSet;

                    /**
                     * 邮政编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 座机区号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneAreaCode;
                    bool m_phoneAreaCodeHasBeenSet;

                    /**
                     * 座机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 管理员名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * 管理员姓。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * 管理员电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminPhoneNum;
                    bool m_adminPhoneNumHasBeenSet;

                    /**
                     * 管理员邮箱地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * 管理员职位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminPosition;
                    bool m_adminPositionHasBeenSet;

                    /**
                     * 联系人名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactFirstName;
                    bool m_contactFirstNameHasBeenSet;

                    /**
                     * 联系人姓。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactLastName;
                    bool m_contactLastNameHasBeenSet;

                    /**
                     * 联系人电话号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactNumber;
                    bool m_contactNumberHasBeenSet;

                    /**
                     * 联系人邮箱地址，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 联系人职位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactPosition;
                    bool m_contactPositionHasBeenSet;

                    /**
                     * 验证类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUBMITTEDDATA_H_
