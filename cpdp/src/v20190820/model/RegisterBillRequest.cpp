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

#include <tencentcloud/cpdp/v20190820/model/RegisterBillRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RegisterBillRequest::RegisterBillRequest() :
    m_requestTypeHasBeenSet(false),
    m_merchantCodeHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_payChannelSubIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_bankAccountNoHasBeenSet(false),
    m_platformShortNoHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_transSeqNoHasBeenSet(false),
    m_tranFeeHasBeenSet(false),
    m_orderAmtHasBeenSet(false),
    m_bankSubAccountNoHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_tranTypeHasBeenSet(false),
    m_reservedMessageHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string RegisterBillRequest::ToJsonString() const
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

    if (m_bankAccountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_platformShortNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformShortNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformShortNo.c_str(), allocator).Move(), allocator);
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

    if (m_transSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSeqNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranFee.c_str(), allocator).Move(), allocator);
    }

    if (m_orderAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_bankSubAccountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSubAccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankSubAccountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tranTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranType.c_str(), allocator).Move(), allocator);
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

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterBillRequest::GetRequestType() const
{
    return m_requestType;
}

void RegisterBillRequest::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool RegisterBillRequest::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string RegisterBillRequest::GetMerchantCode() const
{
    return m_merchantCode;
}

void RegisterBillRequest::SetMerchantCode(const string& _merchantCode)
{
    m_merchantCode = _merchantCode;
    m_merchantCodeHasBeenSet = true;
}

bool RegisterBillRequest::MerchantCodeHasBeenSet() const
{
    return m_merchantCodeHasBeenSet;
}

string RegisterBillRequest::GetPayChannel() const
{
    return m_payChannel;
}

void RegisterBillRequest::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool RegisterBillRequest::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

int64_t RegisterBillRequest::GetPayChannelSubId() const
{
    return m_payChannelSubId;
}

void RegisterBillRequest::SetPayChannelSubId(const int64_t& _payChannelSubId)
{
    m_payChannelSubId = _payChannelSubId;
    m_payChannelSubIdHasBeenSet = true;
}

bool RegisterBillRequest::PayChannelSubIdHasBeenSet() const
{
    return m_payChannelSubIdHasBeenSet;
}

string RegisterBillRequest::GetOrderId() const
{
    return m_orderId;
}

void RegisterBillRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool RegisterBillRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string RegisterBillRequest::GetBankAccountNo() const
{
    return m_bankAccountNo;
}

void RegisterBillRequest::SetBankAccountNo(const string& _bankAccountNo)
{
    m_bankAccountNo = _bankAccountNo;
    m_bankAccountNoHasBeenSet = true;
}

bool RegisterBillRequest::BankAccountNoHasBeenSet() const
{
    return m_bankAccountNoHasBeenSet;
}

string RegisterBillRequest::GetPlatformShortNo() const
{
    return m_platformShortNo;
}

void RegisterBillRequest::SetPlatformShortNo(const string& _platformShortNo)
{
    m_platformShortNo = _platformShortNo;
    m_platformShortNoHasBeenSet = true;
}

bool RegisterBillRequest::PlatformShortNoHasBeenSet() const
{
    return m_platformShortNoHasBeenSet;
}

string RegisterBillRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void RegisterBillRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool RegisterBillRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string RegisterBillRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void RegisterBillRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool RegisterBillRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string RegisterBillRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void RegisterBillRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool RegisterBillRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string RegisterBillRequest::GetTransSeqNo() const
{
    return m_transSeqNo;
}

void RegisterBillRequest::SetTransSeqNo(const string& _transSeqNo)
{
    m_transSeqNo = _transSeqNo;
    m_transSeqNoHasBeenSet = true;
}

bool RegisterBillRequest::TransSeqNoHasBeenSet() const
{
    return m_transSeqNoHasBeenSet;
}

string RegisterBillRequest::GetTranFee() const
{
    return m_tranFee;
}

void RegisterBillRequest::SetTranFee(const string& _tranFee)
{
    m_tranFee = _tranFee;
    m_tranFeeHasBeenSet = true;
}

bool RegisterBillRequest::TranFeeHasBeenSet() const
{
    return m_tranFeeHasBeenSet;
}

string RegisterBillRequest::GetOrderAmt() const
{
    return m_orderAmt;
}

void RegisterBillRequest::SetOrderAmt(const string& _orderAmt)
{
    m_orderAmt = _orderAmt;
    m_orderAmtHasBeenSet = true;
}

bool RegisterBillRequest::OrderAmtHasBeenSet() const
{
    return m_orderAmtHasBeenSet;
}

string RegisterBillRequest::GetBankSubAccountNo() const
{
    return m_bankSubAccountNo;
}

void RegisterBillRequest::SetBankSubAccountNo(const string& _bankSubAccountNo)
{
    m_bankSubAccountNo = _bankSubAccountNo;
    m_bankSubAccountNoHasBeenSet = true;
}

bool RegisterBillRequest::BankSubAccountNoHasBeenSet() const
{
    return m_bankSubAccountNoHasBeenSet;
}

string RegisterBillRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void RegisterBillRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool RegisterBillRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string RegisterBillRequest::GetTranType() const
{
    return m_tranType;
}

void RegisterBillRequest::SetTranType(const string& _tranType)
{
    m_tranType = _tranType;
    m_tranTypeHasBeenSet = true;
}

bool RegisterBillRequest::TranTypeHasBeenSet() const
{
    return m_tranTypeHasBeenSet;
}

string RegisterBillRequest::GetReservedMessage() const
{
    return m_reservedMessage;
}

void RegisterBillRequest::SetReservedMessage(const string& _reservedMessage)
{
    m_reservedMessage = _reservedMessage;
    m_reservedMessageHasBeenSet = true;
}

bool RegisterBillRequest::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}

string RegisterBillRequest::GetRemark() const
{
    return m_remark;
}

void RegisterBillRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RegisterBillRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RegisterBillRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void RegisterBillRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool RegisterBillRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


