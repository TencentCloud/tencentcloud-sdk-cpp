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

#include <tencentcloud/ocr/v20181119/model/AirTicketInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AirTicketInfo::AirTicketInfo() :
    m_passengerNameHasBeenSet(false),
    m_validIdNumberHasBeenSet(false),
    m_endorsementHasBeenSet(false),
    m_numberOfGPOrderHasBeenSet(false),
    m_electronicInvoiceAirTransportReceiptNumberHasBeenSet(false),
    m_detailInformationOfAirTicketTupleHasBeenSet(false),
    m_fareHasBeenSet(false),
    m_fuelSurchargeHasBeenSet(false),
    m_vatRateHasBeenSet(false),
    m_vatTaxAmountHasBeenSet(false),
    m_civilAviationDevelopmentFundHasBeenSet(false),
    m_otherTaxesHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_electronicTicketNumHasBeenSet(false),
    m_verificationCodeHasBeenSet(false),
    m_promptInformationHasBeenSet(false),
    m_insuranceHasBeenSet(false),
    m_agentCodeHasBeenSet(false),
    m_issuePartyHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_issuingStatusHasBeenSet(false),
    m_markingOfDomesticOrInternationalHasBeenSet(false),
    m_nameOfPurchaserHasBeenSet(false),
    m_nameOfSellerHasBeenSet(false),
    m_unifiedSocialCreditCodeOfPurchaserHasBeenSet(false)
{
}

CoreInternalOutcome AirTicketInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PassengerName") && !value["PassengerName"].IsNull())
    {
        if (!value["PassengerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.PassengerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passengerName = string(value["PassengerName"].GetString());
        m_passengerNameHasBeenSet = true;
    }

    if (value.HasMember("ValidIdNumber") && !value["ValidIdNumber"].IsNull())
    {
        if (!value["ValidIdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.ValidIdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validIdNumber = string(value["ValidIdNumber"].GetString());
        m_validIdNumberHasBeenSet = true;
    }

    if (value.HasMember("Endorsement") && !value["Endorsement"].IsNull())
    {
        if (!value["Endorsement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.Endorsement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endorsement = string(value["Endorsement"].GetString());
        m_endorsementHasBeenSet = true;
    }

    if (value.HasMember("NumberOfGPOrder") && !value["NumberOfGPOrder"].IsNull())
    {
        if (!value["NumberOfGPOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.NumberOfGPOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfGPOrder = string(value["NumberOfGPOrder"].GetString());
        m_numberOfGPOrderHasBeenSet = true;
    }

    if (value.HasMember("ElectronicInvoiceAirTransportReceiptNumber") && !value["ElectronicInvoiceAirTransportReceiptNumber"].IsNull())
    {
        if (!value["ElectronicInvoiceAirTransportReceiptNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.ElectronicInvoiceAirTransportReceiptNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicInvoiceAirTransportReceiptNumber = string(value["ElectronicInvoiceAirTransportReceiptNumber"].GetString());
        m_electronicInvoiceAirTransportReceiptNumberHasBeenSet = true;
    }

    if (value.HasMember("DetailInformationOfAirTicketTuple") && !value["DetailInformationOfAirTicketTuple"].IsNull())
    {
        if (!value["DetailInformationOfAirTicketTuple"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.DetailInformationOfAirTicketTuple` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailInformationOfAirTicketTuple"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailInformationOfAirTicketTupleList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailInformationOfAirTicketTuple.push_back(item);
        }
        m_detailInformationOfAirTicketTupleHasBeenSet = true;
    }

    if (value.HasMember("Fare") && !value["Fare"].IsNull())
    {
        if (!value["Fare"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.Fare` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fare = string(value["Fare"].GetString());
        m_fareHasBeenSet = true;
    }

    if (value.HasMember("FuelSurcharge") && !value["FuelSurcharge"].IsNull())
    {
        if (!value["FuelSurcharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.FuelSurcharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuelSurcharge = string(value["FuelSurcharge"].GetString());
        m_fuelSurchargeHasBeenSet = true;
    }

    if (value.HasMember("VatRate") && !value["VatRate"].IsNull())
    {
        if (!value["VatRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.VatRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vatRate = string(value["VatRate"].GetString());
        m_vatRateHasBeenSet = true;
    }

    if (value.HasMember("VatTaxAmount") && !value["VatTaxAmount"].IsNull())
    {
        if (!value["VatTaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.VatTaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vatTaxAmount = string(value["VatTaxAmount"].GetString());
        m_vatTaxAmountHasBeenSet = true;
    }

    if (value.HasMember("CivilAviationDevelopmentFund") && !value["CivilAviationDevelopmentFund"].IsNull())
    {
        if (!value["CivilAviationDevelopmentFund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.CivilAviationDevelopmentFund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_civilAviationDevelopmentFund = string(value["CivilAviationDevelopmentFund"].GetString());
        m_civilAviationDevelopmentFundHasBeenSet = true;
    }

    if (value.HasMember("OtherTaxes") && !value["OtherTaxes"].IsNull())
    {
        if (!value["OtherTaxes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.OtherTaxes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherTaxes = string(value["OtherTaxes"].GetString());
        m_otherTaxesHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.TotalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = string(value["TotalAmount"].GetString());
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("ElectronicTicketNum") && !value["ElectronicTicketNum"].IsNull())
    {
        if (!value["ElectronicTicketNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.ElectronicTicketNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicTicketNum = string(value["ElectronicTicketNum"].GetString());
        m_electronicTicketNumHasBeenSet = true;
    }

    if (value.HasMember("VerificationCode") && !value["VerificationCode"].IsNull())
    {
        if (!value["VerificationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.VerificationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationCode = string(value["VerificationCode"].GetString());
        m_verificationCodeHasBeenSet = true;
    }

    if (value.HasMember("PromptInformation") && !value["PromptInformation"].IsNull())
    {
        if (!value["PromptInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.PromptInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptInformation = string(value["PromptInformation"].GetString());
        m_promptInformationHasBeenSet = true;
    }

    if (value.HasMember("Insurance") && !value["Insurance"].IsNull())
    {
        if (!value["Insurance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.Insurance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insurance = string(value["Insurance"].GetString());
        m_insuranceHasBeenSet = true;
    }

    if (value.HasMember("AgentCode") && !value["AgentCode"].IsNull())
    {
        if (!value["AgentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.AgentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCode = string(value["AgentCode"].GetString());
        m_agentCodeHasBeenSet = true;
    }

    if (value.HasMember("IssueParty") && !value["IssueParty"].IsNull())
    {
        if (!value["IssueParty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.IssueParty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueParty = string(value["IssueParty"].GetString());
        m_issuePartyHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("IssuingStatus") && !value["IssuingStatus"].IsNull())
    {
        if (!value["IssuingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.IssuingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingStatus = string(value["IssuingStatus"].GetString());
        m_issuingStatusHasBeenSet = true;
    }

    if (value.HasMember("MarkingOfDomesticOrInternational") && !value["MarkingOfDomesticOrInternational"].IsNull())
    {
        if (!value["MarkingOfDomesticOrInternational"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.MarkingOfDomesticOrInternational` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markingOfDomesticOrInternational = string(value["MarkingOfDomesticOrInternational"].GetString());
        m_markingOfDomesticOrInternationalHasBeenSet = true;
    }

    if (value.HasMember("NameOfPurchaser") && !value["NameOfPurchaser"].IsNull())
    {
        if (!value["NameOfPurchaser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.NameOfPurchaser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameOfPurchaser = string(value["NameOfPurchaser"].GetString());
        m_nameOfPurchaserHasBeenSet = true;
    }

    if (value.HasMember("NameOfSeller") && !value["NameOfSeller"].IsNull())
    {
        if (!value["NameOfSeller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.NameOfSeller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameOfSeller = string(value["NameOfSeller"].GetString());
        m_nameOfSellerHasBeenSet = true;
    }

    if (value.HasMember("UnifiedSocialCreditCodeOfPurchaser") && !value["UnifiedSocialCreditCodeOfPurchaser"].IsNull())
    {
        if (!value["UnifiedSocialCreditCodeOfPurchaser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirTicketInfo.UnifiedSocialCreditCodeOfPurchaser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedSocialCreditCodeOfPurchaser = string(value["UnifiedSocialCreditCodeOfPurchaser"].GetString());
        m_unifiedSocialCreditCodeOfPurchaserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AirTicketInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passengerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassengerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passengerName.c_str(), allocator).Move(), allocator);
    }

    if (m_validIdNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidIdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validIdNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_endorsementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endorsement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endorsement.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfGPOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfGPOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfGPOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicInvoiceAirTransportReceiptNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicInvoiceAirTransportReceiptNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicInvoiceAirTransportReceiptNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_detailInformationOfAirTicketTupleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailInformationOfAirTicketTuple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailInformationOfAirTicketTuple.begin(); itr != m_detailInformationOfAirTicketTuple.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_vatRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vatRate.c_str(), allocator).Move(), allocator);
    }

    if (m_vatTaxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatTaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vatTaxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_civilAviationDevelopmentFundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CivilAviationDevelopmentFund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_civilAviationDevelopmentFund.c_str(), allocator).Move(), allocator);
    }

    if (m_otherTaxesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherTaxes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherTaxes.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalAmount.c_str(), allocator).Move(), allocator);
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

    if (m_agentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_issuePartyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueParty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueParty.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_markingOfDomesticOrInternationalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkingOfDomesticOrInternational";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markingOfDomesticOrInternational.c_str(), allocator).Move(), allocator);
    }

    if (m_nameOfPurchaserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameOfPurchaser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameOfPurchaser.c_str(), allocator).Move(), allocator);
    }

    if (m_nameOfSellerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameOfSeller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameOfSeller.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedSocialCreditCodeOfPurchaserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedSocialCreditCodeOfPurchaser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedSocialCreditCodeOfPurchaser.c_str(), allocator).Move(), allocator);
    }

}


string AirTicketInfo::GetPassengerName() const
{
    return m_passengerName;
}

void AirTicketInfo::SetPassengerName(const string& _passengerName)
{
    m_passengerName = _passengerName;
    m_passengerNameHasBeenSet = true;
}

bool AirTicketInfo::PassengerNameHasBeenSet() const
{
    return m_passengerNameHasBeenSet;
}

string AirTicketInfo::GetValidIdNumber() const
{
    return m_validIdNumber;
}

void AirTicketInfo::SetValidIdNumber(const string& _validIdNumber)
{
    m_validIdNumber = _validIdNumber;
    m_validIdNumberHasBeenSet = true;
}

bool AirTicketInfo::ValidIdNumberHasBeenSet() const
{
    return m_validIdNumberHasBeenSet;
}

string AirTicketInfo::GetEndorsement() const
{
    return m_endorsement;
}

void AirTicketInfo::SetEndorsement(const string& _endorsement)
{
    m_endorsement = _endorsement;
    m_endorsementHasBeenSet = true;
}

bool AirTicketInfo::EndorsementHasBeenSet() const
{
    return m_endorsementHasBeenSet;
}

string AirTicketInfo::GetNumberOfGPOrder() const
{
    return m_numberOfGPOrder;
}

void AirTicketInfo::SetNumberOfGPOrder(const string& _numberOfGPOrder)
{
    m_numberOfGPOrder = _numberOfGPOrder;
    m_numberOfGPOrderHasBeenSet = true;
}

bool AirTicketInfo::NumberOfGPOrderHasBeenSet() const
{
    return m_numberOfGPOrderHasBeenSet;
}

string AirTicketInfo::GetElectronicInvoiceAirTransportReceiptNumber() const
{
    return m_electronicInvoiceAirTransportReceiptNumber;
}

void AirTicketInfo::SetElectronicInvoiceAirTransportReceiptNumber(const string& _electronicInvoiceAirTransportReceiptNumber)
{
    m_electronicInvoiceAirTransportReceiptNumber = _electronicInvoiceAirTransportReceiptNumber;
    m_electronicInvoiceAirTransportReceiptNumberHasBeenSet = true;
}

bool AirTicketInfo::ElectronicInvoiceAirTransportReceiptNumberHasBeenSet() const
{
    return m_electronicInvoiceAirTransportReceiptNumberHasBeenSet;
}

vector<DetailInformationOfAirTicketTupleList> AirTicketInfo::GetDetailInformationOfAirTicketTuple() const
{
    return m_detailInformationOfAirTicketTuple;
}

void AirTicketInfo::SetDetailInformationOfAirTicketTuple(const vector<DetailInformationOfAirTicketTupleList>& _detailInformationOfAirTicketTuple)
{
    m_detailInformationOfAirTicketTuple = _detailInformationOfAirTicketTuple;
    m_detailInformationOfAirTicketTupleHasBeenSet = true;
}

bool AirTicketInfo::DetailInformationOfAirTicketTupleHasBeenSet() const
{
    return m_detailInformationOfAirTicketTupleHasBeenSet;
}

string AirTicketInfo::GetFare() const
{
    return m_fare;
}

void AirTicketInfo::SetFare(const string& _fare)
{
    m_fare = _fare;
    m_fareHasBeenSet = true;
}

bool AirTicketInfo::FareHasBeenSet() const
{
    return m_fareHasBeenSet;
}

string AirTicketInfo::GetFuelSurcharge() const
{
    return m_fuelSurcharge;
}

void AirTicketInfo::SetFuelSurcharge(const string& _fuelSurcharge)
{
    m_fuelSurcharge = _fuelSurcharge;
    m_fuelSurchargeHasBeenSet = true;
}

bool AirTicketInfo::FuelSurchargeHasBeenSet() const
{
    return m_fuelSurchargeHasBeenSet;
}

string AirTicketInfo::GetVatRate() const
{
    return m_vatRate;
}

void AirTicketInfo::SetVatRate(const string& _vatRate)
{
    m_vatRate = _vatRate;
    m_vatRateHasBeenSet = true;
}

bool AirTicketInfo::VatRateHasBeenSet() const
{
    return m_vatRateHasBeenSet;
}

string AirTicketInfo::GetVatTaxAmount() const
{
    return m_vatTaxAmount;
}

void AirTicketInfo::SetVatTaxAmount(const string& _vatTaxAmount)
{
    m_vatTaxAmount = _vatTaxAmount;
    m_vatTaxAmountHasBeenSet = true;
}

bool AirTicketInfo::VatTaxAmountHasBeenSet() const
{
    return m_vatTaxAmountHasBeenSet;
}

string AirTicketInfo::GetCivilAviationDevelopmentFund() const
{
    return m_civilAviationDevelopmentFund;
}

void AirTicketInfo::SetCivilAviationDevelopmentFund(const string& _civilAviationDevelopmentFund)
{
    m_civilAviationDevelopmentFund = _civilAviationDevelopmentFund;
    m_civilAviationDevelopmentFundHasBeenSet = true;
}

bool AirTicketInfo::CivilAviationDevelopmentFundHasBeenSet() const
{
    return m_civilAviationDevelopmentFundHasBeenSet;
}

string AirTicketInfo::GetOtherTaxes() const
{
    return m_otherTaxes;
}

void AirTicketInfo::SetOtherTaxes(const string& _otherTaxes)
{
    m_otherTaxes = _otherTaxes;
    m_otherTaxesHasBeenSet = true;
}

bool AirTicketInfo::OtherTaxesHasBeenSet() const
{
    return m_otherTaxesHasBeenSet;
}

string AirTicketInfo::GetTotalAmount() const
{
    return m_totalAmount;
}

void AirTicketInfo::SetTotalAmount(const string& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool AirTicketInfo::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

string AirTicketInfo::GetElectronicTicketNum() const
{
    return m_electronicTicketNum;
}

void AirTicketInfo::SetElectronicTicketNum(const string& _electronicTicketNum)
{
    m_electronicTicketNum = _electronicTicketNum;
    m_electronicTicketNumHasBeenSet = true;
}

bool AirTicketInfo::ElectronicTicketNumHasBeenSet() const
{
    return m_electronicTicketNumHasBeenSet;
}

string AirTicketInfo::GetVerificationCode() const
{
    return m_verificationCode;
}

void AirTicketInfo::SetVerificationCode(const string& _verificationCode)
{
    m_verificationCode = _verificationCode;
    m_verificationCodeHasBeenSet = true;
}

bool AirTicketInfo::VerificationCodeHasBeenSet() const
{
    return m_verificationCodeHasBeenSet;
}

string AirTicketInfo::GetPromptInformation() const
{
    return m_promptInformation;
}

void AirTicketInfo::SetPromptInformation(const string& _promptInformation)
{
    m_promptInformation = _promptInformation;
    m_promptInformationHasBeenSet = true;
}

bool AirTicketInfo::PromptInformationHasBeenSet() const
{
    return m_promptInformationHasBeenSet;
}

string AirTicketInfo::GetInsurance() const
{
    return m_insurance;
}

void AirTicketInfo::SetInsurance(const string& _insurance)
{
    m_insurance = _insurance;
    m_insuranceHasBeenSet = true;
}

bool AirTicketInfo::InsuranceHasBeenSet() const
{
    return m_insuranceHasBeenSet;
}

string AirTicketInfo::GetAgentCode() const
{
    return m_agentCode;
}

void AirTicketInfo::SetAgentCode(const string& _agentCode)
{
    m_agentCode = _agentCode;
    m_agentCodeHasBeenSet = true;
}

bool AirTicketInfo::AgentCodeHasBeenSet() const
{
    return m_agentCodeHasBeenSet;
}

string AirTicketInfo::GetIssueParty() const
{
    return m_issueParty;
}

void AirTicketInfo::SetIssueParty(const string& _issueParty)
{
    m_issueParty = _issueParty;
    m_issuePartyHasBeenSet = true;
}

bool AirTicketInfo::IssuePartyHasBeenSet() const
{
    return m_issuePartyHasBeenSet;
}

string AirTicketInfo::GetIssueDate() const
{
    return m_issueDate;
}

void AirTicketInfo::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool AirTicketInfo::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string AirTicketInfo::GetIssuingStatus() const
{
    return m_issuingStatus;
}

void AirTicketInfo::SetIssuingStatus(const string& _issuingStatus)
{
    m_issuingStatus = _issuingStatus;
    m_issuingStatusHasBeenSet = true;
}

bool AirTicketInfo::IssuingStatusHasBeenSet() const
{
    return m_issuingStatusHasBeenSet;
}

string AirTicketInfo::GetMarkingOfDomesticOrInternational() const
{
    return m_markingOfDomesticOrInternational;
}

void AirTicketInfo::SetMarkingOfDomesticOrInternational(const string& _markingOfDomesticOrInternational)
{
    m_markingOfDomesticOrInternational = _markingOfDomesticOrInternational;
    m_markingOfDomesticOrInternationalHasBeenSet = true;
}

bool AirTicketInfo::MarkingOfDomesticOrInternationalHasBeenSet() const
{
    return m_markingOfDomesticOrInternationalHasBeenSet;
}

string AirTicketInfo::GetNameOfPurchaser() const
{
    return m_nameOfPurchaser;
}

void AirTicketInfo::SetNameOfPurchaser(const string& _nameOfPurchaser)
{
    m_nameOfPurchaser = _nameOfPurchaser;
    m_nameOfPurchaserHasBeenSet = true;
}

bool AirTicketInfo::NameOfPurchaserHasBeenSet() const
{
    return m_nameOfPurchaserHasBeenSet;
}

string AirTicketInfo::GetNameOfSeller() const
{
    return m_nameOfSeller;
}

void AirTicketInfo::SetNameOfSeller(const string& _nameOfSeller)
{
    m_nameOfSeller = _nameOfSeller;
    m_nameOfSellerHasBeenSet = true;
}

bool AirTicketInfo::NameOfSellerHasBeenSet() const
{
    return m_nameOfSellerHasBeenSet;
}

string AirTicketInfo::GetUnifiedSocialCreditCodeOfPurchaser() const
{
    return m_unifiedSocialCreditCodeOfPurchaser;
}

void AirTicketInfo::SetUnifiedSocialCreditCodeOfPurchaser(const string& _unifiedSocialCreditCodeOfPurchaser)
{
    m_unifiedSocialCreditCodeOfPurchaser = _unifiedSocialCreditCodeOfPurchaser;
    m_unifiedSocialCreditCodeOfPurchaserHasBeenSet = true;
}

bool AirTicketInfo::UnifiedSocialCreditCodeOfPurchaserHasBeenSet() const
{
    return m_unifiedSocialCreditCodeOfPurchaserHasBeenSet;
}

