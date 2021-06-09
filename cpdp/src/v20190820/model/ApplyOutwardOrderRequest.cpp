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

#include <tencentcloud/cpdp/v20190820/model/ApplyOutwardOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyOutwardOrderRequest::ApplyOutwardOrderRequest() :
    m_transactionIdHasBeenSet(false),
    m_pricingCurrencyHasBeenSet(false),
    m_sourceCurrencyHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_payeeTypeHasBeenSet(false),
    m_payeeAccountHasBeenSet(false),
    m_sourceAmountHasBeenSet(false),
    m_targetAmountHasBeenSet(false),
    m_payeeNameHasBeenSet(false),
    m_payeeAddressHasBeenSet(false),
    m_payeeBankAccountTypeHasBeenSet(false),
    m_payeeCountryCodeHasBeenSet(false),
    m_payeeBankNameHasBeenSet(false),
    m_payeeBankAddressHasBeenSet(false),
    m_payeeBankDistrictHasBeenSet(false),
    m_payeeBankSwiftCodeHasBeenSet(false),
    m_payeeBankTypeHasBeenSet(false),
    m_payeeBankCodeHasBeenSet(false),
    m_referenceForBeneficiaryHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string ApplyOutwardOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_pricingCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PricingCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pricingCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeType.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceAmount, allocator);
    }

    if (m_targetAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetAmount, allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankAccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankAccountType.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeCountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankName.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankDistrictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankDistrict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankDistrict.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankSwiftCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankSwiftCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankSwiftCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankType.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeBankCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeBankCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeBankCode.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceForBeneficiaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceForBeneficiary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referenceForBeneficiary.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyOutwardOrderRequest::GetTransactionId() const
{
    return m_transactionId;
}

void ApplyOutwardOrderRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPricingCurrency() const
{
    return m_pricingCurrency;
}

void ApplyOutwardOrderRequest::SetPricingCurrency(const string& _pricingCurrency)
{
    m_pricingCurrency = _pricingCurrency;
    m_pricingCurrencyHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PricingCurrencyHasBeenSet() const
{
    return m_pricingCurrencyHasBeenSet;
}

string ApplyOutwardOrderRequest::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void ApplyOutwardOrderRequest::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string ApplyOutwardOrderRequest::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void ApplyOutwardOrderRequest::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeType() const
{
    return m_payeeType;
}

void ApplyOutwardOrderRequest::SetPayeeType(const string& _payeeType)
{
    m_payeeType = _payeeType;
    m_payeeTypeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeTypeHasBeenSet() const
{
    return m_payeeTypeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeAccount() const
{
    return m_payeeAccount;
}

void ApplyOutwardOrderRequest::SetPayeeAccount(const string& _payeeAccount)
{
    m_payeeAccount = _payeeAccount;
    m_payeeAccountHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeAccountHasBeenSet() const
{
    return m_payeeAccountHasBeenSet;
}

double ApplyOutwardOrderRequest::GetSourceAmount() const
{
    return m_sourceAmount;
}

void ApplyOutwardOrderRequest::SetSourceAmount(const double& _sourceAmount)
{
    m_sourceAmount = _sourceAmount;
    m_sourceAmountHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::SourceAmountHasBeenSet() const
{
    return m_sourceAmountHasBeenSet;
}

double ApplyOutwardOrderRequest::GetTargetAmount() const
{
    return m_targetAmount;
}

void ApplyOutwardOrderRequest::SetTargetAmount(const double& _targetAmount)
{
    m_targetAmount = _targetAmount;
    m_targetAmountHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::TargetAmountHasBeenSet() const
{
    return m_targetAmountHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeName() const
{
    return m_payeeName;
}

void ApplyOutwardOrderRequest::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeAddress() const
{
    return m_payeeAddress;
}

void ApplyOutwardOrderRequest::SetPayeeAddress(const string& _payeeAddress)
{
    m_payeeAddress = _payeeAddress;
    m_payeeAddressHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeAddressHasBeenSet() const
{
    return m_payeeAddressHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankAccountType() const
{
    return m_payeeBankAccountType;
}

void ApplyOutwardOrderRequest::SetPayeeBankAccountType(const string& _payeeBankAccountType)
{
    m_payeeBankAccountType = _payeeBankAccountType;
    m_payeeBankAccountTypeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankAccountTypeHasBeenSet() const
{
    return m_payeeBankAccountTypeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeCountryCode() const
{
    return m_payeeCountryCode;
}

void ApplyOutwardOrderRequest::SetPayeeCountryCode(const string& _payeeCountryCode)
{
    m_payeeCountryCode = _payeeCountryCode;
    m_payeeCountryCodeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeCountryCodeHasBeenSet() const
{
    return m_payeeCountryCodeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankName() const
{
    return m_payeeBankName;
}

void ApplyOutwardOrderRequest::SetPayeeBankName(const string& _payeeBankName)
{
    m_payeeBankName = _payeeBankName;
    m_payeeBankNameHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankNameHasBeenSet() const
{
    return m_payeeBankNameHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankAddress() const
{
    return m_payeeBankAddress;
}

void ApplyOutwardOrderRequest::SetPayeeBankAddress(const string& _payeeBankAddress)
{
    m_payeeBankAddress = _payeeBankAddress;
    m_payeeBankAddressHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankAddressHasBeenSet() const
{
    return m_payeeBankAddressHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankDistrict() const
{
    return m_payeeBankDistrict;
}

void ApplyOutwardOrderRequest::SetPayeeBankDistrict(const string& _payeeBankDistrict)
{
    m_payeeBankDistrict = _payeeBankDistrict;
    m_payeeBankDistrictHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankDistrictHasBeenSet() const
{
    return m_payeeBankDistrictHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankSwiftCode() const
{
    return m_payeeBankSwiftCode;
}

void ApplyOutwardOrderRequest::SetPayeeBankSwiftCode(const string& _payeeBankSwiftCode)
{
    m_payeeBankSwiftCode = _payeeBankSwiftCode;
    m_payeeBankSwiftCodeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankSwiftCodeHasBeenSet() const
{
    return m_payeeBankSwiftCodeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankType() const
{
    return m_payeeBankType;
}

void ApplyOutwardOrderRequest::SetPayeeBankType(const string& _payeeBankType)
{
    m_payeeBankType = _payeeBankType;
    m_payeeBankTypeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankTypeHasBeenSet() const
{
    return m_payeeBankTypeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetPayeeBankCode() const
{
    return m_payeeBankCode;
}

void ApplyOutwardOrderRequest::SetPayeeBankCode(const string& _payeeBankCode)
{
    m_payeeBankCode = _payeeBankCode;
    m_payeeBankCodeHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::PayeeBankCodeHasBeenSet() const
{
    return m_payeeBankCodeHasBeenSet;
}

string ApplyOutwardOrderRequest::GetReferenceForBeneficiary() const
{
    return m_referenceForBeneficiary;
}

void ApplyOutwardOrderRequest::SetReferenceForBeneficiary(const string& _referenceForBeneficiary)
{
    m_referenceForBeneficiary = _referenceForBeneficiary;
    m_referenceForBeneficiaryHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::ReferenceForBeneficiaryHasBeenSet() const
{
    return m_referenceForBeneficiaryHasBeenSet;
}

string ApplyOutwardOrderRequest::GetProfile() const
{
    return m_profile;
}

void ApplyOutwardOrderRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ApplyOutwardOrderRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


