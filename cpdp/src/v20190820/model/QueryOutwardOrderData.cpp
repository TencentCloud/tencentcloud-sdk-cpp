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

#include <tencentcloud/cpdp/v20190820/model/QueryOutwardOrderData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOutwardOrderData::QueryOutwardOrderData() :
    m_merchantIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_acctDateHasBeenSet(false),
    m_pricingCurrencyHasBeenSet(false),
    m_sourceCurrencyHasBeenSet(false),
    m_sourceAmountHasBeenSet(false),
    m_targetCurrencyHasBeenSet(false),
    m_targetAmountHasBeenSet(false),
    m_fxRateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_refundAmountHasBeenSet(false),
    m_refundCurrencyHasBeenSet(false)
{
}

CoreInternalOutcome QueryOutwardOrderData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("AcctDate") && !value["AcctDate"].IsNull())
    {
        if (!value["AcctDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.AcctDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctDate = string(value["AcctDate"].GetString());
        m_acctDateHasBeenSet = true;
    }

    if (value.HasMember("PricingCurrency") && !value["PricingCurrency"].IsNull())
    {
        if (!value["PricingCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.PricingCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pricingCurrency = string(value["PricingCurrency"].GetString());
        m_pricingCurrencyHasBeenSet = true;
    }

    if (value.HasMember("SourceCurrency") && !value["SourceCurrency"].IsNull())
    {
        if (!value["SourceCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.SourceCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCurrency = string(value["SourceCurrency"].GetString());
        m_sourceCurrencyHasBeenSet = true;
    }

    if (value.HasMember("SourceAmount") && !value["SourceAmount"].IsNull())
    {
        if (!value["SourceAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.SourceAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceAmount = string(value["SourceAmount"].GetString());
        m_sourceAmountHasBeenSet = true;
    }

    if (value.HasMember("TargetCurrency") && !value["TargetCurrency"].IsNull())
    {
        if (!value["TargetCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.TargetCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCurrency = string(value["TargetCurrency"].GetString());
        m_targetCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TargetAmount") && !value["TargetAmount"].IsNull())
    {
        if (!value["TargetAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.TargetAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAmount = string(value["TargetAmount"].GetString());
        m_targetAmountHasBeenSet = true;
    }

    if (value.HasMember("FxRate") && !value["FxRate"].IsNull())
    {
        if (!value["FxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.FxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fxRate = string(value["FxRate"].GetString());
        m_fxRateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("RefundAmount") && !value["RefundAmount"].IsNull())
    {
        if (!value["RefundAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.RefundAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmount = string(value["RefundAmount"].GetString());
        m_refundAmountHasBeenSet = true;
    }

    if (value.HasMember("RefundCurrency") && !value["RefundCurrency"].IsNull())
    {
        if (!value["RefundCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOutwardOrderData.RefundCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundCurrency = string(value["RefundCurrency"].GetString());
        m_refundCurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOutwardOrderData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_acctDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acctDate.c_str(), allocator).Move(), allocator);
    }

    if (m_pricingCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PricingCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pricingCurrency.c_str(), allocator).Move(), allocator);
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

    if (m_fxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_refundCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundCurrency.c_str(), allocator).Move(), allocator);
    }

}


string QueryOutwardOrderData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryOutwardOrderData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryOutwardOrderData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryOutwardOrderData::GetTransactionId() const
{
    return m_transactionId;
}

void QueryOutwardOrderData::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool QueryOutwardOrderData::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string QueryOutwardOrderData::GetAcctDate() const
{
    return m_acctDate;
}

void QueryOutwardOrderData::SetAcctDate(const string& _acctDate)
{
    m_acctDate = _acctDate;
    m_acctDateHasBeenSet = true;
}

bool QueryOutwardOrderData::AcctDateHasBeenSet() const
{
    return m_acctDateHasBeenSet;
}

string QueryOutwardOrderData::GetPricingCurrency() const
{
    return m_pricingCurrency;
}

void QueryOutwardOrderData::SetPricingCurrency(const string& _pricingCurrency)
{
    m_pricingCurrency = _pricingCurrency;
    m_pricingCurrencyHasBeenSet = true;
}

bool QueryOutwardOrderData::PricingCurrencyHasBeenSet() const
{
    return m_pricingCurrencyHasBeenSet;
}

string QueryOutwardOrderData::GetSourceCurrency() const
{
    return m_sourceCurrency;
}

void QueryOutwardOrderData::SetSourceCurrency(const string& _sourceCurrency)
{
    m_sourceCurrency = _sourceCurrency;
    m_sourceCurrencyHasBeenSet = true;
}

bool QueryOutwardOrderData::SourceCurrencyHasBeenSet() const
{
    return m_sourceCurrencyHasBeenSet;
}

string QueryOutwardOrderData::GetSourceAmount() const
{
    return m_sourceAmount;
}

void QueryOutwardOrderData::SetSourceAmount(const string& _sourceAmount)
{
    m_sourceAmount = _sourceAmount;
    m_sourceAmountHasBeenSet = true;
}

bool QueryOutwardOrderData::SourceAmountHasBeenSet() const
{
    return m_sourceAmountHasBeenSet;
}

string QueryOutwardOrderData::GetTargetCurrency() const
{
    return m_targetCurrency;
}

void QueryOutwardOrderData::SetTargetCurrency(const string& _targetCurrency)
{
    m_targetCurrency = _targetCurrency;
    m_targetCurrencyHasBeenSet = true;
}

bool QueryOutwardOrderData::TargetCurrencyHasBeenSet() const
{
    return m_targetCurrencyHasBeenSet;
}

string QueryOutwardOrderData::GetTargetAmount() const
{
    return m_targetAmount;
}

void QueryOutwardOrderData::SetTargetAmount(const string& _targetAmount)
{
    m_targetAmount = _targetAmount;
    m_targetAmountHasBeenSet = true;
}

bool QueryOutwardOrderData::TargetAmountHasBeenSet() const
{
    return m_targetAmountHasBeenSet;
}

string QueryOutwardOrderData::GetFxRate() const
{
    return m_fxRate;
}

void QueryOutwardOrderData::SetFxRate(const string& _fxRate)
{
    m_fxRate = _fxRate;
    m_fxRateHasBeenSet = true;
}

bool QueryOutwardOrderData::FxRateHasBeenSet() const
{
    return m_fxRateHasBeenSet;
}

string QueryOutwardOrderData::GetStatus() const
{
    return m_status;
}

void QueryOutwardOrderData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryOutwardOrderData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryOutwardOrderData::GetFailReason() const
{
    return m_failReason;
}

void QueryOutwardOrderData::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryOutwardOrderData::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryOutwardOrderData::GetRefundAmount() const
{
    return m_refundAmount;
}

void QueryOutwardOrderData::SetRefundAmount(const string& _refundAmount)
{
    m_refundAmount = _refundAmount;
    m_refundAmountHasBeenSet = true;
}

bool QueryOutwardOrderData::RefundAmountHasBeenSet() const
{
    return m_refundAmountHasBeenSet;
}

string QueryOutwardOrderData::GetRefundCurrency() const
{
    return m_refundCurrency;
}

void QueryOutwardOrderData::SetRefundCurrency(const string& _refundCurrency)
{
    m_refundCurrency = _refundCurrency;
    m_refundCurrencyHasBeenSet = true;
}

bool QueryOutwardOrderData::RefundCurrencyHasBeenSet() const
{
    return m_refundCurrencyHasBeenSet;
}

