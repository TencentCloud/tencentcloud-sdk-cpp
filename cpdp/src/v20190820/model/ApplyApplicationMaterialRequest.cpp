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

#include <tencentcloud/cpdp/v20190820/model/ApplyApplicationMaterialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyApplicationMaterialRequest::ApplyApplicationMaterialRequest() :
    m_transactionIdHasBeenSet(false),
    m_declareIdHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_sourceCurrencyHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_tradeCodeHasBeenSet(false),
    m_originalDeclareIdHasBeenSet(false),
    m_sourceAmountHasBeenSet(false),
    m_targetAmountHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string ApplyApplicationMaterialRequest::ToJsonString() const
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

    if (m_declareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeclareId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_declareId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
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

    if (m_tradeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_originalDeclareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalDeclareId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalDeclareId.c_str(), allocator).Move(), allocator);
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


string ApplyApplicationMaterialRequest::GetTransactionId() const
{
    return m_transactionId;
}

void ApplyApplicationMaterialRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetDeclareId() const
{
    return m_declareId;
}

void ApplyApplicationMaterialRequest::SetDeclareId(const string& _declareId)
{
    m_declareId = _declareId;
    m_declareIdHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::DeclareIdHasBeenSet() const
{
    return m_declareIdHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetPayerId() const
{
    return m_payerId;
}

void ApplyApplicationMaterialRequest::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void ApplyApplicationMaterialRequest::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void ApplyApplicationMaterialRequest::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetTradeCode() const
{
    return m_tradeCode;
}

void ApplyApplicationMaterialRequest::SetTradeCode(const string& _tradeCode)
{
    m_tradeCode = _tradeCode;
    m_tradeCodeHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::TradeCodeHasBeenSet() const
{
    return m_tradeCodeHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetOriginalDeclareId() const
{
    return m_originalDeclareId;
}

void ApplyApplicationMaterialRequest::SetOriginalDeclareId(const string& _originalDeclareId)
{
    m_originalDeclareId = _originalDeclareId;
    m_originalDeclareIdHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::OriginalDeclareIdHasBeenSet() const
{
    return m_originalDeclareIdHasBeenSet;
}

int64_t ApplyApplicationMaterialRequest::GetSourceAmount() const
{
    return m_sourceAmount;
}

void ApplyApplicationMaterialRequest::SetSourceAmount(const int64_t& _sourceAmount)
{
    m_sourceAmount = _sourceAmount;
    m_sourceAmountHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::SourceAmountHasBeenSet() const
{
    return m_sourceAmountHasBeenSet;
}

int64_t ApplyApplicationMaterialRequest::GetTargetAmount() const
{
    return m_targetAmount;
}

void ApplyApplicationMaterialRequest::SetTargetAmount(const int64_t& _targetAmount)
{
    m_targetAmount = _targetAmount;
    m_targetAmountHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::TargetAmountHasBeenSet() const
{
    return m_targetAmountHasBeenSet;
}

string ApplyApplicationMaterialRequest::GetProfile() const
{
    return m_profile;
}

void ApplyApplicationMaterialRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ApplyApplicationMaterialRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


