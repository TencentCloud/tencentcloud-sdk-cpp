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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_

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
                * 出租车发票
                */
                class TaxiTicket : public AbstractModel
                {
                public:
                    TaxiTicket();
                    ~TaxiTicket() = default;
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
                     * 获取上车时间
                     * @return TimeGetOn 上车时间
                     * 
                     */
                    std::string GetTimeGetOn() const;

                    /**
                     * 设置上车时间
                     * @param _timeGetOn 上车时间
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
                     * 获取下车时间
                     * @return TimeGetOff 下车时间
                     * 
                     */
                    std::string GetTimeGetOff() const;

                    /**
                     * 设置下车时间
                     * @param _timeGetOff 下车时间
                     * 
                     */
                    void SetTimeGetOff(const std::string& _timeGetOff);

                    /**
                     * 判断参数 TimeGetOff 是否已赋值
                     * @return TimeGetOff 是否已赋值
                     * 
                     */
                    bool TimeGetOffHasBeenSet() const;

                    /**
                     * 获取单价
                     * @return Price 单价
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置单价
                     * @param _price 单价
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取里程
                     * @return Mileage 里程
                     * 
                     */
                    std::string GetMileage() const;

                    /**
                     * 设置里程
                     * @param _mileage 里程
                     * 
                     */
                    void SetMileage(const std::string& _mileage);

                    /**
                     * 判断参数 Mileage 是否已赋值
                     * @return Mileage 是否已赋值
                     * 
                     */
                    bool MileageHasBeenSet() const;

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
                     * 获取发票所在地
                     * @return Place 发票所在地
                     * 
                     */
                    std::string GetPlace() const;

                    /**
                     * 设置发票所在地
                     * @param _place 发票所在地
                     * 
                     */
                    void SetPlace(const std::string& _place);

                    /**
                     * 判断参数 Place 是否已赋值
                     * @return Place 是否已赋值
                     * 
                     */
                    bool PlaceHasBeenSet() const;

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
                     * 获取车牌号
                     * @return LicensePlate 车牌号
                     * 
                     */
                    std::string GetLicensePlate() const;

                    /**
                     * 设置车牌号
                     * @param _licensePlate 车牌号
                     * 
                     */
                    void SetLicensePlate(const std::string& _licensePlate);

                    /**
                     * 判断参数 LicensePlate 是否已赋值
                     * @return LicensePlate 是否已赋值
                     * 
                     */
                    bool LicensePlateHasBeenSet() const;

                    /**
                     * 获取燃油附加费
                     * @return FuelFee 燃油附加费
                     * 
                     */
                    std::string GetFuelFee() const;

                    /**
                     * 设置燃油附加费
                     * @param _fuelFee 燃油附加费
                     * 
                     */
                    void SetFuelFee(const std::string& _fuelFee);

                    /**
                     * 判断参数 FuelFee 是否已赋值
                     * @return FuelFee 是否已赋值
                     * 
                     */
                    bool FuelFeeHasBeenSet() const;

                    /**
                     * 获取预约叫车服务费
                     * @return BookingCallFee 预约叫车服务费
                     * 
                     */
                    std::string GetBookingCallFee() const;

                    /**
                     * 设置预约叫车服务费
                     * @param _bookingCallFee 预约叫车服务费
                     * 
                     */
                    void SetBookingCallFee(const std::string& _bookingCallFee);

                    /**
                     * 判断参数 BookingCallFee 是否已赋值
                     * @return BookingCallFee 是否已赋值
                     * 
                     */
                    bool BookingCallFeeHasBeenSet() const;

                    /**
                     * 获取是否有公司印章（0：没有，1：有）
                     * @return CompanySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置是否有公司印章（0：没有，1：有）
                     * @param _companySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

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
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 上车时间
                     */
                    std::string m_timeGetOn;
                    bool m_timeGetOnHasBeenSet;

                    /**
                     * 下车时间
                     */
                    std::string m_timeGetOff;
                    bool m_timeGetOffHasBeenSet;

                    /**
                     * 单价
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 里程
                     */
                    std::string m_mileage;
                    bool m_mileageHasBeenSet;

                    /**
                     * 总金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 发票所在地
                     */
                    std::string m_place;
                    bool m_placeHasBeenSet;

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
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 车牌号
                     */
                    std::string m_licensePlate;
                    bool m_licensePlateHasBeenSet;

                    /**
                     * 燃油附加费
                     */
                    std::string m_fuelFee;
                    bool m_fuelFeeHasBeenSet;

                    /**
                     * 预约叫车服务费
                     */
                    std::string m_bookingCallFee;
                    bool m_bookingCallFeeHasBeenSet;

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TAXITICKET_H_
