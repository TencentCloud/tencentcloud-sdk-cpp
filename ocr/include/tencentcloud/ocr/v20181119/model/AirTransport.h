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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FlightItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 机票行程单
                */
                class AirTransport : public AbstractModel
                {
                public:
                    AirTransport();
                    ~AirTransport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param _title 发票名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取电子客票号码
                     * @return Number 电子客票号码
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置电子客票号码
                     * @param _number 电子客票号码
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
                     * 获取校验码
                     * @return CheckCode 校验码
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码
                     * @param _checkCode 校验码
                     * 
                     */
                    void SetCheckCode(const std::string& _checkCode);

                    /**
                     * 判断参数 CheckCode 是否已赋值
                     * @return CheckCode 是否已赋值
                     * 
                     */
                    bool CheckCodeHasBeenSet() const;

                    /**
                     * 获取印刷序号
                     * @return SerialNumber 印刷序号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置印刷序号
                     * @param _serialNumber 印刷序号
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return Date 开票日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param _date 开票日期
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
                     * 获取销售单位代号
                     * @return AgentCode 销售单位代号
                     * 
                     */
                    std::string GetAgentCode() const;

                    /**
                     * 设置销售单位代号
                     * @param _agentCode 销售单位代号
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
                     * 获取销售单位代号第一行
                     * @return AgentCodeFirst 销售单位代号第一行
                     * 
                     */
                    std::string GetAgentCodeFirst() const;

                    /**
                     * 设置销售单位代号第一行
                     * @param _agentCodeFirst 销售单位代号第一行
                     * 
                     */
                    void SetAgentCodeFirst(const std::string& _agentCodeFirst);

                    /**
                     * 判断参数 AgentCodeFirst 是否已赋值
                     * @return AgentCodeFirst 是否已赋值
                     * 
                     */
                    bool AgentCodeFirstHasBeenSet() const;

                    /**
                     * 获取销售单位代号第二行
                     * @return AgentCodeSecond 销售单位代号第二行
                     * 
                     */
                    std::string GetAgentCodeSecond() const;

                    /**
                     * 设置销售单位代号第二行
                     * @param _agentCodeSecond 销售单位代号第二行
                     * 
                     */
                    void SetAgentCodeSecond(const std::string& _agentCodeSecond);

                    /**
                     * 判断参数 AgentCodeSecond 是否已赋值
                     * @return AgentCodeSecond 是否已赋值
                     * 
                     */
                    bool AgentCodeSecondHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return UserName 姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置姓名
                     * @param _userName 姓名
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
                     * 获取身份证号
                     * @return UserID 身份证号
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置身份证号
                     * @param _userID 身份证号
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
                     * 获取合计税额
                     * @return Tax 合计税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置合计税额
                     * @param _tax 合计税额
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
                     * 获取民航发展基金
                     * @return AirDevelopmentFund 民航发展基金
                     * 
                     */
                    std::string GetAirDevelopmentFund() const;

                    /**
                     * 设置民航发展基金
                     * @param _airDevelopmentFund 民航发展基金
                     * 
                     */
                    void SetAirDevelopmentFund(const std::string& _airDevelopmentFund);

                    /**
                     * 判断参数 AirDevelopmentFund 是否已赋值
                     * @return AirDevelopmentFund 是否已赋值
                     * 
                     */
                    bool AirDevelopmentFundHasBeenSet() const;

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
                     * 获取合计金额（小写）
                     * @return Total 合计金额（小写）
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置合计金额（小写）
                     * @param _total 合计金额（小写）
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
                     * 获取发票消费类型
                     * @return Kind 发票消费类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置发票消费类型
                     * @param _kind 发票消费类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取国内国际标签
                     * @return DomesticInternationalTag 国内国际标签
                     * 
                     */
                    std::string GetDomesticInternationalTag() const;

                    /**
                     * 设置国内国际标签
                     * @param _domesticInternationalTag 国内国际标签
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
                     * 获取客票生效日期
                     * @return DateStart 客票生效日期
                     * 
                     */
                    std::string GetDateStart() const;

                    /**
                     * 设置客票生效日期
                     * @param _dateStart 客票生效日期
                     * 
                     */
                    void SetDateStart(const std::string& _dateStart);

                    /**
                     * 判断参数 DateStart 是否已赋值
                     * @return DateStart 是否已赋值
                     * 
                     */
                    bool DateStartHasBeenSet() const;

                    /**
                     * 获取有效截止日期
                     * @return DateEnd 有效截止日期
                     * 
                     */
                    std::string GetDateEnd() const;

                    /**
                     * 设置有效截止日期
                     * @param _dateEnd 有效截止日期
                     * 
                     */
                    void SetDateEnd(const std::string& _dateEnd);

                    /**
                     * 判断参数 DateEnd 是否已赋值
                     * @return DateEnd 是否已赋值
                     * 
                     */
                    bool DateEndHasBeenSet() const;

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
                     * 获取是否存在二维码（1：有，0：无）
                     * @return QRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（1：有，0：无）
                     * @param _qRCodeMark 是否存在二维码（1：有，0：无）
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                    /**
                     * 获取条目
                     * @return FlightItems 条目
                     * 
                     */
                    std::vector<FlightItem> GetFlightItems() const;

                    /**
                     * 设置条目
                     * @param _flightItems 条目
                     * 
                     */
                    void SetFlightItems(const std::vector<FlightItem>& _flightItems);

                    /**
                     * 判断参数 FlightItems 是否已赋值
                     * @return FlightItems 是否已赋值
                     * 
                     */
                    bool FlightItemsHasBeenSet() const;

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
                     * 获取统一社会信用代码/纳税人识别号
                     * @return BuyerTaxID 统一社会信用代码/纳税人识别号
                     * 
                     */
                    std::string GetBuyerTaxID() const;

                    /**
                     * 设置统一社会信用代码/纳税人识别号
                     * @param _buyerTaxID 统一社会信用代码/纳税人识别号
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
                     * 获取发票号码
                     * @return ReceiptNumber 发票号码
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 设置发票号码
                     * @param _receiptNumber 发票号码
                     * 
                     */
                    void SetReceiptNumber(const std::string& _receiptNumber);

                    /**
                     * 判断参数 ReceiptNumber 是否已赋值
                     * @return ReceiptNumber 是否已赋值
                     * 
                     */
                    bool ReceiptNumberHasBeenSet() const;

                    /**
                     * 获取开票状态
                     * @return InvoiceStatus 开票状态
                     * 
                     */
                    std::string GetInvoiceStatus() const;

                    /**
                     * 设置开票状态
                     * @param _invoiceStatus 开票状态
                     * 
                     */
                    void SetInvoiceStatus(const std::string& _invoiceStatus);

                    /**
                     * 判断参数 InvoiceStatus 是否已赋值
                     * @return InvoiceStatus 是否已赋值
                     * 
                     */
                    bool InvoiceStatusHasBeenSet() const;

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
                     * @return TaxAmount 增值税税额
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置增值税税额
                     * @param _taxAmount 增值税税额
                     * 
                     */
                    void SetTaxAmount(const std::string& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     * 
                     */
                    bool TaxAmountHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 电子客票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 校验码
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 印刷序号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 销售单位代号
                     */
                    std::string m_agentCode;
                    bool m_agentCodeHasBeenSet;

                    /**
                     * 销售单位代号第一行
                     */
                    std::string m_agentCodeFirst;
                    bool m_agentCodeFirstHasBeenSet;

                    /**
                     * 销售单位代号第二行
                     */
                    std::string m_agentCodeSecond;
                    bool m_agentCodeSecondHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 填开单位
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 票价
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * 合计税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 燃油附加费
                     */
                    std::string m_fuelSurcharge;
                    bool m_fuelSurchargeHasBeenSet;

                    /**
                     * 民航发展基金
                     */
                    std::string m_airDevelopmentFund;
                    bool m_airDevelopmentFundHasBeenSet;

                    /**
                     * 保险费
                     */
                    std::string m_insurance;
                    bool m_insuranceHasBeenSet;

                    /**
                     * 合计金额（小写）
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 国内国际标签
                     */
                    std::string m_domesticInternationalTag;
                    bool m_domesticInternationalTagHasBeenSet;

                    /**
                     * 客票生效日期
                     */
                    std::string m_dateStart;
                    bool m_dateStartHasBeenSet;

                    /**
                     * 有效截止日期
                     */
                    std::string m_dateEnd;
                    bool m_dateEndHasBeenSet;

                    /**
                     * 签注
                     */
                    std::string m_endorsement;
                    bool m_endorsementHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 条目
                     */
                    std::vector<FlightItem> m_flightItems;
                    bool m_flightItemsHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_promptInformation;
                    bool m_promptInformationHasBeenSet;

                    /**
                     * 统一社会信用代码/纳税人识别号
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                    /**
                     * 开票状态
                     */
                    std::string m_invoiceStatus;
                    bool m_invoiceStatusHasBeenSet;

                    /**
                     * 增值税税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 增值税税额
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_AIRTRANSPORT_H_
