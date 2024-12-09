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

#include <tencentcloud/ocr/v20181119/model/AirTransport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AirTransport::AirTransport() :
    m_titleHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_agentCodeHasBeenSet(false),
    m_agentCodeFirstHasBeenSet(false),
    m_agentCodeSecondHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userIDHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_fuelSurchargeHasBeenSet(false),
    m_airDevelopmentFundHasBeenSet(false),
    m_insuranceHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_domesticInternationalTagHasBeenSet(false),
    m_dateStartHasBeenSet(false),
    m_dateEndHasBeenSet(false),
    m_endorsementHasBeenSet(false),
    m_qRCodeMarkHasBeenSet(false),
    m_flightItemsHasBeenSet(false),
    m_promptInformationHasBeenSet(false),
    m_buyerTaxIDHasBeenSet(false),
    m_buyerHasBeenSet(false),
    m_receiptNumberHasBeenSet(false),
    m_invoiceStatusHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxAmountHasBeenSet(false)
{
}

CoreInternalOutcome AirTransport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("AgentCode") && !value["AgentCode"].IsNull())
    {
        if (!value["AgentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.AgentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCode = string(value["AgentCode"].GetString());
        m_agentCodeHasBeenSet = true;
    }

    if (value.HasMember("AgentCodeFirst") && !value["AgentCodeFirst"].IsNull())
    {
        if (!value["AgentCodeFirst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.AgentCodeFirst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCodeFirst = string(value["AgentCodeFirst"].GetString());
        m_agentCodeFirstHasBeenSet = true;
    }

    if (value.HasMember("AgentCodeSecond") && !value["AgentCodeSecond"].IsNull())
    {
        if (!value["AgentCodeSecond"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.AgentCodeSecond` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCodeSecond = string(value["AgentCodeSecond"].GetString());
        m_agentCodeSecondHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserID") && !value["UserID"].IsNull())
    {
        if (!value["UserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.UserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userID = string(value["UserID"].GetString());
        m_userIDHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("Fare") && !value["Fare"].IsNull())
    {
        if (!value["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(value["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("FuelSurcharge") && !value["FuelSurcharge"].IsNull())
    {
        if (!value["FuelSurcharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.FuelSurcharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuelSurcharge = string(value["FuelSurcharge"].GetString());
        m_fuelSurchargeHasBeenSet = true;
    }

    if (value.HasMember("AirDevelopmentFund") && !value["AirDevelopmentFund"].IsNull())
    {
        if (!value["AirDevelopmentFund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.AirDevelopmentFund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_airDevelopmentFund = string(value["AirDevelopmentFund"].GetString());
        m_airDevelopmentFundHasBeenSet = true;
    }

    if (value.HasMember("Insurance") && !value["Insurance"].IsNull())
    {
        if (!value["Insurance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Insurance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insurance = string(value["Insurance"].GetString());
        m_insuranceHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("DomesticInternationalTag") && !value["DomesticInternationalTag"].IsNull())
    {
        if (!value["DomesticInternationalTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.DomesticInternationalTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domesticInternationalTag = string(value["DomesticInternationalTag"].GetString());
        m_domesticInternationalTagHasBeenSet = true;
    }

    if (value.HasMember("DateStart") && !value["DateStart"].IsNull())
    {
        if (!value["DateStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.DateStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateStart = string(value["DateStart"].GetString());
        m_dateStartHasBeenSet = true;
    }

    if (value.HasMember("DateEnd") && !value["DateEnd"].IsNull())
    {
        if (!value["DateEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.DateEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateEnd = string(value["DateEnd"].GetString());
        m_dateEndHasBeenSet = true;
    }

    if (value.HasMember("Endorsement") && !value["Endorsement"].IsNull())
    {
        if (!value["Endorsement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Endorsement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endorsement = string(value["Endorsement"].GetString());
        m_endorsementHasBeenSet = true;
    }

    if (value.HasMember("QRCodeMark") && !value["QRCodeMark"].IsNull())
    {
        if (!value["QRCodeMark"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.QRCodeMark` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeMark = value["QRCodeMark"].GetInt64();
        m_qRCodeMarkHasBeenSet = true;
    }

    if (value.HasMember("FlightItems") && !value["FlightItems"].IsNull())
    {
        if (!value["FlightItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AirTransport.FlightItems` is not array type"));

        const rapidjson::Value &tmpValue = value["FlightItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlightItem item;
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

    if (value.HasMember("PromptInformation") && !value["PromptInformation"].IsNull())
    {
        if (!value["PromptInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.PromptInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptInformation = string(value["PromptInformation"].GetString());
        m_promptInformationHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxID") && !value["BuyerTaxID"].IsNull())
    {
        if (!value["BuyerTaxID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.BuyerTaxID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxID = string(value["BuyerTaxID"].GetString());
        m_buyerTaxIDHasBeenSet = true;
    }

    if (value.HasMember("Buyer") && !value["Buyer"].IsNull())
    {
        if (!value["Buyer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.Buyer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyer = string(value["Buyer"].GetString());
        m_buyerHasBeenSet = true;
    }

    if (value.HasMember("ReceiptNumber") && !value["ReceiptNumber"].IsNull())
    {
        if (!value["ReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.ReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptNumber = string(value["ReceiptNumber"].GetString());
        m_receiptNumberHasBeenSet = true;
    }

    if (value.HasMember("InvoiceStatus") && !value["InvoiceStatus"].IsNull())
    {
        if (!value["InvoiceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.InvoiceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceStatus = string(value["InvoiceStatus"].GetString());
        m_invoiceStatusHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTransport.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AirTransport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCodeFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCodeFirst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCodeFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCodeSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCodeSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCodeSecond.c_str(), allocator).Move(), allocator);
    }

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

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_fareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fare.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_fuelSurchargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuelSurcharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fuelSurcharge.c_str(), allocator).Move(), allocator);
    }

    if (m_airDevelopmentFundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AirDevelopmentFund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_airDevelopmentFund.c_str(), allocator).Move(), allocator);
    }

    if (m_insuranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insurance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insurance.c_str(), allocator).Move(), allocator);
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

    if (m_domesticInternationalTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomesticInternationalTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domesticInternationalTag.c_str(), allocator).Move(), allocator);
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

    if (m_endorsementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endorsement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endorsement.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCodeMark, allocator);
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

    if (m_promptInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxID.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buyer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyer.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceStatus.c_str(), allocator).Move(), allocator);
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

}


string AirTransport::GetTitle() const
{
    return m_title;
}

void AirTransport::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool AirTransport::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string AirTransport::GetNumber() const
{
    return m_number;
}

void AirTransport::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool AirTransport::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string AirTransport::GetCheckCode() const
{
    return m_checkCode;
}

void AirTransport::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool AirTransport::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string AirTransport::GetSerialNumber() const
{
    return m_serialNumber;
}

void AirTransport::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool AirTransport::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string AirTransport::GetDate() const
{
    return m_date;
}

void AirTransport::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AirTransport::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string AirTransport::GetAgentCode() const
{
    return m_agentCode;
}

void AirTransport::SetAgentCode(const string& _agentCode)
{
    m_agentCode = _agentCode;
    m_agentCodeHasBeenSet = true;
}

bool AirTransport::AgentCodeHasBeenSet() const
{
    return m_agentCodeHasBeenSet;
}

string AirTransport::GetAgentCodeFirst() const
{
    return m_agentCodeFirst;
}

void AirTransport::SetAgentCodeFirst(const string& _agentCodeFirst)
{
    m_agentCodeFirst = _agentCodeFirst;
    m_agentCodeFirstHasBeenSet = true;
}

bool AirTransport::AgentCodeFirstHasBeenSet() const
{
    return m_agentCodeFirstHasBeenSet;
}

string AirTransport::GetAgentCodeSecond() const
{
    return m_agentCodeSecond;
}

void AirTransport::SetAgentCodeSecond(const string& _agentCodeSecond)
{
    m_agentCodeSecond = _agentCodeSecond;
    m_agentCodeSecondHasBeenSet = true;
}

bool AirTransport::AgentCodeSecondHasBeenSet() const
{
    return m_agentCodeSecondHasBeenSet;
}

string AirTransport::GetUserName() const
{
    return m_userName;
}

void AirTransport::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AirTransport::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AirTransport::GetUserID() const
{
    return m_userID;
}

void AirTransport::SetUserID(const string& _userID)
{
    m_userID = _userID;
    m_userIDHasBeenSet = true;
}

bool AirTransport::UserIDHasBeenSet() const
{
    return m_userIDHasBeenSet;
}

string AirTransport::GetIssuer() const
{
    return m_issuer;
}

void AirTransport::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool AirTransport::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string AirTransport::GetFare() const
{
    return m_fare;
}

void AirTransport::SetFare(const string& _fare)
{
    m_fare = _fare;
    m_fareHasBeenSet = true;
}

bool AirTransport::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string AirTransport::GetTax() const
{
    return m_tax;
}

void AirTransport::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool AirTransport::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string AirTransport::GetFuelSurcharge() const
{
    return m_fuelSurcharge;
}

void AirTransport::SetFuelSurcharge(const string& _fuelSurcharge)
{
    m_fuelSurcharge = _fuelSurcharge;
    m_fuelSurchargeHasBeenSet = true;
}

bool AirTransport::FuelSurchargeHasBeenSet() const
{
    return m_fuelSurchargeHasBeenSet;
}

string AirTransport::GetAirDevelopmentFund() const
{
    return m_airDevelopmentFund;
}

void AirTransport::SetAirDevelopmentFund(const string& _airDevelopmentFund)
{
    m_airDevelopmentFund = _airDevelopmentFund;
    m_airDevelopmentFundHasBeenSet = true;
}

bool AirTransport::AirDevelopmentFundHasBeenSet() const
{
    return m_airDevelopmentFundHasBeenSet;
}

string AirTransport::GetInsurance() const
{
    return m_insurance;
}

void AirTransport::SetInsurance(const string& _insurance)
{
    m_insurance = _insurance;
    m_insuranceHasBeenSet = true;
}

bool AirTransport::InsuranceHasBeenSet() const
{
    return m_insuranceHasBeenSet;
}

string AirTransport::GetTotal() const
{
    return m_total;
}

void AirTransport::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AirTransport::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string AirTransport::GetKind() const
{
    return m_kind;
}

void AirTransport::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool AirTransport::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string AirTransport::GetDomesticInternationalTag() const
{
    return m_domesticInternationalTag;
}

void AirTransport::SetDomesticInternationalTag(const string& _domesticInternationalTag)
{
    m_domesticInternationalTag = _domesticInternationalTag;
    m_domesticInternationalTagHasBeenSet = true;
}

bool AirTransport::DomesticInternationalTagHasBeenSet() const
{
    return m_domesticInternationalTagHasBeenSet;
}

string AirTransport::GetDateStart() const
{
    return m_dateStart;
}

void AirTransport::SetDateStart(const string& _dateStart)
{
    m_dateStart = _dateStart;
    m_dateStartHasBeenSet = true;
}

bool AirTransport::DateStartHasBeenSet() const
{
    return m_dateStartHasBeenSet;
}

string AirTransport::GetDateEnd() const
{
    return m_dateEnd;
}

void AirTransport::SetDateEnd(const string& _dateEnd)
{
    m_dateEnd = _dateEnd;
    m_dateEndHasBeenSet = true;
}

bool AirTransport::DateEndHasBeenSet() const
{
    return m_dateEndHasBeenSet;
}

string AirTransport::GetEndorsement() const
{
    return m_endorsement;
}

void AirTransport::SetEndorsement(const string& _endorsement)
{
    m_endorsement = _endorsement;
    m_endorsementHasBeenSet = true;
}

bool AirTransport::EndorsementHasBeenSet() const
{
    return m_endorsementHasBeenSet;
}

int64_t AirTransport::GetQRCodeMark() const
{
    return m_qRCodeMark;
}

void AirTransport::SetQRCodeMark(const int64_t& _qRCodeMark)
{
    m_qRCodeMark = _qRCodeMark;
    m_qRCodeMarkHasBeenSet = true;
}

bool AirTransport::QRCodeMarkHasBeenSet() const
{
    return m_qRCodeMarkHasBeenSet;
}

vector<FlightItem> AirTransport::GetFlightItems() const
{
    return m_flightItems;
}

void AirTransport::SetFlightItems(const vector<FlightItem>& _flightItems)
{
    m_flightItems = _flightItems;
    m_flightItemsHasBeenSet = true;
}

bool AirTransport::FlightItemsHasBeenSet() const
{
    return m_flightItemsHasBeenSet;
}

string AirTransport::GetPromptInformation() const
{
    return m_promptInformation;
}

void AirTransport::SetPromptInformation(const string& _promptInformation)
{
    m_promptInformation = _promptInformation;
    m_promptInformationHasBeenSet = true;
}

bool AirTransport::PromptInformationHasBeenSet() const
{
    return m_promptInformationHasBeenSet;
}

string AirTransport::GetBuyerTaxID() const
{
    return m_buyerTaxID;
}

void AirTransport::SetBuyerTaxID(const string& _buyerTaxID)
{
    m_buyerTaxID = _buyerTaxID;
    m_buyerTaxIDHasBeenSet = true;
}

bool AirTransport::BuyerTaxIDHasBeenSet() const
{
    return m_buyerTaxIDHasBeenSet;
}

string AirTransport::GetBuyer() const
{
    return m_buyer;
}

void AirTransport::SetBuyer(const string& _buyer)
{
    m_buyer = _buyer;
    m_buyerHasBeenSet = true;
}

bool AirTransport::BuyerHasBeenSet() const
{
    return m_buyerHasBeenSet;
}

string AirTransport::GetReceiptNumber() const
{
    return m_receiptNumber;
}

void AirTransport::SetReceiptNumber(const string& _receiptNumber)
{
    m_receiptNumber = _receiptNumber;
    m_receiptNumberHasBeenSet = true;
}

bool AirTransport::ReceiptNumberHasBeenSet() const
{
    return m_receiptNumberHasBeenSet;
}

string AirTransport::GetInvoiceStatus() const
{
    return m_invoiceStatus;
}

void AirTransport::SetInvoiceStatus(const string& _invoiceStatus)
{
    m_invoiceStatus = _invoiceStatus;
    m_invoiceStatusHasBeenSet = true;
}

bool AirTransport::InvoiceStatusHasBeenSet() const
{
    return m_invoiceStatusHasBeenSet;
}

string AirTransport::GetTaxRate() const
{
    return m_taxRate;
}

void AirTransport::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool AirTransport::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string AirTransport::GetTaxAmount() const
{
    return m_taxAmount;
}

void AirTransport::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool AirTransport::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

