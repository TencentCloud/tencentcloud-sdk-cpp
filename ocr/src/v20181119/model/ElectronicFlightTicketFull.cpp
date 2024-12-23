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

#include <tencentcloud/ocr/v20181119/model/ElectronicFlightTicketFull.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ElectronicFlightTicketFull::ElectronicFlightTicketFull() :
    m_userNameHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_endorsementHasBeenSet(false),
    m_gPOrderHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_fuelSurchargeHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_developmentFundHasBeenSet(false),
    m_otherTaxHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_electronicTicketNumHasBeenSet(false),
    m_verificationCodeHasBeenSet(false),
    m_promptInformationHasBeenSet(false),
    m_insuranceHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_domesticInternationalTagHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_sellerHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_flightItemsHasBeenSet(false),
    m_invoiceStatusHasBeenSet(false)
{
}

CoreInternalOutcome ElectronicFlightTicketFull::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("Endorsement") && !value["Endorsement"].IsNull())
    {
        if (!value["Endorsement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Endorsement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endorsement = string(value["Endorsement"].GetString());
        m_endorsementHasBeenSet = true;
    }

    if (value.HasMember("GPOrder") && !value["GPOrder"].IsNull())
    {
        if (!value["GPOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.GPOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPOrder = string(value["GPOrder"].GetString());
        m_gPOrderHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Fare") && !value["Fare"].IsNull())
    {
        if (!value["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(value["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (value.HasMember("FuelSurcharge") && !value["FuelSurcharge"].IsNull())
    {
        if (!value["FuelSurcharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.FuelSurcharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuelSurcharge = string(value["FuelSurcharge"].GetString());
        m_fuelSurchargeHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("DevelopmentFund") && !value["DevelopmentFund"].IsNull())
    {
        if (!value["DevelopmentFund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.DevelopmentFund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developmentFund = string(value["DevelopmentFund"].GetString());
        m_developmentFundHasBeenSet = true;
    }

    if (value.HasMember("OtherTax") && !value["OtherTax"].IsNull())
    {
        if (!value["OtherTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.OtherTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherTax = string(value["OtherTax"].GetString());
        m_otherTaxHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("ElectronicTicketNum") && !value["ElectronicTicketNum"].IsNull())
    {
        if (!value["ElectronicTicketNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.ElectronicTicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicTicketNum = string(value["ElectronicTicketNum"].GetString());
        m_electronicTicketNumHasBeenSet = true;
    }

    if (value.HasMember("VerificationCode") && !value["VerificationCode"].IsNull())
    {
        if (!value["VerificationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.VerificationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationCode = string(value["VerificationCode"].GetString());
        m_verificationCodeHasBeenSet = true;
    }

    if (value.HasMember("PromptInformation") && !value["PromptInformation"].IsNull())
    {
        if (!value["PromptInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.PromptInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptInformation = string(value["PromptInformation"].GetString());
        m_promptInformationHasBeenSet = true;
    }

    if (value.HasMember("Insurance") && !value["Insurance"].IsNull())
    {
        if (!value["Insurance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Insurance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insurance = string(value["Insurance"].GetString());
        m_insuranceHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("DomesticInternationalTag") && !value["DomesticInternationalTag"].IsNull())
    {
        if (!value["DomesticInternationalTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.DomesticInternationalTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domesticInternationalTag = string(value["DomesticInternationalTag"].GetString());
        m_domesticInternationalTagHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("Seller") && !value["Seller"].IsNull())
    {
        if (!value["Seller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.Seller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seller = string(value["Seller"].GetString());
        m_sellerHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("FlightItems") && !value["FlightItems"].IsNull())
    {
        if (!value["FlightItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.FlightItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FlightItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlightItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flightItems.push_back(item);
        }
        m_flightItemsHasBeenSet = true;
    }

    if (value.HasMember("InvoiceStatus") && !value["InvoiceStatus"].IsNull())
    {
        if (!value["InvoiceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicFlightTicketFull.InvoiceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceStatus = string(value["InvoiceStatus"].GetString());
        m_invoiceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElectronicFlightTicketFull::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userID.c_str(), allocator).Move(), allocator);
    }

    if (m_endorsementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endorsement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endorsement.c_str(), allocator).Move(), allocator);
    }

    if (m_gPOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_fareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fare.c_str(), allocator).Move(), allocator);
    }

    if (m_fuelSurchargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuelSurcharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fuelSurcharge.c_str(), allocator).Move(), allocator);
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

    if (m_developmentFundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevelopmentFund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_developmentFund.c_str(), allocator).Move(), allocator);
    }

    if (m_otherTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherTax.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicTicketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicTicketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicTicketNum.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_promptInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_insuranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insurance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insurance.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_domesticInternationalTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomesticInternationalTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domesticInternationalTag.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_sellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seller.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_flightItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flightItems.begin(); itr != m_flightItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invoiceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceStatus.c_str(), allocator).Move(), allocator);
    }

}


string ElectronicFlightTicketFull::GetUserName() const
{
    return m_userName;
}

void ElectronicFlightTicketFull::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ElectronicFlightTicketFull::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ElectronicFlightTicketFull::GetUserID() const
{
    return m_userID;
}

void ElectronicFlightTicketFull::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool ElectronicFlightTicketFull::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string ElectronicFlightTicketFull::GetEndorsement() const
{
    return m_endorsement;
}

void ElectronicFlightTicketFull::SetEndorsement(const string& _endorsement)
{
    m_endorsement = _endorsement;
    m_endorsementHasBeenSet = true;
}

bool ElectronicFlightTicketFull::EndorsementHasBeenSet() const
{
    return m_endorsementHasBeenSet;
}

string ElectronicFlightTicketFull::GetGPOrder() const
{
    return m_gPOrder;
}

void ElectronicFlightTicketFull::SetGPOrder(const string& _gPOrder)
{
    m_gPOrder = _gPOrder;
    m_gPOrderHasBeenSet = true;
}

bool ElectronicFlightTicketFull::GPOrderHasBeenSet() const
{
    return m_gPOrderHasBeenSet;
}

string ElectronicFlightTicketFull::GetNumber() const
{
    return m_number;
}

void ElectronicFlightTicketFull::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool ElectronicFlightTicketFull::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string ElectronicFlightTicketFull::GetFare() const
{
    return m_fare;
}

void ElectronicFlightTicketFull::SetFare(const string& _fare)
{
    m_fare = _fare;
    m_fareHasBeenSet = true;
}

bool ElectronicFlightTicketFull::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string ElectronicFlightTicketFull::GetFuelSurcharge() const
{
    return m_fuelSurcharge;
}

void ElectronicFlightTicketFull::SetFuelSurcharge(const string& _fuelSurcharge)
{
    m_fuelSurcharge = _fuelSurcharge;
    m_fuelSurchargeHasBeenSet = true;
}

bool ElectronicFlightTicketFull::FuelSurchargeHasBeenSet() const
{
    return m_fuelSurchargeHasBeenSet;
}

string ElectronicFlightTicketFull::GetTaxRate() const
{
    return m_taxRate;
}

void ElectronicFlightTicketFull::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool ElectronicFlightTicketFull::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string ElectronicFlightTicketFull::GetTax() const
{
    return m_tax;
}

void ElectronicFlightTicketFull::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool ElectronicFlightTicketFull::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string ElectronicFlightTicketFull::GetDevelopmentFund() const
{
    return m_developmentFund;
}

void ElectronicFlightTicketFull::SetDevelopmentFund(const string& _developmentFund)
{
    m_developmentFund = _developmentFund;
    m_developmentFundHasBeenSet = true;
}

bool ElectronicFlightTicketFull::DevelopmentFundHasBeenSet() const
{
    return m_developmentFundHasBeenSet;
}

string ElectronicFlightTicketFull::GetOtherTax() const
{
    return m_otherTax;
}

void ElectronicFlightTicketFull::SetOtherTax(const string& _otherTax)
{
    m_otherTax = _otherTax;
    m_otherTaxHasBeenSet = true;
}

bool ElectronicFlightTicketFull::OtherTaxHasBeenSet() const
{
    return m_otherTaxHasBeenSet;
}

string ElectronicFlightTicketFull::GetTotal() const
{
    return m_total;
}

void ElectronicFlightTicketFull::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ElectronicFlightTicketFull::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ElectronicFlightTicketFull::GetElectronicTicketNum() const
{
    return m_electronicTicketNum;
}

void ElectronicFlightTicketFull::SetElectronicTicketNum(const string& _electronicTicketNum)
{
    m_electronicTicketNum = _electronicTicketNum;
    m_electronicTicketNumHasBeenSet = true;
}

bool ElectronicFlightTicketFull::ElectronicTicketNumHasBeenSet() const
{
    return m_electronicTicketNumHasBeenSet;
}

string ElectronicFlightTicketFull::GetVerificationCode() const
{
    return m_verificationCode;
}

void ElectronicFlightTicketFull::SetVerificationCode(const string& _verificationCode)
{
    m_verificationCode = _verificationCode;
    m_verificationCodeHasBeenSet = true;
}

bool ElectronicFlightTicketFull::VerificationCodeHasBeenSet() const
{
    return m_verificationCodeHasBeenSet;
}

string ElectronicFlightTicketFull::GetPromptInformation() const
{
    return m_promptInformation;
}

void ElectronicFlightTicketFull::SetPromptInformation(const string& _promptInformation)
{
    m_promptInformation = _promptInformation;
    m_promptInformationHasBeenSet = true;
}

bool ElectronicFlightTicketFull::PromptInformationHasBeenSet() const
{
    return m_promptInformationHasBeenSet;
}

string ElectronicFlightTicketFull::GetInsurance() const
{
    return m_insurance;
}

void ElectronicFlightTicketFull::SetInsurance(const string& _insurance)
{
    m_insurance = _insurance;
    m_insuranceHasBeenSet = true;
}

bool ElectronicFlightTicketFull::InsuranceHasBeenSet() const
{
    return m_insuranceHasBeenSet;
}

string ElectronicFlightTicketFull::GetIssuer() const
{
    return m_issuer;
}

void ElectronicFlightTicketFull::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool ElectronicFlightTicketFull::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string ElectronicFlightTicketFull::GetDate() const
{
    return m_date;
}

void ElectronicFlightTicketFull::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ElectronicFlightTicketFull::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ElectronicFlightTicketFull::GetDomesticInternationalTag() const
{
    return m_domesticInternationalTag;
}

void ElectronicFlightTicketFull::SetDomesticInternationalTag(const string& _domesticInternationalTag)
{
    m_domesticInternationalTag = _domesticInternationalTag;
    m_domesticInternationalTagHasBeenSet = true;
}

bool ElectronicFlightTicketFull::DomesticInternationalTagHasBeenSet() const
{
    return m_domesticInternationalTagHasBeenSet;
}

string ElectronicFlightTicketFull::GetBuyer() const
{
    return m_buyer;
}

void ElectronicFlightTicketFull::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool ElectronicFlightTicketFull::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string ElectronicFlightTicketFull::GetSeller() const
{
    return m_seller;
}

void ElectronicFlightTicketFull::SetSeller(const string& _seller)
{
    m_seller = _seller;
    m_sellerHasBeenSet = true;
}

bool ElectronicFlightTicketFull::SellerHasBeenSet() const
{
    return m_sellerHasBeenSet;
}

string ElectronicFlightTicketFull::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void ElectronicFlightTicketFull::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool ElectronicFlightTicketFull::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

vector<FlightItemInfo> ElectronicFlightTicketFull::GetFlightItems() const
{
    return m_flightItems;
}

void ElectronicFlightTicketFull::SetFlightItems(const vector<FlightItemInfo>& _flightItems)
{
    m_flightItems = _flightItems;
    m_flightItemsHasBeenSet = true;
}

bool ElectronicFlightTicketFull::FlightItemsHasBeenSet() const
{
    return m_flightItemsHasBeenSet;
}

string ElectronicFlightTicketFull::GetInvoiceStatus() const
{
    return m_invoiceStatus;
}

void ElectronicFlightTicketFull::SetInvoiceStatus(const string& _invoiceStatus)
{
    m_invoiceStatus = _invoiceStatus;
    m_invoiceStatusHasBeenSet = true;
}

bool ElectronicFlightTicketFull::InvoiceStatusHasBeenSet() const
{
    return m_invoiceStatusHasBeenSet;
}

