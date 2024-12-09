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

#include <tencentcloud/ocr/v20181119/model/ElectronicTrainTicketFull.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ElectronicTrainTicketFull::ElectronicTrainTicketFull() :
    m_typeOfVoucherHasBeenSet(false),
    m_electronicTicketNumHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_stationGetOnHasBeenSet(false),
    m_stationGetOffHasBeenSet(false),
    m_trainNumberHasBeenSet(false),
    m_dateGetOnHasBeenSet(false),
    m_timeGetOnHasBeenSet(false),
    m_seatHasBeenSet(false),
    m_seatNumberHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_originalNumberHasBeenSet(false),
    m_iDInfoHasBeenSet(false)
{
}

CoreInternalOutcome ElectronicTrainTicketFull::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeOfVoucher") && !value["TypeOfVoucher"].IsNull())
    {
        if (!value["TypeOfVoucher"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.TypeOfVoucher` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeOfVoucher = string(value["TypeOfVoucher"].GetString());
        m_typeOfVoucherHasBeenSet = true;
    }

    if (value.HasMember("ElectronicTicketNum") && !value["ElectronicTicketNum"].IsNull())
    {
        if (!value["ElectronicTicketNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.ElectronicTicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicTicketNum = string(value["ElectronicTicketNum"].GetString());
        m_electronicTicketNumHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("StationGetOn") && !value["StationGetOn"].IsNull())
    {
        if (!value["StationGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.StationGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOn = string(value["StationGetOn"].GetString());
        m_stationGetOnHasBeenSet = true;
    }

    if (value.HasMember("StationGetOff") && !value["StationGetOff"].IsNull())
    {
        if (!value["StationGetOff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.StationGetOff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stationGetOff = string(value["StationGetOff"].GetString());
        m_stationGetOffHasBeenSet = true;
    }

    if (value.HasMember("TrainNumber") && !value["TrainNumber"].IsNull())
    {
        if (!value["TrainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.TrainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainNumber = string(value["TrainNumber"].GetString());
        m_trainNumberHasBeenSet = true;
    }

    if (value.HasMember("DateGetOn") && !value["DateGetOn"].IsNull())
    {
        if (!value["DateGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.DateGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateGetOn = string(value["DateGetOn"].GetString());
        m_dateGetOnHasBeenSet = true;
    }

    if (value.HasMember("TimeGetOn") && !value["TimeGetOn"].IsNull())
    {
        if (!value["TimeGetOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.TimeGetOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeGetOn = string(value["TimeGetOn"].GetString());
        m_timeGetOnHasBeenSet = true;
    }

    if (value.HasMember("Seat") && !value["Seat"].IsNull())
    {
        if (!value["Seat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Seat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seat = string(value["Seat"].GetString());
        m_seatHasBeenSet = true;
    }

    if (value.HasMember("SeatNumber") && !value["SeatNumber"].IsNull())
    {
        if (!value["SeatNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.SeatNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seatNumber = string(value["SeatNumber"].GetString());
        m_seatNumberHasBeenSet = true;
    }

    if (value.HasMember("Fare") && !value["Fare"].IsNull())
    {
        if (!value["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(value["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("OriginalNumber") && !value["OriginalNumber"].IsNull())
    {
        if (!value["OriginalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.OriginalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalNumber = string(value["OriginalNumber"].GetString());
        m_originalNumberHasBeenSet = true;
    }

    if (value.HasMember("IDInfo") && !value["IDInfo"].IsNull())
    {
        if (!value["IDInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicTrainTicketFull.IDInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDInfo = string(value["IDInfo"].GetString());
        m_iDInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElectronicTrainTicketFull::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
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

    if (m_trainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainNumber.c_str(), allocator).Move(), allocator);
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

    if (m_seatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seat.c_str(), allocator).Move(), allocator);
    }

    if (m_seatNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seatNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_fareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fare.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_originalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_iDInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDInfo.c_str(), allocator).Move(), allocator);
    }

}


string ElectronicTrainTicketFull::GetTypeOfVoucher() const
{
    return m_typeOfVoucher;
}

void ElectronicTrainTicketFull::SetTypeOfVoucher(const string& _typeOfVoucher)
{
    m_typeOfVoucher = _typeOfVoucher;
    m_typeOfVoucherHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TypeOfVoucherHasBeenSet() const
{
    return m_typeOfVoucherHasBeenSet;
}

string ElectronicTrainTicketFull::GetElectronicTicketNum() const
{
    return m_electronicTicketNum;
}

void ElectronicTrainTicketFull::SetElectronicTicketNum(const string& _electronicTicketNum)
{
    m_electronicTicketNum = _electronicTicketNum;
    m_electronicTicketNumHasBeenSet = true;
}

bool ElectronicTrainTicketFull::ElectronicTicketNumHasBeenSet() const
{
    return m_electronicTicketNumHasBeenSet;
}

string ElectronicTrainTicketFull::GetDate() const
{
    return m_date;
}

void ElectronicTrainTicketFull::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ElectronicTrainTicketFull::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ElectronicTrainTicketFull::GetStationGetOn() const
{
    return m_stationGetOn;
}

void ElectronicTrainTicketFull::SetStationGetOn(const string& _stationGetOn)
{
    m_stationGetOn = _stationGetOn;
    m_stationGetOnHasBeenSet = true;
}

bool ElectronicTrainTicketFull::StationGetOnHasBeenSet() const
{
    return m_stationGetOnHasBeenSet;
}

string ElectronicTrainTicketFull::GetStationGetOff() const
{
    return m_stationGetOff;
}

void ElectronicTrainTicketFull::SetStationGetOff(const string& _stationGetOff)
{
    m_stationGetOff = _stationGetOff;
    m_stationGetOffHasBeenSet = true;
}

bool ElectronicTrainTicketFull::StationGetOffHasBeenSet() const
{
    return m_stationGetOffHasBeenSet;
}

string ElectronicTrainTicketFull::GetTrainNumber() const
{
    return m_trainNumber;
}

void ElectronicTrainTicketFull::SetTrainNumber(const string& _trainNumber)
{
    m_trainNumber = _trainNumber;
    m_trainNumberHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TrainNumberHasBeenSet() const
{
    return m_trainNumberHasBeenSet;
}

string ElectronicTrainTicketFull::GetDateGetOn() const
{
    return m_dateGetOn;
}

void ElectronicTrainTicketFull::SetDateGetOn(const string& _dateGetOn)
{
    m_dateGetOn = _dateGetOn;
    m_dateGetOnHasBeenSet = true;
}

bool ElectronicTrainTicketFull::DateGetOnHasBeenSet() const
{
    return m_dateGetOnHasBeenSet;
}

string ElectronicTrainTicketFull::GetTimeGetOn() const
{
    return m_timeGetOn;
}

void ElectronicTrainTicketFull::SetTimeGetOn(const string& _timeGetOn)
{
    m_timeGetOn = _timeGetOn;
    m_timeGetOnHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TimeGetOnHasBeenSet() const
{
    return m_timeGetOnHasBeenSet;
}

string ElectronicTrainTicketFull::GetSeat() const
{
    return m_seat;
}

void ElectronicTrainTicketFull::SetSeat(const string& _seat)
{
    m_seat = _seat;
    m_seatHasBeenSet = true;
}

bool ElectronicTrainTicketFull::SeatHasBeenSet() const
{
    return m_seatHasBeenSet;
}

string ElectronicTrainTicketFull::GetSeatNumber() const
{
    return m_seatNumber;
}

void ElectronicTrainTicketFull::SetSeatNumber(const string& _seatNumber)
{
    m_seatNumber = _seatNumber;
    m_seatNumberHasBeenSet = true;
}

bool ElectronicTrainTicketFull::SeatNumberHasBeenSet() const
{
    return m_seatNumberHasBeenSet;
}

string ElectronicTrainTicketFull::GetFare() const
{
    return m_fare;
}

void ElectronicTrainTicketFull::SetFare(const string& _fare)
{
    m_fare = _fare;
    m_fareHasBeenSet = true;
}

bool ElectronicTrainTicketFull::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string ElectronicTrainTicketFull::GetNumber() const
{
    return m_number;
}

void ElectronicTrainTicketFull::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool ElectronicTrainTicketFull::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string ElectronicTrainTicketFull::GetUserID() const
{
    return m_userID;
}

void ElectronicTrainTicketFull::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool ElectronicTrainTicketFull::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string ElectronicTrainTicketFull::GetUserName() const
{
    return m_userName;
}

void ElectronicTrainTicketFull::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ElectronicTrainTicketFull::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ElectronicTrainTicketFull::GetTotal() const
{
    return m_total;
}

void ElectronicTrainTicketFull::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ElectronicTrainTicketFull::GetTaxRate() const
{
    return m_taxRate;
}

void ElectronicTrainTicketFull::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string ElectronicTrainTicketFull::GetTax() const
{
    return m_tax;
}

void ElectronicTrainTicketFull::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool ElectronicTrainTicketFull::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string ElectronicTrainTicketFull::GetBuyer() const
{
    return m_buyer;
}

void ElectronicTrainTicketFull::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool ElectronicTrainTicketFull::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string ElectronicTrainTicketFull::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void ElectronicTrainTicketFull::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool ElectronicTrainTicketFull::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string ElectronicTrainTicketFull::GetOriginalNumber() const
{
    return m_originalNumber;
}

void ElectronicTrainTicketFull::SetOriginalNumber(const string& _originalNumber)
{
    m_originalNumber = _originalNumber;
    m_originalNumberHasBeenSet = true;
}

bool ElectronicTrainTicketFull::OriginalNumberHasBeenSet() const
{
    return m_originalNumberHasBeenSet;
}

string ElectronicTrainTicketFull::GetIDInfo() const
{
    return m_iDInfo;
}

void ElectronicTrainTicketFull::SetIDInfo(const string& _iDInfo)
{
    m_iDInfo = _iDInfo;
    m_iDInfoHasBeenSet = true;
}

bool ElectronicTrainTicketFull::IDInfoHasBeenSet() const
{
    return m_iDInfoHasBeenSet;
}

