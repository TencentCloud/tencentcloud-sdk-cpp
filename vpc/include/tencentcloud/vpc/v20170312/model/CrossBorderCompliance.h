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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 合规化审批单
                */
                class CrossBorderCompliance : public AbstractModel
                {
                public:
                    CrossBorderCompliance();
                    ~CrossBorderCompliance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务商，可选值：`UNICOM`。
                     * @return ServiceProvider 服务商，可选值：`UNICOM`。
                     * 
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置服务商，可选值：`UNICOM`。
                     * @param _serviceProvider 服务商，可选值：`UNICOM`。
                     * 
                     */
                    void SetServiceProvider(const std::string& _serviceProvider);

                    /**
                     * 判断参数 ServiceProvider 是否已赋值
                     * @return ServiceProvider 是否已赋值
                     * 
                     */
                    bool ServiceProviderHasBeenSet() const;

                    /**
                     * 获取合规化审批单`ID`。
                     * @return ComplianceId 合规化审批单`ID`。
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置合规化审批单`ID`。
                     * @param _complianceId 合规化审批单`ID`。
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取公司全称。
                     * @return Company 公司全称。
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置公司全称。
                     * @param _company 公司全称。
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码。
                     * @return UniformSocialCreditCode 统一社会信用代码。
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置统一社会信用代码。
                     * @param _uniformSocialCreditCode 统一社会信用代码。
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取法定代表人。
                     * @return LegalPerson 法定代表人。
                     * 
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 设置法定代表人。
                     * @param _legalPerson 法定代表人。
                     * 
                     */
                    void SetLegalPerson(const std::string& _legalPerson);

                    /**
                     * 判断参数 LegalPerson 是否已赋值
                     * @return LegalPerson 是否已赋值
                     * 
                     */
                    bool LegalPersonHasBeenSet() const;

                    /**
                     * 获取发证机关。
                     * @return IssuingAuthority 发证机关。
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置发证机关。
                     * @param _issuingAuthority 发证机关。
                     * 
                     */
                    void SetIssuingAuthority(const std::string& _issuingAuthority);

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                    /**
                     * 获取营业执照。
                     * @return BusinessLicense 营业执照。
                     * 
                     */
                    std::string GetBusinessLicense() const;

                    /**
                     * 设置营业执照。
                     * @param _businessLicense 营业执照。
                     * 
                     */
                    void SetBusinessLicense(const std::string& _businessLicense);

                    /**
                     * 判断参数 BusinessLicense 是否已赋值
                     * @return BusinessLicense 是否已赋值
                     * 
                     */
                    bool BusinessLicenseHasBeenSet() const;

                    /**
                     * 获取营业执照住所。
                     * @return BusinessAddress 营业执照住所。
                     * 
                     */
                    std::string GetBusinessAddress() const;

                    /**
                     * 设置营业执照住所。
                     * @param _businessAddress 营业执照住所。
                     * 
                     */
                    void SetBusinessAddress(const std::string& _businessAddress);

                    /**
                     * 判断参数 BusinessAddress 是否已赋值
                     * @return BusinessAddress 是否已赋值
                     * 
                     */
                    bool BusinessAddressHasBeenSet() const;

                    /**
                     * 获取邮编。
                     * @return PostCode 邮编。
                     * 
                     */
                    uint64_t GetPostCode() const;

                    /**
                     * 设置邮编。
                     * @param _postCode 邮编。
                     * 
                     */
                    void SetPostCode(const uint64_t& _postCode);

                    /**
                     * 判断参数 PostCode 是否已赋值
                     * @return PostCode 是否已赋值
                     * 
                     */
                    bool PostCodeHasBeenSet() const;

                    /**
                     * 获取经办人。
                     * @return Manager 经办人。
                     * 
                     */
                    std::string GetManager() const;

                    /**
                     * 设置经办人。
                     * @param _manager 经办人。
                     * 
                     */
                    void SetManager(const std::string& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取经办人身份证号。
                     * @return ManagerId 经办人身份证号。
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置经办人身份证号。
                     * @param _managerId 经办人身份证号。
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
                     * 获取经办人身份证。
                     * @return ManagerIdCard 经办人身份证。
                     * 
                     */
                    std::string GetManagerIdCard() const;

                    /**
                     * 设置经办人身份证。
                     * @param _managerIdCard 经办人身份证。
                     * 
                     */
                    void SetManagerIdCard(const std::string& _managerIdCard);

                    /**
                     * 判断参数 ManagerIdCard 是否已赋值
                     * @return ManagerIdCard 是否已赋值
                     * 
                     */
                    bool ManagerIdCardHasBeenSet() const;

                    /**
                     * 获取经办人身份证地址。
                     * @return ManagerAddress 经办人身份证地址。
                     * 
                     */
                    std::string GetManagerAddress() const;

                    /**
                     * 设置经办人身份证地址。
                     * @param _managerAddress 经办人身份证地址。
                     * 
                     */
                    void SetManagerAddress(const std::string& _managerAddress);

                    /**
                     * 判断参数 ManagerAddress 是否已赋值
                     * @return ManagerAddress 是否已赋值
                     * 
                     */
                    bool ManagerAddressHasBeenSet() const;

                    /**
                     * 获取经办人联系电话。
                     * @return ManagerTelephone 经办人联系电话。
                     * 
                     */
                    std::string GetManagerTelephone() const;

                    /**
                     * 设置经办人联系电话。
                     * @param _managerTelephone 经办人联系电话。
                     * 
                     */
                    void SetManagerTelephone(const std::string& _managerTelephone);

                    /**
                     * 判断参数 ManagerTelephone 是否已赋值
                     * @return ManagerTelephone 是否已赋值
                     * 
                     */
                    bool ManagerTelephoneHasBeenSet() const;

                    /**
                     * 获取电子邮箱。
                     * @return Email 电子邮箱。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮箱。
                     * @param _email 电子邮箱。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取服务受理单。
                     * @return ServiceHandlingForm 服务受理单。
                     * 
                     */
                    std::string GetServiceHandlingForm() const;

                    /**
                     * 设置服务受理单。
                     * @param _serviceHandlingForm 服务受理单。
                     * 
                     */
                    void SetServiceHandlingForm(const std::string& _serviceHandlingForm);

                    /**
                     * 判断参数 ServiceHandlingForm 是否已赋值
                     * @return ServiceHandlingForm 是否已赋值
                     * 
                     */
                    bool ServiceHandlingFormHasBeenSet() const;

                    /**
                     * 获取授权函。
                     * @return AuthorizationLetter 授权函。
                     * 
                     */
                    std::string GetAuthorizationLetter() const;

                    /**
                     * 设置授权函。
                     * @param _authorizationLetter 授权函。
                     * 
                     */
                    void SetAuthorizationLetter(const std::string& _authorizationLetter);

                    /**
                     * 判断参数 AuthorizationLetter 是否已赋值
                     * @return AuthorizationLetter 是否已赋值
                     * 
                     */
                    bool AuthorizationLetterHasBeenSet() const;

                    /**
                     * 获取信息安全承诺书。
                     * @return SafetyCommitment 信息安全承诺书。
                     * 
                     */
                    std::string GetSafetyCommitment() const;

                    /**
                     * 设置信息安全承诺书。
                     * @param _safetyCommitment 信息安全承诺书。
                     * 
                     */
                    void SetSafetyCommitment(const std::string& _safetyCommitment);

                    /**
                     * 判断参数 SafetyCommitment 是否已赋值
                     * @return SafetyCommitment 是否已赋值
                     * 
                     */
                    bool SafetyCommitmentHasBeenSet() const;

                    /**
                     * 获取服务开始时间。
                     * @return ServiceStartDate 服务开始时间。
                     * 
                     */
                    std::string GetServiceStartDate() const;

                    /**
                     * 设置服务开始时间。
                     * @param _serviceStartDate 服务开始时间。
                     * 
                     */
                    void SetServiceStartDate(const std::string& _serviceStartDate);

                    /**
                     * 判断参数 ServiceStartDate 是否已赋值
                     * @return ServiceStartDate 是否已赋值
                     * 
                     */
                    bool ServiceStartDateHasBeenSet() const;

                    /**
                     * 获取服务截止时间。
                     * @return ServiceEndDate 服务截止时间。
                     * 
                     */
                    std::string GetServiceEndDate() const;

                    /**
                     * 设置服务截止时间。
                     * @param _serviceEndDate 服务截止时间。
                     * 
                     */
                    void SetServiceEndDate(const std::string& _serviceEndDate);

                    /**
                     * 判断参数 ServiceEndDate 是否已赋值
                     * @return ServiceEndDate 是否已赋值
                     * 
                     */
                    bool ServiceEndDateHasBeenSet() const;

                    /**
                     * 获取状态。待审批：`PENDING`，已通过：`APPROVED`，已拒绝：`DENY`。
                     * @return State 状态。待审批：`PENDING`，已通过：`APPROVED`，已拒绝：`DENY`。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态。待审批：`PENDING`，已通过：`APPROVED`，已拒绝：`DENY`。
                     * @param _state 状态。待审批：`PENDING`，已通过：`APPROVED`，已拒绝：`DENY`。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取审批单创建时间。
                     * @return CreatedTime 审批单创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置审批单创建时间。
                     * @param _createdTime 审批单创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取法定代表人身份证号。
                     * @return LegalPersonId 法定代表人身份证号。
                     * 
                     */
                    std::string GetLegalPersonId() const;

                    /**
                     * 设置法定代表人身份证号。
                     * @param _legalPersonId 法定代表人身份证号。
                     * 
                     */
                    void SetLegalPersonId(const std::string& _legalPersonId);

                    /**
                     * 判断参数 LegalPersonId 是否已赋值
                     * @return LegalPersonId 是否已赋值
                     * 
                     */
                    bool LegalPersonIdHasBeenSet() const;

                    /**
                     * 获取法定代表人身份证。
                     * @return LegalPersonIdCard 法定代表人身份证。
                     * 
                     */
                    std::string GetLegalPersonIdCard() const;

                    /**
                     * 设置法定代表人身份证。
                     * @param _legalPersonIdCard 法定代表人身份证。
                     * 
                     */
                    void SetLegalPersonIdCard(const std::string& _legalPersonIdCard);

                    /**
                     * 判断参数 LegalPersonIdCard 是否已赋值
                     * @return LegalPersonIdCard 是否已赋值
                     * 
                     */
                    bool LegalPersonIdCardHasBeenSet() const;

                private:

                    /**
                     * 服务商，可选值：`UNICOM`。
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * 合规化审批单`ID`。
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 公司全称。
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * 统一社会信用代码。
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 法定代表人。
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                    /**
                     * 发证机关。
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * 营业执照。
                     */
                    std::string m_businessLicense;
                    bool m_businessLicenseHasBeenSet;

                    /**
                     * 营业执照住所。
                     */
                    std::string m_businessAddress;
                    bool m_businessAddressHasBeenSet;

                    /**
                     * 邮编。
                     */
                    uint64_t m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * 经办人。
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * 经办人身份证号。
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 经办人身份证。
                     */
                    std::string m_managerIdCard;
                    bool m_managerIdCardHasBeenSet;

                    /**
                     * 经办人身份证地址。
                     */
                    std::string m_managerAddress;
                    bool m_managerAddressHasBeenSet;

                    /**
                     * 经办人联系电话。
                     */
                    std::string m_managerTelephone;
                    bool m_managerTelephoneHasBeenSet;

                    /**
                     * 电子邮箱。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 服务受理单。
                     */
                    std::string m_serviceHandlingForm;
                    bool m_serviceHandlingFormHasBeenSet;

                    /**
                     * 授权函。
                     */
                    std::string m_authorizationLetter;
                    bool m_authorizationLetterHasBeenSet;

                    /**
                     * 信息安全承诺书。
                     */
                    std::string m_safetyCommitment;
                    bool m_safetyCommitmentHasBeenSet;

                    /**
                     * 服务开始时间。
                     */
                    std::string m_serviceStartDate;
                    bool m_serviceStartDateHasBeenSet;

                    /**
                     * 服务截止时间。
                     */
                    std::string m_serviceEndDate;
                    bool m_serviceEndDateHasBeenSet;

                    /**
                     * 状态。待审批：`PENDING`，已通过：`APPROVED`，已拒绝：`DENY`。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 审批单创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 法定代表人身份证号。
                     */
                    std::string m_legalPersonId;
                    bool m_legalPersonIdHasBeenSet;

                    /**
                     * 法定代表人身份证。
                     */
                    std::string m_legalPersonIdCard;
                    bool m_legalPersonIdCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CROSSBORDERCOMPLIANCE_H_
