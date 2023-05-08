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

#include <tencentcloud/ocr/v20181119/model/TaxiTicket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TaxiTicket::TaxiTicket() :
    m_titleHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_timeGetOffHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_mileageHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_placeHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_licensePlateHasBeenSet(false),
    m_fuelFeeHasBeenSet(false),
    m_bookingCallFeeHasBeenSet(false),
    m_companySealMarkHasBeenSet(false)
{
}

CoreInternalOutcome TaxiTicket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOff") && !value["TimeGetOff"].IsNull())
    {
        if (!value["TimeGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.TimeGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOff = string(value["TimeGetOff"].GetString());
        m_timeGetOffHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Mileage") && !value["Mileage"].IsNull())
    {
        if (!value["Mileage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Mileage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mileage = string(value["Mileage"].GetString());
        m_mileageHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Place") && !value["Place"].IsNull())
    {
        if (!value["Place"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Place` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_place = string(value["Place"].GetString());
        m_placeHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("LicensePlate") && !value["LicensePlate"].IsNull())
    {
        if (!value["LicensePlate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.LicensePlate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licensePlate = string(value["LicensePlate"].GetString());
        m_licensePlateHasBeenSet = true;
    }

    if (value.HasMember("FuelFee") && !value["FuelFee"].IsNull())
    {
        if (!value["FuelFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.FuelFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuelFee = string(value["FuelFee"].GetString());
        m_fuelFeeHasBeenSet = true;
    }

    if (value.HasMember("BookingCallFee") && !value["BookingCallFee"].IsNull())
    {
        if (!value["BookingCallFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.BookingCallFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingCallFee = string(value["BookingCallFee"].GetString());
        m_bookingCallFeeHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaxiTicket.CompanySealMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = value["CompanySealMark"].GetInt64();
        m_companySealMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaxiTicket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_timeGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_timeGetOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGetOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeGetOff.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_mileageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mileage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mileage.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_placeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Place";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_place.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_licensePlateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePlate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licensePlate.c_str(), allocator).Move(), allocator);
    }

    if (m_fuelFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuelFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fuelFee.c_str(), allocator).Move(), allocator);
    }

    if (m_bookingCallFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingCallFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingCallFee.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companySealMark, allocator);
    }

}


string TaxiTicket::GetTitle() const
{
    return m_title;
}

void TaxiTicket::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TaxiTicket::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t TaxiTicket::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void TaxiTicket::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool TaxiTicket::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string TaxiTicket::GetCode() const
{
    return m_code;
}

void TaxiTicket::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TaxiTicket::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TaxiTicket::GetNumber() const
{
    return m_number;
}

void TaxiTicket::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool TaxiTicket::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string TaxiTicket::GetDate() const
{
    return m_date;
}

void TaxiTicket::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool TaxiTicket::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string TaxiTicket::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void TaxiTicket::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool TaxiTicket::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string TaxiTicket::GetTimeGetOff() const
{
    return m_timeGetOff;
}

void TaxiTicket::SetTimeGetOff(const string& _timeGetOff)
{
    m_timeGetOff = _timeGetOff;
    m_timeGetOffHasBeenSet = true;
}

bool TaxiTicket::TimeGetOffHasBeenSet() const
{
    return m_timeGetOffHasBeenSet;
}

string TaxiTicket::GetPrice() const
{
    return m_price;
}

void TaxiTicket::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool TaxiTicket::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string TaxiTicket::GetMileage() const
{
    return m_mileage;
}

void TaxiTicket::SetMileage(const string& _mileage)
{
    m_mileage = _mileage;
    m_mileageHasBeenSet = true;
}

bool TaxiTicket::MileageHasBeenSet() const
{
    return m_mileageHasBeenSet;
}

string TaxiTicket::GetTotal() const
{
    return m_total;
}

void TaxiTicket::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TaxiTicket::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string TaxiTicket::GetPlace() const
{
    return m_place;
}

void TaxiTicket::SetPlace(const string& _place)
{
    m_place = _place;
    m_placeHasBeenSet = true;
}

bool TaxiTicket::PlaceHasBeenSet() const
{
    return m_placeHasBeenSet;
}

string TaxiTicket::GetProvince() const
{
    return m_province;
}

void TaxiTicket::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool TaxiTicket::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string TaxiTicket::GetCity() const
{
    return m_city;
}

void TaxiTicket::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool TaxiTicket::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string TaxiTicket::GetKind() const
{
    return m_kind;
}

void TaxiTicket::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TaxiTicket::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TaxiTicket::GetLicensePlate() const
{
    return m_licensePlate;
}

void TaxiTicket::SetLicensePlate(const string& _licensePlate)
{
    m_licensePlate = _licensePlate;
    m_licensePlateHasBeenSet = true;
}

bool TaxiTicket::LicensePlateHasBeenSet() const
{
    return m_licensePlateHasBeenSet;
}

string TaxiTicket::GetFuelFee() const
{
    return m_fuelFee;
}

void TaxiTicket::SetFuelFee(const string& _fuelFee)
{
    m_fuelFee = _fuelFee;
    m_fuelFeeHasBeenSet = true;
}

bool TaxiTicket::FuelFeeHasBeenSet() const
{
    return m_fuelFeeHasBeenSet;
}

string TaxiTicket::GetBookingCallFee() const
{
    return m_bookingCallFee;
}

void TaxiTicket::SetBookingCallFee(const string& _bookingCallFee)
{
    m_bookingCallFee = _bookingCallFee;
    m_bookingCallFeeHasBeenSet = true;
}

bool TaxiTicket::BookingCallFeeHasBeenSet() const
{
    return m_bookingCallFeeHasBeenSet;
}

int64_t TaxiTicket::GetCompanySealMark() const
{
    return m_companySealMark;
}

void TaxiTicket::SetCompanySealMark(const int64_t& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool TaxiTicket::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

