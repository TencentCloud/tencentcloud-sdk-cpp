/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/RefundMemberTransactionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundMemberTransactionRequest::RefundMemberTransactionRequest() :
    m_outSubAccountNameHasBeenSet(false),
    m_inSubAccountNameHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_outSubAccountNumberHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_inSubAccountNumberHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_oldTransSequenceNumberHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_requestTypeHasBeenSet(false),
    m_currencyAmountHasBeenSet(false),
    m_transSequenceNumberHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_oldOrderIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_outTransNetMemberCodeHasBeenSet(false),
    m_inTransNetMemberCodeHasBeenSet(false),
    m_reservedMessageHasBeenSet(false),
    m_platformShortNumberHasBeenSet(false),
    m_transTypeHasBeenSet(false),
    m_transFeeHasBeenSet(false)
{
}

string RefundMemberTransactionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outSubAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inSubAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelSubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannelSubId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payChannelSubId, allocator);
    }

    if (m_outSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_oldTransSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldTransSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldTransSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantCode.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_oldOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_outTransNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTransNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_inTransNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InTransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inTransNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_platformShortNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformShortNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformShortNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_transTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transType.c_str(), allocator).Move(), allocator);
    }

    if (m_transFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transFee.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RefundMemberTransactionRequest::GetOutSubAccountName() const
{
    return m_outSubAccountName;
}

void RefundMemberTransactionRequest::SetOutSubAccountName(const string& _outSubAccountName)
{
    m_outSubAccountName = _outSubAccountName;
    m_outSubAccountNameHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OutSubAccountNameHasBeenSet() const
{
    return m_outSubAccountNameHasBeenSet;
}

string RefundMemberTransactionRequest::GetInSubAccountName() const
{
    return m_inSubAccountName;
}

void RefundMemberTransactionRequest::SetInSubAccountName(const string& _inSubAccountName)
{
    m_inSubAccountName = _inSubAccountName;
    m_inSubAccountNameHasBeenSet = true;
}

bool RefundMemberTransactionRequest::InSubAccountNameHasBeenSet() const
{
    return m_inSubAccountNameHasBeenSet;
}

int64_t RefundMemberTransactionRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void RefundMemberTransactionRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool RefundMemberTransactionRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string RefundMemberTransactionRequest::GetOutSubAccountNumber() const
{
    return m_outSubAccountNumber;
}

void RefundMemberTransactionRequest::SetOutSubAccountNumber(const string& _outSubAccountNumber)
{
    m_outSubAccountNumber = _outSubAccountNumber;
    m_outSubAccountNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OutSubAccountNumberHasBeenSet() const
{
    return m_outSubAccountNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void RefundMemberTransactionRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool RefundMemberTransactionRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string RefundMemberTransactionRequest::GetInSubAccountNumber() const
{
    return m_inSubAccountNumber;
}

void RefundMemberTransactionRequest::SetInSubAccountNumber(const string& _inSubAccountNumber)
{
    m_inSubAccountNumber = _inSubAccountNumber;
    m_inSubAccountNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::InSubAccountNumberHasBeenSet() const
{
    return m_inSubAccountNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void RefundMemberTransactionRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool RefundMemberTransactionRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string RefundMemberTransactionRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void RefundMemberTransactionRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetOldTransSequenceNumber() const
{
    return m_oldTransSequenceNumber;
}

void RefundMemberTransactionRequest::SetOldTransSequenceNumber(const string& _oldTransSequenceNumber)
{
    m_oldTransSequenceNumber = _oldTransSequenceNumber;
    m_oldTransSequenceNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OldTransSequenceNumberHasBeenSet() const
{
    return m_oldTransSequenceNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void RefundMemberTransactionRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string RefundMemberTransactionRequest::GetRequestType() const
{
    return m_requestType;
}

void RefundMemberTransactionRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string RefundMemberTransactionRequest::GetCurrencyAmount() const
{
    return m_currencyAmount;
}

void RefundMemberTransactionRequest::SetCurrencyAmount(const string& _currencyAmount)
{
    m_currencyAmount = _currencyAmount;
    m_currencyAmountHasBeenSet = true;
}

bool RefundMemberTransactionRequest::CurrencyAmountHasBeenSet() const
{
    return m_currencyAmountHasBeenSet;
}

string RefundMemberTransactionRequest::GetTransSequenceNumber() const
{
    return m_transSequenceNumber;
}

void RefundMemberTransactionRequest::SetTransSequenceNumber(const string& _transSequenceNumber)
{
    m_transSequenceNumber = _transSequenceNumber;
    m_transSequenceNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::TransSequenceNumberHasBeenSet() const
{
    return m_transSequenceNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetPayChannel() const
{
    return m_payChannel;
}

void RefundMemberTransactionRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool RefundMemberTransactionRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

string RefundMemberTransactionRequest::GetOldOrderId() const
{
    return m_oldOrderId;
}

void RefundMemberTransactionRequest::SetOldOrderId(const string& _oldOrderId)
{
    m_oldOrderId = _oldOrderId;
    m_oldOrderIdHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OldOrderIdHasBeenSet() const
{
    return m_oldOrderIdHasBeenSet;
}

string RefundMemberTransactionRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RefundMemberTransactionRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RefundMemberTransactionRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string RefundMemberTransactionRequest::GetOrderId() const
{
    return m_orderId;
}

void RefundMemberTransactionRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string RefundMemberTransactionRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RefundMemberTransactionRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RefundMemberTransactionRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string RefundMemberTransactionRequest::GetOutTransNetMemberCode() const
{
    return m_outTransNetMemberCode;
}

void RefundMemberTransactionRequest::SetOutTransNetMemberCode(const string& _outTransNetMemberCode)
{
    m_outTransNetMemberCode = _outTransNetMemberCode;
    m_outTransNetMemberCodeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::OutTransNetMemberCodeHasBeenSet() const
{
    return m_outTransNetMemberCodeHasBeenSet;
}

string RefundMemberTransactionRequest::GetInTransNetMemberCode() const
{
    return m_inTransNetMemberCode;
}

void RefundMemberTransactionRequest::SetInTransNetMemberCode(const string& _inTransNetMemberCode)
{
    m_inTransNetMemberCode = _inTransNetMemberCode;
    m_inTransNetMemberCodeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::InTransNetMemberCodeHasBeenSet() const
{
    return m_inTransNetMemberCodeHasBeenSet;
}

string RefundMemberTransactionRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void RefundMemberTransactionRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool RefundMemberTransactionRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}

string RefundMemberTransactionRequest::GetPlatformShortNumber() const
{
    return m_platformShortNumber;
}

void RefundMemberTransactionRequest::SetPlatformShortNumber(const string& _platformShortNumber)
{
    m_platformShortNumber = _platformShortNumber;
    m_platformShortNumberHasBeenSet = true;
}

bool RefundMemberTransactionRequest::PlatformShortNumberHasBeenSet() const
{
    return m_platformShortNumberHasBeenSet;
}

string RefundMemberTransactionRequest::GetTransType() const
{
    return m_transType;
}

void RefundMemberTransactionRequest::SetTransType(const string& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}

string RefundMemberTransactionRequest::GetTransFee() const
{
    return m_transFee;
}

void RefundMemberTransactionRequest::SetTransFee(const string& _transFee)
{
    m_transFee = _transFee;
    m_transFeeHasBeenSet = true;
}

bool RefundMemberTransactionRequest::TransFeeHasBeenSet() const
{
    return m_transFeeHasBeenSet;
}


