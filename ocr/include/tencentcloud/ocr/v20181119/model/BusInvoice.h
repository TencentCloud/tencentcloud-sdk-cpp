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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_

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
                * 汽车票
                */
                class BusInvoice : public AbstractModel
                {
                public:
                    BusInvoice();
                    ~BusInvoice() = default;
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
                     * 获取发票代码
                     * @return Code 发票代码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param _code 发票代码
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
                     * 获取票价
                     * @return Total 票价
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置票价
                     * @param _total 票价
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
                     * 获取消费类型
                     * @return Kind 消费类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置消费类型
                     * @param _kind 消费类型
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
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
                     * @return City 市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置市
                     * @param _city 市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取乘车地点
                     * @return PlaceGetOn 乘车地点
                     * 
                     */
                    std::string GetPlaceGetOn() const;

                    /**
                     * 设置乘车地点
                     * @param _placeGetOn 乘车地点
                     * 
                     */
                    void SetPlaceGetOn(const std::string& _placeGetOn);

                    /**
                     * 判断参数 PlaceGetOn 是否已赋值
                     * @return PlaceGetOn 是否已赋值
                     * 
                     */
                    bool PlaceGetOnHasBeenSet() const;

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
                     * 获取客票类型
                     * @return TicketType 客票类型
                     * 
                     */
                    std::string GetTicketType() const;

                    /**
                     * 设置客票类型
                     * @param _ticketType 客票类型
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
                     * 获取车型
                     * @return VehicleType 车型
                     * 
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置车型
                     * @param _vehicleType 车型
                     * 
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     * 
                     */
                    bool VehicleTypeHasBeenSet() const;

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

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 是否存在二维码（1：有，0：无）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 乘车时间
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 乘车日期
                     */
                    std::string m_dateGetOn;
                    bool m_dateGetOnHasBeenSet;

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
                     * 票价
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 乘车地点
                     */
                    std::string m_placeGetOn;
                    bool m_placeGetOnHasBeenSet;

                    /**
                     * 检票口
                     */
                    std::string m_gateNumber;
                    bool m_gateNumberHasBeenSet;

                    /**
                     * 客票类型
                     */
                    std::string m_ticketType;
                    bool m_ticketTypeHasBeenSet;

                    /**
                     * 车型
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 座位号
                     */
                    std::string m_seatNumber;
                    bool m_seatNumberHasBeenSet;

                    /**
                     * 车次
                     */
                    std::string m_trainNumber;
                    bool m_trainNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BUSINVOICE_H_
