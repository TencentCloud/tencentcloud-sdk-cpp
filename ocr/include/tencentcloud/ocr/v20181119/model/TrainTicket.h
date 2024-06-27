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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_

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
                * 火车票
                */
                class TrainTicket : public AbstractModel
                {
                public:
                    TrainTicket();
                    ~TrainTicket() = default;
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
                     * 获取乘车时间
                     * @return TimeGetOn 乘车时间
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置乘车时间
                     * @param _timeGetOn 乘车时间
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
                     * 获取乘车人姓名
                     * @return Name 乘车人姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置乘车人姓名
                     * @param _name 乘车人姓名
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
                     * 获取出发车站
                     * @return StationGetOn 出发车站
                     * 
                     */
                    std::string GetStationGetOn() const;

                    /**
                     * 设置出发车站
                     * @param _stationGetOn 出发车站
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
                     * 获取到达车站
                     * @return StationGetOff 到达车站
                     * 
                     */
                    std::string GetStationGetOff() const;

                    /**
                     * 设置到达车站
                     * @param _stationGetOff 到达车站
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
                     * 获取总金额
                     * @return Total 总金额
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置总金额
                     * @param _total 总金额
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
                     * 获取序列号
                     * @return SerialNumber 序列号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置序列号
                     * @param _serialNumber 序列号
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
                     * 获取检票口
                     * @return GateNumber 检票口
                     * 
                     */
                    std::string GetGateNumber() const;

                    /**
                     * 设置检票口
                     * @param _gateNumber 检票口
                     * 
                     */
                    void SetGateNumber(const std::string& _gateNumber);

                    /**
                     * 判断参数 GateNumber 是否已赋值
                     * @return GateNumber 是否已赋值
                     * 
                     */
                    bool GateNumberHasBeenSet() const;

                    /**
                     * 获取车次
                     * @return TrainNumber 车次
                     * 
                     */
                    std::string GetTrainNumber() const;

                    /**
                     * 设置车次
                     * @param _trainNumber 车次
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
                     * 获取手续费
                     * @return HandlingFee 手续费
                     * 
                     */
                    std::string GetHandlingFee() const;

                    /**
                     * 设置手续费
                     * @param _handlingFee 手续费
                     * 
                     */
                    void SetHandlingFee(const std::string& _handlingFee);

                    /**
                     * 判断参数 HandlingFee 是否已赋值
                     * @return HandlingFee 是否已赋值
                     * 
                     */
                    bool HandlingFeeHasBeenSet() const;

                    /**
                     * 获取原票价
                     * @return OriginalFare 原票价
                     * 
                     */
                    std::string GetOriginalFare() const;

                    /**
                     * 设置原票价
                     * @param _originalFare 原票价
                     * 
                     */
                    void SetOriginalFare(const std::string& _originalFare);

                    /**
                     * 判断参数 OriginalFare 是否已赋值
                     * @return OriginalFare 是否已赋值
                     * 
                     */
                    bool OriginalFareHasBeenSet() const;

                    /**
                     * 获取大写金额
                     * @return TotalCn 大写金额
                     * 
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置大写金额
                     * @param _totalCn 大写金额
                     * 
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     * 
                     */
                    bool TotalCnHasBeenSet() const;

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
                     * 获取取票地址
                     * @return PickUpAddress 取票地址
                     * 
                     */
                    std::string GetPickUpAddress() const;

                    /**
                     * 设置取票地址
                     * @param _pickUpAddress 取票地址
                     * 
                     */
                    void SetPickUpAddress(const std::string& _pickUpAddress);

                    /**
                     * 判断参数 PickUpAddress 是否已赋值
                     * @return PickUpAddress 是否已赋值
                     * 
                     */
                    bool PickUpAddressHasBeenSet() const;

                    /**
                     * 获取是否始发改签
                     * @return TicketChange 是否始发改签
                     * 
                     */
                    std::string GetTicketChange() const;

                    /**
                     * 设置是否始发改签
                     * @param _ticketChange 是否始发改签
                     * 
                     */
                    void SetTicketChange(const std::string& _ticketChange);

                    /**
                     * 判断参数 TicketChange 是否已赋值
                     * @return TicketChange 是否已赋值
                     * 
                     */
                    bool TicketChangeHasBeenSet() const;

                    /**
                     * 获取加收票价
                     * @return AdditionalFare 加收票价
                     * 
                     */
                    std::string GetAdditionalFare() const;

                    /**
                     * 设置加收票价
                     * @param _additionalFare 加收票价
                     * 
                     */
                    void SetAdditionalFare(const std::string& _additionalFare);

                    /**
                     * 判断参数 AdditionalFare 是否已赋值
                     * @return AdditionalFare 是否已赋值
                     * 
                     */
                    bool AdditionalFareHasBeenSet() const;

                    /**
                     * 获取收据号码
                     * @return ReceiptNumber 收据号码
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 设置收据号码
                     * @param _receiptNumber 收据号码
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
                     * 获取是否仅供报销使用（0：没有，1：有）
                     * @return ReimburseOnlyMark 是否仅供报销使用（0：没有，1：有）
                     * 
                     */
                    int64_t GetReimburseOnlyMark() const;

                    /**
                     * 设置是否仅供报销使用（0：没有，1：有）
                     * @param _reimburseOnlyMark 是否仅供报销使用（0：没有，1：有）
                     * 
                     */
                    void SetReimburseOnlyMark(const int64_t& _reimburseOnlyMark);

                    /**
                     * 判断参数 ReimburseOnlyMark 是否已赋值
                     * @return ReimburseOnlyMark 是否已赋值
                     * 
                     */
                    bool ReimburseOnlyMarkHasBeenSet() const;

                    /**
                     * 获取是否有退票费标识（0：没有，1：有）
                     * @return RefundMark 是否有退票费标识（0：没有，1：有）
                     * 
                     */
                    int64_t GetRefundMark() const;

                    /**
                     * 设置是否有退票费标识（0：没有，1：有）
                     * @param _refundMark 是否有退票费标识（0：没有，1：有）
                     * 
                     */
                    void SetRefundMark(const int64_t& _refundMark);

                    /**
                     * 判断参数 RefundMark 是否已赋值
                     * @return RefundMark 是否已赋值
                     * 
                     */
                    bool RefundMarkHasBeenSet() const;

                    /**
                     * 获取是否有改签费标识（0：没有，1：有）
                     * @return TicketChangeMark 是否有改签费标识（0：没有，1：有）
                     * 
                     */
                    int64_t GetTicketChangeMark() const;

                    /**
                     * 设置是否有改签费标识（0：没有，1：有）
                     * @param _ticketChangeMark 是否有改签费标识（0：没有，1：有）
                     * 
                     */
                    void SetTicketChangeMark(const int64_t& _ticketChangeMark);

                    /**
                     * 判断参数 TicketChangeMark 是否已赋值
                     * @return TicketChangeMark 是否已赋值
                     * 
                     */
                    bool TicketChangeMarkHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 乘车日期
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

                    /**
                     * 乘车时间
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 乘车人姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 出发车站
                     */
                    std::string m_stationGetOn;
                    bool m_stationGetOnHasBeenSet;

                    /**
                     * 到达车站
                     */
                    std::string m_stationGetOff;
                    bool m_stationGetOffHasBeenSet;

                    /**
                     * 座位类型
                     */
                    std::string m_seat;
                    bool m_seatHasBeenSet;

                    /**
                     * 总金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 检票口
                     */
                    std::string m_gateNumber;
                    bool m_gateNumberHasBeenSet;

                    /**
                     * 车次
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                    /**
                     * 手续费
                     */
                    std::string m_handlingFee;
                    bool m_handlingFeeHasBeenSet;

                    /**
                     * 原票价
                     */
                    std::string m_originalFare;
                    bool m_originalFareHasBeenSet;

                    /**
                     * 大写金额
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 座位号
                     */
                    std::string m_seatNumber;
                    bool m_seatNumberHasBeenSet;

                    /**
                     * 取票地址
                     */
                    std::string m_pickUpAddress;
                    bool m_pickUpAddressHasBeenSet;

                    /**
                     * 是否始发改签
                     */
                    std::string m_ticketChange;
                    bool m_ticketChangeHasBeenSet;

                    /**
                     * 加收票价
                     */
                    std::string m_additionalFare;
                    bool m_additionalFareHasBeenSet;

                    /**
                     * 收据号码
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 是否仅供报销使用（0：没有，1：有）
                     */
                    int64_t m_reimburseOnlyMark;
                    bool m_reimburseOnlyMarkHasBeenSet;

                    /**
                     * 是否有退票费标识（0：没有，1：有）
                     */
                    int64_t m_refundMark;
                    bool m_refundMarkHasBeenSet;

                    /**
                     * 是否有改签费标识（0：没有，1：有）
                     */
                    int64_t m_ticketChangeMark;
                    bool m_ticketChangeMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TRAINTICKET_H_
