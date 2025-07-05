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

#include <tencentcloud/cpdp/v20190820/model/RechargeByThirdPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RechargeByThirdPayRequest::RechargeByThirdPayRequest() :
    m_requestTypeHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_platformShortNumberHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_transSequenceNumberHasBeenSet(false),
    m_bankSubAccountNumberHasBeenSet(false),
    m_transFeeHasBeenSet(false),
    m_thirdPayChannelHasBeenSet(false),
    m_thirdPayChannelMerchantCodeHasBeenSet(false),
    m_thirdPayChannelOrderIdHasBeenSet(false),
    m_currencyAmountHasBeenSet(false),
    m_currencyUnitHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_transNetMemberCodeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_reservedMessageHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string RechargeByThirdPayRequest::ToJsonString() const
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

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_platformShortNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformShortNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformShortNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
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

    if (m_bankSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_transFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transFee.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdPayChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPayChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thirdPayChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdPayChannelMerchantCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPayChannelMerchantCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thirdPayChannelMerchantCode.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdPayChannelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPayChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_thirdPayChannelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currencyAmount.c_str(), allocator).Move(), allocator);
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

    if (m_transNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RechargeByThirdPayRequest::GetRequestType() const
{
    return m_requestType;
}

void RechargeByThirdPayRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string RechargeByThirdPayRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void RechargeByThirdPayRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string RechargeByThirdPayRequest::GetPayChannel() const
{
    return m_payChannel;
}

void RechargeByThirdPayRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool RechargeByThirdPayRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

int64_t RechargeByThirdPayRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void RechargeByThirdPayRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool RechargeByThirdPayRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string RechargeByThirdPayRequest::GetOrderId() const
{
    return m_orderId;
}

void RechargeByThirdPayRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool RechargeByThirdPayRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string RechargeByThirdPayRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void RechargeByThirdPayRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool RechargeByThirdPayRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string RechargeByThirdPayRequest::GetPlatformShortNumber() const
{
    return m_platformShortNumber;
}

void RechargeByThirdPayRequest::SetPlatformShortNumber(const string& _platformShortNumber)
{
    m_platformShortNumber = _platformShortNumber;
    m_platformShortNumberHasBeenSet = true;
}

bool RechargeByThirdPayRequest::PlatformShortNumberHasBeenSet() const
{
    return m_platformShortNumberHasBeenSet;
}

string RechargeByThirdPayRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void RechargeByThirdPayRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool RechargeByThirdPayRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string RechargeByThirdPayRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RechargeByThirdPayRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RechargeByThirdPayRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string RechargeByThirdPayRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void RechargeByThirdPayRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool RechargeByThirdPayRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string RechargeByThirdPayRequest::GetTransSequenceNumber() const
{
    return m_transSequenceNumber;
}

void RechargeByThirdPayRequest::SetTransSequenceNumber(const string& _transSequenceNumber)
{
    m_transSequenceNumber = _transSequenceNumber;
    m_transSequenceNumberHasBeenSet = true;
}

bool RechargeByThirdPayRequest::TransSequenceNumberHasBeenSet() const
{
    return m_transSequenceNumberHasBeenSet;
}

string RechargeByThirdPayRequest::GetBankSubAccountNumber() const
{
    return m_bankSubAccountNumber;
}

void RechargeByThirdPayRequest::SetBankSubAccountNumber(const string& _bankSubAccountNumber)
{
    m_bankSubAccountNumber = _bankSubAccountNumber;
    m_bankSubAccountNumberHasBeenSet = true;
}

bool RechargeByThirdPayRequest::BankSubAccountNumberHasBeenSet() const
{
    return m_bankSubAccountNumberHasBeenSet;
}

string RechargeByThirdPayRequest::GetTransFee() const
{
    return m_transFee;
}

void RechargeByThirdPayRequest::SetTransFee(const string& _transFee)
{
    m_transFee = _transFee;
    m_transFeeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::TransFeeHasBeenSet() const
{
    return m_transFeeHasBeenSet;
}

string RechargeByThirdPayRequest::GetThirdPayChannel() const
{
    return m_thirdPayChannel;
}

void RechargeByThirdPayRequest::SetThirdPayChannel(const string& _thirdPayChannel)
{
    m_thirdPayChannel = _thirdPayChannel;
    m_thirdPayChannelHasBeenSet = true;
}

bool RechargeByThirdPayRequest::ThirdPayChannelHasBeenSet() const
{
    return m_thirdPayChannelHasBeenSet;
}

string RechargeByThirdPayRequest::GetThirdPayChannelMerchantCode() const
{
    return m_thirdPayChannelMerchantCode;
}

void RechargeByThirdPayRequest::SetThirdPayChannelMerchantCode(const string& _thirdPayChannelMerchantCode)
{
    m_thirdPayChannelMerchantCode = _thirdPayChannelMerchantCode;
    m_thirdPayChannelMerchantCodeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::ThirdPayChannelMerchantCodeHasBeenSet() const
{
    return m_thirdPayChannelMerchantCodeHasBeenSet;
}

string RechargeByThirdPayRequest::GetThirdPayChannelOrderId() const
{
    return m_thirdPayChannelOrderId;
}

void RechargeByThirdPayRequest::SetThirdPayChannelOrderId(const string& _thirdPayChannelOrderId)
{
    m_thirdPayChannelOrderId = _thirdPayChannelOrderId;
    m_thirdPayChannelOrderIdHasBeenSet = true;
}

bool RechargeByThirdPayRequest::ThirdPayChannelOrderIdHasBeenSet() const
{
    return m_thirdPayChannelOrderIdHasBeenSet;
}

string RechargeByThirdPayRequest::GetCurrencyAmount() const
{
    return m_currencyAmount;
}

void RechargeByThirdPayRequest::SetCurrencyAmount(const string& _currencyAmount)
{
    m_currencyAmount = _currencyAmount;
    m_currencyAmountHasBeenSet = true;
}

bool RechargeByThirdPayRequest::CurrencyAmountHasBeenSet() const
{
    return m_currencyAmountHasBeenSet;
}

string RechargeByThirdPayRequest::GetCurrencyUnit() const
{
    return m_currencyUnit;
}

void RechargeByThirdPayRequest::SetCurrencyUnit(const string& _currencyUnit)
{
    m_currencyUnit = _currencyUnit;
    m_currencyUnitHasBeenSet = true;
}

bool RechargeByThirdPayRequest::CurrencyUnitHasBeenSet() const
{
    return m_currencyUnitHasBeenSet;
}

string RechargeByThirdPayRequest::GetCurrencyType() const
{
    return m_currencyType;
}

void RechargeByThirdPayRequest::SetCurrencyType(const string& _currencyType)
{
    m_currencyType = _currencyType;
    m_currencyTypeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string RechargeByThirdPayRequest::GetTransNetMemberCode() const
{
    return m_transNetMemberCode;
}

void RechargeByThirdPayRequest::SetTransNetMemberCode(const string& _transNetMemberCode)
{
    m_transNetMemberCode = _transNetMemberCode;
    m_transNetMemberCodeHasBeenSet = true;
}

bool RechargeByThirdPayRequest::TransNetMemberCodeHasBeenSet() const
{
    return m_transNetMemberCodeHasBeenSet;
}

string RechargeByThirdPayRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RechargeByThirdPayRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RechargeByThirdPayRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string RechargeByThirdPayRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void RechargeByThirdPayRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool RechargeByThirdPayRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}

string RechargeByThirdPayRequest::GetRemark() const
{
    return m_remark;
}

void RechargeByThirdPayRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RechargeByThirdPayRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


