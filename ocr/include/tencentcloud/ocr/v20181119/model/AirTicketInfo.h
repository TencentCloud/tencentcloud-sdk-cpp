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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_AIRTICKETINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_AIRTICKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/DetailInformationOfAirTicketTupleList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 航空运输电子客票行程单信息
                */
                class AirTicketInfo : public AbstractModel
                {
                public:
                    AirTicketInfo();
                    ~AirTicketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旅客姓名
                     * @return PassengerName 旅客姓名
                     * 
                     */
                    std::string GetPassengerName() const;

                    /**
                     * 设置旅客姓名
                     * @param _passengerName 旅客姓名
                     * 
                     */
                    void SetPassengerName(const std::string& _passengerName);

                    /**
                     * 判断参数 PassengerName 是否已赋值
                     * @return PassengerName 是否已赋值
                     * 
                     */
                    bool PassengerNameHasBeenSet() const;

                    /**
                     * 获取有效身份证件号码
                     * @return ValidIdNumber 有效身份证件号码
                     * 
                     */
                    std::string GetValidIdNumber() const;

                    /**
                     * 设置有效身份证件号码
                     * @param _validIdNumber 有效身份证件号码
                     * 
                     */
                    void SetValidIdNumber(const std::string& _validIdNumber);

                    /**
                     * 判断参数 ValidIdNumber 是否已赋值
                     * @return ValidIdNumber 是否已赋值
                     * 
                     */
                    bool ValidIdNumberHasBeenSet() const;

                    /**
                     * 获取签注
                     * @return Endorsement 签注
                     * 
                     */
                    std::string GetEndorsement() const;

                    /**
                     * 设置签注
                     * @param _endorsement 签注
                     * 
                     */
                    void SetEndorsement(const std::string& _endorsement);

                    /**
                     * 判断参数 Endorsement 是否已赋值
                     * @return Endorsement 是否已赋值
                     * 
                     */
                    bool EndorsementHasBeenSet() const;

                    /**
                     * 获取GP单号
                     * @return NumberOfGPOrder GP单号
                     * 
                     */
                    std::string GetNumberOfGPOrder() const;

                    /**
                     * 设置GP单号
                     * @param _numberOfGPOrder GP单号
                     * 
                     */
                    void SetNumberOfGPOrder(const std::string& _numberOfGPOrder);

                    /**
                     * 判断参数 NumberOfGPOrder 是否已赋值
                     * @return NumberOfGPOrder 是否已赋值
                     * 
                     */
                    bool NumberOfGPOrderHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return ElectronicInvoiceAirTransportReceiptNumber 发票号码
                     * 
                     */
                    std::string GetElectronicInvoiceAirTransportReceiptNumber() const;

                    /**
                     * 设置发票号码
                     * @param _electronicInvoiceAirTransportReceiptNumber 发票号码
                     * 
                     */
                    void SetElectronicInvoiceAirTransportReceiptNumber(const std::string& _electronicInvoiceAirTransportReceiptNumber);

                    /**
                     * 判断参数 ElectronicInvoiceAirTransportReceiptNumber 是否已赋值
                     * @return ElectronicInvoiceAirTransportReceiptNumber 是否已赋值
                     * 
                     */
                    bool ElectronicInvoiceAirTransportReceiptNumberHasBeenSet() const;

                    /**
                     * 获取机票详细信息元组
                     * @return DetailInformationOfAirTicketTuple 机票详细信息元组
                     * 
                     */
                    std::vector<DetailInformationOfAirTicketTupleList> GetDetailInformationOfAirTicketTuple() const;

                    /**
                     * 设置机票详细信息元组
                     * @param _detailInformationOfAirTicketTuple 机票详细信息元组
                     * 
                     */
                    void SetDetailInformationOfAirTicketTuple(const std::vector<DetailInformationOfAirTicketTupleList>& _detailInformationOfAirTicketTuple);

                    /**
                     * 判断参数 DetailInformationOfAirTicketTuple 是否已赋值
                     * @return DetailInformationOfAirTicketTuple 是否已赋值
                     * 
                     */
                    bool DetailInformationOfAirTicketTupleHasBeenSet() const;

                    /**
                     * 获取票价
                     * @return Fare 票价
                     * 
                     */
                    std::string GetFare() const;

                    /**
                     * 设置票价
                     * @param _fare 票价
                     * 
                     */
                    void SetFare(const std::string& _fare);

                    /**
                     * 判断参数 Fare 是否已赋值
                     * @return Fare 是否已赋值
                     * 
                     */
                    bool FareHasBeenSet() const;

                    /**
                     * 获取燃油附加费
                     * @return FuelSurcharge 燃油附加费
                     * 
                     */
                    std::string GetFuelSurcharge() const;

                    /**
                     * 设置燃油附加费
                     * @param _fuelSurcharge 燃油附加费
                     * 
                     */
                    void SetFuelSurcharge(const std::string& _fuelSurcharge);

                    /**
                     * 判断参数 FuelSurcharge 是否已赋值
                     * @return FuelSurcharge 是否已赋值
                     * 
                     */
                    bool FuelSurchargeHasBeenSet() const;

                    /**
                     * 获取增值税税率
                     * @return VatRate 增值税税率
                     * 
                     */
                    std::string GetVatRate() const;

                    /**
                     * 设置增值税税率
                     * @param _vatRate 增值税税率
                     * 
                     */
                    void SetVatRate(const std::string& _vatRate);

                    /**
                     * 判断参数 VatRate 是否已赋值
                     * @return VatRate 是否已赋值
                     * 
                     */
                    bool VatRateHasBeenSet() const;

                    /**
                     * 获取增值税税额
                     * @return VatTaxAmount 增值税税额
                     * 
                     */
                    std::string GetVatTaxAmount() const;

                    /**
                     * 设置增值税税额
                     * @param _vatTaxAmount 增值税税额
                     * 
                     */
                    void SetVatTaxAmount(const std::string& _vatTaxAmount);

                    /**
                     * 判断参数 VatTaxAmount 是否已赋值
                     * @return VatTaxAmount 是否已赋值
                     * 
                     */
                    bool VatTaxAmountHasBeenSet() const;

                    /**
                     * 获取民航发展基金
                     * @return CivilAviationDevelopmentFund 民航发展基金
                     * 
                     */
                    std::string GetCivilAviationDevelopmentFund() const;

                    /**
                     * 设置民航发展基金
                     * @param _civilAviationDevelopmentFund 民航发展基金
                     * 
                     */
                    void SetCivilAviationDevelopmentFund(const std::string& _civilAviationDevelopmentFund);

                    /**
                     * 判断参数 CivilAviationDevelopmentFund 是否已赋值
                     * @return CivilAviationDevelopmentFund 是否已赋值
                     * 
                     */
                    bool CivilAviationDevelopmentFundHasBeenSet() const;

                    /**
                     * 获取其他税费
                     * @return OtherTaxes 其他税费
                     * 
                     */
                    std::string GetOtherTaxes() const;

                    /**
                     * 设置其他税费
                     * @param _otherTaxes 其他税费
                     * 
                     */
                    void SetOtherTaxes(const std::string& _otherTaxes);

                    /**
                     * 判断参数 OtherTaxes 是否已赋值
                     * @return OtherTaxes 是否已赋值
                     * 
                     */
                    bool OtherTaxesHasBeenSet() const;

                    /**
                     * 获取合计
                     * @return TotalAmount 合计
                     * 
                     */
                    std::string GetTotalAmount() const;

                    /**
                     * 设置合计
                     * @param _totalAmount 合计
                     * 
                     */
                    void SetTotalAmount(const std::string& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取电子客票号码
                     * @return ElectronicTicketNum 电子客票号码
                     * 
                     */
                    std::string GetElectronicTicketNum() const;

                    /**
                     * 设置电子客票号码
                     * @param _electronicTicketNum 电子客票号码
                     * 
                     */
                    void SetElectronicTicketNum(const std::string& _electronicTicketNum);

                    /**
                     * 判断参数 ElectronicTicketNum 是否已赋值
                     * @return ElectronicTicketNum 是否已赋值
                     * 
                     */
                    bool ElectronicTicketNumHasBeenSet() const;

                    /**
                     * 获取验证码
                     * @return VerificationCode 验证码
                     * 
                     */
                    std::string GetVerificationCode() const;

                    /**
                     * 设置验证码
                     * @param _verificationCode 验证码
                     * 
                     */
                    void SetVerificationCode(const std::string& _verificationCode);

                    /**
                     * 判断参数 VerificationCode 是否已赋值
                     * @return VerificationCode 是否已赋值
                     * 
                     */
                    bool VerificationCodeHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return PromptInformation 提示信息
                     * 
                     */
                    std::string GetPromptInformation() const;

                    /**
                     * 设置提示信息
                     * @param _promptInformation 提示信息
                     * 
                     */
                    void SetPromptInformation(const std::string& _promptInformation);

                    /**
                     * 判断参数 PromptInformation 是否已赋值
                     * @return PromptInformation 是否已赋值
                     * 
                     */
                    bool PromptInformationHasBeenSet() const;

                    /**
                     * 获取保险费
                     * @return Insurance 保险费
                     * 
                     */
                    std::string GetInsurance() const;

                    /**
                     * 设置保险费
                     * @param _insurance 保险费
                     * 
                     */
                    void SetInsurance(const std::string& _insurance);

                    /**
                     * 判断参数 Insurance 是否已赋值
                     * @return Insurance 是否已赋值
                     * 
                     */
                    bool InsuranceHasBeenSet() const;

                    /**
                     * 获取销售网点代号
                     * @return AgentCode 销售网点代号
                     * 
                     */
                    std::string GetAgentCode() const;

                    /**
                     * 设置销售网点代号
                     * @param _agentCode 销售网点代号
                     * 
                     */
                    void SetAgentCode(const std::string& _agentCode);

                    /**
                     * 判断参数 AgentCode 是否已赋值
                     * @return AgentCode 是否已赋值
                     * 
                     */
                    bool AgentCodeHasBeenSet() const;

                    /**
                     * 获取填开单位
                     * @return IssueParty 填开单位
                     * 
                     */
                    std::string GetIssueParty() const;

                    /**
                     * 设置填开单位
                     * @param _issueParty 填开单位
                     * 
                     */
                    void SetIssueParty(const std::string& _issueParty);

                    /**
                     * 判断参数 IssueParty 是否已赋值
                     * @return IssueParty 是否已赋值
                     * 
                     */
                    bool IssuePartyHasBeenSet() const;

                    /**
                     * 获取填开时间
                     * @return IssueDate 填开时间
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置填开时间
                     * @param _issueDate 填开时间
                     * 
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取开具状态
                     * @return IssuingStatus 开具状态
                     * 
                     */
                    std::string GetIssuingStatus() const;

                    /**
                     * 设置开具状态
                     * @param _issuingStatus 开具状态
                     * 
                     */
                    void SetIssuingStatus(const std::string& _issuingStatus);

                    /**
                     * 判断参数 IssuingStatus 是否已赋值
                     * @return IssuingStatus 是否已赋值
                     * 
                     */
                    bool IssuingStatusHasBeenSet() const;

                    /**
                     * 获取国内国际标识
                     * @return MarkingOfDomesticOrInternational 国内国际标识
                     * 
                     */
                    std::string GetMarkingOfDomesticOrInternational() const;

                    /**
                     * 设置国内国际标识
                     * @param _markingOfDomesticOrInternational 国内国际标识
                     * 
                     */
                    void SetMarkingOfDomesticOrInternational(const std::string& _markingOfDomesticOrInternational);

                    /**
                     * 判断参数 MarkingOfDomesticOrInternational 是否已赋值
                     * @return MarkingOfDomesticOrInternational 是否已赋值
                     * 
                     */
                    bool MarkingOfDomesticOrInternationalHasBeenSet() const;

                    /**
                     * 获取购买方名称
                     * @return NameOfPurchaser 购买方名称
                     * 
                     */
                    std::string GetNameOfPurchaser() const;

                    /**
                     * 设置购买方名称
                     * @param _nameOfPurchaser 购买方名称
                     * 
                     */
                    void SetNameOfPurchaser(const std::string& _nameOfPurchaser);

                    /**
                     * 判断参数 NameOfPurchaser 是否已赋值
                     * @return NameOfPurchaser 是否已赋值
                     * 
                     */
                    bool NameOfPurchaserHasBeenSet() const;

                    /**
                     * 获取销售方名称
                     * @return NameOfSeller 销售方名称
                     * 
                     */
                    std::string GetNameOfSeller() const;

                    /**
                     * 设置销售方名称
                     * @param _nameOfSeller 销售方名称
                     * 
                     */
                    void SetNameOfSeller(const std::string& _nameOfSeller);

                    /**
                     * 判断参数 NameOfSeller 是否已赋值
                     * @return NameOfSeller 是否已赋值
                     * 
                     */
                    bool NameOfSellerHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return UnifiedSocialCreditCodeOfPurchaser 统一社会信用代码
                     * 
                     */
                    std::string GetUnifiedSocialCreditCodeOfPurchaser() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _unifiedSocialCreditCodeOfPurchaser 统一社会信用代码
                     * 
                     */
                    void SetUnifiedSocialCreditCodeOfPurchaser(const std::string& _unifiedSocialCreditCodeOfPurchaser);

                    /**
                     * 判断参数 UnifiedSocialCreditCodeOfPurchaser 是否已赋值
                     * @return UnifiedSocialCreditCodeOfPurchaser 是否已赋值
                     * 
                     */
                    bool UnifiedSocialCreditCodeOfPurchaserHasBeenSet() const;

                private:

                    /**
                     * 旅客姓名
                     */
                    std::string m_passengerName;
                    bool m_passengerNameHasBeenSet;

                    /**
                     * 有效身份证件号码
                     */
                    std::string m_validIdNumber;
                    bool m_validIdNumberHasBeenSet;

                    /**
                     * 签注
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * GP单号
                     */
                    std::string m_numberOfGPOrder;
                    bool m_numberOfGPOrderHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_electronicInvoiceAirTransportReceiptNumber;
                    bool m_electronicInvoiceAirTransportReceiptNumberHasBeenSet;

                    /**
                     * 机票详细信息元组
                     */
                    std::vector<DetailInformationOfAirTicketTupleList> m_detailInformationOfAirTicketTuple;
                    bool m_detailInformationOfAirTicketTupleHasBeenSet;

                    /**
                     * 票价
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * 燃油附加费
                     */
                    std::string m_fuelSurcharge;
                    bool m_fuelSurchargeHasBeenSet;

                    /**
                     * 增值税税率
                     */
                    std::string m_vatRate;
                    bool m_vatRateHasBeenSet;

                    /**
                     * 增值税税额
                     */
                    std::string m_vatTaxAmount;
                    bool m_vatTaxAmountHasBeenSet;

                    /**
                     * 民航发展基金
                     */
                    std::string m_civilAviationDevelopmentFund;
                    bool m_civilAviationDevelopmentFundHasBeenSet;

                    /**
                     * 其他税费
                     */
                    std::string m_otherTaxes;
                    bool m_otherTaxesHasBeenSet;

                    /**
                     * 合计
                     */
                    std::string m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 电子客票号码
                     */
                    std::string m_electronicTicketNum;
                    bool m_electronicTicketNumHasBeenSet;

                    /**
                     * 验证码
                     */
                    std::string m_verificationCode;
                    bool m_verificationCodeHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_promptInformation;
                    bool m_promptInformationHasBeenSet;

                    /**
                     * 保险费
                     */
                    std::string m_insurance;
                    bool m_insuranceHasBeenSet;

                    /**
                     * 销售网点代号
                     */
                    std::string m_agentCode;
                    bool m_agentCodeHasBeenSet;

                    /**
                     * 填开单位
                     */
                    std::string m_issueParty;
                    bool m_issuePartyHasBeenSet;

                    /**
                     * 填开时间
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 开具状态
                     */
                    std::string m_issuingStatus;
                    bool m_issuingStatusHasBeenSet;

                    /**
                     * 国内国际标识
                     */
                    std::string m_markingOfDomesticOrInternational;
                    bool m_markingOfDomesticOrInternationalHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_nameOfPurchaser;
                    bool m_nameOfPurchaserHasBeenSet;

                    /**
                     * 销售方名称
                     */
                    std::string m_nameOfSeller;
                    bool m_nameOfSellerHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_unifiedSocialCreditCodeOfPurchaser;
                    bool m_unifiedSocialCreditCodeOfPurchaserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_AIRTICKETINFO_H_
