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

#include <tencentcloud/ocr/v20181119/model/FlightItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FlightItem::FlightItem() :
    m_terminalGetOnHasBeenSet(false),
    m_terminalGetOffHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_flightNumberHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_fareBasisHasBeenSet(false)
{
}

CoreInternalOutcome FlightItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TerminalGetOn") && !value["TerminalGetOn"].IsNull())
    {
        if (!value["TerminalGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.TerminalGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalGetOn = string(value["TerminalGetOn"].GetString());
        m_terminalGetOnHasBeenSet = true;
    }

    if (value.HasMember("TerminalGetOff") && !value["TerminalGetOff"].IsNull())
    {
        if (!value["TerminalGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.TerminalGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalGetOff = string(value["TerminalGetOff"].GetString());
        m_terminalGetOffHasBeenSet = true;
    }

    if (value.HasMember("Carrier") && !value["Carrier"].IsNull())
    {
        if (!value["Carrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.Carrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrier = string(value["Carrier"].GetString());
        m_carrierHasBeenSet = true;
    }

    if (value.HasMember("FlightNumber") && !value["FlightNumber"].IsNull())
    {
        if (!value["FlightNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.FlightNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightNumber = string(value["FlightNumber"].GetString());
        m_flightNumberHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("Allow") && !value["Allow"].IsNull())
    {
        if (!value["Allow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.Allow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allow = string(value["Allow"].GetString());
        m_allowHasBeenSet = true;
    }

    if (value.HasMember("FareBasis") && !value["FareBasis"].IsNull())
    {
        if (!value["FareBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItem.FareBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fareBasis = string(value["FareBasis"].GetString());
        m_fareBasisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlightItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_terminalGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminalGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalGetOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalGetOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminalGetOff.c_str(), allocator).Move(), allocator);
    }

    if (m_carrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Carrier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carrier.c_str(), allocator).Move(), allocator);
    }

    if (m_flightNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flightNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_seatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seat.c_str(), allocator).Move(), allocator);
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

    if (m_allowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allow.c_str(), allocator).Move(), allocator);
    }

    if (m_fareBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FareBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fareBasis.c_str(), allocator).Move(), allocator);
    }

}


string FlightItem::GetTerminalGetOn() const
{
    return m_terminalGetOn;
}

void FlightItem::SetTerminalGetOn(const string& _terminalGetOn)
{
    m_terminalGetOn = _terminalGetOn;
    m_terminalGetOnHasBeenSet = true;
}

bool FlightItem::TerminalGetOnHasBeenSet() const
{
    return m_terminalGetOnHasBeenSet;
}

string FlightItem::GetTerminalGetOff() const
{
    return m_terminalGetOff;
}

void FlightItem::SetTerminalGetOff(const string& _terminalGetOff)
{
    m_terminalGetOff = _terminalGetOff;
    m_terminalGetOffHasBeenSet = true;
}

bool FlightItem::TerminalGetOffHasBeenSet() const
{
    return m_terminalGetOffHasBeenSet;
}

string FlightItem::GetCarrier() const
{
    return m_carrier;
}

void FlightItem::SetCarrier(const string& _carrier)
{
    m_carrier = _carrier;
    m_carrierHasBeenSet = true;
}

bool FlightItem::CarrierHasBeenSet() const
{
    return m_carrierHasBeenSet;
}

string FlightItem::GetFlightNumber() const
{
    return m_flightNumber;
}

void FlightItem::SetFlightNumber(const string& _flightNumber)
{
    m_flightNumber = _flightNumber;
    m_flightNumberHasBeenSet = true;
}

bool FlightItem::FlightNumberHasBeenSet() const
{
    return m_flightNumberHasBeenSet;
}

string FlightItem::GetSeat() const
{
    return m_seat;
}

void FlightItem::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool FlightItem::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string FlightItem::GetDateGetOn() const
{
    return m_dateGetOn;
}

void FlightItem::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool FlightItem::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string FlightItem::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void FlightItem::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool FlightItem::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string FlightItem::GetStationGetOn() const
{
    return m_stationGetOn;
}

void FlightItem::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool FlightItem::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string FlightItem::GetStationGetOff() const
{
    return m_stationGetOff;
}

void FlightItem::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool FlightItem::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string FlightItem::GetAllow() const
{
    return m_allow;
}

void FlightItem::SetAllow(const string& _allow)
{
    m_allow = _allow;
    m_allowHasBeenSet = true;
}

bool FlightItem::AllowHasBeenSet() const
{
    return m_allowHasBeenSet;
}

string FlightItem::GetFareBasis() const
{
    return m_fareBasis;
}

void FlightItem::SetFareBasis(const string& _fareBasis)
{
    m_fareBasis = _fareBasis;
    m_fareBasisHasBeenSet = true;
}

bool FlightItem::FareBasisHasBeenSet() const
{
    return m_fareBasisHasBeenSet;
}

