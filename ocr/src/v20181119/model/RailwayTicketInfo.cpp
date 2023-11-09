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

#include <tencentcloud/ocr/v20181119/model/RailwayTicketInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RailwayTicketInfo::RailwayTicketInfo() :
    m_typeOfVoucherHasBeenSet(false),
    m_electronicTicketNumHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false),
    m_typeOfBusinessHasBeenSet(false),
    m_departureStationHasBeenSet(false),
    m_phonicsOfDepartureStationHasBeenSet(false),
    m_destinationStationHasBeenSet(false),
    m_phonicsOfDestinationStationHasBeenSet(false),
    m_trainNumberHasBeenSet(false),
    m_travelDateHasBeenSet(false),
    m_departureTimeHasBeenSet(false),
    m_airConditioningCharacteristicsHasBeenSet(false),
    m_seatLevelHasBeenSet(false),
    m_carriageHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_electronicInvoiceRailwayETicketNumberHasBeenSet(false),
    m_idNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_totalAmountExcludingTaxHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxAmountHasBeenSet(false),
    m_nameOfPurchaserHasBeenSet(false),
    m_unifiedSocialCreditCodeOfPurchaserHasBeenSet(false),
    m_numberOfOriginalInvoiceHasBeenSet(false)
{
}

CoreInternalOutcome RailwayTicketInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeOfVoucher") && !value["TypeOfVoucher"].IsNull())
    {
        if (!value["TypeOfVoucher"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TypeOfVoucher` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeOfVoucher = string(value["TypeOfVoucher"].GetString());
        m_typeOfVoucherHasBeenSet = true;
    }

    if (value.HasMember("ElectronicTicketNum") && !value["ElectronicTicketNum"].IsNull())
    {
        if (!value["ElectronicTicketNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.ElectronicTicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicTicketNum = string(value["ElectronicTicketNum"].GetString());
        m_electronicTicketNumHasBeenSet = true;
    }

    if (value.HasMember("DateOfIssue") && !value["DateOfIssue"].IsNull())
    {
        if (!value["DateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.DateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssue = string(value["DateOfIssue"].GetString());
        m_dateOfIssueHasBeenSet = true;
    }

    if (value.HasMember("TypeOfBusiness") && !value["TypeOfBusiness"].IsNull())
    {
        if (!value["TypeOfBusiness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TypeOfBusiness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeOfBusiness = string(value["TypeOfBusiness"].GetString());
        m_typeOfBusinessHasBeenSet = true;
    }

    if (value.HasMember("DepartureStation") && !value["DepartureStation"].IsNull())
    {
        if (!value["DepartureStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.DepartureStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departureStation = string(value["DepartureStation"].GetString());
        m_departureStationHasBeenSet = true;
    }

    if (value.HasMember("PhonicsOfDepartureStation") && !value["PhonicsOfDepartureStation"].IsNull())
    {
        if (!value["PhonicsOfDepartureStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.PhonicsOfDepartureStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phonicsOfDepartureStation = string(value["PhonicsOfDepartureStation"].GetString());
        m_phonicsOfDepartureStationHasBeenSet = true;
    }

    if (value.HasMember("DestinationStation") && !value["DestinationStation"].IsNull())
    {
        if (!value["DestinationStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.DestinationStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationStation = string(value["DestinationStation"].GetString());
        m_destinationStationHasBeenSet = true;
    }

    if (value.HasMember("PhonicsOfDestinationStation") && !value["PhonicsOfDestinationStation"].IsNull())
    {
        if (!value["PhonicsOfDestinationStation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.PhonicsOfDestinationStation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phonicsOfDestinationStation = string(value["PhonicsOfDestinationStation"].GetString());
        m_phonicsOfDestinationStationHasBeenSet = true;
    }

    if (value.HasMember("TrainNumber") && !value["TrainNumber"].IsNull())
    {
        if (!value["TrainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TrainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNumber = string(value["TrainNumber"].GetString());
        m_trainNumberHasBeenSet = true;
    }

    if (value.HasMember("TravelDate") && !value["TravelDate"].IsNull())
    {
        if (!value["TravelDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TravelDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_travelDate = string(value["TravelDate"].GetString());
        m_travelDateHasBeenSet = true;
    }

    if (value.HasMember("DepartureTime") && !value["DepartureTime"].IsNull())
    {
        if (!value["DepartureTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.DepartureTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departureTime = string(value["DepartureTime"].GetString());
        m_departureTimeHasBeenSet = true;
    }

    if (value.HasMember("AirConditioningCharacteristics") && !value["AirConditioningCharacteristics"].IsNull())
    {
        if (!value["AirConditioningCharacteristics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.AirConditioningCharacteristics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_airConditioningCharacteristics = string(value["AirConditioningCharacteristics"].GetString());
        m_airConditioningCharacteristicsHasBeenSet = true;
    }

    if (value.HasMember("SeatLevel") && !value["SeatLevel"].IsNull())
    {
        if (!value["SeatLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.SeatLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatLevel = string(value["SeatLevel"].GetString());
        m_seatLevelHasBeenSet = true;
    }

    if (value.HasMember("Carriage") && !value["Carriage"].IsNull())
    {
        if (!value["Carriage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.Carriage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carriage = string(value["Carriage"].GetString());
        m_carriageHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("Fare") && !value["Fare"].IsNull())
    {
        if (!value["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(value["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (value.HasMember("ElectronicInvoiceRailwayETicketNumber") && !value["ElectronicInvoiceRailwayETicketNumber"].IsNull())
    {
        if (!value["ElectronicInvoiceRailwayETicketNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.ElectronicInvoiceRailwayETicketNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicInvoiceRailwayETicketNumber = string(value["ElectronicInvoiceRailwayETicketNumber"].GetString());
        m_electronicInvoiceRailwayETicketNumberHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TotalAmountExcludingTax") && !value["TotalAmountExcludingTax"].IsNull())
    {
        if (!value["TotalAmountExcludingTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TotalAmountExcludingTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmountExcludingTax = string(value["TotalAmountExcludingTax"].GetString());
        m_totalAmountExcludingTaxHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }

    if (value.HasMember("NameOfPurchaser") && !value["NameOfPurchaser"].IsNull())
    {
        if (!value["NameOfPurchaser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.NameOfPurchaser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameOfPurchaser = string(value["NameOfPurchaser"].GetString());
        m_nameOfPurchaserHasBeenSet = true;
    }

    if (value.HasMember("UnifiedSocialCreditCodeOfPurchaser") && !value["UnifiedSocialCreditCodeOfPurchaser"].IsNull())
    {
        if (!value["UnifiedSocialCreditCodeOfPurchaser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.UnifiedSocialCreditCodeOfPurchaser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedSocialCreditCodeOfPurchaser = string(value["UnifiedSocialCreditCodeOfPurchaser"].GetString());
        m_unifiedSocialCreditCodeOfPurchaserHasBeenSet = true;
    }

    if (value.HasMember("NumberOfOriginalInvoice") && !value["NumberOfOriginalInvoice"].IsNull())
    {
        if (!value["NumberOfOriginalInvoice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RailwayTicketInfo.NumberOfOriginalInvoice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfOriginalInvoice = string(value["NumberOfOriginalInvoice"].GetString());
        m_numberOfOriginalInvoiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RailwayTicketInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeOfVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeOfVoucher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeOfVoucher.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicTicketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicTicketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicTicketNum.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_typeOfBusinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeOfBusiness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeOfBusiness.c_str(), allocator).Move(), allocator);
    }

    if (m_departureStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartureStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departureStation.c_str(), allocator).Move(), allocator);
    }

    if (m_phonicsOfDepartureStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhonicsOfDepartureStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phonicsOfDepartureStation.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationStation.c_str(), allocator).Move(), allocator);
    }

    if (m_phonicsOfDestinationStationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhonicsOfDestinationStation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phonicsOfDestinationStation.c_str(), allocator).Move(), allocator);
    }

    if (m_trainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_travelDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_travelDate.c_str(), allocator).Move(), allocator);
    }

    if (m_departureTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartureTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departureTime.c_str(), allocator).Move(), allocator);
    }

    if (m_airConditioningCharacteristicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AirConditioningCharacteristics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_airConditioningCharacteristics.c_str(), allocator).Move(), allocator);
    }

    if (m_seatLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_carriageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Carriage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carriage.c_str(), allocator).Move(), allocator);
    }

    if (m_seatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seat.c_str(), allocator).Move(), allocator);
    }

    if (m_fareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fare.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicInvoiceRailwayETicketNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicInvoiceRailwayETicketNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicInvoiceRailwayETicketNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountExcludingTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmountExcludingTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalAmountExcludingTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_nameOfPurchaserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameOfPurchaser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameOfPurchaser.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedSocialCreditCodeOfPurchaserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedSocialCreditCodeOfPurchaser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedSocialCreditCodeOfPurchaser.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfOriginalInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfOriginalInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfOriginalInvoice.c_str(), allocator).Move(), allocator);
    }

}


string RailwayTicketInfo::GetTypeOfVoucher() const
{
    return m_typeOfVoucher;
}

void RailwayTicketInfo::SetTypeOfVoucher(const string& _typeOfVoucher)
{
    m_typeOfVoucher = _typeOfVoucher;
    m_typeOfVoucherHasBeenSet = true;
}

bool RailwayTicketInfo::TypeOfVoucherHasBeenSet() const
{
    return m_typeOfVoucherHasBeenSet;
}

string RailwayTicketInfo::GetElectronicTicketNum() const
{
    return m_electronicTicketNum;
}

void RailwayTicketInfo::SetElectronicTicketNum(const string& _electronicTicketNum)
{
    m_electronicTicketNum = _electronicTicketNum;
    m_electronicTicketNumHasBeenSet = true;
}

bool RailwayTicketInfo::ElectronicTicketNumHasBeenSet() const
{
    return m_electronicTicketNumHasBeenSet;
}

string RailwayTicketInfo::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

void RailwayTicketInfo::SetDateOfIssue(const string& _dateOfIssue)
{
    m_dateOfIssue = _dateOfIssue;
    m_dateOfIssueHasBeenSet = true;
}

bool RailwayTicketInfo::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

string RailwayTicketInfo::GetTypeOfBusiness() const
{
    return m_typeOfBusiness;
}

void RailwayTicketInfo::SetTypeOfBusiness(const string& _typeOfBusiness)
{
    m_typeOfBusiness = _typeOfBusiness;
    m_typeOfBusinessHasBeenSet = true;
}

bool RailwayTicketInfo::TypeOfBusinessHasBeenSet() const
{
    return m_typeOfBusinessHasBeenSet;
}

string RailwayTicketInfo::GetDepartureStation() const
{
    return m_departureStation;
}

void RailwayTicketInfo::SetDepartureStation(const string& _departureStation)
{
    m_departureStation = _departureStation;
    m_departureStationHasBeenSet = true;
}

bool RailwayTicketInfo::DepartureStationHasBeenSet() const
{
    return m_departureStationHasBeenSet;
}

string RailwayTicketInfo::GetPhonicsOfDepartureStation() const
{
    return m_phonicsOfDepartureStation;
}

void RailwayTicketInfo::SetPhonicsOfDepartureStation(const string& _phonicsOfDepartureStation)
{
    m_phonicsOfDepartureStation = _phonicsOfDepartureStation;
    m_phonicsOfDepartureStationHasBeenSet = true;
}

bool RailwayTicketInfo::PhonicsOfDepartureStationHasBeenSet() const
{
    return m_phonicsOfDepartureStationHasBeenSet;
}

string RailwayTicketInfo::GetDestinationStation() const
{
    return m_destinationStation;
}

void RailwayTicketInfo::SetDestinationStation(const string& _destinationStation)
{
    m_destinationStation = _destinationStation;
    m_destinationStationHasBeenSet = true;
}

bool RailwayTicketInfo::DestinationStationHasBeenSet() const
{
    return m_destinationStationHasBeenSet;
}

string RailwayTicketInfo::GetPhonicsOfDestinationStation() const
{
    return m_phonicsOfDestinationStation;
}

void RailwayTicketInfo::SetPhonicsOfDestinationStation(const string& _phonicsOfDestinationStation)
{
    m_phonicsOfDestinationStation = _phonicsOfDestinationStation;
    m_phonicsOfDestinationStationHasBeenSet = true;
}

bool RailwayTicketInfo::PhonicsOfDestinationStationHasBeenSet() const
{
    return m_phonicsOfDestinationStationHasBeenSet;
}

string RailwayTicketInfo::GetTrainNumber() const
{
    return m_trainNumber;
}

void RailwayTicketInfo::SetTrainNumber(const string& _trainNumber)
{
    m_trainNumber = _trainNumber;
    m_trainNumberHasBeenSet = true;
}

bool RailwayTicketInfo::TrainNumberHasBeenSet() const
{
    return m_trainNumberHasBeenSet;
}

string RailwayTicketInfo::GetTravelDate() const
{
    return m_travelDate;
}

void RailwayTicketInfo::SetTravelDate(const string& _travelDate)
{
    m_travelDate = _travelDate;
    m_travelDateHasBeenSet = true;
}

bool RailwayTicketInfo::TravelDateHasBeenSet() const
{
    return m_travelDateHasBeenSet;
}

string RailwayTicketInfo::GetDepartureTime() const
{
    return m_departureTime;
}

void RailwayTicketInfo::SetDepartureTime(const string& _departureTime)
{
    m_departureTime = _departureTime;
    m_departureTimeHasBeenSet = true;
}

bool RailwayTicketInfo::DepartureTimeHasBeenSet() const
{
    return m_departureTimeHasBeenSet;
}

string RailwayTicketInfo::GetAirConditioningCharacteristics() const
{
    return m_airConditioningCharacteristics;
}

void RailwayTicketInfo::SetAirConditioningCharacteristics(const string& _airConditioningCharacteristics)
{
    m_airConditioningCharacteristics = _airConditioningCharacteristics;
    m_airConditioningCharacteristicsHasBeenSet = true;
}

bool RailwayTicketInfo::AirConditioningCharacteristicsHasBeenSet() const
{
    return m_airConditioningCharacteristicsHasBeenSet;
}

string RailwayTicketInfo::GetSeatLevel() const
{
    return m_seatLevel;
}

void RailwayTicketInfo::SetSeatLevel(const string& _seatLevel)
{
    m_seatLevel = _seatLevel;
    m_seatLevelHasBeenSet = true;
}

bool RailwayTicketInfo::SeatLevelHasBeenSet() const
{
    return m_seatLevelHasBeenSet;
}

string RailwayTicketInfo::GetCarriage() const
{
    return m_carriage;
}

void RailwayTicketInfo::SetCarriage(const string& _carriage)
{
    m_carriage = _carriage;
    m_carriageHasBeenSet = true;
}

bool RailwayTicketInfo::CarriageHasBeenSet() const
{
    return m_carriageHasBeenSet;
}

string RailwayTicketInfo::GetSeat() const
{
    return m_seat;
}

void RailwayTicketInfo::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool RailwayTicketInfo::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string RailwayTicketInfo::GetFare() const
{
    return m_fare;
}

void RailwayTicketInfo::SetFare(const string& _fare)
{
    m_fare = _fare;
    m_fareHasBeenSet = true;
}

bool RailwayTicketInfo::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string RailwayTicketInfo::GetElectronicInvoiceRailwayETicketNumber() const
{
    return m_electronicInvoiceRailwayETicketNumber;
}

void RailwayTicketInfo::SetElectronicInvoiceRailwayETicketNumber(const string& _electronicInvoiceRailwayETicketNumber)
{
    m_electronicInvoiceRailwayETicketNumber = _electronicInvoiceRailwayETicketNumber;
    m_electronicInvoiceRailwayETicketNumberHasBeenSet = true;
}

bool RailwayTicketInfo::ElectronicInvoiceRailwayETicketNumberHasBeenSet() const
{
    return m_electronicInvoiceRailwayETicketNumberHasBeenSet;
}

string RailwayTicketInfo::GetIdNumber() const
{
    return m_idNumber;
}

void RailwayTicketInfo::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool RailwayTicketInfo::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

string RailwayTicketInfo::GetName() const
{
    return m_name;
}

void RailwayTicketInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RailwayTicketInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RailwayTicketInfo::GetTotalAmountExcludingTax() const
{
    return m_totalAmountExcludingTax;
}

void RailwayTicketInfo::SetTotalAmountExcludingTax(const string& _totalAmountExcludingTax)
{
    m_totalAmountExcludingTax = _totalAmountExcludingTax;
    m_totalAmountExcludingTaxHasBeenSet = true;
}

bool RailwayTicketInfo::TotalAmountExcludingTaxHasBeenSet() const
{
    return m_totalAmountExcludingTaxHasBeenSet;
}

string RailwayTicketInfo::GetTaxRate() const
{
    return m_taxRate;
}

void RailwayTicketInfo::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool RailwayTicketInfo::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string RailwayTicketInfo::GetTaxAmount() const
{
    return m_taxAmount;
}

void RailwayTicketInfo::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool RailwayTicketInfo::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

string RailwayTicketInfo::GetNameOfPurchaser() const
{
    return m_nameOfPurchaser;
}

void RailwayTicketInfo::SetNameOfPurchaser(const string& _nameOfPurchaser)
{
    m_nameOfPurchaser = _nameOfPurchaser;
    m_nameOfPurchaserHasBeenSet = true;
}

bool RailwayTicketInfo::NameOfPurchaserHasBeenSet() const
{
    return m_nameOfPurchaserHasBeenSet;
}

string RailwayTicketInfo::GetUnifiedSocialCreditCodeOfPurchaser() const
{
    return m_unifiedSocialCreditCodeOfPurchaser;
}

void RailwayTicketInfo::SetUnifiedSocialCreditCodeOfPurchaser(const string& _unifiedSocialCreditCodeOfPurchaser)
{
    m_unifiedSocialCreditCodeOfPurchaser = _unifiedSocialCreditCodeOfPurchaser;
    m_unifiedSocialCreditCodeOfPurchaserHasBeenSet = true;
}

bool RailwayTicketInfo::UnifiedSocialCreditCodeOfPurchaserHasBeenSet() const
{
    return m_unifiedSocialCreditCodeOfPurchaserHasBeenSet;
}

string RailwayTicketInfo::GetNumberOfOriginalInvoice() const
{
    return m_numberOfOriginalInvoice;
}

void RailwayTicketInfo::SetNumberOfOriginalInvoice(const string& _numberOfOriginalInvoice)
{
    m_numberOfOriginalInvoice = _numberOfOriginalInvoice;
    m_numberOfOriginalInvoiceHasBeenSet = true;
}

bool RailwayTicketInfo::NumberOfOriginalInvoiceHasBeenSet() const
{
    return m_numberOfOriginalInvoiceHasBeenSet;
}

