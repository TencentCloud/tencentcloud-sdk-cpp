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

#include <tencentcloud/cpdp/v20190820/model/TransferSinglePayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransferSinglePayRequest::TransferSinglePayRequest() :
    m_merchantIdHasBeenSet(false),
    m_merchantAppIdHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_transferAmountHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_payeeNameHasBeenSet(false),
    m_payeeExtendsHasBeenSet(false),
    m_reqReservedHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string TransferSinglePayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferType, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferAmount, allocator);
    }

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeExtendsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeExtends";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeExtends.c_str(), allocator).Move(), allocator);
    }

    if (m_reqReservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqReserved";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reqReserved.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
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


string TransferSinglePayRequest::GetMerchantId() const
{
    return m_merchantId;
}

void TransferSinglePayRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool TransferSinglePayRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string TransferSinglePayRequest::GetMerchantAppId() const
{
    return m_merchantAppId;
}

void TransferSinglePayRequest::SetMerchantAppId(const string& _merchantAppId)
{
    m_merchantAppId = _merchantAppId;
    m_merchantAppIdHasBeenSet = true;
}

bool TransferSinglePayRequest::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

int64_t TransferSinglePayRequest::GetTransferType() const
{
    return m_transferType;
}

void TransferSinglePayRequest::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool TransferSinglePayRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string TransferSinglePayRequest::GetOrderId() const
{
    return m_orderId;
}

void TransferSinglePayRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool TransferSinglePayRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t TransferSinglePayRequest::GetTransferAmount() const
{
    return m_transferAmount;
}

void TransferSinglePayRequest::SetTransferAmount(const int64_t& _transferAmount)
{
    m_transferAmount = _transferAmount;
    m_transferAmountHasBeenSet = true;
}

bool TransferSinglePayRequest::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

string TransferSinglePayRequest::GetPayeeId() const
{
    return m_payeeId;
}

void TransferSinglePayRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool TransferSinglePayRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string TransferSinglePayRequest::GetPayeeName() const
{
    return m_payeeName;
}

void TransferSinglePayRequest::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool TransferSinglePayRequest::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string TransferSinglePayRequest::GetPayeeExtends() const
{
    return m_payeeExtends;
}

void TransferSinglePayRequest::SetPayeeExtends(const string& _payeeExtends)
{
    m_payeeExtends = _payeeExtends;
    m_payeeExtendsHasBeenSet = true;
}

bool TransferSinglePayRequest::PayeeExtendsHasBeenSet() const
{
    return m_payeeExtendsHasBeenSet;
}

string TransferSinglePayRequest::GetReqReserved() const
{
    return m_reqReserved;
}

void TransferSinglePayRequest::SetReqReserved(const string& _reqReserved)
{
    m_reqReserved = _reqReserved;
    m_reqReservedHasBeenSet = true;
}

bool TransferSinglePayRequest::ReqReservedHasBeenSet() const
{
    return m_reqReservedHasBeenSet;
}

string TransferSinglePayRequest::GetRemark() const
{
    return m_remark;
}

void TransferSinglePayRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TransferSinglePayRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string TransferSinglePayRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void TransferSinglePayRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool TransferSinglePayRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string TransferSinglePayRequest::GetProfile() const
{
    return m_profile;
}

void TransferSinglePayRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool TransferSinglePayRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


