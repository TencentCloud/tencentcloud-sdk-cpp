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

#include <tencentcloud/ocr/v20181119/model/BusInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BusInvoice::BusInvoice() :
    m_titleHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_placeGetOnHasBeenSet(false),
    m_gateNumberHasBeenSet(false),
    m_ticketTypeHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_seatNumberHasBeenSet(false),
    m_trainNumberHasBeenSet(false)
{
}

CoreInternalOutcome BusInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("PlaceGetOn") && !value["PlaceGetOn"].IsNull())
    {
        if (!value["PlaceGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.PlaceGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placeGetOn = string(value["PlaceGetOn"].GetString());
        m_placeGetOnHasBeenSet = true;
    }

    if (value.HasMember("GateNumber") && !value["GateNumber"].IsNull())
    {
        if (!value["GateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.GateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateNumber = string(value["GateNumber"].GetString());
        m_gateNumberHasBeenSet = true;
    }

    if (value.HasMember("TicketType") && !value["TicketType"].IsNull())
    {
        if (!value["TicketType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.TicketType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketType = string(value["TicketType"].GetString());
        m_ticketTypeHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("SeatNumber") && !value["SeatNumber"].IsNull())
    {
        if (!value["SeatNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.SeatNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatNumber = string(value["SeatNumber"].GetString());
        m_seatNumberHasBeenSet = true;
    }

    if (value.HasMember("TrainNumber") && !value["TrainNumber"].IsNull())
    {
        if (!value["TrainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusInvoice.TrainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNumber = string(value["TrainNumber"].GetString());
        m_trainNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
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

    if (m_dateGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateGetOn.c_str(), allocator).Move(), allocator);
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
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

    if (m_placeGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placeGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_gateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketType.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_seatNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_trainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNumber.c_str(), allocator).Move(), allocator);
    }

}


string BusInvoice::GetTitle() const
{
    return m_title;
}

void BusInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool BusInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t BusInvoice::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void BusInvoice::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool BusInvoice::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

string BusInvoice::GetNumber() const
{
    return m_number;
}

void BusInvoice::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool BusInvoice::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string BusInvoice::GetCode() const
{
    return m_code;
}

void BusInvoice::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool BusInvoice::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string BusInvoice::GetDate() const
{
    return m_date;
}

void BusInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool BusInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string BusInvoice::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void BusInvoice::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool BusInvoice::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string BusInvoice::GetDateGetOn() const
{
    return m_dateGetOn;
}

void BusInvoice::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool BusInvoice::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string BusInvoice::GetStationGetOn() const
{
    return m_stationGetOn;
}

void BusInvoice::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool BusInvoice::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string BusInvoice::GetStationGetOff() const
{
    return m_stationGetOff;
}

void BusInvoice::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool BusInvoice::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string BusInvoice::GetTotal() const
{
    return m_total;
}

void BusInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool BusInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string BusInvoice::GetUserName() const
{
    return m_userName;
}

void BusInvoice::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BusInvoice::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BusInvoice::GetKind() const
{
    return m_kind;
}

void BusInvoice::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool BusInvoice::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string BusInvoice::GetUserID() const
{
    return m_userID;
}

void BusInvoice::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool BusInvoice::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string BusInvoice::GetProvince() const
{
    return m_province;
}

void BusInvoice::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool BusInvoice::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string BusInvoice::GetCity() const
{
    return m_city;
}

void BusInvoice::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool BusInvoice::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string BusInvoice::GetPlaceGetOn() const
{
    return m_placeGetOn;
}

void BusInvoice::SetPlaceGetOn(const string& _placeGetOn)
{
    m_placeGetOn = _placeGetOn;
    m_placeGetOnHasBeenSet = true;
}

bool BusInvoice::PlaceGetOnHasBeenSet() const
{
    return m_placeGetOnHasBeenSet;
}

string BusInvoice::GetGateNumber() const
{
    return m_gateNumber;
}

void BusInvoice::SetGateNumber(const string& _gateNumber)
{
    m_gateNumber = _gateNumber;
    m_gateNumberHasBeenSet = true;
}

bool BusInvoice::GateNumberHasBeenSet() const
{
    return m_gateNumberHasBeenSet;
}

string BusInvoice::GetTicketType() const
{
    return m_ticketType;
}

void BusInvoice::SetTicketType(const string& _ticketType)
{
    m_ticketType = _ticketType;
    m_ticketTypeHasBeenSet = true;
}

bool BusInvoice::TicketTypeHasBeenSet() const
{
    return m_ticketTypeHasBeenSet;
}

string BusInvoice::GetVehicleType() const
{
    return m_vehicleType;
}

void BusInvoice::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool BusInvoice::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string BusInvoice::GetSeatNumber() const
{
    return m_seatNumber;
}

void BusInvoice::SetSeatNumber(const string& _seatNumber)
{
    m_seatNumber = _seatNumber;
    m_seatNumberHasBeenSet = true;
}

bool BusInvoice::SeatNumberHasBeenSet() const
{
    return m_seatNumberHasBeenSet;
}

string BusInvoice::GetTrainNumber() const
{
    return m_trainNumber;
}

void BusInvoice::SetTrainNumber(const string& _trainNumber)
{
    m_trainNumber = _trainNumber;
    m_trainNumberHasBeenSet = true;
}

bool BusInvoice::TrainNumberHasBeenSet() const
{
    return m_trainNumberHasBeenSet;
}

