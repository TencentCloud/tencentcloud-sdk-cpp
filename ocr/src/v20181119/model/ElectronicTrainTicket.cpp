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

#include <tencentcloud/ocr/v20181119/model/ElectronicTrainTicket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ElectronicTrainTicket::ElectronicTrainTicket() :
    m_buyerNameHasBeenSet(false),
    m_buyerTaxCodeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_totalCNHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_trainNumberHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_seatTypeHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_trainCabinHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_electronicNumberHasBeenSet(false),
    m_passengerNameHasBeenSet(false),
    m_passengerNoHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_stateCodeHasBeenSet(false)
{
}

CoreInternalOutcome ElectronicTrainTicket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuyerName") && !value["BuyerName"].IsNull())
    {
        if (!value["BuyerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.BuyerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerName = string(value["BuyerName"].GetString());
        m_buyerNameHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxCode") && !value["BuyerTaxCode"].IsNull())
    {
        if (!value["BuyerTaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.BuyerTaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxCode = string(value["BuyerTaxCode"].GetString());
        m_buyerTaxCodeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("TotalCN") && !value["TotalCN"].IsNull())
    {
        if (!value["TotalCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.TotalCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCN = string(value["TotalCN"].GetString());
        m_totalCNHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("TrainNumber") && !value["TrainNumber"].IsNull())
    {
        if (!value["TrainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.TrainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNumber = string(value["TrainNumber"].GetString());
        m_trainNumberHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("SeatType") && !value["SeatType"].IsNull())
    {
        if (!value["SeatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.SeatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatType = string(value["SeatType"].GetString());
        m_seatTypeHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("TrainCabin") && !value["TrainCabin"].IsNull())
    {
        if (!value["TrainCabin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.TrainCabin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainCabin = string(value["TrainCabin"].GetString());
        m_trainCabinHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("ElectronicNumber") && !value["ElectronicNumber"].IsNull())
    {
        if (!value["ElectronicNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.ElectronicNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicNumber = string(value["ElectronicNumber"].GetString());
        m_electronicNumberHasBeenSet = true;
    }

    if (value.HasMember("PassengerName") && !value["PassengerName"].IsNull())
    {
        if (!value["PassengerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.PassengerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passengerName = string(value["PassengerName"].GetString());
        m_passengerNameHasBeenSet = true;
    }

    if (value.HasMember("PassengerNo") && !value["PassengerNo"].IsNull())
    {
        if (!value["PassengerNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.PassengerNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passengerNo = string(value["PassengerNo"].GetString());
        m_passengerNoHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("StateCode") && !value["StateCode"].IsNull())
    {
        if (!value["StateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicket.StateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateCode = string(value["StateCode"].GetString());
        m_stateCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElectronicTrainTicket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buyerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerName.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxCode.c_str(), allocator).Move(), allocator);
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

    if (m_totalCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCN.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_trainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_seatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatType.c_str(), allocator).Move(), allocator);
    }

    if (m_dateGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_trainCabinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainCabin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainCabin.c_str(), allocator).Move(), allocator);
    }

    if (m_stationGetOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StationGetOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stationGetOn.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_passengerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassengerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passengerName.c_str(), allocator).Move(), allocator);
    }

    if (m_passengerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassengerNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passengerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_stationGetOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StationGetOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stationGetOff.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
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

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_stateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateCode.c_str(), allocator).Move(), allocator);
    }

}


string ElectronicTrainTicket::GetBuyerName() const
{
    return m_buyerName;
}

void ElectronicTrainTicket::SetBuyerName(const string& _buyerName)
{
    m_buyerName = _buyerName;
    m_buyerNameHasBeenSet = true;
}

bool ElectronicTrainTicket::BuyerNameHasBeenSet() const
{
    return m_buyerNameHasBeenSet;
}

string ElectronicTrainTicket::GetBuyerTaxCode() const
{
    return m_buyerTaxCode;
}

void ElectronicTrainTicket::SetBuyerTaxCode(const string& _buyerTaxCode)
{
    m_buyerTaxCode = _buyerTaxCode;
    m_buyerTaxCodeHasBeenSet = true;
}

bool ElectronicTrainTicket::BuyerTaxCodeHasBeenSet() const
{
    return m_buyerTaxCodeHasBeenSet;
}

string ElectronicTrainTicket::GetNumber() const
{
    return m_number;
}

void ElectronicTrainTicket::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool ElectronicTrainTicket::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string ElectronicTrainTicket::GetDate() const
{
    return m_date;
}

void ElectronicTrainTicket::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ElectronicTrainTicket::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ElectronicTrainTicket::GetTotalCN() const
{
    return m_totalCN;
}

void ElectronicTrainTicket::SetTotalCN(const string& _totalCN)
{
    m_totalCN = _totalCN;
    m_totalCNHasBeenSet = true;
}

bool ElectronicTrainTicket::TotalCNHasBeenSet() const
{
    return m_totalCNHasBeenSet;
}

string ElectronicTrainTicket::GetTax() const
{
    return m_tax;
}

void ElectronicTrainTicket::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool ElectronicTrainTicket::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string ElectronicTrainTicket::GetServiceType() const
{
    return m_serviceType;
}

void ElectronicTrainTicket::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ElectronicTrainTicket::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ElectronicTrainTicket::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void ElectronicTrainTicket::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool ElectronicTrainTicket::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string ElectronicTrainTicket::GetTrainNumber() const
{
    return m_trainNumber;
}

void ElectronicTrainTicket::SetTrainNumber(const string& _trainNumber)
{
    m_trainNumber = _trainNumber;
    m_trainNumberHasBeenSet = true;
}

bool ElectronicTrainTicket::TrainNumberHasBeenSet() const
{
    return m_trainNumberHasBeenSet;
}

string ElectronicTrainTicket::GetCode() const
{
    return m_code;
}

void ElectronicTrainTicket::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ElectronicTrainTicket::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ElectronicTrainTicket::GetSeatType() const
{
    return m_seatType;
}

void ElectronicTrainTicket::SetSeatType(const string& _seatType)
{
    m_seatType = _seatType;
    m_seatTypeHasBeenSet = true;
}

bool ElectronicTrainTicket::SeatTypeHasBeenSet() const
{
    return m_seatTypeHasBeenSet;
}

string ElectronicTrainTicket::GetDateGetOn() const
{
    return m_dateGetOn;
}

void ElectronicTrainTicket::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool ElectronicTrainTicket::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string ElectronicTrainTicket::GetTrainCabin() const
{
    return m_trainCabin;
}

void ElectronicTrainTicket::SetTrainCabin(const string& _trainCabin)
{
    m_trainCabin = _trainCabin;
    m_trainCabinHasBeenSet = true;
}

bool ElectronicTrainTicket::TrainCabinHasBeenSet() const
{
    return m_trainCabinHasBeenSet;
}

string ElectronicTrainTicket::GetStationGetOn() const
{
    return m_stationGetOn;
}

void ElectronicTrainTicket::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool ElectronicTrainTicket::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string ElectronicTrainTicket::GetElectronicNumber() const
{
    return m_electronicNumber;
}

void ElectronicTrainTicket::SetElectronicNumber(const string& _electronicNumber)
{
    m_electronicNumber = _electronicNumber;
    m_electronicNumberHasBeenSet = true;
}

bool ElectronicTrainTicket::ElectronicNumberHasBeenSet() const
{
    return m_electronicNumberHasBeenSet;
}

string ElectronicTrainTicket::GetPassengerName() const
{
    return m_passengerName;
}

void ElectronicTrainTicket::SetPassengerName(const string& _passengerName)
{
    m_passengerName = _passengerName;
    m_passengerNameHasBeenSet = true;
}

bool ElectronicTrainTicket::PassengerNameHasBeenSet() const
{
    return m_passengerNameHasBeenSet;
}

string ElectronicTrainTicket::GetPassengerNo() const
{
    return m_passengerNo;
}

void ElectronicTrainTicket::SetPassengerNo(const string& _passengerNo)
{
    m_passengerNo = _passengerNo;
    m_passengerNoHasBeenSet = true;
}

bool ElectronicTrainTicket::PassengerNoHasBeenSet() const
{
    return m_passengerNoHasBeenSet;
}

string ElectronicTrainTicket::GetAmount() const
{
    return m_amount;
}

void ElectronicTrainTicket::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool ElectronicTrainTicket::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string ElectronicTrainTicket::GetStationGetOff() const
{
    return m_stationGetOff;
}

void ElectronicTrainTicket::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool ElectronicTrainTicket::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string ElectronicTrainTicket::GetTaxRate() const
{
    return m_taxRate;
}

void ElectronicTrainTicket::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool ElectronicTrainTicket::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string ElectronicTrainTicket::GetSeat() const
{
    return m_seat;
}

void ElectronicTrainTicket::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool ElectronicTrainTicket::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string ElectronicTrainTicket::GetTotal() const
{
    return m_total;
}

void ElectronicTrainTicket::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ElectronicTrainTicket::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ElectronicTrainTicket::GetCheckCode() const
{
    return m_checkCode;
}

void ElectronicTrainTicket::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool ElectronicTrainTicket::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string ElectronicTrainTicket::GetStateCode() const
{
    return m_stateCode;
}

void ElectronicTrainTicket::SetStateCode(const string& _stateCode)
{
    m_stateCode = _stateCode;
    m_stateCodeHasBeenSet = true;
}

bool ElectronicTrainTicket::StateCodeHasBeenSet() const
{
    return m_stateCodeHasBeenSet;
}

