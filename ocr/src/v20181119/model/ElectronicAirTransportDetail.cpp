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

#include <tencentcloud/ocr/v20181119/model/ElectronicAirTransportDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ElectronicAirTransportDetail::ElectronicAirTransportDetail() :
    m_flightSegmentHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_flightNumberHasBeenSet(false),
    m_seatLevelHasBeenSet(false),
    m_flightDateHasBeenSet(false),
    m_departureTimeHasBeenSet(false),
    m_fareBasisHasBeenSet(false)
{
}

CoreInternalOutcome ElectronicAirTransportDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlightSegment") && !value["FlightSegment"].IsNull())
    {
        if (!value["FlightSegment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.FlightSegment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightSegment = string(value["FlightSegment"].GetString());
        m_flightSegmentHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("Carrier") && !value["Carrier"].IsNull())
    {
        if (!value["Carrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.Carrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrier = string(value["Carrier"].GetString());
        m_carrierHasBeenSet = true;
    }

    if (value.HasMember("FlightNumber") && !value["FlightNumber"].IsNull())
    {
        if (!value["FlightNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.FlightNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightNumber = string(value["FlightNumber"].GetString());
        m_flightNumberHasBeenSet = true;
    }

    if (value.HasMember("SeatLevel") && !value["SeatLevel"].IsNull())
    {
        if (!value["SeatLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.SeatLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatLevel = string(value["SeatLevel"].GetString());
        m_seatLevelHasBeenSet = true;
    }

    if (value.HasMember("FlightDate") && !value["FlightDate"].IsNull())
    {
        if (!value["FlightDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.FlightDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightDate = string(value["FlightDate"].GetString());
        m_flightDateHasBeenSet = true;
    }

    if (value.HasMember("DepartureTime") && !value["DepartureTime"].IsNull())
    {
        if (!value["DepartureTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.DepartureTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departureTime = string(value["DepartureTime"].GetString());
        m_departureTimeHasBeenSet = true;
    }

    if (value.HasMember("FareBasis") && !value["FareBasis"].IsNull())
    {
        if (!value["FareBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransportDetail.FareBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fareBasis = string(value["FareBasis"].GetString());
        m_fareBasisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElectronicAirTransportDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flightSegmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightSegment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flightSegment.c_str(), allocator).Move(), allocator);
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

    if (m_seatLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_flightDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flightDate.c_str(), allocator).Move(), allocator);
    }

    if (m_departureTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartureTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departureTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fareBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FareBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fareBasis.c_str(), allocator).Move(), allocator);
    }

}


string ElectronicAirTransportDetail::GetFlightSegment() const
{
    return m_flightSegment;
}

void ElectronicAirTransportDetail::SetFlightSegment(const string& _flightSegment)
{
    m_flightSegment = _flightSegment;
    m_flightSegmentHasBeenSet = true;
}

bool ElectronicAirTransportDetail::FlightSegmentHasBeenSet() const
{
    return m_flightSegmentHasBeenSet;
}

string ElectronicAirTransportDetail::GetStationGetOn() const
{
    return m_stationGetOn;
}

void ElectronicAirTransportDetail::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool ElectronicAirTransportDetail::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string ElectronicAirTransportDetail::GetStationGetOff() const
{
    return m_stationGetOff;
}

void ElectronicAirTransportDetail::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool ElectronicAirTransportDetail::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string ElectronicAirTransportDetail::GetCarrier() const
{
    return m_carrier;
}

void ElectronicAirTransportDetail::SetCarrier(const string& _carrier)
{
    m_carrier = _carrier;
    m_carrierHasBeenSet = true;
}

bool ElectronicAirTransportDetail::CarrierHasBeenSet() const
{
    return m_carrierHasBeenSet;
}

string ElectronicAirTransportDetail::GetFlightNumber() const
{
    return m_flightNumber;
}

void ElectronicAirTransportDetail::SetFlightNumber(const string& _flightNumber)
{
    m_flightNumber = _flightNumber;
    m_flightNumberHasBeenSet = true;
}

bool ElectronicAirTransportDetail::FlightNumberHasBeenSet() const
{
    return m_flightNumberHasBeenSet;
}

string ElectronicAirTransportDetail::GetSeatLevel() const
{
    return m_seatLevel;
}

void ElectronicAirTransportDetail::SetSeatLevel(const string& _seatLevel)
{
    m_seatLevel = _seatLevel;
    m_seatLevelHasBeenSet = true;
}

bool ElectronicAirTransportDetail::SeatLevelHasBeenSet() const
{
    return m_seatLevelHasBeenSet;
}

string ElectronicAirTransportDetail::GetFlightDate() const
{
    return m_flightDate;
}

void ElectronicAirTransportDetail::SetFlightDate(const string& _flightDate)
{
    m_flightDate = _flightDate;
    m_flightDateHasBeenSet = true;
}

bool ElectronicAirTransportDetail::FlightDateHasBeenSet() const
{
    return m_flightDateHasBeenSet;
}

string ElectronicAirTransportDetail::GetDepartureTime() const
{
    return m_departureTime;
}

void ElectronicAirTransportDetail::SetDepartureTime(const string& _departureTime)
{
    m_departureTime = _departureTime;
    m_departureTimeHasBeenSet = true;
}

bool ElectronicAirTransportDetail::DepartureTimeHasBeenSet() const
{
    return m_departureTimeHasBeenSet;
}

string ElectronicAirTransportDetail::GetFareBasis() const
{
    return m_fareBasis;
}

void ElectronicAirTransportDetail::SetFareBasis(const string& _fareBasis)
{
    m_fareBasis = _fareBasis;
    m_fareBasisHasBeenSet = true;
}

bool ElectronicAirTransportDetail::FareBasisHasBeenSet() const
{
    return m_fareBasisHasBeenSet;
}

