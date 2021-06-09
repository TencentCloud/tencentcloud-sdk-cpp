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

#include <tencentcloud/cpdp/v20190820/model/DescribeOrderStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DescribeOrderStatusRequest::DescribeOrderStatusRequest() :
    m_requestTypeHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_platformShortNumberHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_transSequenceNumberHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_reservedMessageHasBeenSet(false),
    m_bankSubAccountNumberHasBeenSet(false),
    m_transDateHasBeenSet(false)
{
}

string DescribeOrderStatusRequest::ToJsonString() const
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

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_transSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
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

    if (m_bankSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_transDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOrderStatusRequest::GetRequestType() const
{
    return m_requestType;
}

void DescribeOrderStatusRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool DescribeOrderStatusRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string DescribeOrderStatusRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void DescribeOrderStatusRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool DescribeOrderStatusRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string DescribeOrderStatusRequest::GetPayChannel() const
{
    return m_payChannel;
}

void DescribeOrderStatusRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool DescribeOrderStatusRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

int64_t DescribeOrderStatusRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void DescribeOrderStatusRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool DescribeOrderStatusRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string DescribeOrderStatusRequest::GetOrderId() const
{
    return m_orderId;
}

void DescribeOrderStatusRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DescribeOrderStatusRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DescribeOrderStatusRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void DescribeOrderStatusRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool DescribeOrderStatusRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string DescribeOrderStatusRequest::GetPlatformShortNumber() const
{
    return m_platformShortNumber;
}

void DescribeOrderStatusRequest::SetPlatformShortNumber(const string& _platformShortNumber)
{
    m_platformShortNumber = _platformShortNumber;
    m_platformShortNumberHasBeenSet = true;
}

bool DescribeOrderStatusRequest::PlatformShortNumberHasBeenSet() const
{
    return m_platformShortNumberHasBeenSet;
}

string DescribeOrderStatusRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeOrderStatusRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeOrderStatusRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string DescribeOrderStatusRequest::GetTransSequenceNumber() const
{
    return m_transSequenceNumber;
}

void DescribeOrderStatusRequest::SetTransSequenceNumber(const string& _transSequenceNumber)
{
    m_transSequenceNumber = _transSequenceNumber;
    m_transSequenceNumberHasBeenSet = true;
}

bool DescribeOrderStatusRequest::TransSequenceNumberHasBeenSet() const
{
    return m_transSequenceNumberHasBeenSet;
}

string DescribeOrderStatusRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void DescribeOrderStatusRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool DescribeOrderStatusRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string DescribeOrderStatusRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void DescribeOrderStatusRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool DescribeOrderStatusRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string DescribeOrderStatusRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void DescribeOrderStatusRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool DescribeOrderStatusRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string DescribeOrderStatusRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void DescribeOrderStatusRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool DescribeOrderStatusRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string DescribeOrderStatusRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void DescribeOrderStatusRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool DescribeOrderStatusRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}

string DescribeOrderStatusRequest::GetBankSubAccountNumber() const
{
    return m_bankSubAccountNumber;
}

void DescribeOrderStatusRequest::SetBankSubAccountNumber(const string& _bankSubAccountNumber)
{
    m_bankSubAccountNumber = _bankSubAccountNumber;
    m_bankSubAccountNumberHasBeenSet = true;
}

bool DescribeOrderStatusRequest::BankSubAccountNumberHasBeenSet() const
{
    return m_bankSubAccountNumberHasBeenSet;
}

string DescribeOrderStatusRequest::GetTransDate() const
{
    return m_transDate;
}

void DescribeOrderStatusRequest::SetTransDate(const string& _transDate)
{
    m_transDate = _transDate;
    m_transDateHasBeenSet = true;
}

bool DescribeOrderStatusRequest::TransDateHasBeenSet() const
{
    return m_transDateHasBeenSet;
}


