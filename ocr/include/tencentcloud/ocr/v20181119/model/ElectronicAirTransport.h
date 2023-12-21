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
                     * 获取发票代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 发票代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 发票代码
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
                     * 获取发票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number 发票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number 发票号码
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
                     * 获取开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date 开票日期
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
                     * 获取金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Amount 金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amount 金额
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
                     * 获取校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckCode 校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckCode() const;

                    /**
                     * 设置校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkCode 校验码
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
                     * 获取价税合计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 价税合计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 价税合计
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
                     * 获取抵扣标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductionMark 抵扣标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductionMark() const;

                    /**
                     * 设置抵扣标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductionMark 抵扣标志
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
                     * 获取发票状态代码，0正常 1 未更新  2作废 3已红冲
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateCode 发票状态代码，0正常 1 未更新  2作废 3已红冲
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateCode() const;

                    /**
                     * 设置发票状态代码，0正常 1 未更新  2作废 3已红冲
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateCode 发票状态代码，0正常 1 未更新  2作废 3已红冲
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
                     * 获取购方识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyerTaxCode 购方识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyerTaxCode() const;

                    /**
                     * 设置购方识别号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyerTaxCode 购方识别号
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
                     * 获取购方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyerName 购方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuyerName() const;

                    /**
                     * 设置购方名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyerName 购方名称
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
                     * 获取合计税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tax 合计税额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置合计税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tax 合计税额
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
                     * 获取国内国际标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomesticInternationalMark 国内国际标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomesticInternationalMark() const;

                    /**
                     * 设置国内国际标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domesticInternationalMark 国内国际标识
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
                     * 获取旅客姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerName 旅客姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerName() const;

                    /**
                     * 设置旅客姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerName 旅客姓名
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
                     * 获取有效身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerNo 有效身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerNo() const;

                    /**
                     * 设置有效身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerNo 有效身份证件号码
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
                     * 获取电子客票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicNumber 电子客票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElectronicNumber() const;

                    /**
                     * 设置电子客票号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicNumber 电子客票号码
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
                     * 获取全电发票（航空运输电子客票行程单）详细信息


注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicAirTransportDetails 全电发票（航空运输电子客票行程单）详细信息


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ElectronicAirTransportDetail> GetElectronicAirTransportDetails() const;

                    /**
                     * 设置全电发票（航空运输电子客票行程单）详细信息


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicAirTransportDetails 全电发票（航空运输电子客票行程单）详细信息


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

                private:

                    /**
                     * 发票代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 开票日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 校验码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 价税合计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 抵扣标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductionMark;
                    bool m_deductionMarkHasBeenSet;

                    /**
                     * 发票状态代码，0正常 1 未更新  2作废 3已红冲
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     * 购方识别号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

                    /**
                     * 购方名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * 合计税额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 国内国际标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domesticInternationalMark;
                    bool m_domesticInternationalMarkHasBeenSet;

                    /**
                     * 旅客姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerName;
                    bool m_passengerNameHasBeenSet;

                    /**
                     * 有效身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerNo;
                    bool m_passengerNoHasBeenSet;

                    /**
                     * 电子客票号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_electronicNumber;
                    bool m_electronicNumberHasBeenSet;

                    /**
                     * 全电发票（航空运输电子客票行程单）详细信息


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ElectronicAirTransportDetail> m_electronicAirTransportDetails;
                    bool m_electronicAirTransportDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICAIRTRANSPORT_H_
