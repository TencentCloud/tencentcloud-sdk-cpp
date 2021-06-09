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

#include <tencentcloud/cpdp/v20190820/model/ExecuteMemberTransactionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ExecuteMemberTransactionRequest::ExecuteMemberTransactionRequest() :
    m_requestTypeHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_outTransNetMemberCodeHasBeenSet(false),
    m_outSubAccountNameHasBeenSet(false),
    m_inSubAccountNameHasBeenSet(false),
    m_outSubAccountNumberHasBeenSet(false),
    m_inSubAccountNumberHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_currencyUnitHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_currencyAmountHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_transSequenceNumberHasBeenSet(false),
    m_inTransNetMemberCodeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_platformShortNumberHasBeenSet(false),
    m_transTypeHasBeenSet(false),
    m_transFeeHasBeenSet(false),
    m_reservedMessageHasBeenSet(false)
{
}

string ExecuteMemberTransactionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelSubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannelSubId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payChannelSubId, allocator);
    }

    if (m_outTransNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outTransNetMemberCode.c_str(), allocator).Move(), allocator);
    }

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

    if (m_outSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_transSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_inTransNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InTransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inTransNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
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

    if (m_reservedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMessage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExecuteMemberTransactionRequest::GetRequestType() const
{
    return m_requestType;
}

void ExecuteMemberTransactionRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void ExecuteMemberTransactionRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetPayChannel() const
{
    return m_payChannel;
}

void ExecuteMemberTransactionRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

int64_t ExecuteMemberTransactionRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void ExecuteMemberTransactionRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetOutTransNetMemberCode() const
{
    return m_outTransNetMemberCode;
}

void ExecuteMemberTransactionRequest::SetOutTransNetMemberCode(const string& _outTransNetMemberCode)
{
    m_outTransNetMemberCode = _outTransNetMemberCode;
    m_outTransNetMemberCodeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::OutTransNetMemberCodeHasBeenSet() const
{
    return m_outTransNetMemberCodeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetOutSubAccountName() const
{
    return m_outSubAccountName;
}

void ExecuteMemberTransactionRequest::SetOutSubAccountName(const string& _outSubAccountName)
{
    m_outSubAccountName = _outSubAccountName;
    m_outSubAccountNameHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::OutSubAccountNameHasBeenSet() const
{
    return m_outSubAccountNameHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetInSubAccountName() const
{
    return m_inSubAccountName;
}

void ExecuteMemberTransactionRequest::SetInSubAccountName(const string& _inSubAccountName)
{
    m_inSubAccountName = _inSubAccountName;
    m_inSubAccountNameHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::InSubAccountNameHasBeenSet() const
{
    return m_inSubAccountNameHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetOutSubAccountNumber() const
{
    return m_outSubAccountNumber;
}

void ExecuteMemberTransactionRequest::SetOutSubAccountNumber(const string& _outSubAccountNumber)
{
    m_outSubAccountNumber = _outSubAccountNumber;
    m_outSubAccountNumberHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::OutSubAccountNumberHasBeenSet() const
{
    return m_outSubAccountNumberHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetInSubAccountNumber() const
{
    return m_inSubAccountNumber;
}

void ExecuteMemberTransactionRequest::SetInSubAccountNumber(const string& _inSubAccountNumber)
{
    m_inSubAccountNumber = _inSubAccountNumber;
    m_inSubAccountNumberHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::InSubAccountNumberHasBeenSet() const
{
    return m_inSubAccountNumberHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void ExecuteMemberTransactionRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetCurrencyUnit() const
{
    return m_currencyUnit;
}

void ExecuteMemberTransactionRequest::SetCurrencyUnit(const string& _currencyUnit)
{
    m_currencyUnit = _currencyUnit;
    m_currencyUnitHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::CurrencyUnitHasBeenSet() const
{
    return m_currencyUnitHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void ExecuteMemberTransactionRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetCurrencyAmount() const
{
    return m_currencyAmount;
}

void ExecuteMemberTransactionRequest::SetCurrencyAmount(const string& _currencyAmount)
{
    m_currencyAmount = _currencyAmount;
    m_currencyAmountHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::CurrencyAmountHasBeenSet() const
{
    return m_currencyAmountHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetOrderId() const
{
    return m_orderId;
}

void ExecuteMemberTransactionRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void ExecuteMemberTransactionRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void ExecuteMemberTransactionRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void ExecuteMemberTransactionRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetTransSequenceNumber() const
{
    return m_transSequenceNumber;
}

void ExecuteMemberTransactionRequest::SetTransSequenceNumber(const string& _transSequenceNumber)
{
    m_transSequenceNumber = _transSequenceNumber;
    m_transSequenceNumberHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::TransSequenceNumberHasBeenSet() const
{
    return m_transSequenceNumberHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetInTransNetMemberCode() const
{
    return m_inTransNetMemberCode;
}

void ExecuteMemberTransactionRequest::SetInTransNetMemberCode(const string& _inTransNetMemberCode)
{
    m_inTransNetMemberCode = _inTransNetMemberCode;
    m_inTransNetMemberCodeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::InTransNetMemberCodeHasBeenSet() const
{
    return m_inTransNetMemberCodeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void ExecuteMemberTransactionRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetPlatformShortNumber() const
{
    return m_platformShortNumber;
}

void ExecuteMemberTransactionRequest::SetPlatformShortNumber(const string& _platformShortNumber)
{
    m_platformShortNumber = _platformShortNumber;
    m_platformShortNumberHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::PlatformShortNumberHasBeenSet() const
{
    return m_platformShortNumberHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetTransType() const
{
    return m_transType;
}

void ExecuteMemberTransactionRequest::SetTransType(const string& _transType)
{
    m_transType = _transType;
    m_transTypeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::TransTypeHasBeenSet() const
{
    return m_transTypeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetTransFee() const
{
    return m_transFee;
}

void ExecuteMemberTransactionRequest::SetTransFee(const string& _transFee)
{
    m_transFee = _transFee;
    m_transFeeHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::TransFeeHasBeenSet() const
{
    return m_transFeeHasBeenSet;
}

string ExecuteMemberTransactionRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void ExecuteMemberTransactionRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool ExecuteMemberTransactionRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}


