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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCrossBorderCompliance请求参数结构体
                */
                class DescribeCrossBorderComplianceRequest : public AbstractModel
                {
                public:
                    DescribeCrossBorderComplianceRequest();
                    ~DescribeCrossBorderComplianceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取（精确匹配）服务商，可选值：`UNICOM`。
                     * @return ServiceProvider （精确匹配）服务商，可选值：`UNICOM`。
                     * 
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置（精确匹配）服务商，可选值：`UNICOM`。
                     * @param _serviceProvider （精确匹配）服务商，可选值：`UNICOM`。
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
                     * 获取（精确匹配）合规化审批单`ID`。
                     * @return ComplianceId （精确匹配）合规化审批单`ID`。
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置（精确匹配）合规化审批单`ID`。
                     * @param _complianceId （精确匹配）合规化审批单`ID`。
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
                     * 获取（模糊查询）公司名称。
                     * @return Company （模糊查询）公司名称。
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置（模糊查询）公司名称。
                     * @param _company （模糊查询）公司名称。
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
                     * 获取（精确匹配）统一社会信用代码。
                     * @return UniformSocialCreditCode （精确匹配）统一社会信用代码。
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置（精确匹配）统一社会信用代码。
                     * @param _uniformSocialCreditCode （精确匹配）统一社会信用代码。
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
                     * 获取（模糊查询）法定代表人。
                     * @return LegalPerson （模糊查询）法定代表人。
                     * 
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 设置（模糊查询）法定代表人。
                     * @param _legalPerson （模糊查询）法定代表人。
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
                     * 获取（精确查询）法人身份证号。
                     * @return LegalPersonId （精确查询）法人身份证号。
                     * 
                     */
                    std::string GetLegalPersonId() const;

                    /**
                     * 设置（精确查询）法人身份证号。
                     * @param _legalPersonId （精确查询）法人身份证号。
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
                     * 获取（模糊查询）发证机关。
                     * @return IssuingAuthority （模糊查询）发证机关。
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 设置（模糊查询）发证机关。
                     * @param _issuingAuthority （模糊查询）发证机关。
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
                     * 获取（模糊查询）营业执照住所。
                     * @return BusinessAddress （模糊查询）营业执照住所。
                     * 
                     */
                    std::string GetBusinessAddress() const;

                    /**
                     * 设置（模糊查询）营业执照住所。
                     * @param _businessAddress （模糊查询）营业执照住所。
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
                     * 获取（精确匹配）邮编。
                     * @return PostCode （精确匹配）邮编。
                     * 
                     */
                    uint64_t GetPostCode() const;

                    /**
                     * 设置（精确匹配）邮编。
                     * @param _postCode （精确匹配）邮编。
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
                     * 获取（模糊查询）经办人。
                     * @return Manager （模糊查询）经办人。
                     * 
                     */
                    std::string GetManager() const;

                    /**
                     * 设置（模糊查询）经办人。
                     * @param _manager （模糊查询）经办人。
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
                     * 获取（精确查询）经办人身份证号。
                     * @return ManagerId （精确查询）经办人身份证号。
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置（精确查询）经办人身份证号。
                     * @param _managerId （精确查询）经办人身份证号。
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
                     * 获取（模糊查询）经办人身份证地址。
                     * @return ManagerAddress （模糊查询）经办人身份证地址。
                     * 
                     */
                    std::string GetManagerAddress() const;

                    /**
                     * 设置（模糊查询）经办人身份证地址。
                     * @param _managerAddress （模糊查询）经办人身份证地址。
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
                     * 获取（精确匹配）经办人联系电话。
                     * @return ManagerTelephone （精确匹配）经办人联系电话。
                     * 
                     */
                    std::string GetManagerTelephone() const;

                    /**
                     * 设置（精确匹配）经办人联系电话。
                     * @param _managerTelephone （精确匹配）经办人联系电话。
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
                     * 获取（精确匹配）电子邮箱。
                     * @return Email （精确匹配）电子邮箱。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置（精确匹配）电子邮箱。
                     * @param _email （精确匹配）电子邮箱。
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
                     * 获取（精确匹配）服务开始日期，如：`2020-07-28`。
                     * @return ServiceStartDate （精确匹配）服务开始日期，如：`2020-07-28`。
                     * 
                     */
                    std::string GetServiceStartDate() const;

                    /**
                     * 设置（精确匹配）服务开始日期，如：`2020-07-28`。
                     * @param _serviceStartDate （精确匹配）服务开始日期，如：`2020-07-28`。
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
                     * 获取（精确匹配）服务结束日期，如：`2021-07-28`。
                     * @return ServiceEndDate （精确匹配）服务结束日期，如：`2021-07-28`。
                     * 
                     */
                    std::string GetServiceEndDate() const;

                    /**
                     * 设置（精确匹配）服务结束日期，如：`2021-07-28`。
                     * @param _serviceEndDate （精确匹配）服务结束日期，如：`2021-07-28`。
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
                     * 获取（精确匹配）状态。待审批：`PENDING`，通过：`APPROVED `，拒绝：`DENY`。
                     * @return State （精确匹配）状态。待审批：`PENDING`，通过：`APPROVED `，拒绝：`DENY`。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置（精确匹配）状态。待审批：`PENDING`，通过：`APPROVED `，拒绝：`DENY`。
                     * @param _state （精确匹配）状态。待审批：`PENDING`，通过：`APPROVED `，拒绝：`DENY`。
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量
                     * @return Limit 返回数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量
                     * @param _limit 返回数量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * （精确匹配）服务商，可选值：`UNICOM`。
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * （精确匹配）合规化审批单`ID`。
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * （模糊查询）公司名称。
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * （精确匹配）统一社会信用代码。
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * （模糊查询）法定代表人。
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                    /**
                     * （精确查询）法人身份证号。
                     */
                    std::string m_legalPersonId;
                    bool m_legalPersonIdHasBeenSet;

                    /**
                     * （模糊查询）发证机关。
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * （模糊查询）营业执照住所。
                     */
                    std::string m_businessAddress;
                    bool m_businessAddressHasBeenSet;

                    /**
                     * （精确匹配）邮编。
                     */
                    uint64_t m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * （模糊查询）经办人。
                     */
                    std::string m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * （精确查询）经办人身份证号。
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * （模糊查询）经办人身份证地址。
                     */
                    std::string m_managerAddress;
                    bool m_managerAddressHasBeenSet;

                    /**
                     * （精确匹配）经办人联系电话。
                     */
                    std::string m_managerTelephone;
                    bool m_managerTelephoneHasBeenSet;

                    /**
                     * （精确匹配）电子邮箱。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * （精确匹配）服务开始日期，如：`2020-07-28`。
                     */
                    std::string m_serviceStartDate;
                    bool m_serviceStartDateHasBeenSet;

                    /**
                     * （精确匹配）服务结束日期，如：`2021-07-28`。
                     */
                    std::string m_serviceEndDate;
                    bool m_serviceEndDateHasBeenSet;

                    /**
                     * （精确匹配）状态。待审批：`PENDING`，通过：`APPROVED `，拒绝：`DENY`。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERCOMPLIANCEREQUEST_H_
