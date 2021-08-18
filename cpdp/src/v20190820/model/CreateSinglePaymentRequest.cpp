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

#include <tencentcloud/cpdp/v20190820/model/CreateSinglePaymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateSinglePaymentRequest::CreateSinglePaymentRequest() :
    m_transferTypeHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_transferAmountHasBeenSet(false),
    m_anchorIdHasBeenSet(false),
    m_reqReservedHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

string CreateSinglePaymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
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

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateSinglePaymentRequest::GetTransferType() const
{
    return m_transferType;
}

void CreateSinglePaymentRequest::SetTransferType(const uint64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool CreateSinglePaymentRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string CreateSinglePaymentRequest::GetOrderId() const
{
    return m_orderId;
}

void CreateSinglePaymentRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateSinglePaymentRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

uint64_t CreateSinglePaymentRequest::GetTransferAmount() const
{
    return m_transferAmount;
}

void CreateSinglePaymentRequest::SetTransferAmount(const uint64_t& _transferAmount)
{
    m_transferAmount = _transferAmount;
    m_transferAmountHasBeenSet = true;
}

bool CreateSinglePaymentRequest::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

string CreateSinglePaymentRequest::GetAnchorId() const
{
    return m_anchorId;
}

void CreateSinglePaymentRequest::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool CreateSinglePaymentRequest::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string CreateSinglePaymentRequest::GetReqReserved() const
{
    return m_reqReserved;
}

void CreateSinglePaymentRequest::SetReqReserved(const string& _reqReserved)
{
    m_reqReserved = _reqReserved;
    m_reqReservedHasBeenSet = true;
}

bool CreateSinglePaymentRequest::ReqReservedHasBeenSet() const
{
    return m_reqReservedHasBeenSet;
}

string CreateSinglePaymentRequest::GetRemark() const
{
    return m_remark;
}

void CreateSinglePaymentRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateSinglePaymentRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateSinglePaymentRequest::GetAnchorName() const
{
    return m_anchorName;
}

void CreateSinglePaymentRequest::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool CreateSinglePaymentRequest::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string CreateSinglePaymentRequest::GetUid() const
{
    return m_uid;
}

void CreateSinglePaymentRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool CreateSinglePaymentRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string CreateSinglePaymentRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateSinglePaymentRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateSinglePaymentRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}


