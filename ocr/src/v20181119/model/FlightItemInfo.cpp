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

#include <tencentcloud/ocr/v20181119/model/FlightItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FlightItemInfo::FlightItemInfo() :
    m_terminalGetOnHasBeenSet(false),
    m_terminalGetOffHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_flightNumberHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_fareBasisHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_dateStartHasBeenSet(false),
    m_dateEndHasBeenSet(false)
{
}

CoreInternalOutcome FlightItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TerminalGetOn") && !value["TerminalGetOn"].IsNull())
    {
        if (!value["TerminalGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.TerminalGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalGetOn = string(value["TerminalGetOn"].GetString());
        m_terminalGetOnHasBeenSet = true;
    }

    if (value.HasMember("TerminalGetOff") && !value["TerminalGetOff"].IsNull())
    {
        if (!value["TerminalGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.TerminalGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalGetOff = string(value["TerminalGetOff"].GetString());
        m_terminalGetOffHasBeenSet = true;
    }

    if (value.HasMember("Carrier") && !value["Carrier"].IsNull())
    {
        if (!value["Carrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.Carrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrier = string(value["Carrier"].GetString());
        m_carrierHasBeenSet = true;
    }

    if (value.HasMember("FlightNumber") && !value["FlightNumber"].IsNull())
    {
        if (!value["FlightNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.FlightNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightNumber = string(value["FlightNumber"].GetString());
        m_flightNumberHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("FareBasis") && !value["FareBasis"].IsNull())
    {
        if (!value["FareBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.FareBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fareBasis = string(value["FareBasis"].GetString());
        m_fareBasisHasBeenSet = true;
    }

    if (value.HasMember("Allow") && !value["Allow"].IsNull())
    {
        if (!value["Allow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.Allow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allow = string(value["Allow"].GetString());
        m_allowHasBeenSet = true;
    }

    if (value.HasMember("DateStart") && !value["DateStart"].IsNull())
    {
        if (!value["DateStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.DateStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateStart = string(value["DateStart"].GetString());
        m_dateStartHasBeenSet = true;
    }

    if (value.HasMember("DateEnd") && !value["DateEnd"].IsNull())
    {
        if (!value["DateEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightItemInfo.DateEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateEnd = string(value["DateEnd"].GetString());
        m_dateEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlightItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fareBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FareBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fareBasis.c_str(), allocator).Move(), allocator);
    }

    if (m_allowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allow.c_str(), allocator).Move(), allocator);
    }

    if (m_dateStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateStart.c_str(), allocator).Move(), allocator);
    }

    if (m_dateEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateEnd.c_str(), allocator).Move(), allocator);
    }

}


string FlightItemInfo::GetTerminalGetOn() const
{
    return m_terminalGetOn;
}

void FlightItemInfo::SetTerminalGetOn(const string& _terminalGetOn)
{
    m_terminalGetOn = _terminalGetOn;
    m_terminalGetOnHasBeenSet = true;
}

bool FlightItemInfo::TerminalGetOnHasBeenSet() const
{
    return m_terminalGetOnHasBeenSet;
}

string FlightItemInfo::GetTerminalGetOff() const
{
    return m_terminalGetOff;
}

void FlightItemInfo::SetTerminalGetOff(const string& _terminalGetOff)
{
    m_terminalGetOff = _terminalGetOff;
    m_terminalGetOffHasBeenSet = true;
}

bool FlightItemInfo::TerminalGetOffHasBeenSet() const
{
    return m_terminalGetOffHasBeenSet;
}

string FlightItemInfo::GetCarrier() const
{
    return m_carrier;
}

void FlightItemInfo::SetCarrier(const string& _carrier)
{
    m_carrier = _carrier;
    m_carrierHasBeenSet = true;
}

bool FlightItemInfo::CarrierHasBeenSet() const
{
    return m_carrierHasBeenSet;
}

string FlightItemInfo::GetFlightNumber() const
{
    return m_flightNumber;
}

void FlightItemInfo::SetFlightNumber(const string& _flightNumber)
{
    m_flightNumber = _flightNumber;
    m_flightNumberHasBeenSet = true;
}

bool FlightItemInfo::FlightNumberHasBeenSet() const
{
    return m_flightNumberHasBeenSet;
}

string FlightItemInfo::GetSeat() const
{
    return m_seat;
}

void FlightItemInfo::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool FlightItemInfo::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string FlightItemInfo::GetDateGetOn() const
{
    return m_dateGetOn;
}

void FlightItemInfo::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool FlightItemInfo::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string FlightItemInfo::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void FlightItemInfo::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool FlightItemInfo::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string FlightItemInfo::GetFareBasis() const
{
    return m_fareBasis;
}

void FlightItemInfo::SetFareBasis(const string& _fareBasis)
{
    m_fareBasis = _fareBasis;
    m_fareBasisHasBeenSet = true;
}

bool FlightItemInfo::FareBasisHasBeenSet() const
{
    return m_fareBasisHasBeenSet;
}

string FlightItemInfo::GetAllow() const
{
    return m_allow;
}

void FlightItemInfo::SetAllow(const string& _allow)
{
    m_allow = _allow;
    m_allowHasBeenSet = true;
}

bool FlightItemInfo::AllowHasBeenSet() const
{
    return m_allowHasBeenSet;
}

string FlightItemInfo::GetDateStart() const
{
    return m_dateStart;
}

void FlightItemInfo::SetDateStart(const string& _dateStart)
{
    m_dateStart = _dateStart;
    m_dateStartHasBeenSet = true;
}

bool FlightItemInfo::DateStartHasBeenSet() const
{
    return m_dateStartHasBeenSet;
}

string FlightItemInfo::GetDateEnd() const
{
    return m_dateEnd;
}

void FlightItemInfo::SetDateEnd(const string& _dateEnd)
{
    m_dateEnd = _dateEnd;
    m_dateEndHasBeenSet = true;
}

bool FlightItemInfo::DateEndHasBeenSet() const
{
    return m_dateEndHasBeenSet;
}

