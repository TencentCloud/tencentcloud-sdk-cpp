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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SHIPPINGINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SHIPPINGINVOICE_H_

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
                * 轮船票
                */
                class ShippingInvoice : public AbstractModel
                {
                public:
                    ShippingInvoice();
                    ~ShippingInvoice() = default;
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
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
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
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

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
                     * 获取币种
                     * @return CurrencyCode 币种
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置币种
                     * @param _currencyCode 币种
                     * 
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     * 
                     */
                    bool CurrencyCodeHasBeenSet() const;

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
                     * 姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

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
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

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
                     * 币种
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SHIPPINGINVOICE_H_
