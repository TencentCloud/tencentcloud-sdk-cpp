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

#include <tencentcloud/cpdp/v20190820/model/QueryDeclareData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryDeclareData::QueryDeclareData() :
    m_merchantIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_declareIdHasBeenSet(false),
    m_originalDeclareIdHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_sourceCurrencyHasBeenSet(false),
    m_sourceAmountHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_targetAmountHasBeenSet(false),
    m_tradeCodeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome QueryDeclareData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("DeclareId") && !value["DeclareId"].IsNull())
    {
        if (!value["DeclareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.DeclareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_declareId = string(value["DeclareId"].GetString());
        m_declareIdHasBeenSet = true;
    }

    if (value.HasMember("OriginalDeclareId") && !value["OriginalDeclareId"].IsNull())
    {
        if (!value["OriginalDeclareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.OriginalDeclareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalDeclareId = string(value["OriginalDeclareId"].GetString());
        m_originalDeclareIdHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("SourceCurrency") && !value["SourceCurrency"].IsNull())
    {
        if (!value["SourceCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.SourceCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCurrency = string(value["SourceCurrency"].GetString());
        m_sourceCurrencyHasBeenSet = true;
    }

    if (value.HasMember("SourceAmount") && !value["SourceAmount"].IsNull())
    {
        if (!value["SourceAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.SourceAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceAmount = string(value["SourceAmount"].GetString());
        m_sourceAmountHasBeenSet = true;
    }

    if (value.HasMember("TargetCurrency") && !value["TargetCurrency"].IsNull())
    {
        if (!value["TargetCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.TargetCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCurrency = string(value["TargetCurrency"].GetString());
        m_targetCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TargetAmount") && !value["TargetAmount"].IsNull())
    {
        if (!value["TargetAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.TargetAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAmount = string(value["TargetAmount"].GetString());
        m_targetAmountHasBeenSet = true;
    }

    if (value.HasMember("TradeCode") && !value["TradeCode"].IsNull())
    {
        if (!value["TradeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.TradeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeCode = string(value["TradeCode"].GetString());
        m_tradeCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDeclareData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryDeclareData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_declareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeclareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_declareId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalDeclareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalDeclareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalDeclareId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string QueryDeclareData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryDeclareData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryDeclareData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryDeclareData::GetTransactionId() const
{
    return m_transactionId;
}

void QueryDeclareData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool QueryDeclareData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string QueryDeclareData::GetDeclareId() const
{
    return m_declareId;
}

void QueryDeclareData::SetDeclareId(const string& _declareId)
{
    m_declareId = _declareId;
    m_declareIdHasBeenSet = true;
}

bool QueryDeclareData::DeclareIdHasBeenSet() const
{
    return m_declareIdHasBeenSet;
}

string QueryDeclareData::GetOriginalDeclareId() const
{
    return m_originalDeclareId;
}

void QueryDeclareData::SetOriginalDeclareId(const string& _originalDeclareId)
{
    m_originalDeclareId = _originalDeclareId;
    m_originalDeclareIdHasBeenSet = true;
}

bool QueryDeclareData::OriginalDeclareIdHasBeenSet() const
{
    return m_originalDeclareIdHasBeenSet;
}

string QueryDeclareData::GetPayerId() const
{
    return m_payerId;
}

void QueryDeclareData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool QueryDeclareData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string QueryDeclareData::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void QueryDeclareData::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool QueryDeclareData::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string QueryDeclareData::GetSourceAmount() const
{
    return m_sourceAmount;
}

void QueryDeclareData::SetSourceAmount(const string& _sourceAmount)
{
    m_sourceAmount = _sourceAmount;
    m_sourceAmountHasBeenSet = true;
}

bool QueryDeclareData::SourceAmountHasBeenSet() const
{
    return m_sourceAmountHasBeenSet;
}

string QueryDeclareData::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void QueryDeclareData::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool QueryDeclareData::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string QueryDeclareData::GetTargetAmount() const
{
    return m_targetAmount;
}

void QueryDeclareData::SetTargetAmount(const string& _targetAmount)
{
    m_targetAmount = _targetAmount;
    m_targetAmountHasBeenSet = true;
}

bool QueryDeclareData::TargetAmountHasBeenSet() const
{
    return m_targetAmountHasBeenSet;
}

string QueryDeclareData::GetTradeCode() const
{
    return m_tradeCode;
}

void QueryDeclareData::SetTradeCode(const string& _tradeCode)
{
    m_tradeCode = _tradeCode;
    m_tradeCodeHasBeenSet = true;
}

bool QueryDeclareData::TradeCodeHasBeenSet() const
{
    return m_tradeCodeHasBeenSet;
}

string QueryDeclareData::GetStatus() const
{
    return m_status;
}

void QueryDeclareData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryDeclareData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

