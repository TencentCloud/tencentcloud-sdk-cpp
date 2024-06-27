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

#include <tencentcloud/ocr/v20181119/model/TrainTicket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TrainTicket::TrainTicket() :
    m_titleHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_gateNumberHasBeenSet(false),
    m_trainNumberHasBeenSet(false),
    m_handlingFeeHasBeenSet(false),
    m_originalFareHasBeenSet(false),
    m_totalCnHasBeenSet(false),
    m_seatNumberHasBeenSet(false),
    m_pickUpAddressHasBeenSet(false),
    m_ticketChangeHasBeenSet(false),
    m_additionalFareHasBeenSet(false),
    m_receiptNumberHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_reimburseOnlyMarkHasBeenSet(false),
    m_refundMarkHasBeenSet(false),
    m_ticketChangeMarkHasBeenSet(false)
{
}

CoreInternalOutcome TrainTicket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("GateNumber") && !value["GateNumber"].IsNull())
    {
        if (!value["GateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.GateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateNumber = string(value["GateNumber"].GetString());
        m_gateNumberHasBeenSet = true;
    }

    if (value.HasMember("TrainNumber") && !value["TrainNumber"].IsNull())
    {
        if (!value["TrainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.TrainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNumber = string(value["TrainNumber"].GetString());
        m_trainNumberHasBeenSet = true;
    }

    if (value.HasMember("HandlingFee") && !value["HandlingFee"].IsNull())
    {
        if (!value["HandlingFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.HandlingFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handlingFee = string(value["HandlingFee"].GetString());
        m_handlingFeeHasBeenSet = true;
    }

    if (value.HasMember("OriginalFare") && !value["OriginalFare"].IsNull())
    {
        if (!value["OriginalFare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.OriginalFare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalFare = string(value["OriginalFare"].GetString());
        m_originalFareHasBeenSet = true;
    }

    if (value.HasMember("TotalCn") && !value["TotalCn"].IsNull())
    {
        if (!value["TotalCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.TotalCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCn = string(value["TotalCn"].GetString());
        m_totalCnHasBeenSet = true;
    }

    if (value.HasMember("SeatNumber") && !value["SeatNumber"].IsNull())
    {
        if (!value["SeatNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.SeatNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatNumber = string(value["SeatNumber"].GetString());
        m_seatNumberHasBeenSet = true;
    }

    if (value.HasMember("PickUpAddress") && !value["PickUpAddress"].IsNull())
    {
        if (!value["PickUpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.PickUpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pickUpAddress = string(value["PickUpAddress"].GetString());
        m_pickUpAddressHasBeenSet = true;
    }

    if (value.HasMember("TicketChange") && !value["TicketChange"].IsNull())
    {
        if (!value["TicketChange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.TicketChange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketChange = string(value["TicketChange"].GetString());
        m_ticketChangeHasBeenSet = true;
    }

    if (value.HasMember("AdditionalFare") && !value["AdditionalFare"].IsNull())
    {
        if (!value["AdditionalFare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.AdditionalFare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionalFare = string(value["AdditionalFare"].GetString());
        m_additionalFareHasBeenSet = true;
    }

    if (value.HasMember("ReceiptNumber") && !value["ReceiptNumber"].IsNull())
    {
        if (!value["ReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.ReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptNumber = string(value["ReceiptNumber"].GetString());
        m_receiptNumberHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("ReimburseOnlyMark") && !value["ReimburseOnlyMark"].IsNull())
    {
        if (!value["ReimburseOnlyMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.ReimburseOnlyMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reimburseOnlyMark = value["ReimburseOnlyMark"].GetInt64();
        m_reimburseOnlyMarkHasBeenSet = true;
    }

    if (value.HasMember("RefundMark") && !value["RefundMark"].IsNull())
    {
        if (!value["RefundMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.RefundMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundMark = value["RefundMark"].GetInt64();
        m_refundMarkHasBeenSet = true;
    }

    if (value.HasMember("TicketChangeMark") && !value["TicketChangeMark"].IsNull())
    {
        if (!value["TicketChangeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainTicket.TicketChangeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketChangeMark = value["TicketChangeMark"].GetInt64();
        m_ticketChangeMarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainTicket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_dateGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_timeGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_seatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seat.c_str(), allocator).Move(), allocator);
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

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_gateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_trainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handlingFee.c_str(), allocator).Move(), allocator);
    }

    if (m_originalFareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalFare.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCn.c_str(), allocator).Move(), allocator);
    }

    if (m_seatNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_pickUpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PickUpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pickUpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketChange.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalFareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalFare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionalFare.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
    }

    if (m_reimburseOnlyMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReimburseOnlyMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reimburseOnlyMark, allocator);
    }

    if (m_refundMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundMark, allocator);
    }

    if (m_ticketChangeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketChangeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketChangeMark, allocator);
    }

}


string TrainTicket::GetTitle() const
{
    return m_title;
}

void TrainTicket::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TrainTicket::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string TrainTicket::GetNumber() const
{
    return m_number;
}

void TrainTicket::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool TrainTicket::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string TrainTicket::GetDateGetOn() const
{
    return m_dateGetOn;
}

void TrainTicket::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool TrainTicket::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string TrainTicket::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void TrainTicket::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool TrainTicket::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string TrainTicket::GetName() const
{
    return m_name;
}

void TrainTicket::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TrainTicket::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TrainTicket::GetStationGetOn() const
{
    return m_stationGetOn;
}

void TrainTicket::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool TrainTicket::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string TrainTicket::GetStationGetOff() const
{
    return m_stationGetOff;
}

void TrainTicket::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool TrainTicket::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string TrainTicket::GetSeat() const
{
    return m_seat;
}

void TrainTicket::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool TrainTicket::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string TrainTicket::GetTotal() const
{
    return m_total;
}

void TrainTicket::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool TrainTicket::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string TrainTicket::GetKind() const
{
    return m_kind;
}

void TrainTicket::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TrainTicket::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TrainTicket::GetSerialNumber() const
{
    return m_serialNumber;
}

void TrainTicket::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool TrainTicket::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string TrainTicket::GetUserID() const
{
    return m_userID;
}

void TrainTicket::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool TrainTicket::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string TrainTicket::GetGateNumber() const
{
    return m_gateNumber;
}

void TrainTicket::SetGateNumber(const string& _gateNumber)
{
    m_gateNumber = _gateNumber;
    m_gateNumberHasBeenSet = true;
}

bool TrainTicket::GateNumberHasBeenSet() const
{
    return m_gateNumberHasBeenSet;
}

string TrainTicket::GetTrainNumber() const
{
    return m_trainNumber;
}

void TrainTicket::SetTrainNumber(const string& _trainNumber)
{
    m_trainNumber = _trainNumber;
    m_trainNumberHasBeenSet = true;
}

bool TrainTicket::TrainNumberHasBeenSet() const
{
    return m_trainNumberHasBeenSet;
}

string TrainTicket::GetHandlingFee() const
{
    return m_handlingFee;
}

void TrainTicket::SetHandlingFee(const string& _handlingFee)
{
    m_handlingFee = _handlingFee;
    m_handlingFeeHasBeenSet = true;
}

bool TrainTicket::HandlingFeeHasBeenSet() const
{
    return m_handlingFeeHasBeenSet;
}

string TrainTicket::GetOriginalFare() const
{
    return m_originalFare;
}

void TrainTicket::SetOriginalFare(const string& _originalFare)
{
    m_originalFare = _originalFare;
    m_originalFareHasBeenSet = true;
}

bool TrainTicket::OriginalFareHasBeenSet() const
{
    return m_originalFareHasBeenSet;
}

string TrainTicket::GetTotalCn() const
{
    return m_totalCn;
}

void TrainTicket::SetTotalCn(const string& _totalCn)
{
    m_totalCn = _totalCn;
    m_totalCnHasBeenSet = true;
}

bool TrainTicket::TotalCnHasBeenSet() const
{
    return m_totalCnHasBeenSet;
}

string TrainTicket::GetSeatNumber() const
{
    return m_seatNumber;
}

void TrainTicket::SetSeatNumber(const string& _seatNumber)
{
    m_seatNumber = _seatNumber;
    m_seatNumberHasBeenSet = true;
}

bool TrainTicket::SeatNumberHasBeenSet() const
{
    return m_seatNumberHasBeenSet;
}

string TrainTicket::GetPickUpAddress() const
{
    return m_pickUpAddress;
}

void TrainTicket::SetPickUpAddress(const string& _pickUpAddress)
{
    m_pickUpAddress = _pickUpAddress;
    m_pickUpAddressHasBeenSet = true;
}

bool TrainTicket::PickUpAddressHasBeenSet() const
{
    return m_pickUpAddressHasBeenSet;
}

string TrainTicket::GetTicketChange() const
{
    return m_ticketChange;
}

void TrainTicket::SetTicketChange(const string& _ticketChange)
{
    m_ticketChange = _ticketChange;
    m_ticketChangeHasBeenSet = true;
}

bool TrainTicket::TicketChangeHasBeenSet() const
{
    return m_ticketChangeHasBeenSet;
}

string TrainTicket::GetAdditionalFare() const
{
    return m_additionalFare;
}

void TrainTicket::SetAdditionalFare(const string& _additionalFare)
{
    m_additionalFare = _additionalFare;
    m_additionalFareHasBeenSet = true;
}

bool TrainTicket::AdditionalFareHasBeenSet() const
{
    return m_additionalFareHasBeenSet;
}

string TrainTicket::GetReceiptNumber() const
{
    return m_receiptNumber;
}

void TrainTicket::SetReceiptNumber(const string& _receiptNumber)
{
    m_receiptNumber = _receiptNumber;
    m_receiptNumberHasBeenSet = true;
}

bool TrainTicket::ReceiptNumberHasBeenSet() const
{
    return m_receiptNumberHasBeenSet;
}

int64_t TrainTicket::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void TrainTicket::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool TrainTicket::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

int64_t TrainTicket::GetReimburseOnlyMark() const
{
    return m_reimburseOnlyMark;
}

void TrainTicket::SetReimburseOnlyMark(const int64_t& _reimburseOnlyMark)
{
    m_reimburseOnlyMark = _reimburseOnlyMark;
    m_reimburseOnlyMarkHasBeenSet = true;
}

bool TrainTicket::ReimburseOnlyMarkHasBeenSet() const
{
    return m_reimburseOnlyMarkHasBeenSet;
}

int64_t TrainTicket::GetRefundMark() const
{
    return m_refundMark;
}

void TrainTicket::SetRefundMark(const int64_t& _refundMark)
{
    m_refundMark = _refundMark;
    m_refundMarkHasBeenSet = true;
}

bool TrainTicket::RefundMarkHasBeenSet() const
{
    return m_refundMarkHasBeenSet;
}

int64_t TrainTicket::GetTicketChangeMark() const
{
    return m_ticketChangeMark;
}

void TrainTicket::SetTicketChangeMark(const int64_t& _ticketChangeMark)
{
    m_ticketChangeMark = _ticketChangeMark;
    m_ticketChangeMarkHasBeenSet = true;
}

bool TrainTicket::TicketChangeMarkHasBeenSet() const
{
    return m_ticketChangeMarkHasBeenSet;
}

