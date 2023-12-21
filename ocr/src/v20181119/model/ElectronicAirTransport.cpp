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

#include <tencentcloud/ocr/v20181119/model/ElectronicAirTransport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ElectronicAirTransport::ElectronicAirTransport() :
    m_codeHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_checkCodeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_deductionMarkHasBeenSet(false),
    m_stateCodeHasBeenSet(false),
    m_buyerTaxCodeHasBeenSet(false),
    m_buyerNameHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_domesticInternationalMarkHasBeenSet(false),
    m_passengerNameHasBeenSet(false),
    m_passengerNoHasBeenSet(false),
    m_electronicNumberHasBeenSet(false),
    m_electronicAirTransportDetailsHasBeenSet(false)
{
}

CoreInternalOutcome ElectronicAirTransport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("CheckCode") && !value["CheckCode"].IsNull())
    {
        if (!value["CheckCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.CheckCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkCode = string(value["CheckCode"].GetString());
        m_checkCodeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("DeductionMark") && !value["DeductionMark"].IsNull())
    {
        if (!value["DeductionMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.DeductionMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductionMark = string(value["DeductionMark"].GetString());
        m_deductionMarkHasBeenSet = true;
    }

    if (value.HasMember("StateCode") && !value["StateCode"].IsNull())
    {
        if (!value["StateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.StateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateCode = string(value["StateCode"].GetString());
        m_stateCodeHasBeenSet = true;
    }

    if (value.HasMember("BuyerTaxCode") && !value["BuyerTaxCode"].IsNull())
    {
        if (!value["BuyerTaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.BuyerTaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerTaxCode = string(value["BuyerTaxCode"].GetString());
        m_buyerTaxCodeHasBeenSet = true;
    }

    if (value.HasMember("BuyerName") && !value["BuyerName"].IsNull())
    {
        if (!value["BuyerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.BuyerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyerName = string(value["BuyerName"].GetString());
        m_buyerNameHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("DomesticInternationalMark") && !value["DomesticInternationalMark"].IsNull())
    {
        if (!value["DomesticInternationalMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.DomesticInternationalMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domesticInternationalMark = string(value["DomesticInternationalMark"].GetString());
        m_domesticInternationalMarkHasBeenSet = true;
    }

    if (value.HasMember("PassengerName") && !value["PassengerName"].IsNull())
    {
        if (!value["PassengerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.PassengerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passengerName = string(value["PassengerName"].GetString());
        m_passengerNameHasBeenSet = true;
    }

    if (value.HasMember("PassengerNo") && !value["PassengerNo"].IsNull())
    {
        if (!value["PassengerNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.PassengerNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passengerNo = string(value["PassengerNo"].GetString());
        m_passengerNoHasBeenSet = true;
    }

    if (value.HasMember("ElectronicNumber") && !value["ElectronicNumber"].IsNull())
    {
        if (!value["ElectronicNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.ElectronicNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_electronicNumber = string(value["ElectronicNumber"].GetString());
        m_electronicNumberHasBeenSet = true;
    }

    if (value.HasMember("ElectronicAirTransportDetails") && !value["ElectronicAirTransportDetails"].IsNull())
    {
        if (!value["ElectronicAirTransportDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElectronicAirTransport.ElectronicAirTransportDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ElectronicAirTransportDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ElectronicAirTransportDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_electronicAirTransportDetails.push_back(item);
        }
        m_electronicAirTransportDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElectronicAirTransport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
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

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_checkCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkCode.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductionMark.c_str(), allocator).Move(), allocator);
    }

    if (m_stateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerTaxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerTaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerTaxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buyerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyerName.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_domesticInternationalMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomesticInternationalMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domesticInternationalMark.c_str(), allocator).Move(), allocator);
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

    if (m_electronicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_electronicNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_electronicAirTransportDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicAirTransportDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_electronicAirTransportDetails.begin(); itr != m_electronicAirTransportDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ElectronicAirTransport::GetCode() const
{
    return m_code;
}

void ElectronicAirTransport::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ElectronicAirTransport::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ElectronicAirTransport::GetNumber() const
{
    return m_number;
}

void ElectronicAirTransport::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool ElectronicAirTransport::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string ElectronicAirTransport::GetDate() const
{
    return m_date;
}

void ElectronicAirTransport::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ElectronicAirTransport::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ElectronicAirTransport::GetAmount() const
{
    return m_amount;
}

void ElectronicAirTransport::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool ElectronicAirTransport::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string ElectronicAirTransport::GetCheckCode() const
{
    return m_checkCode;
}

void ElectronicAirTransport::SetCheckCode(const string& _checkCode)
{
    m_checkCode = _checkCode;
    m_checkCodeHasBeenSet = true;
}

bool ElectronicAirTransport::CheckCodeHasBeenSet() const
{
    return m_checkCodeHasBeenSet;
}

string ElectronicAirTransport::GetTotal() const
{
    return m_total;
}

void ElectronicAirTransport::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ElectronicAirTransport::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string ElectronicAirTransport::GetDeductionMark() const
{
    return m_deductionMark;
}

void ElectronicAirTransport::SetDeductionMark(const string& _deductionMark)
{
    m_deductionMark = _deductionMark;
    m_deductionMarkHasBeenSet = true;
}

bool ElectronicAirTransport::DeductionMarkHasBeenSet() const
{
    return m_deductionMarkHasBeenSet;
}

string ElectronicAirTransport::GetStateCode() const
{
    return m_stateCode;
}

void ElectronicAirTransport::SetStateCode(const string& _stateCode)
{
    m_stateCode = _stateCode;
    m_stateCodeHasBeenSet = true;
}

bool ElectronicAirTransport::StateCodeHasBeenSet() const
{
    return m_stateCodeHasBeenSet;
}

string ElectronicAirTransport::GetBuyerTaxCode() const
{
    return m_buyerTaxCode;
}

void ElectronicAirTransport::SetBuyerTaxCode(const string& _buyerTaxCode)
{
    m_buyerTaxCode = _buyerTaxCode;
    m_buyerTaxCodeHasBeenSet = true;
}

bool ElectronicAirTransport::BuyerTaxCodeHasBeenSet() const
{
    return m_buyerTaxCodeHasBeenSet;
}

string ElectronicAirTransport::GetBuyerName() const
{
    return m_buyerName;
}

void ElectronicAirTransport::SetBuyerName(const string& _buyerName)
{
    m_buyerName = _buyerName;
    m_buyerNameHasBeenSet = true;
}

bool ElectronicAirTransport::BuyerNameHasBeenSet() const
{
    return m_buyerNameHasBeenSet;
}

string ElectronicAirTransport::GetTax() const
{
    return m_tax;
}

void ElectronicAirTransport::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool ElectronicAirTransport::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string ElectronicAirTransport::GetDomesticInternationalMark() const
{
    return m_domesticInternationalMark;
}

void ElectronicAirTransport::SetDomesticInternationalMark(const string& _domesticInternationalMark)
{
    m_domesticInternationalMark = _domesticInternationalMark;
    m_domesticInternationalMarkHasBeenSet = true;
}

bool ElectronicAirTransport::DomesticInternationalMarkHasBeenSet() const
{
    return m_domesticInternationalMarkHasBeenSet;
}

string ElectronicAirTransport::GetPassengerName() const
{
    return m_passengerName;
}

void ElectronicAirTransport::SetPassengerName(const string& _passengerName)
{
    m_passengerName = _passengerName;
    m_passengerNameHasBeenSet = true;
}

bool ElectronicAirTransport::PassengerNameHasBeenSet() const
{
    return m_passengerNameHasBeenSet;
}

string ElectronicAirTransport::GetPassengerNo() const
{
    return m_passengerNo;
}

void ElectronicAirTransport::SetPassengerNo(const string& _passengerNo)
{
    m_passengerNo = _passengerNo;
    m_passengerNoHasBeenSet = true;
}

bool ElectronicAirTransport::PassengerNoHasBeenSet() const
{
    return m_passengerNoHasBeenSet;
}

string ElectronicAirTransport::GetElectronicNumber() const
{
    return m_electronicNumber;
}

void ElectronicAirTransport::SetElectronicNumber(const string& _electronicNumber)
{
    m_electronicNumber = _electronicNumber;
    m_electronicNumberHasBeenSet = true;
}

bool ElectronicAirTransport::ElectronicNumberHasBeenSet() const
{
    return m_electronicNumberHasBeenSet;
}

vector<ElectronicAirTransportDetail> ElectronicAirTransport::GetElectronicAirTransportDetails() const
{
    return m_electronicAirTransportDetails;
}

void ElectronicAirTransport::SetElectronicAirTransportDetails(const vector<ElectronicAirTransportDetail>& _electronicAirTransportDetails)
{
    m_electronicAirTransportDetails = _electronicAirTransportDetails;
    m_electronicAirTransportDetailsHasBeenSet = true;
}

bool ElectronicAirTransport::ElectronicAirTransportDetailsHasBeenSet() const
{
    return m_electronicAirTransportDetailsHasBeenSet;
}

