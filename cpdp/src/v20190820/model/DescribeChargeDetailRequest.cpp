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

#include <tencentcloud/cpdp/v20190820/model/DescribeChargeDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DescribeChargeDetailRequest::DescribeChargeDetailRequest() :
    m_requestTypeHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_acquiringChannelTypeHasBeenSet(false),
    m_platformShortNumberHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_transSequenceNumberHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_reservedMessageHasBeenSet(false)
{
}

string DescribeChargeDetailRequest::ToJsonString() const
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

    if (m_acquiringChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcquiringChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_acquiringChannelType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeChargeDetailRequest::GetRequestType() const
{
    return m_requestType;
}

void DescribeChargeDetailRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool DescribeChargeDetailRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string DescribeChargeDetailRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void DescribeChargeDetailRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool DescribeChargeDetailRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string DescribeChargeDetailRequest::GetPayChannel() const
{
    return m_payChannel;
}

void DescribeChargeDetailRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool DescribeChargeDetailRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

int64_t DescribeChargeDetailRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void DescribeChargeDetailRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool DescribeChargeDetailRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string DescribeChargeDetailRequest::GetOrderId() const
{
    return m_orderId;
}

void DescribeChargeDetailRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DescribeChargeDetailRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DescribeChargeDetailRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void DescribeChargeDetailRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool DescribeChargeDetailRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string DescribeChargeDetailRequest::GetAcquiringChannelType() const
{
    return m_acquiringChannelType;
}

void DescribeChargeDetailRequest::SetAcquiringChannelType(const string& _acquiringChannelType)
{
    m_acquiringChannelType = _acquiringChannelType;
    m_acquiringChannelTypeHasBeenSet = true;
}

bool DescribeChargeDetailRequest::AcquiringChannelTypeHasBeenSet() const
{
    return m_acquiringChannelTypeHasBeenSet;
}

string DescribeChargeDetailRequest::GetPlatformShortNumber() const
{
    return m_platformShortNumber;
}

void DescribeChargeDetailRequest::SetPlatformShortNumber(const string& _platformShortNumber)
{
    m_platformShortNumber = _platformShortNumber;
    m_platformShortNumberHasBeenSet = true;
}

bool DescribeChargeDetailRequest::PlatformShortNumberHasBeenSet() const
{
    return m_platformShortNumberHasBeenSet;
}

string DescribeChargeDetailRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void DescribeChargeDetailRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool DescribeChargeDetailRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string DescribeChargeDetailRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void DescribeChargeDetailRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool DescribeChargeDetailRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string DescribeChargeDetailRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void DescribeChargeDetailRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool DescribeChargeDetailRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string DescribeChargeDetailRequest::GetTransSequenceNumber() const
{
    return m_transSequenceNumber;
}

void DescribeChargeDetailRequest::SetTransSequenceNumber(const string& _transSequenceNumber)
{
    m_transSequenceNumber = _transSequenceNumber;
    m_transSequenceNumberHasBeenSet = true;
}

bool DescribeChargeDetailRequest::TransSequenceNumberHasBeenSet() const
{
    return m_transSequenceNumberHasBeenSet;
}

string DescribeChargeDetailRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void DescribeChargeDetailRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool DescribeChargeDetailRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string DescribeChargeDetailRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void DescribeChargeDetailRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool DescribeChargeDetailRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}


