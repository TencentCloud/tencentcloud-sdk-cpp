/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ElectronicAirTransportDetail.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 全电发票（航空运输电子客票行程单）
                */
                class ElectronicAirTransport : public AbstractModel
                {
                public:
                    ElectronicAirTransport();
                    ~ElectronicAirTransport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code <p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code <p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number <p>发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number <p>发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date <p>开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date <p>开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Amount <p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置<p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amount <p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取<p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckCode <p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置<p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkCode <p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置<p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>抵扣标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductionMark <p>抵扣标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductionMark() const;

                    /**
                     * 设置<p>抵扣标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductionMark <p>抵扣标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductionMark(const std::string& _deductionMark);

                    /**
                     * 判断参数 DeductionMark 是否已赋值
                     * @return DeductionMark 是否已赋值
                     * 
                     */
                    bool DeductionMarkHasBeenSet() const;

                    /**
                     * 获取<p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateCode <p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateCode() const;

                    /**
                     * 设置<p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateCode <p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateCode(const std::string& _stateCode);

                    /**
                     * 判断参数 StateCode 是否已赋值
                     * @return StateCode 是否已赋值
                     * 
                     */
                    bool StateCodeHasBeenSet() const;

                    /**
                     * 获取<p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyerTaxCode <p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyerTaxCode() const;

                    /**
                     * 设置<p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyerTaxCode <p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuyerTaxCode(const std::string& _buyerTaxCode);

                    /**
                     * 判断参数 BuyerTaxCode 是否已赋值
                     * @return BuyerTaxCode 是否已赋值
                     * 
                     */
                    bool BuyerTaxCodeHasBeenSet() const;

                    /**
                     * 获取<p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyerName <p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyerName() const;

                    /**
                     * 设置<p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyerName <p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuyerName(const std::string& _buyerName);

                    /**
                     * 判断参数 BuyerName 是否已赋值
                     * @return BuyerName 是否已赋值
                     * 
                     */
                    bool BuyerNameHasBeenSet() const;

                    /**
                     * 获取<p>合计税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tax <p>合计税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置<p>合计税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tax <p>合计税额</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>国内国际标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomesticInternationalMark <p>国内国际标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomesticInternationalMark() const;

                    /**
                     * 设置<p>国内国际标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domesticInternationalMark <p>国内国际标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomesticInternationalMark(const std::string& _domesticInternationalMark);

                    /**
                     * 判断参数 DomesticInternationalMark 是否已赋值
                     * @return DomesticInternationalMark 是否已赋值
                     * 
                     */
                    bool DomesticInternationalMarkHasBeenSet() const;

                    /**
                     * 获取<p>旅客姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerName <p>旅客姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerName() const;

                    /**
                     * 设置<p>旅客姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerName <p>旅客姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>有效身份证件号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerNo <p>有效身份证件号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerNo() const;

                    /**
                     * 设置<p>有效身份证件号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerNo <p>有效身份证件号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassengerNo(const std::string& _passengerNo);

                    /**
                     * 判断参数 PassengerNo 是否已赋值
                     * @return PassengerNo 是否已赋值
                     * 
                     */
                    bool PassengerNoHasBeenSet() const;

                    /**
                     * 获取<p>电子客票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicNumber <p>电子客票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElectronicNumber() const;

                    /**
                     * 设置<p>电子客票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicNumber <p>电子客票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElectronicNumber(const std::string& _electronicNumber);

                    /**
                     * 判断参数 ElectronicNumber 是否已赋值
                     * @return ElectronicNumber 是否已赋值
                     * 
                     */
                    bool ElectronicNumberHasBeenSet() const;

                    /**
                     * 获取<p>全电发票（航空运输电子客票行程单）详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicAirTransportDetails <p>全电发票（航空运输电子客票行程单）详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ElectronicAirTransportDetail> GetElectronicAirTransportDetails() const;

                    /**
                     * 设置<p>全电发票（航空运输电子客票行程单）详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicAirTransportDetails <p>全电发票（航空运输电子客票行程单）详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElectronicAirTransportDetails(const std::vector<ElectronicAirTransportDetail>& _electronicAirTransportDetails);

                    /**
                     * 判断参数 ElectronicAirTransportDetails 是否已赋值
                     * @return ElectronicAirTransportDetails 是否已赋值
                     * 
                     */
                    bool ElectronicAirTransportDetailsHasBeenSet() const;

                    /**
                     * 获取<p>票价</p>
                     * @return Fare <p>票价</p>
                     * 
                     */
                    std::string GetFare() const;

                    /**
                     * 设置<p>票价</p>
                     * @param _fare <p>票价</p>
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
                     * 获取<p>燃油附加费</p>
                     * @return FuelSurcharge <p>燃油附加费</p>
                     * 
                     */
                    std::string GetFuelSurcharge() const;

                    /**
                     * 设置<p>燃油附加费</p>
                     * @param _fuelSurcharge <p>燃油附加费</p>
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
                     * 获取<p>增值税税额</p>
                     * @return TaxAmount <p>增值税税额</p>
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置<p>增值税税额</p>
                     * @param _taxAmount <p>增值税税额</p>
                     * 
                     */
                    void SetTaxAmount(const std::string& _taxAmount);

                    /**
                     * 判断参数 TaxAmount 是否已赋值
                     * @return TaxAmount 是否已赋值
                     * 
                     */
                    bool TaxAmountHasBeenSet() const;

                    /**
                     * 获取<p>民航发展基金</p>
                     * @return DevelopmentFund <p>民航发展基金</p>
                     * 
                     */
                    std::string GetDevelopmentFund() const;

                    /**
                     * 设置<p>民航发展基金</p>
                     * @param _developmentFund <p>民航发展基金</p>
                     * 
                     */
                    void SetDevelopmentFund(const std::string& _developmentFund);

                    /**
                     * 判断参数 DevelopmentFund 是否已赋值
                     * @return DevelopmentFund 是否已赋值
                     * 
                     */
                    bool DevelopmentFundHasBeenSet() const;

                private:

                    /**
                     * <p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>发票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>开票日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * <p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>抵扣标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductionMark;
                    bool m_deductionMarkHasBeenSet;

                    /**
                     * <p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     * <p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

                    /**
                     * <p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * <p>合计税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * <p>国内国际标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domesticInternationalMark;
                    bool m_domesticInternationalMarkHasBeenSet;

                    /**
                     * <p>旅客姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerName;
                    bool m_passengerNameHasBeenSet;

                    /**
                     * <p>有效身份证件号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerNo;
                    bool m_passengerNoHasBeenSet;

                    /**
                     * <p>电子客票号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_electronicNumber;
                    bool m_electronicNumberHasBeenSet;

                    /**
                     * <p>全电发票（航空运输电子客票行程单）详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ElectronicAirTransportDetail> m_electronicAirTransportDetails;
                    bool m_electronicAirTransportDetailsHasBeenSet;

                    /**
                     * <p>票价</p>
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * <p>燃油附加费</p>
                     */
                    std::string m_fuelSurcharge;
                    bool m_fuelSurchargeHasBeenSet;

                    /**
                     * <p>增值税税额</p>
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * <p>民航发展基金</p>
                     */
                    std::string m_developmentFund;
                    bool m_developmentFundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORT_H_
