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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKETFULL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKETFULL_H_

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
                * 电子发票（火车票）
                */
                class ElectronicTrainTicketFull : public AbstractModel
                {
                public:
                    ElectronicTrainTicketFull();
                    ~ElectronicTrainTicketFull() = default;
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
                     * 获取始发站
                     * @return StationGetOn 始发站
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置始发站
                     * @param _stationGetOn 始发站
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
                     * 获取到达站
                     * @return StationGetOff 到达站
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置到达站
                     * @param _stationGetOff 到达站
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
                     * 获取乘车日期
                     * @return DateGetOn 乘车日期
                     * 
                     */
                    std::string GetDateGetOn() const;

                    /**
                     * 设置乘车日期
                     * @param _dateGetOn 乘车日期
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
                     * 获取始发时间
                     * @return TimeGetOn 始发时间
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置始发时间
                     * @param _timeGetOn 始发时间
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
                     * 获取座位类型
                     * @return Seat 座位类型
                     * 
                     */
                    std::string GetSeat() const;

                    /**
                     * 设置座位类型
                     * @param _seat 座位类型
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
                     * 获取座位号
                     * @return SeatNumber 座位号
                     * 
                     */
                    std::string GetSeatNumber() const;

                    /**
                     * 设置座位号
                     * @param _seatNumber 座位号
                     * 
                     */
                    void SetSeatNumber(const std::string& _seatNumber);

                    /**
                     * 判断参数 SeatNumber 是否已赋值
                     * @return SeatNumber 是否已赋值
                     * 
                     */
                    bool SeatNumberHasBeenSet() const;

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
                     * 获取乘车人姓名
                     * @return UserName 乘车人姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置乘车人姓名
                     * @param _userName 乘车人姓名
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
                     * 获取金额
                     * @return Total 金额
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额
                     * @param _total 金额
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
                     * @return Tax 税额
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税额
                     * @param _tax 税额
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
                     * 获取原发票号码
                     * @return OriginalNumber 原发票号码
                     * 
                     */
                    std::string GetOriginalNumber() const;

                    /**
                     * 设置原发票号码
                     * @param _originalNumber 原发票号码
                     * 
                     */
                    void SetOriginalNumber(const std::string& _originalNumber);

                    /**
                     * 判断参数 OriginalNumber 是否已赋值
                     * @return OriginalNumber 是否已赋值
                     * 
                     */
                    bool OriginalNumberHasBeenSet() const;

                    /**
                     * 获取标识信息
                     * @return IDInfo 标识信息
                     * 
                     */
                    std::string GetIDInfo() const;

                    /**
                     * 设置标识信息
                     * @param _iDInfo 标识信息
                     * 
                     */
                    void SetIDInfo(const std::string& _iDInfo);

                    /**
                     * 判断参数 IDInfo 是否已赋值
                     * @return IDInfo 是否已赋值
                     * 
                     */
                    bool IDInfoHasBeenSet() const;

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
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 始发站
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * 到达站
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * 火车号
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * 乘车日期
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * 始发时间
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 座位类型
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 座位号
                     */
                    std::string m_seatNumber;
                    bool m_seatNumberHasBeenSet;

                    /**
                     * 票价
                     */
                    std::string m_fare;
                    bool m_fareHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 乘车人姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 税率
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * 税额
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_buyerTaxID;
                    bool m_buyerTaxIDHasBeenSet;

                    /**
                     * 原发票号码
                     */
                    std::string m_originalNumber;
                    bool m_originalNumberHasBeenSet;

                    /**
                     * 标识信息
                     */
                    std::string m_iDInfo;
                    bool m_iDInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELECTRONICTRAINTICKETFULL_H_
