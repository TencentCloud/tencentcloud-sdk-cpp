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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICFLIGHTTICKETFULL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICFLIGHTTICKETFULL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FlightItemInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 电子发票（机票行程单）
                */
                class ElectronicFlightTicketFull : public AbstractModel
                {
                public:
                    ElectronicFlightTicketFull();
                    ~ElectronicFlightTicketFull() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旅客姓名
                     * @return UserName 旅客姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置旅客姓名
                     * @param _userName 旅客姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取有效身份证件号码
                     * @return UserID 有效身份证件号码
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置有效身份证件号码
                     * @param _userID 有效身份证件号码
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

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
                     * @return GPOrder GP单号
                     * 
                     */
                    std::string GetGPOrder() const;

                    /**
                     * 设置GP单号
                     * @param _gPOrder GP单号
                     * 
                     */
                    void SetGPOrder(const std::string& _gPOrder);

                    /**
                     * 判断参数 GPOrder 是否已赋值
                     * @return GPOrder 是否已赋值
                     * 
                     */
                    bool GPOrderHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return Number 发票号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param _number 发票号码
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

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
                     * @return TaxRate 增值税税率
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置增值税税率
                     * @param _taxRate 增值税税率
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取增值税税额
                     * @return Tax 增值税税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置增值税税额
                     * @param _tax 增值税税额
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取民航发展基金
                     * @return DevelopmentFund 民航发展基金
                     * 
                     */
                    std::string GetDevelopmentFund() const;

                    /**
                     * 设置民航发展基金
                     * @param _developmentFund 民航发展基金
                     * 
                     */
                    void SetDevelopmentFund(const std::string& _developmentFund);

                    /**
                     * 判断参数 DevelopmentFund 是否已赋值
                     * @return DevelopmentFund 是否已赋值
                     * 
                     */
                    bool DevelopmentFundHasBeenSet() const;

                    /**
                     * 获取其他税费
                     * @return OtherTax 其他税费
                     * 
                     */
                    std::string GetOtherTax() const;

                    /**
                     * 设置其他税费
                     * @param _otherTax 其他税费
                     * 
                     */
                    void SetOtherTax(const std::string& _otherTax);

                    /**
                     * 判断参数 OtherTax 是否已赋值
                     * @return OtherTax 是否已赋值
                     * 
                     */
                    bool OtherTaxHasBeenSet() const;

                    /**
                     * 获取合计
                     * @return Total 合计
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置合计
                     * @param _total 合计
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

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
                     * 获取填开单位
                     * @return Issuer 填开单位
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置填开单位
                     * @param _issuer 填开单位
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取填开时间
                     * @return Date 填开时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置填开时间
                     * @param _date 填开时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取国内国际标识
                     * @return DomesticInternationalTag 国内国际标识
                     * 
                     */
                    std::string GetDomesticInternationalTag() const;

                    /**
                     * 设置国内国际标识
                     * @param _domesticInternationalTag 国内国际标识
                     * 
                     */
                    void SetDomesticInternationalTag(const std::string& _domesticInternationalTag);

                    /**
                     * 判断参数 DomesticInternationalTag 是否已赋值
                     * @return DomesticInternationalTag 是否已赋值
                     * 
                     */
                    bool DomesticInternationalTagHasBeenSet() const;

                    /**
                     * 获取购买方名称
                     * @return Buyer 购买方名称
                     * 
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置购买方名称
                     * @param _buyer 购买方名称
                     * 
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     * 
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取销售方名称
                     * @return Seller 销售方名称
                     * 
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置销售方名称
                     * @param _seller 销售方名称
                     * 
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     * 
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return BuyerTaxID 统一社会信用代码
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _buyerTaxID 统一社会信用代码
                     * 
                     */
                    void SetBuyerTaxID(const std::string& _buyerTaxID);

                    /**
                     * 判断参数 BuyerTaxID 是否已赋值
                     * @return BuyerTaxID 是否已赋值
                     * 
                     */
                    bool BuyerTaxIDHasBeenSet() const;

                    /**
                     * 获取机票详细信息元组
                     * @return FlightItems 机票详细信息元组
                     * 
                     */
                    std::vector<FlightItemInfo> GetFlightItems() const;

                    /**
                     * 设置机票详细信息元组
                     * @param _flightItems 机票详细信息元组
                     * 
                     */
                    void SetFlightItems(const std::vector<FlightItemInfo>& _flightItems);

                    /**
                     * 判断参数 FlightItems 是否已赋值
                     * @return FlightItems 是否已赋值
                     * 
                     */
                    bool FlightItemsHasBeenSet() const;

                    /**
                     * 获取机票开具状态
                     * @return InvoiceStatus 机票开具状态
                     * 
                     */
                    std::string GetInvoiceStatus() const;

                    /**
                     * 设置机票开具状态
                     * @param _invoiceStatus 机票开具状态
                     * 
                     */
                    void SetInvoiceStatus(const std::string& _invoiceStatus);

                    /**
                     * 判断参数 InvoiceStatus 是否已赋值
                     * @return InvoiceStatus 是否已赋值
                     * 
                     */
                    bool InvoiceStatusHasBeenSet() const;

                private:

                    /**
                     * 旅客姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 有效身份证件号码
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 签注
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * GP单号
                     */
                    std::string m_gPOrder;
                    bool m_gPOrderHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

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
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 增值税税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 民航发展基金
                     */
                    std::string m_developmentFund;
                    bool m_developmentFundHasBeenSet;

                    /**
                     * 其他税费
                     */
                    std::string m_otherTax;
                    bool m_otherTaxHasBeenSet;

                    /**
                     * 合计
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

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
                     * 填开单位
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 填开时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 国内国际标识
                     */
                    std::string m_domesticInternationalTag;
                    bool m_domesticInternationalTagHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 销售方名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 机票详细信息元组
                     */
                    std::vector<FlightItemInfo> m_flightItems;
                    bool m_flightItemsHasBeenSet;

                    /**
                     * 机票开具状态
                     */
                    std::string m_invoiceStatus;
                    bool m_invoiceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICFLIGHTTICKETFULL_H_
