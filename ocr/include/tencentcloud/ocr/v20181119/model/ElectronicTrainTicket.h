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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKET_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 全电发票（铁路电子客票）
                */
                class ElectronicTrainTicket : public AbstractModel
                {
                public:
                    ElectronicTrainTicket();
                    ~ElectronicTrainTicket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取价税合计（中文大写）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCN 价税合计（中文大写）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalCN() const;

                    /**
                     * 设置价税合计（中文大写）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCN 价税合计（中文大写）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCN(const std::string& _totalCN);

                    /**
                     * 判断参数 TotalCN 是否已赋值
                     * @return TotalCN 是否已赋值
                     * 
                     */
                    bool TotalCNHasBeenSet() const;

                    /**
                     * 获取税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tax 税额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tax 税额
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
                     * 获取业务类型，0：退票，1:售票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 业务类型，0：退票，1:售票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务类型，0：退票，1:售票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType 业务类型，0：退票，1:售票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取出发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeGetOn 出发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置出发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeGetOn 出发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeGetOn(const std::string& _timeGetOn);

                    /**
                     * 判断参数 TimeGetOn 是否已赋值
                     * @return TimeGetOn 是否已赋值
                     * 
                     */
                    bool TimeGetOnHasBeenSet() const;

                    /**
                     * 获取车次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainNumber 车次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainNumber() const;

                    /**
                     * 设置车次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainNumber 车次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainNumber(const std::string& _trainNumber);

                    /**
                     * 判断参数 TrainNumber 是否已赋值
                     * @return TrainNumber 是否已赋值
                     * 
                     */
                    bool TrainNumberHasBeenSet() const;

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
                     * 获取席别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeatType 席别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeatType() const;

                    /**
                     * 设置席别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seatType 席别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeatType(const std::string& _seatType);

                    /**
                     * 判断参数 SeatType 是否已赋值
                     * @return SeatType 是否已赋值
                     * 
                     */
                    bool SeatTypeHasBeenSet() const;

                    /**
                     * 获取乘车日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DateGetOn 乘车日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDateGetOn() const;

                    /**
                     * 设置乘车日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dateGetOn 乘车日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDateGetOn(const std::string& _dateGetOn);

                    /**
                     * 判断参数 DateGetOn 是否已赋值
                     * @return DateGetOn 是否已赋值
                     * 
                     */
                    bool DateGetOnHasBeenSet() const;

                    /**
                     * 获取车厢
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainCabin 车厢
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainCabin() const;

                    /**
                     * 设置车厢
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainCabin 车厢
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainCabin(const std::string& _trainCabin);

                    /**
                     * 判断参数 TrainCabin 是否已赋值
                     * @return TrainCabin 是否已赋值
                     * 
                     */
                    bool TrainCabinHasBeenSet() const;

                    /**
                     * 获取出发站
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOn 出发站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置出发站
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOn 出发站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStationGetOn(const std::string& _stationGetOn);

                    /**
                     * 判断参数 StationGetOn 是否已赋值
                     * @return StationGetOn 是否已赋值
                     * 
                     */
                    bool StationGetOnHasBeenSet() const;

                    /**
                     * 获取电子客票号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicNumber 电子客票号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElectronicNumber() const;

                    /**
                     * 设置电子客票号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicNumber 电子客票号
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
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerName 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerName() const;

                    /**
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerName 姓名
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
                     * 获取证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerNo 证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerNo() const;

                    /**
                     * 设置证件号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerNo 证件号
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
                     * 获取到达站
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOff 到达站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置到达站
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOff 到达站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStationGetOff(const std::string& _stationGetOff);

                    /**
                     * 判断参数 StationGetOff 是否已赋值
                     * @return StationGetOff 是否已赋值
                     * 
                     */
                    bool StationGetOffHasBeenSet() const;

                    /**
                     * 获取税率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxRate 税率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置税率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxRate 税率
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取席位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seat 席位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置席位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seat 席位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeat(const std::string& _seat);

                    /**
                     * 判断参数 Seat 是否已赋值
                     * @return Seat 是否已赋值
                     * 
                     */
                    bool SeatHasBeenSet() const;

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

                private:

                    /**
                     * 购方名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * 购方识别号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

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
                     * 价税合计（中文大写）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCN;
                    bool m_totalCNHasBeenSet;

                    /**
                     * 税额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 业务类型，0：退票，1:售票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 出发时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 车次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * 发票代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 席别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seatType;
                    bool m_seatTypeHasBeenSet;

                    /**
                     * 乘车日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * 车厢
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainCabin;
                    bool m_trainCabinHasBeenSet;

                    /**
                     * 出发站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * 电子客票号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_electronicNumber;
                    bool m_electronicNumberHasBeenSet;

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerName;
                    bool m_passengerNameHasBeenSet;

                    /**
                     * 证件号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerNo;
                    bool m_passengerNoHasBeenSet;

                    /**
                     * 金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 到达站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * 税率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 席位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 价税合计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 校验码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * 发票状态代码，0正常 1 未更新  2作废 3已红冲
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKET_H_
