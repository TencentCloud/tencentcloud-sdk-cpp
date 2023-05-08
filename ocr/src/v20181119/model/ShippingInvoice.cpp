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

#include <tencentcloud/ocr/v20181119/model/ShippingInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ShippingInvoice::ShippingInvoice() :
    m_titleHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_currencyCodeHasBeenSet(false)
{
}

CoreInternalOutcome ShippingInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("CurrencyCode") && !value["CurrencyCode"].IsNull())
    {
        if (!value["CurrencyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShippingInvoice.CurrencyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyCode = string(value["CurrencyCode"].GetString());
        m_currencyCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShippingInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_stationGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StationGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stationGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_stationGetOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StationGetOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stationGetOff.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
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

    if (m_currencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyCode.c_str(), allocator).Move(), allocator);
    }

}


string ShippingInvoice::GetTitle() const
{
    return m_title;
}

void ShippingInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ShippingInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t ShippingInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void ShippingInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool ShippingInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string ShippingInvoice::GetCode() const
{
    return m_code;
}

void ShippingInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ShippingInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ShippingInvoice::GetNumber() const
{
    return m_number;
}

void ShippingInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool ShippingInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string ShippingInvoice::GetUserName() const
{
    return m_userName;
}

void ShippingInvoice::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ShippingInvoice::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ShippingInvoice::GetDate() const
{
    return m_date;
}

void ShippingInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ShippingInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ShippingInvoice::GetTime() const
{
    return m_time;
}

void ShippingInvoice::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ShippingInvoice::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string ShippingInvoice::GetStationGetOn() const
{
    return m_stationGetOn;
}

void ShippingInvoice::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool ShippingInvoice::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string ShippingInvoice::GetStationGetOff() const
{
    return m_stationGetOff;
}

void ShippingInvoice::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool ShippingInvoice::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string ShippingInvoice::GetTotal() const
{
    return m_total;
}

void ShippingInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ShippingInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ShippingInvoice::GetKind() const
{
    return m_kind;
}

void ShippingInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool ShippingInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string ShippingInvoice::GetProvince() const
{
    return m_province;
}

void ShippingInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ShippingInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ShippingInvoice::GetCity() const
{
    return m_city;
}

void ShippingInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ShippingInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ShippingInvoice::GetCurrencyCode() const
{
    return m_currencyCode;
}

void ShippingInvoice::SetCurrencyCode(const string& _currencyCode)
{
    m_currencyCode = _currencyCode;
    m_currencyCodeHasBeenSet = true;
}

bool ShippingInvoice::CurrencyCodeHasBeenSet() const
{
    return m_currencyCodeHasBeenSet;
}

