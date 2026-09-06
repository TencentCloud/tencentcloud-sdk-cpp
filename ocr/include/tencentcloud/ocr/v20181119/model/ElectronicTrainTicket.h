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
                     * 获取<p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCN <p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalCN() const;

                    /**
                     * 设置<p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCN <p>价税合计（中文大写）</p>
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
                     * 获取<p>税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tax <p>税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置<p>税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tax <p>税额</p>
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
                     * 获取<p>业务类型，0：退票，1:售票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType <p>业务类型，0：退票，1:售票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>业务类型，0：退票，1:售票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType <p>业务类型，0：退票，1:售票</p>
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
                     * 获取<p>出发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeGetOn <p>出发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置<p>出发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeGetOn <p>出发时间</p>
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
                     * 获取<p>车次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainNumber <p>车次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainNumber() const;

                    /**
                     * 设置<p>车次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainNumber <p>车次</p>
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
                     * 获取<p>席别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeatType <p>席别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeatType() const;

                    /**
                     * 设置<p>席别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seatType <p>席别</p>
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
                     * 获取<p>乘车日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DateGetOn <p>乘车日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDateGetOn() const;

                    /**
                     * 设置<p>乘车日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dateGetOn <p>乘车日期</p>
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
                     * 获取<p>车厢</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainCabin <p>车厢</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainCabin() const;

                    /**
                     * 设置<p>车厢</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainCabin <p>车厢</p>
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
                     * 获取<p>出发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOn <p>出发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置<p>出发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOn <p>出发站</p>
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
                     * 获取<p>电子客票号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElectronicNumber <p>电子客票号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElectronicNumber() const;

                    /**
                     * 设置<p>电子客票号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electronicNumber <p>电子客票号</p>
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
                     * 获取<p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerName <p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerName() const;

                    /**
                     * 设置<p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerName <p>姓名</p>
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
                     * 获取<p>证件号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassengerNo <p>证件号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassengerNo() const;

                    /**
                     * 设置<p>证件号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passengerNo <p>证件号</p>
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
                     * 获取<p>到达站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StationGetOff <p>到达站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置<p>到达站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stationGetOff <p>到达站</p>
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
                     * 获取<p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxRate <p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置<p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxRate <p>税率</p>
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
                     * 获取<p>席位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seat <p>席位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置<p>席位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seat <p>席位</p>
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
                     * 获取<p>发票类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>发票类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>发票类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>发票类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>空调特征</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AirConditionerFeature <p>空调特征</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAirConditionerFeature() const;

                    /**
                     * 设置<p>空调特征</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _airConditionerFeature <p>空调特征</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAirConditionerFeature(const std::string& _airConditionerFeature);

                    /**
                     * 判断参数 AirConditionerFeature 是否已赋值
                     * @return AirConditionerFeature 是否已赋值
                     * 
                     */
                    bool AirConditionerFeatureHasBeenSet() const;

                    /**
                     * 获取<p>票种，不替代 VatInvoice.Type。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TicketType <p>票种，不替代 VatInvoice.Type。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTicketType() const;

                    /**
                     * 设置<p>票种，不替代 VatInvoice.Type。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ticketType <p>票种，不替代 VatInvoice.Type。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTicketType(const std::string& _ticketType);

                    /**
                     * 判断参数 TicketType 是否已赋值
                     * @return TicketType 是否已赋值
                     * 
                     */
                    bool TicketTypeHasBeenSet() const;

                    /**
                     * 获取<p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalTaxRate <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalTaxRate() const;

                    /**
                     * 设置<p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalTaxRate <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalTaxRate(const std::string& _originalTaxRate);

                    /**
                     * 判断参数 OriginalTaxRate 是否已赋值
                     * @return OriginalTaxRate 是否已赋值
                     * 
                     */
                    bool OriginalTaxRateHasBeenSet() const;

                    /**
                     * 获取<p>全电发票号码，映射源字段 qdfphm。</p>
                     * @return FullElectronicNumber <p>全电发票号码，映射源字段 qdfphm。</p>
                     * 
                     */
                    std::string GetFullElectronicNumber() const;

                    /**
                     * 设置<p>全电发票号码，映射源字段 qdfphm。</p>
                     * @param _fullElectronicNumber <p>全电发票号码，映射源字段 qdfphm。</p>
                     * 
                     */
                    void SetFullElectronicNumber(const std::string& _fullElectronicNumber);

                    /**
                     * 判断参数 FullElectronicNumber 是否已赋值
                     * @return FullElectronicNumber 是否已赋值
                     * 
                     */
                    bool FullElectronicNumberHasBeenSet() const;

                private:

                    /**
                     * <p>购方名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerName;
                    bool m_buyerNameHasBeenSet;

                    /**
                     * <p>购方识别号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buyerTaxCode;
                    bool m_buyerTaxCodeHasBeenSet;

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
                     * <p>价税合计（中文大写）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCN;
                    bool m_totalCNHasBeenSet;

                    /**
                     * <p>税额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * <p>业务类型，0：退票，1:售票</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>出发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * <p>车次</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * <p>发票代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>席别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seatType;
                    bool m_seatTypeHasBeenSet;

                    /**
                     * <p>乘车日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * <p>车厢</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainCabin;
                    bool m_trainCabinHasBeenSet;

                    /**
                     * <p>出发站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * <p>电子客票号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_electronicNumber;
                    bool m_electronicNumberHasBeenSet;

                    /**
                     * <p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerName;
                    bool m_passengerNameHasBeenSet;

                    /**
                     * <p>证件号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passengerNo;
                    bool m_passengerNoHasBeenSet;

                    /**
                     * <p>金额</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>到达站</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * <p>税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * <p>席位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * <p>价税合计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>校验码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkCode;
                    bool m_checkCodeHasBeenSet;

                    /**
                     * <p>发票状态代码，0正常 1 未更新  2作废 3已红冲</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     * <p>发票类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>空调特征</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_airConditionerFeature;
                    bool m_airConditionerFeatureHasBeenSet;

                    /**
                     * <p>票种，不替代 VatInvoice.Type。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ticketType;
                    bool m_ticketTypeHasBeenSet;

                    /**
                     * <p>原始税率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalTaxRate;
                    bool m_originalTaxRateHasBeenSet;

                    /**
                     * <p>全电发票号码，映射源字段 qdfphm。</p>
                     */
                    std::string m_fullElectronicNumber;
                    bool m_fullElectronicNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKET_H_
