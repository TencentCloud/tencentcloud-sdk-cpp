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

#include <tencentcloud/ocr/v20181119/model/DetailInformationOfAirTicketTupleList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

DetailInformationOfAirTicketTupleList::DetailInformationOfAirTicketTupleList() :
    m_departureStationHasBeenSet(false),
    m_destinationStationHasBeenSet(false),
    m_flightSegmentHasBeenSet(false),
    m_carrierHasBeenSet(false),
    m_flightHasBeenSet(false),
    m_seatClassHasBeenSet(false),
    m_carrierDateHasBeenSet(false),
    m_departureTimeHasBeenSet(false),
    m_fareBasisHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_freeBaggageAllowanceHasBeenSet(false)
{
}

CoreInternalOutcome DetailInformationOfAirTicketTupleList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DepartureStation") && !value["DepartureStation"].IsNull())
    {
        if (!value["DepartureStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.DepartureStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departureStation = string(value["DepartureStation"].GetString());
        m_departureStationHasBeenSet = true;
    }

    if (value.HasMember("DestinationStation") && !value["DestinationStation"].IsNull())
    {
        if (!value["DestinationStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.DestinationStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationStation = string(value["DestinationStation"].GetString());
        m_destinationStationHasBeenSet = true;
    }

    if (value.HasMember("FlightSegment") && !value["FlightSegment"].IsNull())
    {
        if (!value["FlightSegment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.FlightSegment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flightSegment = string(value["FlightSegment"].GetString());
        m_flightSegmentHasBeenSet = true;
    }

    if (value.HasMember("Carrier") && !value["Carrier"].IsNull())
    {
        if (!value["Carrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.Carrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrier = string(value["Carrier"].GetString());
        m_carrierHasBeenSet = true;
    }

    if (value.HasMember("Flight") && !value["Flight"].IsNull())
    {
        if (!value["Flight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.Flight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flight = string(value["Flight"].GetString());
        m_flightHasBeenSet = true;
    }

    if (value.HasMember("SeatClass") && !value["SeatClass"].IsNull())
    {
        if (!value["SeatClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.SeatClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatClass = string(value["SeatClass"].GetString());
        m_seatClassHasBeenSet = true;
    }

    if (value.HasMember("CarrierDate") && !value["CarrierDate"].IsNull())
    {
        if (!value["CarrierDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.CarrierDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carrierDate = string(value["CarrierDate"].GetString());
        m_carrierDateHasBeenSet = true;
    }

    if (value.HasMember("DepartureTime") && !value["DepartureTime"].IsNull())
    {
        if (!value["DepartureTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.DepartureTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departureTime = string(value["DepartureTime"].GetString());
        m_departureTimeHasBeenSet = true;
    }

    if (value.HasMember("FareBasis") && !value["FareBasis"].IsNull())
    {
        if (!value["FareBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.FareBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fareBasis = string(value["FareBasis"].GetString());
        m_fareBasisHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDate") && !value["EffectiveDate"].IsNull())
    {
        if (!value["EffectiveDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.EffectiveDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDate = string(value["EffectiveDate"].GetString());
        m_effectiveDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("FreeBaggageAllowance") && !value["FreeBaggageAllowance"].IsNull())
    {
        if (!value["FreeBaggageAllowance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailInformationOfAirTicketTupleList.FreeBaggageAllowance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freeBaggageAllowance = string(value["FreeBaggageAllowance"].GetString());
        m_freeBaggageAllowanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailInformationOfAirTicketTupleList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_departureStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartureStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departureStation.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationStation.c_str(), allocator).Move(), allocator);
    }

    if (m_flightSegmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightSegment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flightSegment.c_str(), allocator).Move(), allocator);
    }

    if (m_carrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Carrier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carrier.c_str(), allocator).Move(), allocator);
    }

    if (m_flightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flight.c_str(), allocator).Move(), allocator);
    }

    if (m_seatClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatClass.c_str(), allocator).Move(), allocator);
    }

    if (m_carrierDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarrierDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carrierDate.c_str(), allocator).Move(), allocator);
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

    if (m_effectiveDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_freeBaggageAllowanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeBaggageAllowance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freeBaggageAllowance.c_str(), allocator).Move(), allocator);
    }

}


string DetailInformationOfAirTicketTupleList::GetDepartureStation() const
{
    return m_departureStation;
}

void DetailInformationOfAirTicketTupleList::SetDepartureStation(const string& _departureStation)
{
    m_departureStation = _departureStation;
    m_departureStationHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::DepartureStationHasBeenSet() const
{
    return m_departureStationHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetDestinationStation() const
{
    return m_destinationStation;
}

void DetailInformationOfAirTicketTupleList::SetDestinationStation(const string& _destinationStation)
{
    m_destinationStation = _destinationStation;
    m_destinationStationHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::DestinationStationHasBeenSet() const
{
    return m_destinationStationHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetFlightSegment() const
{
    return m_flightSegment;
}

void DetailInformationOfAirTicketTupleList::SetFlightSegment(const string& _flightSegment)
{
    m_flightSegment = _flightSegment;
    m_flightSegmentHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::FlightSegmentHasBeenSet() const
{
    return m_flightSegmentHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetCarrier() const
{
    return m_carrier;
}

void DetailInformationOfAirTicketTupleList::SetCarrier(const string& _carrier)
{
    m_carrier = _carrier;
    m_carrierHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::CarrierHasBeenSet() const
{
    return m_carrierHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetFlight() const
{
    return m_flight;
}

void DetailInformationOfAirTicketTupleList::SetFlight(const string& _flight)
{
    m_flight = _flight;
    m_flightHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::FlightHasBeenSet() const
{
    return m_flightHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetSeatClass() const
{
    return m_seatClass;
}

void DetailInformationOfAirTicketTupleList::SetSeatClass(const string& _seatClass)
{
    m_seatClass = _seatClass;
    m_seatClassHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::SeatClassHasBeenSet() const
{
    return m_seatClassHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetCarrierDate() const
{
    return m_carrierDate;
}

void DetailInformationOfAirTicketTupleList::SetCarrierDate(const string& _carrierDate)
{
    m_carrierDate = _carrierDate;
    m_carrierDateHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::CarrierDateHasBeenSet() const
{
    return m_carrierDateHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetDepartureTime() const
{
    return m_departureTime;
}

void DetailInformationOfAirTicketTupleList::SetDepartureTime(const string& _departureTime)
{
    m_departureTime = _departureTime;
    m_departureTimeHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::DepartureTimeHasBeenSet() const
{
    return m_departureTimeHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetFareBasis() const
{
    return m_fareBasis;
}

void DetailInformationOfAirTicketTupleList::SetFareBasis(const string& _fareBasis)
{
    m_fareBasis = _fareBasis;
    m_fareBasisHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::FareBasisHasBeenSet() const
{
    return m_fareBasisHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetEffectiveDate() const
{
    return m_effectiveDate;
}

void DetailInformationOfAirTicketTupleList::SetEffectiveDate(const string& _effectiveDate)
{
    m_effectiveDate = _effectiveDate;
    m_effectiveDateHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::EffectiveDateHasBeenSet() const
{
    return m_effectiveDateHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetExpirationDate() const
{
    return m_expirationDate;
}

void DetailInformationOfAirTicketTupleList::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string DetailInformationOfAirTicketTupleList::GetFreeBaggageAllowance() const
{
    return m_freeBaggageAllowance;
}

void DetailInformationOfAirTicketTupleList::SetFreeBaggageAllowance(const string& _freeBaggageAllowance)
{
    m_freeBaggageAllowance = _freeBaggageAllowance;
    m_freeBaggageAllowanceHasBeenSet = true;
}

bool DetailInformationOfAirTicketTupleList::FreeBaggageAllowanceHasBeenSet() const
{
    return m_freeBaggageAllowanceHasBeenSet;
}

