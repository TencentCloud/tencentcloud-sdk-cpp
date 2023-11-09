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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RAILWAYTICKETINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RAILWAYTICKETINFO_H_

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
                * 铁路电子客票信息
                */
                class RailwayTicketInfo : public AbstractModel
                {
                public:
                    RailwayTicketInfo();
                    ~RailwayTicketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电子发票类型
                     * @return TypeOfVoucher 电子发票类型
                     * 
                     */
                    std::string GetTypeOfVoucher() const;

                    /**
                     * 设置电子发票类型
                     * @param _typeOfVoucher 电子发票类型
                     * 
                     */
                    void SetTypeOfVoucher(const std::string& _typeOfVoucher);

                    /**
                     * 判断参数 TypeOfVoucher 是否已赋值
                     * @return TypeOfVoucher 是否已赋值
                     * 
                     */
                    bool TypeOfVoucherHasBeenSet() const;

                    /**
                     * 获取电子客票号
                     * @return ElectronicTicketNum 电子客票号
                     * 
                     */
                    std::string GetElectronicTicketNum() const;

                    /**
                     * 设置电子客票号
                     * @param _electronicTicketNum 电子客票号
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
                     * 获取开票日期
                     * @return DateOfIssue 开票日期
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 设置开票日期
                     * @param _dateOfIssue 开票日期
                     * 
                     */
                    void SetDateOfIssue(const std::string& _dateOfIssue);

                    /**
                     * 判断参数 DateOfIssue 是否已赋值
                     * @return DateOfIssue 是否已赋值
                     * 
                     */
                    bool DateOfIssueHasBeenSet() const;

                    /**
                     * 获取售票或退票类型
                     * @return TypeOfBusiness 售票或退票类型
                     * 
                     */
                    std::string GetTypeOfBusiness() const;

                    /**
                     * 设置售票或退票类型
                     * @param _typeOfBusiness 售票或退票类型
                     * 
                     */
                    void SetTypeOfBusiness(const std::string& _typeOfBusiness);

                    /**
                     * 判断参数 TypeOfBusiness 是否已赋值
                     * @return TypeOfBusiness 是否已赋值
                     * 
                     */
                    bool TypeOfBusinessHasBeenSet() const;

                    /**
                     * 获取始发站
                     * @return DepartureStation 始发站
                     * 
                     */
                    std::string GetDepartureStation() const;

                    /**
                     * 设置始发站
                     * @param _departureStation 始发站
                     * 
                     */
                    void SetDepartureStation(const std::string& _departureStation);

                    /**
                     * 判断参数 DepartureStation 是否已赋值
                     * @return DepartureStation 是否已赋值
                     * 
                     */
                    bool DepartureStationHasBeenSet() const;

                    /**
                     * 获取始发站英文
                     * @return PhonicsOfDepartureStation 始发站英文
                     * 
                     */
                    std::string GetPhonicsOfDepartureStation() const;

                    /**
                     * 设置始发站英文
                     * @param _phonicsOfDepartureStation 始发站英文
                     * 
                     */
                    void SetPhonicsOfDepartureStation(const std::string& _phonicsOfDepartureStation);

                    /**
                     * 判断参数 PhonicsOfDepartureStation 是否已赋值
                     * @return PhonicsOfDepartureStation 是否已赋值
                     * 
                     */
                    bool PhonicsOfDepartureStationHasBeenSet() const;

                    /**
                     * 获取到达站
                     * @return DestinationStation 到达站
                     * 
                     */
                    std::string GetDestinationStation() const;

                    /**
                     * 设置到达站
                     * @param _destinationStation 到达站
                     * 
                     */
                    void SetDestinationStation(const std::string& _destinationStation);

                    /**
                     * 判断参数 DestinationStation 是否已赋值
                     * @return DestinationStation 是否已赋值
                     * 
                     */
                    bool DestinationStationHasBeenSet() const;

                    /**
                     * 获取到达站英文
                     * @return PhonicsOfDestinationStation 到达站英文
                     * 
                     */
                    std::string GetPhonicsOfDestinationStation() const;

                    /**
                     * 设置到达站英文
                     * @param _phonicsOfDestinationStation 到达站英文
                     * 
                     */
                    void SetPhonicsOfDestinationStation(const std::string& _phonicsOfDestinationStation);

                    /**
                     * 判断参数 PhonicsOfDestinationStation 是否已赋值
                     * @return PhonicsOfDestinationStation 是否已赋值
                     * 
                     */
                    bool PhonicsOfDestinationStationHasBeenSet() const;

                    /**
                     * 获取火车号
                     * @return TrainNumber 火车号
                     * 
                     */
                    std::string GetTrainNumber() const;

                    /**
                     * 设置火车号
                     * @param _trainNumber 火车号
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
                     * 获取火车出发日期
                     * @return TravelDate 火车出发日期
                     * 
                     */
                    std::string GetTravelDate() const;

                    /**
                     * 设置火车出发日期
                     * @param _travelDate 火车出发日期
                     * 
                     */
                    void SetTravelDate(const std::string& _travelDate);

                    /**
                     * 判断参数 TravelDate 是否已赋值
                     * @return TravelDate 是否已赋值
                     * 
                     */
                    bool TravelDateHasBeenSet() const;

                    /**
                     * 获取始发时间
                     * @return DepartureTime 始发时间
                     * 
                     */
                    std::string GetDepartureTime() const;

                    /**
                     * 设置始发时间
                     * @param _departureTime 始发时间
                     * 
                     */
                    void SetDepartureTime(const std::string& _departureTime);

                    /**
                     * 判断参数 DepartureTime 是否已赋值
                     * @return DepartureTime 是否已赋值
                     * 
                     */
                    bool DepartureTimeHasBeenSet() const;

                    /**
                     * 获取空调特点
                     * @return AirConditioningCharacteristics 空调特点
                     * 
                     */
                    std::string GetAirConditioningCharacteristics() const;

                    /**
                     * 设置空调特点
                     * @param _airConditioningCharacteristics 空调特点
                     * 
                     */
                    void SetAirConditioningCharacteristics(const std::string& _airConditioningCharacteristics);

                    /**
                     * 判断参数 AirConditioningCharacteristics 是否已赋值
                     * @return AirConditioningCharacteristics 是否已赋值
                     * 
                     */
                    bool AirConditioningCharacteristicsHasBeenSet() const;

                    /**
                     * 获取座位类型
                     * @return SeatLevel 座位类型
                     * 
                     */
                    std::string GetSeatLevel() const;

                    /**
                     * 设置座位类型
                     * @param _seatLevel 座位类型
                     * 
                     */
                    void SetSeatLevel(const std::string& _seatLevel);

                    /**
                     * 判断参数 SeatLevel 是否已赋值
                     * @return SeatLevel 是否已赋值
                     * 
                     */
                    bool SeatLevelHasBeenSet() const;

                    /**
                     * 获取火车第几车
                     * @return Carriage 火车第几车
                     * 
                     */
                    std::string GetCarriage() const;

                    /**
                     * 设置火车第几车
                     * @param _carriage 火车第几车
                     * 
                     */
                    void SetCarriage(const std::string& _carriage);

                    /**
                     * 判断参数 Carriage 是否已赋值
                     * @return Carriage 是否已赋值
                     * 
                     */
                    bool CarriageHasBeenSet() const;

                    /**
                     * 获取座位号
                     * @return Seat 座位号
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置座位号
                     * @param _seat 座位号
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
                     * 获取发票号码
                     * @return ElectronicInvoiceRailwayETicketNumber 发票号码
                     * 
                     */
                    std::string GetElectronicInvoiceRailwayETicketNumber() const;

                    /**
                     * 设置发票号码
                     * @param _electronicInvoiceRailwayETicketNumber 发票号码
                     * 
                     */
                    void SetElectronicInvoiceRailwayETicketNumber(const std::string& _electronicInvoiceRailwayETicketNumber);

                    /**
                     * 判断参数 ElectronicInvoiceRailwayETicketNumber 是否已赋值
                     * @return ElectronicInvoiceRailwayETicketNumber 是否已赋值
                     * 
                     */
                    bool ElectronicInvoiceRailwayETicketNumberHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return IdNumber 身份证号
                     * 
                     */
                    std::string GetIdNumber() const;

                    /**
                     * 设置身份证号
                     * @param _idNumber 身份证号
                     * 
                     */
                    void SetIdNumber(const std::string& _idNumber);

                    /**
                     * 判断参数 IdNumber 是否已赋值
                     * @return IdNumber 是否已赋值
                     * 
                     */
                    bool IdNumberHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return TotalAmountExcludingTax 金额
                     * 
                     */
                    std::string GetTotalAmountExcludingTax() const;

                    /**
                     * 设置金额
                     * @param _totalAmountExcludingTax 金额
                     * 
                     */
                    void SetTotalAmountExcludingTax(const std::string& _totalAmountExcludingTax);

                    /**
                     * 判断参数 TotalAmountExcludingTax 是否已赋值
                     * @return TotalAmountExcludingTax 是否已赋值
                     * 
                     */
                    bool TotalAmountExcludingTaxHasBeenSet() const;

                    /**
                     * 获取税率
                     * @return TaxRate 税率
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置税率
                     * @param _taxRate 税率
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
                     * 获取税额
                     * @return TaxAmount 税额
                     * 
                     */
                    std::string GetTaxAmount() const;

                    /**
                     * 设置税额
                     * @param _taxAmount 税额
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

                    /**
                     * 获取原发票号码
                     * @return NumberOfOriginalInvoice 原发票号码
                     * 
                     */
                    std::string GetNumberOfOriginalInvoice() const;

                    /**
                     * 设置原发票号码
                     * @param _numberOfOriginalInvoice 原发票号码
                     * 
                     */
                    void SetNumberOfOriginalInvoice(const std::string& _numberOfOriginalInvoice);

                    /**
                     * 判断参数 NumberOfOriginalInvoice 是否已赋值
                     * @return NumberOfOriginalInvoice 是否已赋值
                     * 
                     */
                    bool NumberOfOriginalInvoiceHasBeenSet() const;

                private:

                    /**
                     * 电子发票类型
                     */
                    std::string m_typeOfVoucher;
                    bool m_typeOfVoucherHasBeenSet;

                    /**
                     * 电子客票号
                     */
                    std::string m_electronicTicketNum;
                    bool m_electronicTicketNumHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * 售票或退票类型
                     */
                    std::string m_typeOfBusiness;
                    bool m_typeOfBusinessHasBeenSet;

                    /**
                     * 始发站
                     */
                    std::string m_departureStation;
                    bool m_departureStationHasBeenSet;

                    /**
                     * 始发站英文
                     */
                    std::string m_phonicsOfDepartureStation;
                    bool m_phonicsOfDepartureStationHasBeenSet;

                    /**
                     * 到达站
                     */
                    std::string m_destinationStation;
                    bool m_destinationStationHasBeenSet;

                    /**
                     * 到达站英文
                     */
                    std::string m_phonicsOfDestinationStation;
                    bool m_phonicsOfDestinationStationHasBeenSet;

                    /**
                     * 火车号
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * 火车出发日期
                     */
                    std::string m_travelDate;
                    bool m_travelDateHasBeenSet;

                    /**
                     * 始发时间
                     */
                    std::string m_departureTime;
                    bool m_departureTimeHasBeenSet;

                    /**
                     * 空调特点
                     */
                    std::string m_airConditioningCharacteristics;
                    bool m_airConditioningCharacteristicsHasBeenSet;

                    /**
                     * 座位类型
                     */
                    std::string m_seatLevel;
                    bool m_seatLevelHasBeenSet;

                    /**
                     * 火车第几车
                     */
                    std::string m_carriage;
                    bool m_carriageHasBeenSet;

                    /**
                     * 座位号
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 票价
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_electronicInvoiceRailwayETicketNumber;
                    bool m_electronicInvoiceRailwayETicketNumberHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_idNumber;
                    bool m_idNumberHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_totalAmountExcludingTax;
                    bool m_totalAmountExcludingTaxHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_taxAmount;
                    bool m_taxAmountHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_nameOfPurchaser;
                    bool m_nameOfPurchaserHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_unifiedSocialCreditCodeOfPurchaser;
                    bool m_unifiedSocialCreditCodeOfPurchaserHasBeenSet;

                    /**
                     * 原发票号码
                     */
                    std::string m_numberOfOriginalInvoice;
                    bool m_numberOfOriginalInvoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RAILWAYTICKETINFO_H_
